//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-14 01:07:35
//Description: 
//=========================================


using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UnityEngine;

namespace Ext
{
	public static class AsyncOperationExt
	{
		public static TaskAwaiter GetAwaiter(this AsyncOperation asyncOp)
		{
			var tcs = new TaskCompletionSource<object>();
			asyncOp.completed += obj => { tcs.SetResult(null); };
			return ((Task) tcs.Task).GetAwaiter();
		}
	}
}