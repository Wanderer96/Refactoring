////Приложение А. Фрагменты кода, подлежащие рефакторингу.
1) ----------------------------------------------------------------------------------------------
private void set_mode(bool mod)
{
label1.Enabled= mod;
button1.Enabled= mod;
button2.Enabled= mod;
button3.Enabled= !mod;
button4.Enabled= !mod;
}
2) ----------------------------------------------------------------------------------------------
 switch (driver.Status)
      {
        case ClientStatus.Unknown:
        case ClientStatus.Free:
        case ClientStatus.Busy:
        case ClientStatus.InWay:
        case ClientStatus.Work:
        case ClientStatus.Break:
        case ClientStatus.Alarm:
            return m_driverStatusNames[driver.Status];
      }
3) ----------------------------------------------------------------------------------------------
if (int i.ToString().Length == 1)
{
 ...
}
4) ----------------------------------------------------------------------------------------------
string destination = null;
for (int i = 0; i < n; i++)
 destination += source[i];
5) ----------------------------------------------------------------------------------------------
Bool IsNumber () 
{
 return Type == TypeOfWord.Number;
}
6) ----------------------------------------------------------------------------------------------
void StreamWrite()
{
stream.Write(BitConverter.GetBytes(Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')).Length),0,  4);
stream.Write(Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')),0,  Encoding.UTF8.GetBytes(SubFolder.Replace('\\', '/') + dir.Name.Replace('\\', '/')).Length);
}
void foreach (DirectoryInfo dir in dirs.GetDirectories())
            {
                stream.Write(new byte[] { (byte)NetworkMessage.MakeDir }, 0, 1);
                stream.Read(new byte[1],0,  1);
                stream.Read(new byte[1], 0, 1);
            }
7) ----------------------------------------------------------------------------------------------
const int n = 7;
String [] days = new String [n];
for(int i = 0; i < n; i++)
{ 
 days[] = { "Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat" };
}
8) ----------------------------------------------------------------------------------------------
DateTime dt = DateTime.Now;
string h=dt.Hour.ToString().PadLeft(2,'0'); 
string m=dt.Minute.ToString().PadLeft(2,'0'); 
string s=dt.Second.ToString().PadLeft(2,'0');
Console.WriteLine("--"+h+":"+m+":"+s+"--");
9) ----------------------------------------------------------------------------------------------
 return (int)(Counter 2);
10) ----------------------------------------------------------------------------------------------
if (Connected == 0))
{
	rez = setup();
}
fl_end = true;
11) ----------------------------------------------------------------------------------------------
List<int> arr = new List<int>();
List<int> tmpArr = new List<int>();
const int n = 100;
for (int i = 0; i < arr.Count; i++)
{
	if (arr[i] <= n)
	{
		tmpArr.Add(arr[i]);
	}
}
arr = tmpArr;
12) ----------------------------------------------------------------------------------------------
var ids = form.Keys;
if (ids.Length != 1)
throw Exception;
13) ----------------------------------------------------------------------------------------------
string firstName = customer.Name();
string lastName = customer.SecondName()
14) ----------------------------------------------------------------------------------------------
foreach (int id = sourceIDs))
            {
                sourceId = Convert.ToInt32(id);
                break;
            }
15) ----------------------------------------------------------------------------------------------
public String generateEmail(String domain, int length) 
{
    return RandomStringUtils.random(length, "abcdefghijklmnopqrstuvwxyz") + "@" + domain;
}
16) ----------------------------------------------------------------------------------------------
foreach (string id in sourceIDs.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries))
            {
                sourceId = Convert.ToInt32(id);
                break;
            }
17) ----------------------------------------------------------------------------------------------
using System;
public class Example
{
   public static void Main()
   {
      String value = "This is a short string.";
      Char delimiter = 's';
      String[] substrings = value.Split(delimiter);
      foreach (var substring in substrings)
      Console.WriteLine(substring);
   }
18) ----------------------------------------------------------------------------------------------
private static char[] DelimiterArray = { ':' };
19) ----------------------------------------------------------------------------------------------
string admin = Config.GetSetting("AdminNotifications_EmailAddress")
string hostset = Globals.GetHostPortalSettings().HostSettings["SMTPPassword"]
string mailTo = if ((admin  == null) || (admen  <= 0))
                    { 
					   Globals.GetHostPortalSettings().HostSettings["SMTPPassword"].ToString()
					} else 
					   { 
						   admin;
					   }

20) ----------------------------------------------------------------------------------------------
static readonly string[] Dirs = new string[] { "SCLAD", "REAL", "DOSTAVKA" }; 
static readonly string[] Files = new string[] { "analit.dbf", "partner.dbf", "SCLAD\\mdoc.dbf" .. "DOSTAVKA\\zamena.dbf"};
public bool CheckPath(string path)
{
//Проверяем наличие нужных папок;
foreach (string s in Dirs)
if (!Directory.Exists(path + s)) return false;

//Проверяем наличие нужных файлов
foreach (string s in Files)
if (!File.Exists(path + s)) return false;

return true;
}
21) ----------------------------------------------------------------------------------------------
txtContacts.Text = "";
string.join(contact, contacts)
22) ----------------------------------------------------------------------------------------------
if (Game1.clou = !Game1.clou)
{
	....
}