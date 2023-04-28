//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-11-19 17:58:00
//Description: 
//=========================================

using System;
using System.Runtime.CompilerServices;
using UnityEngine.ResourceManagement.AsyncOperations;

public static class IAsyncOperationExtensions
{
	public static AsyncOperationAwaiter GetAwaiter(this AsyncOperationHandle operation)
	{
		return new AsyncOperationAwaiter(operation);
	}

	public static AsyncOperationAwaiter<T> GetAwaiter<T>(this AsyncOperationHandle<T> operation) where T : class
	{
		return new AsyncOperationAwaiter<T>(operation);
	}

	public readonly struct AsyncOperationAwaiter : INotifyCompletion
	{
		readonly AsyncOperationHandle _operation;

		public AsyncOperationAwaiter(AsyncOperationHandle operation)
		{
			_operation = operation;
		}

		public bool IsCompleted => _operation.Status != AsyncOperationStatus.None;

		public void OnCompleted(Action continuation) => _operation.Completed += (op) => continuation?.Invoke();

		public object GetResult() => _operation.Result;
	}

	public readonly struct AsyncOperationAwaiter<T> : INotifyCompletion where T : class
	{
		readonly AsyncOperationHandle<T> _operation;

		public AsyncOperationAwaiter(AsyncOperationHandle<T> operation)
		{
			_operation = operation;
		}

		public bool IsCompleted => _operation.Status != AsyncOperationStatus.None;

		public void OnCompleted(Action continuation) => _operation.Completed += (op) => continuation?.Invoke();

		public T GetResult() => _operation.Result;
	}
}