using PureMVC.Interfaces;

namespace MailingJoy.Core.Proxy
{
    public class PlayerInfo:IProxy
    {
        public void SendNotification(string notificationName, object body = null, string type = null)
        {
            
        }

        public string ProxyName { get; }
        public object Data { get; set; }

        
        public void OnRegister()
        {
            
        }

        public void OnRemove()
        {
            
        }
    }
}