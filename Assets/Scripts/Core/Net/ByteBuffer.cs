//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-27 23:29:17
//Description: 
//=========================================

using System;
using System.IO;
using System.Linq;
using System.Text;

namespace MailingJoy.Core.Net
{
	public class ByteBuffer
	{
		MemoryStream _stream = null;
		BinaryWriter _writer = null;
		BinaryReader _reader = null;

		public ByteBuffer()
		{
			_stream = new MemoryStream();
			_writer = new BinaryWriter(_stream);
		}

		public ByteBuffer(byte[] data)
		{
			if (data != null)
			{
				_stream = new MemoryStream(data);
				_reader = new BinaryReader(_stream);
			}
			else
			{
				_stream = new MemoryStream();
				_writer = new BinaryWriter(_stream);
			}
		}

		public void Close()
		{
			_writer?.Close();
			_reader?.Close();

			_stream.Close();
			_writer = null;
			_reader = null;
			_stream = null;
		}

		public void WriteByte(byte v)
		{
			_writer.Write(v);
		}

		public void WriteInt(int v)
		{
			_writer.Write((int) v);
		}

		public void WriteShort(ushort v)
		{
			_writer.Write((ushort) v);
		}

		public void WriteLong(long v)
		{
			_writer.Write((long) v);
		}

		public void WriteFloat(float v)
		{
			byte[] temp = BitConverter.GetBytes(v);
			Array.Reverse(temp);
			_writer.Write(BitConverter.ToSingle(temp, 0));
		}

		public void WriteDouble(double v)
		{
			byte[] temp = BitConverter.GetBytes(v);
			Array.Reverse(temp);
			_writer.Write(BitConverter.ToDouble(temp, 0));
		}

		public void WriteString(string v)
		{
			byte[] bytes = Encoding.UTF8.GetBytes(v);
			_writer.Write((ushort) bytes.Length);
			_writer.Write(bytes);
		}

		public void WriteBytes(byte[] v)
		{
			_writer.Write((int) v.Length);
			_writer.Write(v);
		}

		public byte ReadByte()
		{
			return _reader.ReadByte();
		}

		public int ReadInt()
		{
			var i = BitConverter.ToInt32(_reader.ReadBytes(4).Reverse().ToArray()); 
			return i;
		}

		public ushort ReadShort()
		{
			return (ushort) _reader.ReadInt16();
		}

		public long ReadLong()
		{
			return (long) _reader.ReadInt64();
		}

		public float ReadFloat()
		{
			byte[] temp = BitConverter.GetBytes(_reader.ReadSingle());
			Array.Reverse(temp);
			return BitConverter.ToSingle(temp, 0);
		}

		public double ReadDouble()
		{
			byte[] temp = BitConverter.GetBytes(_reader.ReadDouble());
			Array.Reverse(temp);
			return BitConverter.ToDouble(temp, 0);
		}

		public string ReadString()
		{
			ushort len = ReadShort();
			byte[] buffer = new byte[len];
			buffer = _reader.ReadBytes(len);
			return Encoding.UTF8.GetString(buffer);
		}

		public byte[] ReadBytes()
		{
			int len = ReadInt();
			return ReadNumBytes(len);
		}

		public byte[] ReadNumBytes(int num)
		{
			return _reader.ReadBytes(num);
		}

		public byte[] ToBytes()
		{
			_writer.Flush();
			return _stream.ToArray();
		}

		public void Flush()
		{
			_writer.Flush();
		}
	}
}