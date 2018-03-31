#pragma once
#include <string>
#define TransferStationSum 54
int LineandStation[16][38] = {
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28 },
	{ 29,30,31,32,33,34,35,36,37,38,39,13,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57 },
	{ 5,58,59,60,61,62,63,36,64,65,66,67,16,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83 },
	{ 7,61,62,63,36,64,65,66,67,16,68,84,85,86,87,88,43,89,90,91,92,93,94,95,96,97 },
	{ 1,98,99,100,101,102,103,104,105,106,107 },
	{ 108,109,110,111,112,113,114,115,116,90,117,43,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133 },
	{ 134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,66,149,150,38,10,151,96,152,153,154,155,156,114,157,158,159,46,160 },
	{ 161,162,163,164,165,166,108,167,168,155,169,93,170,171,172,13,173,174,175,70,176,177,178,179,180,181,182,183,184,185 },
	{ 186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,61,8,151,201,202,203,170,204,205,43,206 },
	{ 207,208,209,30,31,210,211,212,213,214,215,62,216,217,11,218,171,219,40,220,221,84,222,177,223,224,225,226,227,228,229 },
	{ 230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,65,250,37,216,8,251,252,253,254,108,255,256,257,258,259,260,261,262 },
	{ 263,264,265,266,267,268,269,6,59,252,152,95,201,11,39,15,173,220,270,271,86,272,273,274,275,276,277,126,278,279,280,281 },
	{ 282,283,284,285,286,287,64,250,288,149,289,15,290,39,291,218,203,292,293 },
	{ 46,294,259,295,296,297,298,299,300,301,302,303,304 }
};
const bool line[17][17] = {
	{ false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false },//0
	{ false,true,true,true,true,true,false,true,true,true,true,true,true,true,false,false,false },//line1
	{ false,true,true,true,true,false,true,true,true,true,true,true,true,true,false,false,true },//line2
	{ false,true,true,true,true,false,false,true,true,true,true,true,true,true,false,false,false },//line3
	{ false,true,true,true,true,false,true,true,true,true,true,true,true,true,false,false,false },//line4
	{ false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false },//line5
	{ false,false,true,false,true,false,true,true,true,true,false,true,true,false,false,false,false },//line6
	{ false,true,true,true,true,false,true,true,true,true,false,false,true,true,false,false,true },//line7
	{ false,true,true,true,true,false,true,true,true,true,true,true,true,false,false,false,false },//line8
	{ false,true,true,true,true,false,true,true,true,true,false,true,true,true,false,false,false },//line9
	{ false,true,true,true,true,false,false,false,true,false,true,true,true,true,false,false,false },//line10
	{ false,true,true,true,true,false,true,false,true,true,true,true,true,true,false,false,true },//line11
	{ false,true,true,true,true,false,true,true,true,true,true,true,true,true,false,false,false },//line12
	{ false,true,true,true,true,false,false,true,false,true,true,true,true,true,false,false,false },//line13
	{ false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false },//line14
	{ false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false },//line15
	{ false,false,true,false,false,false,false,true,false,false,false,true,false,false,false,false,true } };//line16
int StatChosed = 0, Begin = 0, End = 0;
//TransferStation中前面的数字代表站的序号，后面的数字代表经过该站的地铁线
const int TransferStation[TransferStationSum][2] ={
	5,301,
	7,401,
	63,403,
	67,403,
	68,403,
	1,501,
	90,604,
	10,701,
	38,702,
	96,704,
	114,706,
	70,803,
	93,804,
	155,807,
	151,907,
	170,908,
	30,1002,
	31,1002,
	40,1002,
	84,1004,
	171,1008,
	177,1008,
	37,1102,
	216,1110,
	6,1201,
	59,1203,
	86,1204,
	95,1204,
	126,1206,
	152,1207,
	173,1208,
	201,1209,
	220,1210,
	252,1211,
	149,1307,
	203,1309,
	218,1310,
	250,1311,
	259,1611,
	16,40301,
	36,40302,
	66,70403,
	13,80201,
	61,90403,
	62,100403,
	65,110403,
	108,110806,
	8,110901,
	11,121001,
	64,130403,
	15,131201,
	39,131202,
	46,160702,
	43,9060402
};
const int station[306] = {
	0,
	501,
	1,
	1,
	1,
	301,
	1201,
	401,
	110901,
	1,
	701,
	121001,
	1,
	80201,
	1,
	131201,
	40301,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1002,
	1002,
	2,
	2,
	2,
	2,
	40302,
	1102,
	702,
	131202,
	1002,
	2,
	2,
	9060402,
	2,
	2,
	160702,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	1203,
	3,
	90403,
	100403,
	403,
	130403,
	3,
	70403,
	403,
	403,
	3,
	803,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	1004,
	4,
	1204,
	4,
	4,
	4,
	604,
	4,
	4,
	804,
	4,
	1204,
	704,
	4,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	110806,
	6,
	6,
	6,
	6,
	6,
	706,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	1206,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	1307,
	7,
	907,
	1207,
	7,
	7,
	807,
	7,
	7,
	7,
	7,
	7,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	908,
	1008,
	8,
	1208,
	8,
	8,
	8,
	1008,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	9,
	1209,
	9,
	1309,
	9,
	9,
	9,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	1110,
	10,
	1310,
	10,
	1210,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	11,
	1311,
	11,
	1211,
	11,
	11,
	11,
	11,
	11,
	11,
	1611,
	11,
	11,
	11,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	12,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	13,
	16,
	16,
	16,
	16,
	16,
	16,
	16,
	16,
	16,
	16,
	16
};
namespace ShanghaiMetro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	private: System::Windows::Forms::Label^  label5;
	public:
		static	array<String^>^ stationName = gcnew array<String^>(306)
		{
			"",
				"莘庄站",
				"外环路站",
				"莲花路站",
				"锦江乐园站",
				"上海南站站",
				"漕宝路站",
				"上海体育馆站",
				"徐家汇站",
				"衡山路站",
				"常熟路站",
				"陕西南路站",
				"黄陂南路站",
				"人民广场站",
				"新闸路站",
				"汉中路站",
				"上海火车站",
				"中山北路站",
				"延长路站",
				"上海马戏城站",
				"汶水路站",
				"彭浦新村站",
				"共康路站",
				"通河新村站",
				"呼兰路站",
				"共富新村站",
				"宝安公路站",
				"友谊西路站",
				"富锦路站",
				"徐泾东站",
				"虹桥火车站",
				"虹桥2号航楼站",
				"淞虹路站",
				"北新泾站",
				"威宁路站",
				"娄山关路站",
				"中山公园站",
				"江苏路站",
				"静安寺站",
				"南京西路站",
				"南京东路站",
				"陆家嘴站",
				"东昌路站",
				"世纪大道站",
				"上海科技馆站",
				"世纪公园站",
				"龙阳路站",
				"张江高科站",
				"金科路站",
				"广兰路站",
				"唐镇站",
				"创新中路站",
				"华夏东路站",
				"川沙站",
				"凌空路站",
				"远东大道站",
				"海天三路站",
				"浦东国际机场站",
				"石龙路站",
				"龙漕路站",
				"漕溪路站",
				"宜山路站",
				"虹桥路站",
				"延安西路站",
				"金沙江路站",
				"曹杨路站",
				"镇坪路站",
				"中潭路站",
				"宝山路站",
				"东宝兴路站",
				"虹口足球场站",
				"赤峰路站",
				"大柏树站",
				"江湾镇站",
				"殷高西路站",
				"长江南路站",
				"淞发路站",
				"张华浜站",
				"淞滨路站",
				"水产路站",
				"宝杨路站",
				"友谊路站",
				"铁力路站",
				"江杨北路站",
				"海伦路站",
				"临平路站",
				"大连路站",
				"杨树浦路站",
				"浦东大道站",
				"浦电路站（4号线）",
				"蓝村路站",
				"塘桥站",
				"南浦大桥站",
				"西藏南路站",
				"鲁班路站",
				"大木桥路站",
				"东安路站",
				"上海体育场站",
				"春申路站",
				"银都路站",
				"颛桥站",
				"北桥站",
				"剑川路站",
				"东川路站",
				"金平路站",
				"华宁路站",
				"文井路站",
				"闵行开发区站",
				"东方体育中心站",
				"灵岩南路站",
				"上南路站",
				"华夏西路站",
				"高青路站",
				"东明路站",
				"高科西路站",
				"临沂新村站",
				"上海儿童医学中心站",
				"浦电路站（6号线）",
				"源深体育中心站",
				"民生路站",
				"北洋泾路站",
				"德平路站",
				"云山路站",
				"金桥路站",
				"博兴路站",
				"五莲路站",
				"巨峰路站",
				"东靖路站",
				"五洲大道站",
				"洲海路站",
				"外高桥保税区南站",
				"航津路站",
				"外高桥保税区北站",
				"港城路站",
				"美兰湖站",
				"罗南新村站",
				"潘广路站",
				"刘行站",
				"顾村公园站",
				"祁华路站",
				"上海大学站",
				"南陈路站",
				"上大路站",
				"场中路站",
				"大场镇站",
				"行知路站",
				"大华三路站",
				"新村路站",
				"岚皋路站",
				"长寿路站",
				"昌平路站",
				"肇嘉浜路站",
				"龙华中路站",
				"后滩站",
				"长清路站",
				"耀华路站",
				"云台路站",
				"杨高南路站",
				"锦绣路站",
				"芳华路站",
				"花木路站",
				"沈杜公路站",
				"联航路站",
				"江月路站",
				"浦江镇站",
				"芦恒路站",
				"凌兆新村站",
				"杨思站",
				"成山路站",
				"中华艺术宫站",
				"陆家浜路站",
				"老西门站",
				"大世界站",
				"曲阜路站",
				"中兴路站",
				"西藏北路站",
				"曲阳路站",
				"四平路站",
				"鞍山新村站",
				"江浦路站",
				"黄兴路站",
				"延吉中路站",
				"黄兴公园站",
				"翔殷路站",
				"嫩江路站",
				"市光路站",
				"松江南站站",
				"醉白池站",
				"松江体育中心站",
				"松江新城站",
				"松江大学城站",
				"洞泾站",
				"佘山站",
				"泗泾站",
				"九亭站",
				"中春路站",
				"七宝站",
				"星中路站",
				"合川路站",
				"漕河泾开发区站",
				"桂林路站",
				"嘉善路站",
				"打浦桥站",
				"马当路站",
				"小南门站",
				"商城路站",
				"杨高中路站",
				"航中路站",
				"紫藤路站",
				"龙柏新村站",
				"虹桥1号航楼站",
				"上海动物园站",
				"龙溪路站",
				"水城路站",
				"伊犁路站",
				"宋园路站",
				"交通大学站",
				"上海图书馆站",
				"新天地站",
				"豫园站",
				"天潼路站",
				"四川北路站",
				"邮电新村站",
				"同济大学站",
				"国权路站",
				"五角场站",
				"江湾体育场站",
				"三门路站",
				"殷高东路站",
				"新江湾城站",
				"花桥站",
				"光明路站",
				"兆丰路站",
				"安亭站",
				"上海汽车城站",
				"昌吉东路站",
				"上海赛车场站",
				"嘉定北站",
				"嘉定西站",
				"白银路站",
				"嘉定新城站",
				"马陆站",
				"南翔站",
				"桃浦新村站",
				"武威路站",
				"祁连山路站",
				"李子园站",
				"上海西站",
				"真如站",
				"枫桥路站",
				"隆德路站",
				"上海游泳馆站",
				"龙华站",
				"云锦路站",
				"龙耀路站",
				"三林站",
				"三林东站",
				"浦三路站",
				"御桥站",
				"罗山路站",
				"秀沿路站",
				"康新公路站",
				"迪士尼站",
				"七莘路站",
				"虹莘路站",
				"顾戴路站",
				"东兰路站",
				"虹梅路站",
				"虹漕路站",
				"桂林公园站",
				"国际客运中心站",
				"提篮桥站",
				"江浦公园站",
				"宁国路站",
				"隆昌路站",
				"爱国路站",
				"复兴岛站",
				"东陆路站",
				"杨高北路站",
				"金京路站",
				"申江路站",
				"金海路站",
				"金运路站",
				"金沙江西路站",
				"丰庄站",
				"祁连山南路站",
				"真北路站",
				"大渡河路站",
				"武宁路站",
				"江宁路站",
				"自然博物馆站",
				"淮海中路站",
				"世博会博物馆站",
				"世博大道站",
				"华夏中路站",
				"周浦东站",
				"鹤沙航城站",
				"航头东站",
				"新场站",
				"野生动物园站",
				"惠南站",
				"惠南东站",
				"书院站",
				"临港大道站",
				"滴水湖站"
		};

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::RadioButton^  radioButton21;
	private: System::Windows::Forms::RadioButton^  radioButton22;
	private: System::Windows::Forms::RadioButton^  radioButton23;
	private: System::Windows::Forms::RadioButton^  radioButton24;
	private: System::Windows::Forms::RadioButton^  radioButton25;
	private: System::Windows::Forms::RadioButton^  radioButton26;
	private: System::Windows::Forms::RadioButton^  radioButton27;
	private: System::Windows::Forms::RadioButton^  radioButton28;
	private: System::Windows::Forms::RadioButton^  radioButton29;
	private: System::Windows::Forms::RadioButton^  radioButton30;
	private: System::Windows::Forms::RadioButton^  radioButton31;
	private: System::Windows::Forms::RadioButton^  radioButton32;
	private: System::Windows::Forms::RadioButton^  radioButton33;
	private: System::Windows::Forms::RadioButton^  radioButton34;
	private: System::Windows::Forms::RadioButton^  radioButton35;
	private: System::Windows::Forms::RadioButton^  radioButton36;
	private: System::Windows::Forms::RadioButton^  radioButton37;
	private: System::Windows::Forms::RadioButton^  radioButton38;
	private: System::Windows::Forms::RadioButton^  radioButton39;
	private: System::Windows::Forms::RadioButton^  radioButton40;
	private: System::Windows::Forms::RadioButton^  radioButton41;
	private: System::Windows::Forms::RadioButton^  radioButton42;
	private: System::Windows::Forms::RadioButton^  radioButton43;
	private: System::Windows::Forms::RadioButton^  radioButton44;
	private: System::Windows::Forms::RadioButton^  radioButton45;
	private: System::Windows::Forms::RadioButton^  radioButton46;
	private: System::Windows::Forms::RadioButton^  radioButton47;
	private: System::Windows::Forms::RadioButton^  radioButton48;
	private: System::Windows::Forms::RadioButton^  radioButton49;
	private: System::Windows::Forms::RadioButton^  radioButton50;
	private: System::Windows::Forms::RadioButton^  radioButton51;
	private: System::Windows::Forms::RadioButton^  radioButton52;
	private: System::Windows::Forms::RadioButton^  radioButton53;
	private: System::Windows::Forms::RadioButton^  radioButton54;
	private: System::Windows::Forms::RadioButton^  radioButton55;
	private: System::Windows::Forms::RadioButton^  radioButton56;
	private: System::Windows::Forms::RadioButton^  radioButton57;
	private: System::Windows::Forms::RadioButton^  radioButton58;
	private: System::Windows::Forms::RadioButton^  radioButton59;
	private: System::Windows::Forms::RadioButton^  radioButton60;
	private: System::Windows::Forms::RadioButton^  radioButton61;
	private: System::Windows::Forms::RadioButton^  radioButton62;
	private: System::Windows::Forms::RadioButton^  radioButton63;
	private: System::Windows::Forms::RadioButton^  radioButton64;
	private: System::Windows::Forms::RadioButton^  radioButton65;
	private: System::Windows::Forms::RadioButton^  radioButton66;
	private: System::Windows::Forms::RadioButton^  radioButton67;
	private: System::Windows::Forms::RadioButton^  radioButton68;
	private: System::Windows::Forms::RadioButton^  radioButton69;
	private: System::Windows::Forms::RadioButton^  radioButton70;
	private: System::Windows::Forms::RadioButton^  radioButton71;
	private: System::Windows::Forms::RadioButton^  radioButton72;
	private: System::Windows::Forms::RadioButton^  radioButton73;
	private: System::Windows::Forms::RadioButton^  radioButton74;
	private: System::Windows::Forms::RadioButton^  radioButton75;
	private: System::Windows::Forms::RadioButton^  radioButton76;
	private: System::Windows::Forms::RadioButton^  radioButton77;
	private: System::Windows::Forms::RadioButton^  radioButton78;
	private: System::Windows::Forms::RadioButton^  radioButton79;
	private: System::Windows::Forms::RadioButton^  radioButton80;
	private: System::Windows::Forms::RadioButton^  radioButton81;
	private: System::Windows::Forms::RadioButton^  radioButton82;
	private: System::Windows::Forms::RadioButton^  radioButton83;
	private: System::Windows::Forms::RadioButton^  radioButton84;
	private: System::Windows::Forms::RadioButton^  radioButton85;
	private: System::Windows::Forms::RadioButton^  radioButton86;
	private: System::Windows::Forms::RadioButton^  radioButton87;
	private: System::Windows::Forms::RadioButton^  radioButton88;
	private: System::Windows::Forms::RadioButton^  radioButton89;
	private: System::Windows::Forms::RadioButton^  radioButton90;
	private: System::Windows::Forms::RadioButton^  radioButton91;
	private: System::Windows::Forms::RadioButton^  radioButton92;
	private: System::Windows::Forms::RadioButton^  radioButton93;
	private: System::Windows::Forms::RadioButton^  radioButton94;
	private: System::Windows::Forms::RadioButton^  radioButton95;
	private: System::Windows::Forms::RadioButton^  radioButton96;
	private: System::Windows::Forms::RadioButton^  radioButton97;
	private: System::Windows::Forms::RadioButton^  radioButton98;
	private: System::Windows::Forms::RadioButton^  radioButton99;
	private: System::Windows::Forms::RadioButton^  radioButton100;
	private: System::Windows::Forms::RadioButton^  radioButton101;
	private: System::Windows::Forms::RadioButton^  radioButton102;
	private: System::Windows::Forms::RadioButton^  radioButton103;
	private: System::Windows::Forms::RadioButton^  radioButton104;
	private: System::Windows::Forms::RadioButton^  radioButton105;
	private: System::Windows::Forms::RadioButton^  radioButton106;
	private: System::Windows::Forms::RadioButton^  radioButton107;
	private: System::Windows::Forms::RadioButton^  radioButton108;
	private: System::Windows::Forms::RadioButton^  radioButton109;
	private: System::Windows::Forms::RadioButton^  radioButton110;
	private: System::Windows::Forms::RadioButton^  radioButton111;
	private: System::Windows::Forms::RadioButton^  radioButton112;
	private: System::Windows::Forms::RadioButton^  radioButton113;
	private: System::Windows::Forms::RadioButton^  radioButton114;
	private: System::Windows::Forms::RadioButton^  radioButton115;
	private: System::Windows::Forms::RadioButton^  radioButton116;
	private: System::Windows::Forms::RadioButton^  radioButton117;
	private: System::Windows::Forms::RadioButton^  radioButton118;
	private: System::Windows::Forms::RadioButton^  radioButton119;
	private: System::Windows::Forms::RadioButton^  radioButton120;
	private: System::Windows::Forms::RadioButton^  radioButton121;
	private: System::Windows::Forms::RadioButton^  radioButton122;
	private: System::Windows::Forms::RadioButton^  radioButton123;
	private: System::Windows::Forms::RadioButton^  radioButton124;
	private: System::Windows::Forms::RadioButton^  radioButton125;
	private: System::Windows::Forms::RadioButton^  radioButton126;
	private: System::Windows::Forms::RadioButton^  radioButton127;
	private: System::Windows::Forms::RadioButton^  radioButton128;
	private: System::Windows::Forms::RadioButton^  radioButton129;
	private: System::Windows::Forms::RadioButton^  radioButton130;
	private: System::Windows::Forms::RadioButton^  radioButton131;
	private: System::Windows::Forms::RadioButton^  radioButton132;
	private: System::Windows::Forms::RadioButton^  radioButton133;
	private: System::Windows::Forms::RadioButton^  radioButton134;
	private: System::Windows::Forms::RadioButton^  radioButton135;
	private: System::Windows::Forms::RadioButton^  radioButton136;
	private: System::Windows::Forms::RadioButton^  radioButton137;
	private: System::Windows::Forms::RadioButton^  radioButton138;
	private: System::Windows::Forms::RadioButton^  radioButton139;
	private: System::Windows::Forms::RadioButton^  radioButton140;
	private: System::Windows::Forms::RadioButton^  radioButton141;
	private: System::Windows::Forms::RadioButton^  radioButton142;
	private: System::Windows::Forms::RadioButton^  radioButton143;
	private: System::Windows::Forms::RadioButton^  radioButton144;
	private: System::Windows::Forms::RadioButton^  radioButton145;
	private: System::Windows::Forms::RadioButton^  radioButton146;
	private: System::Windows::Forms::RadioButton^  radioButton147;
	private: System::Windows::Forms::RadioButton^  radioButton148;
	private: System::Windows::Forms::RadioButton^  radioButton149;
	private: System::Windows::Forms::RadioButton^  radioButton150;
	private: System::Windows::Forms::RadioButton^  radioButton151;
	private: System::Windows::Forms::RadioButton^  radioButton152;
	private: System::Windows::Forms::RadioButton^  radioButton153;
	private: System::Windows::Forms::RadioButton^  radioButton154;
	private: System::Windows::Forms::RadioButton^  radioButton155;
	private: System::Windows::Forms::RadioButton^  radioButton156;
	private: System::Windows::Forms::RadioButton^  radioButton157;
	private: System::Windows::Forms::RadioButton^  radioButton158;
	private: System::Windows::Forms::RadioButton^  radioButton159;
	private: System::Windows::Forms::RadioButton^  radioButton160;
	private: System::Windows::Forms::RadioButton^  radioButton161;
	private: System::Windows::Forms::RadioButton^  radioButton162;
	private: System::Windows::Forms::RadioButton^  radioButton163;
	private: System::Windows::Forms::RadioButton^  radioButton164;
	private: System::Windows::Forms::RadioButton^  radioButton165;
	private: System::Windows::Forms::RadioButton^  radioButton166;
	private: System::Windows::Forms::RadioButton^  radioButton167;
	private: System::Windows::Forms::RadioButton^  radioButton168;
	private: System::Windows::Forms::RadioButton^  radioButton169;
	private: System::Windows::Forms::RadioButton^  radioButton170;
	private: System::Windows::Forms::RadioButton^  radioButton171;
	private: System::Windows::Forms::RadioButton^  radioButton172;
	private: System::Windows::Forms::RadioButton^  radioButton173;
	private: System::Windows::Forms::RadioButton^  radioButton174;
	private: System::Windows::Forms::RadioButton^  radioButton175;
	private: System::Windows::Forms::RadioButton^  radioButton176;
	private: System::Windows::Forms::RadioButton^  radioButton177;
	private: System::Windows::Forms::RadioButton^  radioButton178;
	private: System::Windows::Forms::RadioButton^  radioButton179;
	private: System::Windows::Forms::RadioButton^  radioButton180;
	private: System::Windows::Forms::RadioButton^  radioButton181;
	private: System::Windows::Forms::RadioButton^  radioButton182;
	private: System::Windows::Forms::RadioButton^  radioButton183;
	private: System::Windows::Forms::RadioButton^  radioButton184;
	private: System::Windows::Forms::RadioButton^  radioButton185;
	private: System::Windows::Forms::RadioButton^  radioButton186;
	private: System::Windows::Forms::RadioButton^  radioButton187;
	private: System::Windows::Forms::RadioButton^  radioButton188;
	private: System::Windows::Forms::RadioButton^  radioButton189;
	private: System::Windows::Forms::RadioButton^  radioButton190;
	private: System::Windows::Forms::RadioButton^  radioButton191;
	private: System::Windows::Forms::RadioButton^  radioButton192;
	private: System::Windows::Forms::RadioButton^  radioButton193;
	private: System::Windows::Forms::RadioButton^  radioButton194;
	private: System::Windows::Forms::RadioButton^  radioButton195;
	private: System::Windows::Forms::RadioButton^  radioButton196;
	private: System::Windows::Forms::RadioButton^  radioButton197;
	private: System::Windows::Forms::RadioButton^  radioButton198;
	private: System::Windows::Forms::RadioButton^  radioButton199;
	private: System::Windows::Forms::RadioButton^  radioButton200;
	private: System::Windows::Forms::RadioButton^  radioButton201;
	private: System::Windows::Forms::RadioButton^  radioButton202;
	private: System::Windows::Forms::RadioButton^  radioButton203;
	private: System::Windows::Forms::RadioButton^  radioButton204;
	private: System::Windows::Forms::RadioButton^  radioButton205;
	private: System::Windows::Forms::RadioButton^  radioButton206;
	private: System::Windows::Forms::RadioButton^  radioButton207;
	private: System::Windows::Forms::RadioButton^  radioButton208;
	private: System::Windows::Forms::RadioButton^  radioButton209;
	private: System::Windows::Forms::RadioButton^  radioButton210;
	private: System::Windows::Forms::RadioButton^  radioButton211;
	private: System::Windows::Forms::RadioButton^  radioButton212;
	private: System::Windows::Forms::RadioButton^  radioButton213;
	private: System::Windows::Forms::RadioButton^  radioButton214;
	private: System::Windows::Forms::RadioButton^  radioButton215;
	private: System::Windows::Forms::RadioButton^  radioButton216;
	private: System::Windows::Forms::RadioButton^  radioButton217;
	private: System::Windows::Forms::RadioButton^  radioButton218;
	private: System::Windows::Forms::RadioButton^  radioButton219;
	private: System::Windows::Forms::RadioButton^  radioButton220;
	private: System::Windows::Forms::RadioButton^  radioButton221;
	private: System::Windows::Forms::RadioButton^  radioButton222;
	private: System::Windows::Forms::RadioButton^  radioButton223;
	private: System::Windows::Forms::RadioButton^  radioButton224;
	private: System::Windows::Forms::RadioButton^  radioButton225;
	private: System::Windows::Forms::RadioButton^  radioButton226;
	private: System::Windows::Forms::RadioButton^  radioButton227;
	private: System::Windows::Forms::RadioButton^  radioButton228;
	private: System::Windows::Forms::RadioButton^  radioButton229;
	private: System::Windows::Forms::RadioButton^  radioButton230;
	private: System::Windows::Forms::RadioButton^  radioButton231;
	private: System::Windows::Forms::RadioButton^  radioButton232;
	private: System::Windows::Forms::RadioButton^  radioButton233;
	private: System::Windows::Forms::RadioButton^  radioButton234;
	private: System::Windows::Forms::RadioButton^  radioButton235;
	private: System::Windows::Forms::RadioButton^  radioButton236;
	private: System::Windows::Forms::RadioButton^  radioButton237;
	private: System::Windows::Forms::RadioButton^  radioButton238;
	private: System::Windows::Forms::RadioButton^  radioButton239;
	private: System::Windows::Forms::RadioButton^  radioButton240;
	private: System::Windows::Forms::RadioButton^  radioButton241;
	private: System::Windows::Forms::RadioButton^  radioButton242;
	private: System::Windows::Forms::RadioButton^  radioButton243;
	private: System::Windows::Forms::RadioButton^  radioButton244;
	private: System::Windows::Forms::RadioButton^  radioButton245;
	private: System::Windows::Forms::RadioButton^  radioButton246;
	private: System::Windows::Forms::RadioButton^  radioButton247;
	private: System::Windows::Forms::RadioButton^  radioButton248;
	private: System::Windows::Forms::RadioButton^  radioButton249;
	private: System::Windows::Forms::RadioButton^  radioButton250;
	private: System::Windows::Forms::RadioButton^  radioButton251;
	private: System::Windows::Forms::RadioButton^  radioButton252;
	private: System::Windows::Forms::RadioButton^  radioButton253;
	private: System::Windows::Forms::RadioButton^  radioButton254;
	private: System::Windows::Forms::RadioButton^  radioButton255;
	private: System::Windows::Forms::RadioButton^  radioButton256;
	private: System::Windows::Forms::RadioButton^  radioButton257;
	private: System::Windows::Forms::RadioButton^  radioButton258;
	private: System::Windows::Forms::RadioButton^  radioButton259;
	private: System::Windows::Forms::RadioButton^  radioButton260;
	private: System::Windows::Forms::RadioButton^  radioButton261;
	private: System::Windows::Forms::RadioButton^  radioButton262;
	private: System::Windows::Forms::RadioButton^  radioButton263;
	private: System::Windows::Forms::RadioButton^  radioButton264;
	private: System::Windows::Forms::RadioButton^  radioButton265;
	private: System::Windows::Forms::RadioButton^  radioButton266;
	private: System::Windows::Forms::RadioButton^  radioButton267;
	private: System::Windows::Forms::RadioButton^  radioButton268;
	private: System::Windows::Forms::RadioButton^  radioButton269;
	private: System::Windows::Forms::RadioButton^  radioButton270;
	private: System::Windows::Forms::RadioButton^  radioButton271;
	private: System::Windows::Forms::RadioButton^  radioButton272;
	private: System::Windows::Forms::RadioButton^  radioButton273;
	private: System::Windows::Forms::RadioButton^  radioButton274;
	private: System::Windows::Forms::RadioButton^  radioButton275;
	private: System::Windows::Forms::RadioButton^  radioButton276;
	private: System::Windows::Forms::RadioButton^  radioButton277;
	private: System::Windows::Forms::RadioButton^  radioButton278;
	private: System::Windows::Forms::RadioButton^  radioButton279;
	private: System::Windows::Forms::RadioButton^  radioButton280;
	private: System::Windows::Forms::RadioButton^  radioButton281;
private: System::Windows::Forms::RadioButton^  radioButton282;
private: System::Windows::Forms::RadioButton^  radioButton283;
private: System::Windows::Forms::RadioButton^  radioButton284;
private: System::Windows::Forms::RadioButton^  radioButton285;
private: System::Windows::Forms::RadioButton^  radioButton286;
private: System::Windows::Forms::RadioButton^  radioButton287;
private: System::Windows::Forms::RadioButton^  radioButton288;
private: System::Windows::Forms::RadioButton^  radioButton289;
private: System::Windows::Forms::RadioButton^  radioButton290;
private: System::Windows::Forms::RadioButton^  radioButton291;
private: System::Windows::Forms::RadioButton^  radioButton292;
private: System::Windows::Forms::RadioButton^  radioButton293;
private: System::Windows::Forms::RadioButton^  radioButton294;
private: System::Windows::Forms::RadioButton^  radioButton295;
private: System::Windows::Forms::RadioButton^  radioButton296;
private: System::Windows::Forms::RadioButton^  radioButton297;
private: System::Windows::Forms::RadioButton^  radioButton298;
private: System::Windows::Forms::RadioButton^  radioButton299;
private: System::Windows::Forms::RadioButton^  radioButton300;
private: System::Windows::Forms::RadioButton^  radioButton301;
private: System::Windows::Forms::RadioButton^  radioButton302;
private: System::Windows::Forms::RadioButton^  radioButton303;
private: System::Windows::Forms::RadioButton^  radioButton304;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton41 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton42 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton43 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton44 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton45 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton46 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton47 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton48 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton49 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton50 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton51 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton52 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton53 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton54 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton55 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton56 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton57 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton58 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton59 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton60 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton61 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton62 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton63 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton64 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton65 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton66 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton67 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton68 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton69 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton70 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton71 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton72 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton73 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton74 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton75 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton76 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton77 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton78 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton79 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton80 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton81 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton82 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton83 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton84 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton85 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton86 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton87 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton88 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton89 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton90 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton91 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton92 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton93 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton94 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton95 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton96 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton97 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton98 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton99 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton100 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton101 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton102 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton103 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton104 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton105 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton106 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton107 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton108 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton109 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton110 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton111 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton112 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton113 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton114 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton115 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton116 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton117 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton118 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton119 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton120 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton121 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton122 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton123 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton124 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton125 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton126 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton127 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton128 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton129 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton130 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton131 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton132 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton133 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton134 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton135 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton136 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton137 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton138 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton139 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton140 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton141 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton142 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton143 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton144 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton145 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton146 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton147 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton148 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton149 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton150 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton151 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton152 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton153 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton154 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton155 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton156 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton157 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton158 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton159 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton160 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton161 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton162 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton163 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton164 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton165 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton166 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton167 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton168 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton169 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton170 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton171 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton172 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton173 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton174 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton175 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton176 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton177 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton178 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton179 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton180 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton181 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton182 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton183 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton184 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton185 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton186 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton187 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton188 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton189 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton190 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton191 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton192 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton193 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton194 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton195 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton196 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton197 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton198 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton199 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton200 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton201 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton202 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton203 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton204 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton205 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton206 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton207 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton208 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton209 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton210 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton211 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton212 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton213 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton214 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton215 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton216 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton217 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton218 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton219 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton220 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton221 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton222 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton223 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton224 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton225 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton226 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton227 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton228 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton229 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton230 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton231 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton232 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton233 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton234 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton235 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton236 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton237 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton238 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton239 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton240 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton241 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton242 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton243 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton244 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton245 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton246 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton247 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton248 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton249 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton250 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton251 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton252 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton253 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton254 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton255 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton256 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton257 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton258 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton259 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton260 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton261 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton262 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton263 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton264 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton265 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton266 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton267 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton268 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton269 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton270 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton271 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton272 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton273 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton274 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton275 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton276 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton277 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton278 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton279 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton280 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton281 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton282 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton283 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton284 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton285 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton286 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton287 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton288 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton289 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton290 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton291 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton292 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton293 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton294 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton295 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton296 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton297 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton298 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton299 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton300 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton301 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton302 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton303 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton304 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1008, 1012);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton1->Location = System::Drawing::Point(225, 768);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton2->Location = System::Drawing::Point(237, 757);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton3->Location = System::Drawing::Point(251, 745);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton4->Location = System::Drawing::Point(265, 731);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton5->Location = System::Drawing::Point(287, 716);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton6->Location = System::Drawing::Point(302, 694);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(14, 13);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->UseVisualStyleBackColor = false;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton7->Location = System::Drawing::Point(320, 629);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(14, 13);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->UseVisualStyleBackColor = false;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton8->Location = System::Drawing::Point(356, 593);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(14, 13);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->UseVisualStyleBackColor = false;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton9->Location = System::Drawing::Point(387, 566);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(14, 13);
			this->radioButton9->TabIndex = 9;
			this->radioButton9->UseVisualStyleBackColor = false;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton10->Location = System::Drawing::Point(409, 545);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(14, 13);
			this->radioButton10->TabIndex = 10;
			this->radioButton10->UseVisualStyleBackColor = false;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton11->Location = System::Drawing::Point(473, 550);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(14, 13);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->UseVisualStyleBackColor = false;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton12->Location = System::Drawing::Point(528, 526);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(14, 13);
			this->radioButton12->TabIndex = 12;
			this->radioButton12->UseVisualStyleBackColor = false;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton13->Location = System::Drawing::Point(536, 510);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(14, 13);
			this->radioButton13->TabIndex = 13;
			this->radioButton13->UseVisualStyleBackColor = false;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton13_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton14->Location = System::Drawing::Point(500, 460);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(14, 13);
			this->radioButton14->TabIndex = 14;
			this->radioButton14->UseVisualStyleBackColor = false;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton14_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton15->Location = System::Drawing::Point(478, 440);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(14, 13);
			this->radioButton15->TabIndex = 15;
			this->radioButton15->UseVisualStyleBackColor = false;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton15_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton16->Location = System::Drawing::Point(497, 402);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(14, 13);
			this->radioButton16->TabIndex = 16;
			this->radioButton16->UseVisualStyleBackColor = false;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton16_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton17->Location = System::Drawing::Point(505, 342);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(14, 13);
			this->radioButton17->TabIndex = 17;
			this->radioButton17->UseVisualStyleBackColor = false;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton17_CheckedChanged);
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton18->Location = System::Drawing::Point(505, 321);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(14, 13);
			this->radioButton18->TabIndex = 18;
			this->radioButton18->UseVisualStyleBackColor = false;
			this->radioButton18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton18_CheckedChanged);
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton19->Location = System::Drawing::Point(505, 299);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(14, 13);
			this->radioButton19->TabIndex = 19;
			this->radioButton19->UseVisualStyleBackColor = false;
			this->radioButton19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton19_CheckedChanged);
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton20->Location = System::Drawing::Point(505, 278);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(14, 13);
			this->radioButton20->TabIndex = 20;
			this->radioButton20->UseVisualStyleBackColor = false;
			this->radioButton20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton20_CheckedChanged);
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton21->Location = System::Drawing::Point(505, 256);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(14, 13);
			this->radioButton21->TabIndex = 21;
			this->radioButton21->UseVisualStyleBackColor = false;
			this->radioButton21->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton21_CheckedChanged);
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton22->Location = System::Drawing::Point(505, 235);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(14, 13);
			this->radioButton22->TabIndex = 22;
			this->radioButton22->UseVisualStyleBackColor = false;
			this->radioButton22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton22_CheckedChanged);
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton23->Location = System::Drawing::Point(505, 214);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(14, 13);
			this->radioButton23->TabIndex = 23;
			this->radioButton23->UseVisualStyleBackColor = false;
			this->radioButton23->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton23_CheckedChanged);
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton24->Location = System::Drawing::Point(505, 192);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(14, 13);
			this->radioButton24->TabIndex = 24;
			this->radioButton24->UseVisualStyleBackColor = false;
			this->radioButton24->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton24_CheckedChanged);
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton25->Location = System::Drawing::Point(505, 171);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(14, 13);
			this->radioButton25->TabIndex = 25;
			this->radioButton25->UseVisualStyleBackColor = false;
			this->radioButton25->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton25_CheckedChanged);
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton26->Location = System::Drawing::Point(505, 149);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(14, 13);
			this->radioButton26->TabIndex = 26;
			this->radioButton26->UseVisualStyleBackColor = false;
			this->radioButton26->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton26_CheckedChanged);
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton27->Location = System::Drawing::Point(505, 128);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(14, 13);
			this->radioButton27->TabIndex = 27;
			this->radioButton27->UseVisualStyleBackColor = false;
			this->radioButton27->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton27_CheckedChanged);
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton28->Location = System::Drawing::Point(505, 107);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(14, 13);
			this->radioButton28->TabIndex = 28;
			this->radioButton28->UseVisualStyleBackColor = false;
			this->radioButton28->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton28_CheckedChanged);
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton29->Location = System::Drawing::Point(72, 473);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(14, 13);
			this->radioButton29->TabIndex = 29;
			this->radioButton29->UseVisualStyleBackColor = false;
			this->radioButton29->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton29_CheckedChanged);
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton30->Location = System::Drawing::Point(102, 472);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(14, 13);
			this->radioButton30->TabIndex = 30;
			this->radioButton30->UseVisualStyleBackColor = false;
			this->radioButton30->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton30_CheckedChanged);
			// 
			// radioButton31
			// 
			this->radioButton31->AutoSize = true;
			this->radioButton31->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton31->Location = System::Drawing::Point(136, 471);
			this->radioButton31->Name = L"radioButton31";
			this->radioButton31->Size = System::Drawing::Size(14, 13);
			this->radioButton31->TabIndex = 31;
			this->radioButton31->UseVisualStyleBackColor = false;
			this->radioButton31->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton31_CheckedChanged);
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton32->Location = System::Drawing::Point(172, 473);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(14, 13);
			this->radioButton32->TabIndex = 32;
			this->radioButton32->UseVisualStyleBackColor = false;
			this->radioButton32->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton32_CheckedChanged);
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton33->Location = System::Drawing::Point(199, 473);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(14, 13);
			this->radioButton33->TabIndex = 33;
			this->radioButton33->UseVisualStyleBackColor = false;
			this->radioButton33->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton33_CheckedChanged);
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton34->Location = System::Drawing::Point(225, 473);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(14, 13);
			this->radioButton34->TabIndex = 34;
			this->radioButton34->UseVisualStyleBackColor = false;
			this->radioButton34->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton34_CheckedChanged);
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton35->Location = System::Drawing::Point(251, 473);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(14, 13);
			this->radioButton35->TabIndex = 35;
			this->radioButton35->UseVisualStyleBackColor = false;
			this->radioButton35->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton35_CheckedChanged);
			// 
			// radioButton36
			// 
			this->radioButton36->AutoSize = true;
			this->radioButton36->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton36->Location = System::Drawing::Point(290, 473);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(14, 13);
			this->radioButton36->TabIndex = 36;
			this->radioButton36->UseVisualStyleBackColor = false;
			this->radioButton36->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton36_CheckedChanged);
			// 
			// radioButton37
			// 
			this->radioButton37->AutoSize = true;
			this->radioButton37->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton37->Location = System::Drawing::Point(366, 488);
			this->radioButton37->Name = L"radioButton37";
			this->radioButton37->Size = System::Drawing::Size(14, 13);
			this->radioButton37->TabIndex = 37;
			this->radioButton37->UseVisualStyleBackColor = false;
			this->radioButton37->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton37_CheckedChanged);
			// 
			// radioButton38
			// 
			this->radioButton38->AutoSize = true;
			this->radioButton38->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton38->Location = System::Drawing::Point(411, 510);
			this->radioButton38->Name = L"radioButton38";
			this->radioButton38->Size = System::Drawing::Size(14, 13);
			this->radioButton38->TabIndex = 38;
			this->radioButton38->UseVisualStyleBackColor = false;
			this->radioButton38->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton38_CheckedChanged);
			// 
			// radioButton39
			// 
			this->radioButton39->AutoSize = true;
			this->radioButton39->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton39->Location = System::Drawing::Point(473, 514);
			this->radioButton39->Name = L"radioButton39";
			this->radioButton39->Size = System::Drawing::Size(14, 13);
			this->radioButton39->TabIndex = 39;
			this->radioButton39->UseVisualStyleBackColor = false;
			this->radioButton39->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton39_CheckedChanged);
			// 
			// radioButton40
			// 
			this->radioButton40->AutoSize = true;
			this->radioButton40->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton40->Location = System::Drawing::Point(571, 510);
			this->radioButton40->Name = L"radioButton40";
			this->radioButton40->Size = System::Drawing::Size(14, 13);
			this->radioButton40->TabIndex = 40;
			this->radioButton40->UseVisualStyleBackColor = false;
			this->radioButton40->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton40_CheckedChanged);
			// 
			// radioButton41
			// 
			this->radioButton41->AutoSize = true;
			this->radioButton41->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton41->Location = System::Drawing::Point(627, 510);
			this->radioButton41->Name = L"radioButton41";
			this->radioButton41->Size = System::Drawing::Size(14, 13);
			this->radioButton41->TabIndex = 41;
			this->radioButton41->UseVisualStyleBackColor = false;
			this->radioButton41->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton41_CheckedChanged);
			// 
			// radioButton42
			// 
			this->radioButton42->AutoSize = true;
			this->radioButton42->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton42->Location = System::Drawing::Point(664, 535);
			this->radioButton42->Name = L"radioButton42";
			this->radioButton42->Size = System::Drawing::Size(14, 13);
			this->radioButton42->TabIndex = 42;
			this->radioButton42->UseVisualStyleBackColor = false;
			this->radioButton42->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton42_CheckedChanged);
			// 
			// radioButton43
			// 
			this->radioButton43->AutoSize = true;
			this->radioButton43->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton43->Location = System::Drawing::Point(691, 564);
			this->radioButton43->Name = L"radioButton43";
			this->radioButton43->Size = System::Drawing::Size(14, 13);
			this->radioButton43->TabIndex = 43;
			this->radioButton43->UseVisualStyleBackColor = false;
			this->radioButton43->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton43_CheckedChanged);
			// 
			// radioButton44
			// 
			this->radioButton44->AutoSize = true;
			this->radioButton44->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton44->Location = System::Drawing::Point(738, 615);
			this->radioButton44->Name = L"radioButton44";
			this->radioButton44->Size = System::Drawing::Size(14, 13);
			this->radioButton44->TabIndex = 44;
			this->radioButton44->UseVisualStyleBackColor = false;
			this->radioButton44->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton44_CheckedChanged);
			// 
			// radioButton45
			// 
			this->radioButton45->AutoSize = true;
			this->radioButton45->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton45->Location = System::Drawing::Point(738, 631);
			this->radioButton45->Name = L"radioButton45";
			this->radioButton45->Size = System::Drawing::Size(14, 13);
			this->radioButton45->TabIndex = 45;
			this->radioButton45->UseVisualStyleBackColor = false;
			this->radioButton45->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton45_CheckedChanged);
			// 
			// radioButton46
			// 
			this->radioButton46->AutoSize = true;
			this->radioButton46->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton46->Location = System::Drawing::Point(741, 694);
			this->radioButton46->Name = L"radioButton46";
			this->radioButton46->Size = System::Drawing::Size(14, 13);
			this->radioButton46->TabIndex = 46;
			this->radioButton46->UseVisualStyleBackColor = false;
			this->radioButton46->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton46_CheckedChanged);
			// 
			// radioButton47
			// 
			this->radioButton47->AutoSize = true;
			this->radioButton47->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton47->Location = System::Drawing::Point(789, 700);
			this->radioButton47->Name = L"radioButton47";
			this->radioButton47->Size = System::Drawing::Size(14, 13);
			this->radioButton47->TabIndex = 47;
			this->radioButton47->UseVisualStyleBackColor = false;
			this->radioButton47->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton47_CheckedChanged);
			// 
			// radioButton48
			// 
			this->radioButton48->AutoSize = true;
			this->radioButton48->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton48->Location = System::Drawing::Point(809, 700);
			this->radioButton48->Name = L"radioButton48";
			this->radioButton48->Size = System::Drawing::Size(14, 13);
			this->radioButton48->TabIndex = 48;
			this->radioButton48->UseVisualStyleBackColor = false;
			this->radioButton48->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton48_CheckedChanged);
			// 
			// radioButton49
			// 
			this->radioButton49->AutoSize = true;
			this->radioButton49->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton49->Location = System::Drawing::Point(829, 700);
			this->radioButton49->Name = L"radioButton49";
			this->radioButton49->Size = System::Drawing::Size(14, 13);
			this->radioButton49->TabIndex = 49;
			this->radioButton49->UseVisualStyleBackColor = false;
			this->radioButton49->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton49_CheckedChanged);
			// 
			// radioButton50
			// 
			this->radioButton50->AutoSize = true;
			this->radioButton50->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton50->Location = System::Drawing::Point(849, 700);
			this->radioButton50->Name = L"radioButton50";
			this->radioButton50->Size = System::Drawing::Size(14, 13);
			this->radioButton50->TabIndex = 50;
			this->radioButton50->UseVisualStyleBackColor = false;
			this->radioButton50->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton50_CheckedChanged);
			// 
			// radioButton51
			// 
			this->radioButton51->AutoSize = true;
			this->radioButton51->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton51->Location = System::Drawing::Point(869, 700);
			this->radioButton51->Name = L"radioButton51";
			this->radioButton51->Size = System::Drawing::Size(14, 13);
			this->radioButton51->TabIndex = 51;
			this->radioButton51->UseVisualStyleBackColor = false;
			this->radioButton51->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton51_CheckedChanged);
			// 
			// radioButton52
			// 
			this->radioButton52->AutoSize = true;
			this->radioButton52->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton52->Location = System::Drawing::Point(891, 700);
			this->radioButton52->Name = L"radioButton52";
			this->radioButton52->Size = System::Drawing::Size(14, 13);
			this->radioButton52->TabIndex = 52;
			this->radioButton52->UseVisualStyleBackColor = false;
			this->radioButton52->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton52_CheckedChanged);
			// 
			// radioButton53
			// 
			this->radioButton53->AutoSize = true;
			this->radioButton53->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton53->Location = System::Drawing::Point(914, 700);
			this->radioButton53->Name = L"radioButton53";
			this->radioButton53->Size = System::Drawing::Size(14, 13);
			this->radioButton53->TabIndex = 53;
			this->radioButton53->UseVisualStyleBackColor = false;
			this->radioButton53->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton53_CheckedChanged);
			// 
			// radioButton54
			// 
			this->radioButton54->AutoSize = true;
			this->radioButton54->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton54->Location = System::Drawing::Point(914, 719);
			this->radioButton54->Name = L"radioButton54";
			this->radioButton54->Size = System::Drawing::Size(14, 13);
			this->radioButton54->TabIndex = 54;
			this->radioButton54->UseVisualStyleBackColor = false;
			this->radioButton54->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton54_CheckedChanged);
			// 
			// radioButton55
			// 
			this->radioButton55->AutoSize = true;
			this->radioButton55->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton55->Location = System::Drawing::Point(914, 738);
			this->radioButton55->Name = L"radioButton55";
			this->radioButton55->Size = System::Drawing::Size(14, 13);
			this->radioButton55->TabIndex = 55;
			this->radioButton55->UseVisualStyleBackColor = false;
			this->radioButton55->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton55_CheckedChanged);
			// 
			// radioButton56
			// 
			this->radioButton56->AutoSize = true;
			this->radioButton56->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton56->Location = System::Drawing::Point(914, 757);
			this->radioButton56->Name = L"radioButton56";
			this->radioButton56->Size = System::Drawing::Size(14, 13);
			this->radioButton56->TabIndex = 56;
			this->radioButton56->UseVisualStyleBackColor = false;
			this->radioButton56->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton56_CheckedChanged);
			// 
			// radioButton57
			// 
			this->radioButton57->AutoSize = true;
			this->radioButton57->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton57->Location = System::Drawing::Point(914, 776);
			this->radioButton57->Name = L"radioButton57";
			this->radioButton57->Size = System::Drawing::Size(14, 13);
			this->radioButton57->TabIndex = 57;
			this->radioButton57->UseVisualStyleBackColor = false;
			this->radioButton57->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton57_CheckedChanged);
			// 
			// radioButton58
			// 
			this->radioButton58->AutoSize = true;
			this->radioButton58->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton58->Location = System::Drawing::Point(312, 716);
			this->radioButton58->Name = L"radioButton58";
			this->radioButton58->Size = System::Drawing::Size(14, 13);
			this->radioButton58->TabIndex = 58;
			this->radioButton58->UseVisualStyleBackColor = false;
			this->radioButton58->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton58_CheckedChanged);
			// 
			// radioButton59
			// 
			this->radioButton59->AutoSize = true;
			this->radioButton59->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton59->Location = System::Drawing::Point(332, 694);
			this->radioButton59->Name = L"radioButton59";
			this->radioButton59->Size = System::Drawing::Size(14, 13);
			this->radioButton59->TabIndex = 59;
			this->radioButton59->UseVisualStyleBackColor = false;
			this->radioButton59->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton59_CheckedChanged);
			// 
			// radioButton60
			// 
			this->radioButton60->AutoSize = true;
			this->radioButton60->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton60->Location = System::Drawing::Point(320, 670);
			this->radioButton60->Name = L"radioButton60";
			this->radioButton60->Size = System::Drawing::Size(14, 13);
			this->radioButton60->TabIndex = 60;
			this->radioButton60->UseVisualStyleBackColor = false;
			this->radioButton60->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton60_CheckedChanged);
			// 
			// radioButton61
			// 
			this->radioButton61->AutoSize = true;
			this->radioButton61->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton61->Location = System::Drawing::Point(304, 613);
			this->radioButton61->Name = L"radioButton61";
			this->radioButton61->Size = System::Drawing::Size(14, 13);
			this->radioButton61->TabIndex = 61;
			this->radioButton61->UseVisualStyleBackColor = false;
			this->radioButton61->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton61_CheckedChanged);
			// 
			// radioButton62
			// 
			this->radioButton62->AutoSize = true;
			this->radioButton62->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton62->Location = System::Drawing::Point(290, 555);
			this->radioButton62->Name = L"radioButton62";
			this->radioButton62->Size = System::Drawing::Size(14, 13);
			this->radioButton62->TabIndex = 62;
			this->radioButton62->UseVisualStyleBackColor = false;
			this->radioButton62->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton62_CheckedChanged);
			// 
			// radioButton63
			// 
			this->radioButton63->AutoSize = true;
			this->radioButton63->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton63->Location = System::Drawing::Point(290, 495);
			this->radioButton63->Name = L"radioButton63";
			this->radioButton63->Size = System::Drawing::Size(14, 13);
			this->radioButton63->TabIndex = 63;
			this->radioButton63->UseVisualStyleBackColor = false;
			this->radioButton63->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton63_CheckedChanged);
			// 
			// radioButton64
			// 
			this->radioButton64->AutoSize = true;
			this->radioButton64->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton64->Location = System::Drawing::Point(316, 402);
			this->radioButton64->Name = L"radioButton64";
			this->radioButton64->Size = System::Drawing::Size(14, 13);
			this->radioButton64->TabIndex = 64;
			this->radioButton64->UseVisualStyleBackColor = false;
			this->radioButton64->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton64_CheckedChanged);
			// 
			// radioButton65
			// 
			this->radioButton65->AutoSize = true;
			this->radioButton65->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton65->Location = System::Drawing::Point(366, 385);
			this->radioButton65->Name = L"radioButton65";
			this->radioButton65->Size = System::Drawing::Size(14, 13);
			this->radioButton65->TabIndex = 65;
			this->radioButton65->UseVisualStyleBackColor = false;
			this->radioButton65->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton65_CheckedChanged);
			// 
			// radioButton66
			// 
			this->radioButton66->AutoSize = true;
			this->radioButton66->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton66->Location = System::Drawing::Point(411, 385);
			this->radioButton66->Name = L"radioButton66";
			this->radioButton66->Size = System::Drawing::Size(14, 13);
			this->radioButton66->TabIndex = 66;
			this->radioButton66->UseVisualStyleBackColor = false;
			this->radioButton66->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton66_CheckedChanged);
			// 
			// radioButton67
			// 
			this->radioButton67->AutoSize = true;
			this->radioButton67->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton67->Location = System::Drawing::Point(453, 385);
			this->radioButton67->Name = L"radioButton67";
			this->radioButton67->Size = System::Drawing::Size(14, 13);
			this->radioButton67->TabIndex = 67;
			this->radioButton67->UseVisualStyleBackColor = false;
			this->radioButton67->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton67_CheckedChanged);
			// 
			// radioButton68
			// 
			this->radioButton68->AutoSize = true;
			this->radioButton68->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton68->Location = System::Drawing::Point(561, 426);
			this->radioButton68->Name = L"radioButton68";
			this->radioButton68->Size = System::Drawing::Size(14, 13);
			this->radioButton68->TabIndex = 68;
			this->radioButton68->UseVisualStyleBackColor = false;
			this->radioButton68->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton68_CheckedChanged);
			// 
			// radioButton69
			// 
			this->radioButton69->AutoSize = true;
			this->radioButton69->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton69->Location = System::Drawing::Point(589, 393);
			this->radioButton69->Name = L"radioButton69";
			this->radioButton69->Size = System::Drawing::Size(14, 13);
			this->radioButton69->TabIndex = 69;
			this->radioButton69->UseVisualStyleBackColor = false;
			this->radioButton69->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton69_CheckedChanged);
			// 
			// radioButton70
			// 
			this->radioButton70->AutoSize = true;
			this->radioButton70->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton70->Location = System::Drawing::Point(613, 371);
			this->radioButton70->Name = L"radioButton70";
			this->radioButton70->Size = System::Drawing::Size(14, 13);
			this->radioButton70->TabIndex = 70;
			this->radioButton70->UseVisualStyleBackColor = false;
			this->radioButton70->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton70_CheckedChanged);
			// 
			// radioButton71
			// 
			this->radioButton71->AutoSize = true;
			this->radioButton71->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton71->Location = System::Drawing::Point(648, 340);
			this->radioButton71->Name = L"radioButton71";
			this->radioButton71->Size = System::Drawing::Size(14, 13);
			this->radioButton71->TabIndex = 71;
			this->radioButton71->UseVisualStyleBackColor = false;
			this->radioButton71->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton71_CheckedChanged);
			// 
			// radioButton72
			// 
			this->radioButton72->AutoSize = true;
			this->radioButton72->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton72->Location = System::Drawing::Point(662, 322);
			this->radioButton72->Name = L"radioButton72";
			this->radioButton72->Size = System::Drawing::Size(14, 13);
			this->radioButton72->TabIndex = 72;
			this->radioButton72->UseVisualStyleBackColor = false;
			this->radioButton72->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton72_CheckedChanged);
			// 
			// radioButton73
			// 
			this->radioButton73->AutoSize = true;
			this->radioButton73->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton73->Location = System::Drawing::Point(662, 303);
			this->radioButton73->Name = L"radioButton73";
			this->radioButton73->Size = System::Drawing::Size(14, 13);
			this->radioButton73->TabIndex = 73;
			this->radioButton73->UseVisualStyleBackColor = false;
			this->radioButton73->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton73_CheckedChanged);
			// 
			// radioButton74
			// 
			this->radioButton74->AutoSize = true;
			this->radioButton74->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton74->Location = System::Drawing::Point(662, 284);
			this->radioButton74->Name = L"radioButton74";
			this->radioButton74->Size = System::Drawing::Size(14, 13);
			this->radioButton74->TabIndex = 74;
			this->radioButton74->UseVisualStyleBackColor = false;
			this->radioButton74->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton74_CheckedChanged);
			// 
			// radioButton75
			// 
			this->radioButton75->AutoSize = true;
			this->radioButton75->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton75->Location = System::Drawing::Point(662, 265);
			this->radioButton75->Name = L"radioButton75";
			this->radioButton75->Size = System::Drawing::Size(14, 13);
			this->radioButton75->TabIndex = 75;
			this->radioButton75->UseVisualStyleBackColor = false;
			this->radioButton75->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton75_CheckedChanged);
			// 
			// radioButton76
			// 
			this->radioButton76->AutoSize = true;
			this->radioButton76->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton76->Location = System::Drawing::Point(662, 246);
			this->radioButton76->Name = L"radioButton76";
			this->radioButton76->Size = System::Drawing::Size(14, 13);
			this->radioButton76->TabIndex = 76;
			this->radioButton76->UseVisualStyleBackColor = false;
			this->radioButton76->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton76_CheckedChanged);
			// 
			// radioButton77
			// 
			this->radioButton77->AutoSize = true;
			this->radioButton77->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton77->Location = System::Drawing::Point(662, 227);
			this->radioButton77->Name = L"radioButton77";
			this->radioButton77->Size = System::Drawing::Size(14, 13);
			this->radioButton77->TabIndex = 77;
			this->radioButton77->UseVisualStyleBackColor = false;
			this->radioButton77->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton77_CheckedChanged);
			// 
			// radioButton78
			// 
			this->radioButton78->AutoSize = true;
			this->radioButton78->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton78->Location = System::Drawing::Point(662, 205);
			this->radioButton78->Name = L"radioButton78";
			this->radioButton78->Size = System::Drawing::Size(14, 13);
			this->radioButton78->TabIndex = 78;
			this->radioButton78->UseVisualStyleBackColor = false;
			this->radioButton78->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton78_CheckedChanged);
			// 
			// radioButton79
			// 
			this->radioButton79->AutoSize = true;
			this->radioButton79->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton79->Location = System::Drawing::Point(662, 186);
			this->radioButton79->Name = L"radioButton79";
			this->radioButton79->Size = System::Drawing::Size(14, 13);
			this->radioButton79->TabIndex = 79;
			this->radioButton79->UseVisualStyleBackColor = false;
			this->radioButton79->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton79_CheckedChanged);
			// 
			// radioButton80
			// 
			this->radioButton80->AutoSize = true;
			this->radioButton80->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton80->Location = System::Drawing::Point(662, 167);
			this->radioButton80->Name = L"radioButton80";
			this->radioButton80->Size = System::Drawing::Size(14, 13);
			this->radioButton80->TabIndex = 80;
			this->radioButton80->UseVisualStyleBackColor = false;
			this->radioButton80->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton80_CheckedChanged);
			// 
			// radioButton81
			// 
			this->radioButton81->AutoSize = true;
			this->radioButton81->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton81->Location = System::Drawing::Point(662, 148);
			this->radioButton81->Name = L"radioButton81";
			this->radioButton81->Size = System::Drawing::Size(14, 13);
			this->radioButton81->TabIndex = 81;
			this->radioButton81->UseVisualStyleBackColor = false;
			this->radioButton81->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton81_CheckedChanged);
			// 
			// radioButton82
			// 
			this->radioButton82->AutoSize = true;
			this->radioButton82->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton82->Location = System::Drawing::Point(662, 128);
			this->radioButton82->Name = L"radioButton82";
			this->radioButton82->Size = System::Drawing::Size(14, 13);
			this->radioButton82->TabIndex = 82;
			this->radioButton82->UseVisualStyleBackColor = false;
			this->radioButton82->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton82_CheckedChanged);
			// 
			// radioButton83
			// 
			this->radioButton83->AutoSize = true;
			this->radioButton83->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton83->Location = System::Drawing::Point(662, 107);
			this->radioButton83->Name = L"radioButton83";
			this->radioButton83->Size = System::Drawing::Size(14, 13);
			this->radioButton83->TabIndex = 83;
			this->radioButton83->UseVisualStyleBackColor = false;
			this->radioButton83->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton83_CheckedChanged);
			// 
			// radioButton84
			// 
			this->radioButton84->AutoSize = true;
			this->radioButton84->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton84->Location = System::Drawing::Point(615, 430);
			this->radioButton84->Name = L"radioButton84";
			this->radioButton84->Size = System::Drawing::Size(14, 13);
			this->radioButton84->TabIndex = 84;
			this->radioButton84->UseVisualStyleBackColor = false;
			this->radioButton84->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton84_CheckedChanged);
			// 
			// radioButton85
			// 
			this->radioButton85->AutoSize = true;
			this->radioButton85->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton85->Location = System::Drawing::Point(648, 430);
			this->radioButton85->Name = L"radioButton85";
			this->radioButton85->Size = System::Drawing::Size(14, 13);
			this->radioButton85->TabIndex = 85;
			this->radioButton85->UseVisualStyleBackColor = false;
			this->radioButton85->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton85_CheckedChanged);
			// 
			// radioButton86
			// 
			this->radioButton86->AutoSize = true;
			this->radioButton86->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton86->Location = System::Drawing::Point(676, 456);
			this->radioButton86->Name = L"radioButton86";
			this->radioButton86->Size = System::Drawing::Size(14, 13);
			this->radioButton86->TabIndex = 86;
			this->radioButton86->UseVisualStyleBackColor = false;
			this->radioButton86->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton86_CheckedChanged);
			// 
			// radioButton87
			// 
			this->radioButton87->AutoSize = true;
			this->radioButton87->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton87->Location = System::Drawing::Point(688, 478);
			this->radioButton87->Name = L"radioButton87";
			this->radioButton87->Size = System::Drawing::Size(14, 13);
			this->radioButton87->TabIndex = 87;
			this->radioButton87->UseVisualStyleBackColor = false;
			this->radioButton87->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton87_CheckedChanged);
			// 
			// radioButton88
			// 
			this->radioButton88->AutoSize = true;
			this->radioButton88->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton88->Location = System::Drawing::Point(688, 500);
			this->radioButton88->Name = L"radioButton88";
			this->radioButton88->Size = System::Drawing::Size(14, 13);
			this->radioButton88->TabIndex = 88;
			this->radioButton88->UseVisualStyleBackColor = false;
			this->radioButton88->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton88_CheckedChanged);
			// 
			// radioButton89
			// 
			this->radioButton89->AutoSize = true;
			this->radioButton89->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton89->Location = System::Drawing::Point(696, 630);
			this->radioButton89->Name = L"radioButton89";
			this->radioButton89->Size = System::Drawing::Size(14, 13);
			this->radioButton89->TabIndex = 89;
			this->radioButton89->UseVisualStyleBackColor = false;
			this->radioButton89->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton89_CheckedChanged);
			// 
			// radioButton90
			// 
			this->radioButton90->AutoSize = true;
			this->radioButton90->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton90->Location = System::Drawing::Point(656, 660);
			this->radioButton90->Name = L"radioButton90";
			this->radioButton90->Size = System::Drawing::Size(14, 13);
			this->radioButton90->TabIndex = 90;
			this->radioButton90->UseVisualStyleBackColor = false;
			this->radioButton90->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton90_CheckedChanged);
			// 
			// radioButton91
			// 
			this->radioButton91->AutoSize = true;
			this->radioButton91->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton91->Location = System::Drawing::Point(627, 663);
			this->radioButton91->Name = L"radioButton91";
			this->radioButton91->Size = System::Drawing::Size(14, 13);
			this->radioButton91->TabIndex = 91;
			this->radioButton91->UseVisualStyleBackColor = false;
			this->radioButton91->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton91_CheckedChanged);
			// 
			// radioButton92
			// 
			this->radioButton92->AutoSize = true;
			this->radioButton92->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton92->Location = System::Drawing::Point(581, 644);
			this->radioButton92->Name = L"radioButton92";
			this->radioButton92->Size = System::Drawing::Size(14, 13);
			this->radioButton92->TabIndex = 92;
			this->radioButton92->UseVisualStyleBackColor = false;
			this->radioButton92->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton92_CheckedChanged);
			// 
			// radioButton93
			// 
			this->radioButton93->AutoSize = true;
			this->radioButton93->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton93->Location = System::Drawing::Point(538, 641);
			this->radioButton93->Name = L"radioButton93";
			this->radioButton93->Size = System::Drawing::Size(14, 13);
			this->radioButton93->TabIndex = 93;
			this->radioButton93->UseVisualStyleBackColor = false;
			this->radioButton93->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton93_CheckedChanged);
			// 
			// radioButton94
			// 
			this->radioButton94->AutoSize = true;
			this->radioButton94->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton94->Location = System::Drawing::Point(497, 644);
			this->radioButton94->Name = L"radioButton94";
			this->radioButton94->Size = System::Drawing::Size(14, 13);
			this->radioButton94->TabIndex = 94;
			this->radioButton94->UseVisualStyleBackColor = false;
			this->radioButton94->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton94_CheckedChanged);
			// 
			// radioButton95
			// 
			this->radioButton95->AutoSize = true;
			this->radioButton95->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton95->Location = System::Drawing::Point(440, 642);
			this->radioButton95->Name = L"radioButton95";
			this->radioButton95->Size = System::Drawing::Size(14, 13);
			this->radioButton95->TabIndex = 95;
			this->radioButton95->UseVisualStyleBackColor = false;
			this->radioButton95->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton95_CheckedChanged);
			// 
			// radioButton96
			// 
			this->radioButton96->AutoSize = true;
			this->radioButton96->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton96->Location = System::Drawing::Point(411, 643);
			this->radioButton96->Name = L"radioButton96";
			this->radioButton96->Size = System::Drawing::Size(14, 13);
			this->radioButton96->TabIndex = 96;
			this->radioButton96->UseVisualStyleBackColor = false;
			this->radioButton96->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton96_CheckedChanged);
			// 
			// radioButton97
			// 
			this->radioButton97->AutoSize = true;
			this->radioButton97->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton97->Location = System::Drawing::Point(364, 645);
			this->radioButton97->Name = L"radioButton97";
			this->radioButton97->Size = System::Drawing::Size(14, 13);
			this->radioButton97->TabIndex = 97;
			this->radioButton97->UseVisualStyleBackColor = false;
			this->radioButton97->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton97_CheckedChanged);
			// 
			// radioButton98
			// 
			this->radioButton98->AutoSize = true;
			this->radioButton98->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton98->Location = System::Drawing::Point(208, 797);
			this->radioButton98->Name = L"radioButton98";
			this->radioButton98->Size = System::Drawing::Size(14, 13);
			this->radioButton98->TabIndex = 98;
			this->radioButton98->UseVisualStyleBackColor = false;
			this->radioButton98->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton98_CheckedChanged);
			// 
			// radioButton99
			// 
			this->radioButton99->AutoSize = true;
			this->radioButton99->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton99->Location = System::Drawing::Point(208, 814);
			this->radioButton99->Name = L"radioButton99";
			this->radioButton99->Size = System::Drawing::Size(14, 13);
			this->radioButton99->TabIndex = 99;
			this->radioButton99->UseVisualStyleBackColor = false;
			this->radioButton99->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton99_CheckedChanged);
			// 
			// radioButton100
			// 
			this->radioButton100->AutoSize = true;
			this->radioButton100->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton100->Location = System::Drawing::Point(208, 831);
			this->radioButton100->Name = L"radioButton100";
			this->radioButton100->Size = System::Drawing::Size(14, 13);
			this->radioButton100->TabIndex = 100;
			this->radioButton100->UseVisualStyleBackColor = false;
			this->radioButton100->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton100_CheckedChanged);
			// 
			// radioButton101
			// 
			this->radioButton101->AutoSize = true;
			this->radioButton101->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton101->Location = System::Drawing::Point(208, 848);
			this->radioButton101->Name = L"radioButton101";
			this->radioButton101->Size = System::Drawing::Size(14, 13);
			this->radioButton101->TabIndex = 101;
			this->radioButton101->UseVisualStyleBackColor = false;
			this->radioButton101->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton101_CheckedChanged);
			// 
			// radioButton102
			// 
			this->radioButton102->AutoSize = true;
			this->radioButton102->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton102->Location = System::Drawing::Point(208, 865);
			this->radioButton102->Name = L"radioButton102";
			this->radioButton102->Size = System::Drawing::Size(14, 13);
			this->radioButton102->TabIndex = 102;
			this->radioButton102->UseVisualStyleBackColor = false;
			this->radioButton102->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton102_CheckedChanged);
			// 
			// radioButton103
			// 
			this->radioButton103->AutoSize = true;
			this->radioButton103->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton103->Location = System::Drawing::Point(208, 883);
			this->radioButton103->Name = L"radioButton103";
			this->radioButton103->Size = System::Drawing::Size(14, 13);
			this->radioButton103->TabIndex = 103;
			this->radioButton103->UseVisualStyleBackColor = false;
			this->radioButton103->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton103_CheckedChanged);
			// 
			// radioButton104
			// 
			this->radioButton104->AutoSize = true;
			this->radioButton104->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton104->Location = System::Drawing::Point(209, 899);
			this->radioButton104->Name = L"radioButton104";
			this->radioButton104->Size = System::Drawing::Size(14, 13);
			this->radioButton104->TabIndex = 104;
			this->radioButton104->UseVisualStyleBackColor = false;
			this->radioButton104->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton104_CheckedChanged);
			// 
			// radioButton105
			// 
			this->radioButton105->AutoSize = true;
			this->radioButton105->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton105->Location = System::Drawing::Point(191, 899);
			this->radioButton105->Name = L"radioButton105";
			this->radioButton105->Size = System::Drawing::Size(14, 13);
			this->radioButton105->TabIndex = 105;
			this->radioButton105->UseVisualStyleBackColor = false;
			this->radioButton105->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton105_CheckedChanged);
			// 
			// radioButton106
			// 
			this->radioButton106->AutoSize = true;
			this->radioButton106->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton106->Location = System::Drawing::Point(172, 899);
			this->radioButton106->Name = L"radioButton106";
			this->radioButton106->Size = System::Drawing::Size(14, 13);
			this->radioButton106->TabIndex = 106;
			this->radioButton106->UseVisualStyleBackColor = false;
			this->radioButton106->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton106_CheckedChanged);
			// 
			// radioButton107
			// 
			this->radioButton107->AutoSize = true;
			this->radioButton107->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton107->Location = System::Drawing::Point(153, 899);
			this->radioButton107->Name = L"radioButton107";
			this->radioButton107->Size = System::Drawing::Size(14, 13);
			this->radioButton107->TabIndex = 107;
			this->radioButton107->UseVisualStyleBackColor = false;
			this->radioButton107->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton107_CheckedChanged);
			// 
			// radioButton108
			// 
			this->radioButton108->AutoSize = true;
			this->radioButton108->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton108->Location = System::Drawing::Point(516, 792);
			this->radioButton108->Name = L"radioButton108";
			this->radioButton108->Size = System::Drawing::Size(14, 13);
			this->radioButton108->TabIndex = 108;
			this->radioButton108->UseVisualStyleBackColor = false;
			this->radioButton108->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton108_CheckedChanged);
			// 
			// radioButton109
			// 
			this->radioButton109->AutoSize = true;
			this->radioButton109->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton109->Location = System::Drawing::Point(530, 796);
			this->radioButton109->Name = L"radioButton109";
			this->radioButton109->Size = System::Drawing::Size(14, 13);
			this->radioButton109->TabIndex = 109;
			this->radioButton109->UseVisualStyleBackColor = false;
			this->radioButton109->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton109_CheckedChanged);
			// 
			// radioButton110
			// 
			this->radioButton110->AutoSize = true;
			this->radioButton110->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton110->Location = System::Drawing::Point(550, 797);
			this->radioButton110->Name = L"radioButton110";
			this->radioButton110->Size = System::Drawing::Size(14, 13);
			this->radioButton110->TabIndex = 110;
			this->radioButton110->UseVisualStyleBackColor = false;
			this->radioButton110->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton110_CheckedChanged);
			// 
			// radioButton111
			// 
			this->radioButton111->AutoSize = true;
			this->radioButton111->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton111->Location = System::Drawing::Point(577, 795);
			this->radioButton111->Name = L"radioButton111";
			this->radioButton111->Size = System::Drawing::Size(14, 13);
			this->radioButton111->TabIndex = 111;
			this->radioButton111->UseVisualStyleBackColor = false;
			this->radioButton111->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton111_CheckedChanged);
			// 
			// radioButton112
			// 
			this->radioButton112->AutoSize = true;
			this->radioButton112->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton112->Location = System::Drawing::Point(577, 776);
			this->radioButton112->Name = L"radioButton112";
			this->radioButton112->Size = System::Drawing::Size(14, 13);
			this->radioButton112->TabIndex = 112;
			this->radioButton112->UseVisualStyleBackColor = false;
			this->radioButton112->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton112_CheckedChanged);
			// 
			// radioButton113
			// 
			this->radioButton113->AutoSize = true;
			this->radioButton113->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton113->Location = System::Drawing::Point(577, 751);
			this->radioButton113->Name = L"radioButton113";
			this->radioButton113->Size = System::Drawing::Size(14, 13);
			this->radioButton113->TabIndex = 113;
			this->radioButton113->UseVisualStyleBackColor = false;
			this->radioButton113->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton113_CheckedChanged);
			// 
			// radioButton114
			// 
			this->radioButton114->AutoSize = true;
			this->radioButton114->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton114->Location = System::Drawing::Point(580, 737);
			this->radioButton114->Name = L"radioButton114";
			this->radioButton114->Size = System::Drawing::Size(14, 13);
			this->radioButton114->TabIndex = 114;
			this->radioButton114->UseVisualStyleBackColor = false;
			this->radioButton114->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton115
			// 
			this->radioButton115->AutoSize = true;
			this->radioButton115->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton115->Location = System::Drawing::Point(610, 705);
			this->radioButton115->Name = L"radioButton115";
			this->radioButton115->Size = System::Drawing::Size(14, 13);
			this->radioButton115->TabIndex = 115;
			this->radioButton115->UseVisualStyleBackColor = false;
			this->radioButton115->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton115_CheckedChanged);
			// 
			// radioButton116
			// 
			this->radioButton116->AutoSize = true;
			this->radioButton116->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton116->Location = System::Drawing::Point(627, 687);
			this->radioButton116->Name = L"radioButton116";
			this->radioButton116->Size = System::Drawing::Size(14, 13);
			this->radioButton116->TabIndex = 116;
			this->radioButton116->UseVisualStyleBackColor = false;
			this->radioButton116->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton116_CheckedChanged);
			// 
			// radioButton117
			// 
			this->radioButton117->AutoSize = true;
			this->radioButton117->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton117->Location = System::Drawing::Point(679, 612);
			this->radioButton117->Name = L"radioButton117";
			this->radioButton117->Size = System::Drawing::Size(14, 13);
			this->radioButton117->TabIndex = 117;
			this->radioButton117->UseVisualStyleBackColor = false;
			this->radioButton117->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton117_CheckedChanged);
			// 
			// radioButton118
			// 
			this->radioButton118->AutoSize = true;
			this->radioButton118->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton118->Location = System::Drawing::Point(716, 558);
			this->radioButton118->Name = L"radioButton118";
			this->radioButton118->Size = System::Drawing::Size(14, 13);
			this->radioButton118->TabIndex = 118;
			this->radioButton118->UseVisualStyleBackColor = false;
			this->radioButton118->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton118_CheckedChanged);
			// 
			// radioButton119
			// 
			this->radioButton119->AutoSize = true;
			this->radioButton119->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton119->Location = System::Drawing::Point(738, 558);
			this->radioButton119->Name = L"radioButton119";
			this->radioButton119->Size = System::Drawing::Size(14, 13);
			this->radioButton119->TabIndex = 119;
			this->radioButton119->UseVisualStyleBackColor = false;
			this->radioButton119->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton119_CheckedChanged);
			// 
			// radioButton120
			// 
			this->radioButton120->AutoSize = true;
			this->radioButton120->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton120->Location = System::Drawing::Point(759, 558);
			this->radioButton120->Name = L"radioButton120";
			this->radioButton120->Size = System::Drawing::Size(14, 13);
			this->radioButton120->TabIndex = 120;
			this->radioButton120->UseVisualStyleBackColor = false;
			this->radioButton120->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton120_CheckedChanged);
			// 
			// radioButton121
			// 
			this->radioButton121->AutoSize = true;
			this->radioButton121->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton121->Location = System::Drawing::Point(779, 558);
			this->radioButton121->Name = L"radioButton121";
			this->radioButton121->Size = System::Drawing::Size(14, 13);
			this->radioButton121->TabIndex = 121;
			this->radioButton121->UseVisualStyleBackColor = false;
			this->radioButton121->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton121_CheckedChanged);
			// 
			// radioButton122
			// 
			this->radioButton122->AutoSize = true;
			this->radioButton122->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton122->Location = System::Drawing::Point(799, 558);
			this->radioButton122->Name = L"radioButton122";
			this->radioButton122->Size = System::Drawing::Size(14, 13);
			this->radioButton122->TabIndex = 122;
			this->radioButton122->UseVisualStyleBackColor = false;
			this->radioButton122->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton122_CheckedChanged);
			// 
			// radioButton123
			// 
			this->radioButton123->AutoSize = true;
			this->radioButton123->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton123->Location = System::Drawing::Point(833, 555);
			this->radioButton123->Name = L"radioButton123";
			this->radioButton123->Size = System::Drawing::Size(14, 13);
			this->radioButton123->TabIndex = 123;
			this->radioButton123->UseVisualStyleBackColor = false;
			this->radioButton123->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton123_CheckedChanged);
			// 
			// radioButton124
			// 
			this->radioButton124->AutoSize = true;
			this->radioButton124->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton124->Location = System::Drawing::Point(845, 535);
			this->radioButton124->Name = L"radioButton124";
			this->radioButton124->Size = System::Drawing::Size(14, 13);
			this->radioButton124->TabIndex = 124;
			this->radioButton124->UseVisualStyleBackColor = false;
			this->radioButton124->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton124_CheckedChanged);
			// 
			// radioButton125
			// 
			this->radioButton125->AutoSize = true;
			this->radioButton125->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton125->Location = System::Drawing::Point(845, 516);
			this->radioButton125->Name = L"radioButton125";
			this->radioButton125->Size = System::Drawing::Size(14, 13);
			this->radioButton125->TabIndex = 125;
			this->radioButton125->UseVisualStyleBackColor = false;
			this->radioButton125->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton125_CheckedChanged);
			// 
			// radioButton126
			// 
			this->radioButton126->AutoSize = true;
			this->radioButton126->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton126->Location = System::Drawing::Point(846, 495);
			this->radioButton126->Name = L"radioButton126";
			this->radioButton126->Size = System::Drawing::Size(14, 13);
			this->radioButton126->TabIndex = 126;
			this->radioButton126->UseVisualStyleBackColor = false;
			this->radioButton126->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton126_CheckedChanged);
			// 
			// radioButton127
			// 
			this->radioButton127->AutoSize = true;
			this->radioButton127->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton127->Location = System::Drawing::Point(846, 426);
			this->radioButton127->Name = L"radioButton127";
			this->radioButton127->Size = System::Drawing::Size(14, 13);
			this->radioButton127->TabIndex = 127;
			this->radioButton127->UseVisualStyleBackColor = false;
			this->radioButton127->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton127_CheckedChanged);
			// 
			// radioButton128
			// 
			this->radioButton128->AutoSize = true;
			this->radioButton128->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton128->Location = System::Drawing::Point(845, 385);
			this->radioButton128->Name = L"radioButton128";
			this->radioButton128->Size = System::Drawing::Size(14, 13);
			this->radioButton128->TabIndex = 128;
			this->radioButton128->UseVisualStyleBackColor = false;
			this->radioButton128->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton128_CheckedChanged);
			// 
			// radioButton129
			// 
			this->radioButton129->AutoSize = true;
			this->radioButton129->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton129->Location = System::Drawing::Point(845, 342);
			this->radioButton129->Name = L"radioButton129";
			this->radioButton129->Size = System::Drawing::Size(14, 13);
			this->radioButton129->TabIndex = 129;
			this->radioButton129->UseVisualStyleBackColor = false;
			this->radioButton129->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton129_CheckedChanged);
			// 
			// radioButton130
			// 
			this->radioButton130->AutoSize = true;
			this->radioButton130->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton130->Location = System::Drawing::Point(845, 303);
			this->radioButton130->Name = L"radioButton130";
			this->radioButton130->Size = System::Drawing::Size(14, 13);
			this->radioButton130->TabIndex = 130;
			this->radioButton130->UseVisualStyleBackColor = false;
			// 
			// radioButton131
			// 
			this->radioButton131->AutoSize = true;
			this->radioButton131->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton131->Location = System::Drawing::Point(846, 262);
			this->radioButton131->Name = L"radioButton131";
			this->radioButton131->Size = System::Drawing::Size(14, 13);
			this->radioButton131->TabIndex = 131;
			this->radioButton131->UseVisualStyleBackColor = false;
			this->radioButton131->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton131_CheckedChanged);
			// 
			// radioButton132
			// 
			this->radioButton132->AutoSize = true;
			this->radioButton132->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton132->Location = System::Drawing::Point(845, 221);
			this->radioButton132->Name = L"radioButton132";
			this->radioButton132->Size = System::Drawing::Size(14, 13);
			this->radioButton132->TabIndex = 132;
			this->radioButton132->UseVisualStyleBackColor = false;
			this->radioButton132->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton132_CheckedChanged);
			// 
			// radioButton133
			// 
			this->radioButton133->AutoSize = true;
			this->radioButton133->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton133->Location = System::Drawing::Point(845, 181);
			this->radioButton133->Name = L"radioButton133";
			this->radioButton133->Size = System::Drawing::Size(14, 13);
			this->radioButton133->TabIndex = 133;
			this->radioButton133->UseVisualStyleBackColor = false;
			this->radioButton133->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton133_CheckedChanged);
			// 
			// radioButton134
			// 
			this->radioButton134->AutoSize = true;
			this->radioButton134->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton134->Location = System::Drawing::Point(432, 107);
			this->radioButton134->Name = L"radioButton134";
			this->radioButton134->Size = System::Drawing::Size(14, 13);
			this->radioButton134->TabIndex = 134;
			this->radioButton134->UseVisualStyleBackColor = false;
			this->radioButton134->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton134_CheckedChanged);
			// 
			// radioButton135
			// 
			this->radioButton135->AutoSize = true;
			this->radioButton135->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton135->Location = System::Drawing::Point(432, 125);
			this->radioButton135->Name = L"radioButton135";
			this->radioButton135->Size = System::Drawing::Size(14, 13);
			this->radioButton135->TabIndex = 135;
			this->radioButton135->UseVisualStyleBackColor = false;
			this->radioButton135->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton135_CheckedChanged);
			// 
			// radioButton136
			// 
			this->radioButton136->AutoSize = true;
			this->radioButton136->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton136->Location = System::Drawing::Point(432, 144);
			this->radioButton136->Name = L"radioButton136";
			this->radioButton136->Size = System::Drawing::Size(14, 13);
			this->radioButton136->TabIndex = 136;
			this->radioButton136->UseVisualStyleBackColor = false;
			this->radioButton136->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton136_CheckedChanged);
			// 
			// radioButton137
			// 
			this->radioButton137->AutoSize = true;
			this->radioButton137->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton137->Location = System::Drawing::Point(432, 163);
			this->radioButton137->Name = L"radioButton137";
			this->radioButton137->Size = System::Drawing::Size(14, 13);
			this->radioButton137->TabIndex = 137;
			this->radioButton137->UseVisualStyleBackColor = false;
			this->radioButton137->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton137_CheckedChanged);
			// 
			// radioButton138
			// 
			this->radioButton138->AutoSize = true;
			this->radioButton138->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton138->Location = System::Drawing::Point(432, 181);
			this->radioButton138->Name = L"radioButton138";
			this->radioButton138->Size = System::Drawing::Size(14, 13);
			this->radioButton138->TabIndex = 138;
			this->radioButton138->UseVisualStyleBackColor = false;
			this->radioButton138->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton138_CheckedChanged);
			// 
			// radioButton139
			// 
			this->radioButton139->AutoSize = true;
			this->radioButton139->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton139->Location = System::Drawing::Point(432, 200);
			this->radioButton139->Name = L"radioButton139";
			this->radioButton139->Size = System::Drawing::Size(14, 13);
			this->radioButton139->TabIndex = 139;
			this->radioButton139->UseVisualStyleBackColor = false;
			this->radioButton139->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton139_CheckedChanged);
			// 
			// radioButton140
			// 
			this->radioButton140->AutoSize = true;
			this->radioButton140->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton140->Location = System::Drawing::Point(432, 217);
			this->radioButton140->Name = L"radioButton140";
			this->radioButton140->Size = System::Drawing::Size(14, 13);
			this->radioButton140->TabIndex = 140;
			this->radioButton140->UseVisualStyleBackColor = false;
			this->radioButton140->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton140_CheckedChanged);
			// 
			// radioButton141
			// 
			this->radioButton141->AutoSize = true;
			this->radioButton141->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton141->Location = System::Drawing::Point(432, 235);
			this->radioButton141->Name = L"radioButton141";
			this->radioButton141->Size = System::Drawing::Size(14, 13);
			this->radioButton141->TabIndex = 141;
			this->radioButton141->UseVisualStyleBackColor = false;
			this->radioButton141->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton141_CheckedChanged);
			// 
			// radioButton142
			// 
			this->radioButton142->AutoSize = true;
			this->radioButton142->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton142->Location = System::Drawing::Point(432, 254);
			this->radioButton142->Name = L"radioButton142";
			this->radioButton142->Size = System::Drawing::Size(14, 13);
			this->radioButton142->TabIndex = 142;
			this->radioButton142->UseVisualStyleBackColor = false;
			this->radioButton142->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton142_CheckedChanged);
			// 
			// radioButton143
			// 
			this->radioButton143->AutoSize = true;
			this->radioButton143->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton143->Location = System::Drawing::Point(432, 273);
			this->radioButton143->Name = L"radioButton143";
			this->radioButton143->Size = System::Drawing::Size(14, 13);
			this->radioButton143->TabIndex = 143;
			this->radioButton143->UseVisualStyleBackColor = false;
			this->radioButton143->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton143_CheckedChanged);
			// 
			// radioButton144
			// 
			this->radioButton144->AutoSize = true;
			this->radioButton144->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton144->Location = System::Drawing::Point(432, 292);
			this->radioButton144->Name = L"radioButton144";
			this->radioButton144->Size = System::Drawing::Size(14, 13);
			this->radioButton144->TabIndex = 144;
			this->radioButton144->UseVisualStyleBackColor = false;
			this->radioButton144->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton144_CheckedChanged);
			// 
			// radioButton145
			// 
			this->radioButton145->AutoSize = true;
			this->radioButton145->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton145->Location = System::Drawing::Point(432, 311);
			this->radioButton145->Name = L"radioButton145";
			this->radioButton145->Size = System::Drawing::Size(14, 13);
			this->radioButton145->TabIndex = 145;
			this->radioButton145->UseVisualStyleBackColor = false;
			this->radioButton145->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton145_CheckedChanged);
			// 
			// radioButton146
			// 
			this->radioButton146->AutoSize = true;
			this->radioButton146->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton146->Location = System::Drawing::Point(432, 330);
			this->radioButton146->Name = L"radioButton146";
			this->radioButton146->Size = System::Drawing::Size(14, 13);
			this->radioButton146->TabIndex = 146;
			this->radioButton146->UseVisualStyleBackColor = false;
			this->radioButton146->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton146_CheckedChanged);
			// 
			// radioButton147
			// 
			this->radioButton147->AutoSize = true;
			this->radioButton147->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton147->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButton147->Location = System::Drawing::Point(425, 346);
			this->radioButton147->Name = L"radioButton147";
			this->radioButton147->Size = System::Drawing::Size(24, 5);
			this->radioButton147->TabIndex = 147;
			this->radioButton147->UseVisualStyleBackColor = false;
			this->radioButton147->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton147_CheckedChanged);
			// 
			// radioButton148
			// 
			this->radioButton148->AutoSize = true;
			this->radioButton148->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton148->Location = System::Drawing::Point(412, 362);
			this->radioButton148->Name = L"radioButton148";
			this->radioButton148->Size = System::Drawing::Size(14, 13);
			this->radioButton148->TabIndex = 148;
			this->radioButton148->UseVisualStyleBackColor = false;
			this->radioButton148->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton148_CheckedChanged);
			// 
			// radioButton149
			// 
			this->radioButton149->AutoSize = true;
			this->radioButton149->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton149->Location = System::Drawing::Point(413, 426);
			this->radioButton149->Name = L"radioButton149";
			this->radioButton149->Size = System::Drawing::Size(14, 13);
			this->radioButton149->TabIndex = 149;
			this->radioButton149->UseVisualStyleBackColor = false;
			this->radioButton149->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton149_CheckedChanged);
			// 
			// radioButton150
			// 
			this->radioButton150->AutoSize = true;
			this->radioButton150->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton150->Location = System::Drawing::Point(413, 474);
			this->radioButton150->Name = L"radioButton150";
			this->radioButton150->Size = System::Drawing::Size(14, 13);
			this->radioButton150->TabIndex = 150;
			this->radioButton150->UseVisualStyleBackColor = false;
			this->radioButton150->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton150_CheckedChanged);
			// 
			// radioButton151
			// 
			this->radioButton151->AutoSize = true;
			this->radioButton151->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton151->Location = System::Drawing::Point(408, 594);
			this->radioButton151->Name = L"radioButton151";
			this->radioButton151->Size = System::Drawing::Size(14, 13);
			this->radioButton151->TabIndex = 151;
			this->radioButton151->UseVisualStyleBackColor = false;
			this->radioButton151->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton151_CheckedChanged);
			// 
			// radioButton152
			// 
			this->radioButton152->AutoSize = true;
			this->radioButton152->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton152->Location = System::Drawing::Point(410, 669);
			this->radioButton152->Name = L"radioButton152";
			this->radioButton152->Size = System::Drawing::Size(14, 13);
			this->radioButton152->TabIndex = 152;
			this->radioButton152->UseVisualStyleBackColor = false;
			this->radioButton152->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton152_CheckedChanged);
			// 
			// radioButton153
			// 
			this->radioButton153->AutoSize = true;
			this->radioButton153->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton153->Location = System::Drawing::Point(438, 699);
			this->radioButton153->Name = L"radioButton153";
			this->radioButton153->Size = System::Drawing::Size(14, 13);
			this->radioButton153->TabIndex = 153;
			this->radioButton153->UseVisualStyleBackColor = false;
			this->radioButton153->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton153_CheckedChanged);
			// 
			// radioButton154
			// 
			this->radioButton154->AutoSize = true;
			this->radioButton154->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton154->Location = System::Drawing::Point(473, 731);
			this->radioButton154->Name = L"radioButton154";
			this->radioButton154->Size = System::Drawing::Size(14, 13);
			this->radioButton154->TabIndex = 154;
			this->radioButton154->UseVisualStyleBackColor = false;
			this->radioButton154->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton154_CheckedChanged);
			// 
			// radioButton155
			// 
			this->radioButton155->AutoSize = true;
			this->radioButton155->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton155->Location = System::Drawing::Point(519, 738);
			this->radioButton155->Name = L"radioButton155";
			this->radioButton155->Size = System::Drawing::Size(14, 13);
			this->radioButton155->TabIndex = 155;
			this->radioButton155->UseVisualStyleBackColor = false;
			this->radioButton155->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton155_CheckedChanged);
			// 
			// radioButton156
			// 
			this->radioButton156->AutoSize = true;
			this->radioButton156->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton156->Location = System::Drawing::Point(550, 741);
			this->radioButton156->Name = L"radioButton156";
			this->radioButton156->Size = System::Drawing::Size(14, 13);
			this->radioButton156->TabIndex = 156;
			this->radioButton156->UseVisualStyleBackColor = false;
			this->radioButton156->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton156_CheckedChanged);
			// 
			// radioButton157
			// 
			this->radioButton157->AutoSize = true;
			this->radioButton157->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton157->Location = System::Drawing::Point(662, 736);
			this->radioButton157->Name = L"radioButton157";
			this->radioButton157->Size = System::Drawing::Size(14, 13);
			this->radioButton157->TabIndex = 157;
			this->radioButton157->UseVisualStyleBackColor = false;
			this->radioButton157->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton157_CheckedChanged);
			// 
			// radioButton158
			// 
			this->radioButton158->AutoSize = true;
			this->radioButton158->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton158->Location = System::Drawing::Point(696, 736);
			this->radioButton158->Name = L"radioButton158";
			this->radioButton158->Size = System::Drawing::Size(14, 13);
			this->radioButton158->TabIndex = 158;
			this->radioButton158->UseVisualStyleBackColor = false;
			this->radioButton158->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton158_CheckedChanged);
			// 
			// radioButton159
			// 
			this->radioButton159->AutoSize = true;
			this->radioButton159->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton159->Location = System::Drawing::Point(723, 720);
			this->radioButton159->Name = L"radioButton159";
			this->radioButton159->Size = System::Drawing::Size(14, 13);
			this->radioButton159->TabIndex = 159;
			this->radioButton159->UseVisualStyleBackColor = false;
			this->radioButton159->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton159_CheckedChanged);
			// 
			// radioButton160
			// 
			this->radioButton160->AutoSize = true;
			this->radioButton160->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton160->Location = System::Drawing::Point(779, 678);
			this->radioButton160->Name = L"radioButton160";
			this->radioButton160->Size = System::Drawing::Size(14, 13);
			this->radioButton160->TabIndex = 160;
			this->radioButton160->UseVisualStyleBackColor = false;
			this->radioButton160->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton160_CheckedChanged);
			// 
			// radioButton161
			// 
			this->radioButton161->AutoSize = true;
			this->radioButton161->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton161->Location = System::Drawing::Point(508, 914);
			this->radioButton161->Name = L"radioButton161";
			this->radioButton161->Size = System::Drawing::Size(14, 13);
			this->radioButton161->TabIndex = 161;
			this->radioButton161->UseVisualStyleBackColor = false;
			this->radioButton161->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton161_CheckedChanged);
			// 
			// radioButton162
			// 
			this->radioButton162->AutoSize = true;
			this->radioButton162->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton162->Location = System::Drawing::Point(508, 895);
			this->radioButton162->Name = L"radioButton162";
			this->radioButton162->Size = System::Drawing::Size(14, 13);
			this->radioButton162->TabIndex = 162;
			this->radioButton162->UseVisualStyleBackColor = false;
			this->radioButton162->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton162_CheckedChanged);
			// 
			// radioButton163
			// 
			this->radioButton163->AutoSize = true;
			this->radioButton163->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton163->Location = System::Drawing::Point(508, 873);
			this->radioButton163->Name = L"radioButton163";
			this->radioButton163->Size = System::Drawing::Size(14, 13);
			this->radioButton163->TabIndex = 163;
			this->radioButton163->UseVisualStyleBackColor = false;
			this->radioButton163->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton163_CheckedChanged);
			// 
			// radioButton164
			// 
			this->radioButton164->AutoSize = true;
			this->radioButton164->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton164->Location = System::Drawing::Point(508, 854);
			this->radioButton164->Name = L"radioButton164";
			this->radioButton164->Size = System::Drawing::Size(14, 13);
			this->radioButton164->TabIndex = 164;
			this->radioButton164->UseVisualStyleBackColor = false;
			this->radioButton164->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton164_CheckedChanged);
			// 
			// radioButton165
			// 
			this->radioButton165->AutoSize = true;
			this->radioButton165->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton165->Location = System::Drawing::Point(508, 833);
			this->radioButton165->Name = L"radioButton165";
			this->radioButton165->Size = System::Drawing::Size(14, 13);
			this->radioButton165->TabIndex = 165;
			this->radioButton165->UseVisualStyleBackColor = false;
			this->radioButton165->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton165_CheckedChanged);
			// 
			// radioButton166
			// 
			this->radioButton166->AutoSize = true;
			this->radioButton166->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton166->Location = System::Drawing::Point(509, 813);
			this->radioButton166->Name = L"radioButton166";
			this->radioButton166->Size = System::Drawing::Size(14, 13);
			this->radioButton166->TabIndex = 166;
			this->radioButton166->UseVisualStyleBackColor = false;
			this->radioButton166->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton166_CheckedChanged);
			// 
			// radioButton167
			// 
			this->radioButton167->AutoSize = true;
			this->radioButton167->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton167->Location = System::Drawing::Point(522, 768);
			this->radioButton167->Name = L"radioButton167";
			this->radioButton167->Size = System::Drawing::Size(14, 13);
			this->radioButton167->TabIndex = 167;
			this->radioButton167->UseVisualStyleBackColor = false;
			this->radioButton167->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton167_CheckedChanged);
			// 
			// radioButton168
			// 
			this->radioButton168->AutoSize = true;
			this->radioButton168->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton168->Location = System::Drawing::Point(522, 751);
			this->radioButton168->Name = L"radioButton168";
			this->radioButton168->Size = System::Drawing::Size(14, 13);
			this->radioButton168->TabIndex = 168;
			this->radioButton168->UseVisualStyleBackColor = false;
			this->radioButton168->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton168_CheckedChanged);
			// 
			// radioButton169
			// 
			this->radioButton169->AutoSize = true;
			this->radioButton169->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton169->Location = System::Drawing::Point(536, 678);
			this->radioButton169->Name = L"radioButton169";
			this->radioButton169->Size = System::Drawing::Size(14, 13);
			this->radioButton169->TabIndex = 169;
			this->radioButton169->UseVisualStyleBackColor = false;
			this->radioButton169->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton169_CheckedChanged);
			// 
			// radioButton170
			// 
			this->radioButton170->AutoSize = true;
			this->radioButton170->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton170->Location = System::Drawing::Point(538, 615);
			this->radioButton170->Name = L"radioButton170";
			this->radioButton170->Size = System::Drawing::Size(14, 13);
			this->radioButton170->TabIndex = 170;
			this->radioButton170->UseVisualStyleBackColor = false;
			this->radioButton170->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton170_CheckedChanged);
			// 
			// radioButton171
			// 
			this->radioButton171->AutoSize = true;
			this->radioButton171->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton171->Location = System::Drawing::Point(539, 574);
			this->radioButton171->Name = L"radioButton171";
			this->radioButton171->Size = System::Drawing::Size(14, 13);
			this->radioButton171->TabIndex = 171;
			this->radioButton171->UseVisualStyleBackColor = false;
			this->radioButton171->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton171_CheckedChanged);
			// 
			// radioButton172
			// 
			this->radioButton172->AutoSize = true;
			this->radioButton172->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton172->Location = System::Drawing::Point(537, 544);
			this->radioButton172->Name = L"radioButton172";
			this->radioButton172->Size = System::Drawing::Size(14, 13);
			this->radioButton172->TabIndex = 172;
			this->radioButton172->UseVisualStyleBackColor = false;
			this->radioButton172->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton172_CheckedChanged);
			// 
			// radioButton173
			// 
			this->radioButton173->AutoSize = true;
			this->radioButton173->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton173->Location = System::Drawing::Point(539, 460);
			this->radioButton173->Name = L"radioButton173";
			this->radioButton173->Size = System::Drawing::Size(14, 13);
			this->radioButton173->TabIndex = 173;
			this->radioButton173->UseVisualStyleBackColor = false;
			this->radioButton173->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton173_CheckedChanged);
			// 
			// radioButton174
			// 
			this->radioButton174->AutoSize = true;
			this->radioButton174->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton174->Location = System::Drawing::Point(561, 389);
			this->radioButton174->Name = L"radioButton174";
			this->radioButton174->Size = System::Drawing::Size(14, 13);
			this->radioButton174->TabIndex = 174;
			this->radioButton174->UseVisualStyleBackColor = false;
			this->radioButton174->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton174_CheckedChanged);
			// 
			// radioButton175
			// 
			this->radioButton175->AutoSize = true;
			this->radioButton175->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton175->Location = System::Drawing::Point(581, 371);
			this->radioButton175->Name = L"radioButton175";
			this->radioButton175->Size = System::Drawing::Size(14, 13);
			this->radioButton175->TabIndex = 175;
			this->radioButton175->UseVisualStyleBackColor = false;
			this->radioButton175->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton175_CheckedChanged);
			// 
			// radioButton176
			// 
			this->radioButton176->AutoSize = true;
			this->radioButton176->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton176->Location = System::Drawing::Point(648, 371);
			this->radioButton176->Name = L"radioButton176";
			this->radioButton176->Size = System::Drawing::Size(14, 13);
			this->radioButton176->TabIndex = 176;
			this->radioButton176->UseVisualStyleBackColor = false;
			this->radioButton176->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton176_CheckedChanged);
			// 
			// radioButton177
			// 
			this->radioButton177->AutoSize = true;
			this->radioButton177->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton177->Location = System::Drawing::Point(668, 372);
			this->radioButton177->Name = L"radioButton177";
			this->radioButton177->Size = System::Drawing::Size(14, 13);
			this->radioButton177->TabIndex = 177;
			this->radioButton177->UseVisualStyleBackColor = false;
			this->radioButton177->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton177_CheckedChanged);
			// 
			// radioButton178
			// 
			this->radioButton178->AutoSize = true;
			this->radioButton178->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton178->Location = System::Drawing::Point(743, 385);
			this->radioButton178->Name = L"radioButton178";
			this->radioButton178->Size = System::Drawing::Size(14, 13);
			this->radioButton178->TabIndex = 178;
			this->radioButton178->UseVisualStyleBackColor = false;
			this->radioButton178->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton178_CheckedChanged);
			// 
			// radioButton179
			// 
			this->radioButton179->AutoSize = true;
			this->radioButton179->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton179->Location = System::Drawing::Point(763, 366);
			this->radioButton179->Name = L"radioButton179";
			this->radioButton179->Size = System::Drawing::Size(14, 13);
			this->radioButton179->TabIndex = 179;
			this->radioButton179->UseVisualStyleBackColor = false;
			this->radioButton179->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton179_CheckedChanged);
			// 
			// radioButton180
			// 
			this->radioButton180->AutoSize = true;
			this->radioButton180->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton180->Location = System::Drawing::Point(780, 342);
			this->radioButton180->Name = L"radioButton180";
			this->radioButton180->Size = System::Drawing::Size(14, 13);
			this->radioButton180->TabIndex = 180;
			this->radioButton180->UseVisualStyleBackColor = false;
			this->radioButton180->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton180_CheckedChanged);
			// 
			// radioButton181
			// 
			this->radioButton181->AutoSize = true;
			this->radioButton181->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton181->Location = System::Drawing::Point(781, 319);
			this->radioButton181->Name = L"radioButton181";
			this->radioButton181->Size = System::Drawing::Size(14, 13);
			this->radioButton181->TabIndex = 181;
			this->radioButton181->UseVisualStyleBackColor = false;
			this->radioButton181->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton181_CheckedChanged);
			// 
			// radioButton182
			// 
			this->radioButton182->AutoSize = true;
			this->radioButton182->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton182->Location = System::Drawing::Point(781, 297);
			this->radioButton182->Name = L"radioButton182";
			this->radioButton182->Size = System::Drawing::Size(14, 13);
			this->radioButton182->TabIndex = 182;
			this->radioButton182->UseVisualStyleBackColor = false;
			this->radioButton182->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton182_CheckedChanged);
			// 
			// radioButton183
			// 
			this->radioButton183->AutoSize = true;
			this->radioButton183->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton183->Location = System::Drawing::Point(781, 271);
			this->radioButton183->Name = L"radioButton183";
			this->radioButton183->Size = System::Drawing::Size(14, 13);
			this->radioButton183->TabIndex = 183;
			this->radioButton183->UseVisualStyleBackColor = false;
			this->radioButton183->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton183_CheckedChanged);
			// 
			// radioButton184
			// 
			this->radioButton184->AutoSize = true;
			this->radioButton184->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton184->Location = System::Drawing::Point(781, 248);
			this->radioButton184->Name = L"radioButton184";
			this->radioButton184->Size = System::Drawing::Size(14, 13);
			this->radioButton184->TabIndex = 184;
			this->radioButton184->UseVisualStyleBackColor = false;
			this->radioButton184->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton184_CheckedChanged);
			// 
			// radioButton185
			// 
			this->radioButton185->AutoSize = true;
			this->radioButton185->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton185->Location = System::Drawing::Point(781, 224);
			this->radioButton185->Name = L"radioButton185";
			this->radioButton185->Size = System::Drawing::Size(14, 13);
			this->radioButton185->TabIndex = 185;
			this->radioButton185->UseVisualStyleBackColor = false;
			this->radioButton185->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton185_CheckedChanged);
			// 
			// radioButton186
			// 
			this->radioButton186->AutoSize = true;
			this->radioButton186->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton186->Location = System::Drawing::Point(91, 808);
			this->radioButton186->Name = L"radioButton186";
			this->radioButton186->Size = System::Drawing::Size(14, 13);
			this->radioButton186->TabIndex = 186;
			this->radioButton186->UseVisualStyleBackColor = false;
			this->radioButton186->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton186_CheckedChanged);
			// 
			// radioButton187
			// 
			this->radioButton187->AutoSize = true;
			this->radioButton187->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton187->Location = System::Drawing::Point(91, 786);
			this->radioButton187->Name = L"radioButton187";
			this->radioButton187->Size = System::Drawing::Size(14, 13);
			this->radioButton187->TabIndex = 187;
			this->radioButton187->UseVisualStyleBackColor = false;
			this->radioButton187->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton187_CheckedChanged);
			// 
			// radioButton188
			// 
			this->radioButton188->AutoSize = true;
			this->radioButton188->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton188->Location = System::Drawing::Point(91, 761);
			this->radioButton188->Name = L"radioButton188";
			this->radioButton188->Size = System::Drawing::Size(14, 13);
			this->radioButton188->TabIndex = 188;
			this->radioButton188->UseVisualStyleBackColor = false;
			this->radioButton188->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton188_CheckedChanged);
			// 
			// radioButton189
			// 
			this->radioButton189->AutoSize = true;
			this->radioButton189->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton189->Location = System::Drawing::Point(91, 740);
			this->radioButton189->Name = L"radioButton189";
			this->radioButton189->Size = System::Drawing::Size(14, 13);
			this->radioButton189->TabIndex = 189;
			this->radioButton189->UseVisualStyleBackColor = false;
			this->radioButton189->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton189_CheckedChanged);
			// 
			// radioButton190
			// 
			this->radioButton190->AutoSize = true;
			this->radioButton190->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton190->Location = System::Drawing::Point(91, 716);
			this->radioButton190->Name = L"radioButton190";
			this->radioButton190->Size = System::Drawing::Size(14, 13);
			this->radioButton190->TabIndex = 190;
			this->radioButton190->UseVisualStyleBackColor = false;
			this->radioButton190->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton190_CheckedChanged);
			// 
			// radioButton191
			// 
			this->radioButton191->AutoSize = true;
			this->radioButton191->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton191->Location = System::Drawing::Point(91, 692);
			this->radioButton191->Name = L"radioButton191";
			this->radioButton191->Size = System::Drawing::Size(14, 13);
			this->radioButton191->TabIndex = 191;
			this->radioButton191->UseVisualStyleBackColor = false;
			this->radioButton191->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton191_CheckedChanged);
			// 
			// radioButton192
			// 
			this->radioButton192->AutoSize = true;
			this->radioButton192->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton192->Location = System::Drawing::Point(91, 669);
			this->radioButton192->Name = L"radioButton192";
			this->radioButton192->Size = System::Drawing::Size(14, 13);
			this->radioButton192->TabIndex = 192;
			this->radioButton192->UseVisualStyleBackColor = false;
			this->radioButton192->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton192_CheckedChanged);
			// 
			// radioButton193
			// 
			this->radioButton193->AutoSize = true;
			this->radioButton193->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton193->Location = System::Drawing::Point(91, 645);
			this->radioButton193->Name = L"radioButton193";
			this->radioButton193->Size = System::Drawing::Size(14, 13);
			this->radioButton193->TabIndex = 193;
			this->radioButton193->UseVisualStyleBackColor = false;
			this->radioButton193->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton193_CheckedChanged);
			// 
			// radioButton194
			// 
			this->radioButton194->AutoSize = true;
			this->radioButton194->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton194->Location = System::Drawing::Point(102, 633);
			this->radioButton194->Name = L"radioButton194";
			this->radioButton194->Size = System::Drawing::Size(14, 13);
			this->radioButton194->TabIndex = 194;
			this->radioButton194->UseVisualStyleBackColor = false;
			this->radioButton194->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton194_CheckedChanged);
			// 
			// radioButton195
			// 
			this->radioButton195->AutoSize = true;
			this->radioButton195->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton195->Location = System::Drawing::Point(128, 633);
			this->radioButton195->Name = L"radioButton195";
			this->radioButton195->Size = System::Drawing::Size(14, 13);
			this->radioButton195->TabIndex = 195;
			this->radioButton195->UseVisualStyleBackColor = false;
			this->radioButton195->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton195_CheckedChanged);
			// 
			// radioButton196
			// 
			this->radioButton196->AutoSize = true;
			this->radioButton196->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton196->Location = System::Drawing::Point(159, 633);
			this->radioButton196->Name = L"radioButton196";
			this->radioButton196->Size = System::Drawing::Size(14, 13);
			this->radioButton196->TabIndex = 196;
			this->radioButton196->UseVisualStyleBackColor = false;
			this->radioButton196->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton196_CheckedChanged);
			// 
			// radioButton197
			// 
			this->radioButton197->AutoSize = true;
			this->radioButton197->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton197->Location = System::Drawing::Point(187, 633);
			this->radioButton197->Name = L"radioButton197";
			this->radioButton197->Size = System::Drawing::Size(14, 13);
			this->radioButton197->TabIndex = 197;
			this->radioButton197->UseVisualStyleBackColor = false;
			this->radioButton197->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton197_CheckedChanged);
			// 
			// radioButton198
			// 
			this->radioButton198->AutoSize = true;
			this->radioButton198->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton198->Location = System::Drawing::Point(213, 633);
			this->radioButton198->Name = L"radioButton198";
			this->radioButton198->Size = System::Drawing::Size(14, 13);
			this->radioButton198->TabIndex = 198;
			this->radioButton198->UseVisualStyleBackColor = false;
			this->radioButton198->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton198_CheckedChanged);
			// 
			// radioButton199
			// 
			this->radioButton199->AutoSize = true;
			this->radioButton199->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton199->Location = System::Drawing::Point(242, 633);
			this->radioButton199->Name = L"radioButton199";
			this->radioButton199->Size = System::Drawing::Size(14, 13);
			this->radioButton199->TabIndex = 199;
			this->radioButton199->UseVisualStyleBackColor = false;
			this->radioButton199->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton199_CheckedChanged);
			// 
			// radioButton200
			// 
			this->radioButton200->AutoSize = true;
			this->radioButton200->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton200->Location = System::Drawing::Point(275, 628);
			this->radioButton200->Name = L"radioButton200";
			this->radioButton200->Size = System::Drawing::Size(14, 13);
			this->radioButton200->TabIndex = 200;
			this->radioButton200->UseVisualStyleBackColor = false;
			this->radioButton200->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton200_CheckedChanged);
			// 
			// radioButton201
			// 
			this->radioButton201->AutoSize = true;
			this->radioButton201->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton201->Location = System::Drawing::Point(440, 593);
			this->radioButton201->Name = L"radioButton201";
			this->radioButton201->Size = System::Drawing::Size(14, 13);
			this->radioButton201->TabIndex = 201;
			this->radioButton201->UseVisualStyleBackColor = false;
			this->radioButton201->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton201_CheckedChanged);
			// 
			// radioButton202
			// 
			this->radioButton202->AutoSize = true;
			this->radioButton202->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton202->Location = System::Drawing::Point(473, 596);
			this->radioButton202->Name = L"radioButton202";
			this->radioButton202->Size = System::Drawing::Size(14, 13);
			this->radioButton202->TabIndex = 202;
			this->radioButton202->UseVisualStyleBackColor = false;
			this->radioButton202->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton202_CheckedChanged);
			// 
			// radioButton203
			// 
			this->radioButton203->AutoSize = true;
			this->radioButton203->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton203->Location = System::Drawing::Point(506, 591);
			this->radioButton203->Name = L"radioButton203";
			this->radioButton203->Size = System::Drawing::Size(14, 13);
			this->radioButton203->TabIndex = 203;
			this->radioButton203->UseVisualStyleBackColor = false;
			this->radioButton203->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton203_CheckedChanged);
			// 
			// radioButton204
			// 
			this->radioButton204->AutoSize = true;
			this->radioButton204->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton204->Location = System::Drawing::Point(601, 605);
			this->radioButton204->Name = L"radioButton204";
			this->radioButton204->Size = System::Drawing::Size(14, 13);
			this->radioButton204->TabIndex = 204;
			this->radioButton204->UseVisualStyleBackColor = false;
			this->radioButton204->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton204_CheckedChanged);
			// 
			// radioButton205
			// 
			this->radioButton205->AutoSize = true;
			this->radioButton205->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton205->Location = System::Drawing::Point(638, 564);
			this->radioButton205->Name = L"radioButton205";
			this->radioButton205->Size = System::Drawing::Size(14, 13);
			this->radioButton205->TabIndex = 205;
			this->radioButton205->UseVisualStyleBackColor = false;
			this->radioButton205->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton205_CheckedChanged);
			// 
			// radioButton206
			// 
			this->radioButton206->AutoSize = true;
			this->radioButton206->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton206->Location = System::Drawing::Point(754, 601);
			this->radioButton206->Name = L"radioButton206";
			this->radioButton206->Size = System::Drawing::Size(14, 13);
			this->radioButton206->TabIndex = 206;
			this->radioButton206->UseVisualStyleBackColor = false;
			this->radioButton206->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton206_CheckedChanged);
			// 
			// radioButton207
			// 
			this->radioButton207->AutoSize = true;
			this->radioButton207->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton207->Location = System::Drawing::Point(74, 551);
			this->radioButton207->Name = L"radioButton207";
			this->radioButton207->Size = System::Drawing::Size(14, 13);
			this->radioButton207->TabIndex = 207;
			this->radioButton207->UseVisualStyleBackColor = false;
			this->radioButton207->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton207_CheckedChanged);
			// 
			// radioButton208
			// 
			this->radioButton208->AutoSize = true;
			this->radioButton208->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton208->Location = System::Drawing::Point(107, 551);
			this->radioButton208->Name = L"radioButton208";
			this->radioButton208->Size = System::Drawing::Size(14, 13);
			this->radioButton208->TabIndex = 208;
			this->radioButton208->UseVisualStyleBackColor = false;
			this->radioButton208->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton208_CheckedChanged);
			// 
			// radioButton209
			// 
			this->radioButton209->AutoSize = true;
			this->radioButton209->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton209->Location = System::Drawing::Point(136, 551);
			this->radioButton209->Name = L"radioButton209";
			this->radioButton209->Size = System::Drawing::Size(14, 13);
			this->radioButton209->TabIndex = 209;
			this->radioButton209->UseVisualStyleBackColor = false;
			this->radioButton209->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton209_CheckedChanged);
			// 
			// radioButton210
			// 
			this->radioButton210->AutoSize = true;
			this->radioButton210->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton210->Location = System::Drawing::Point(169, 509);
			this->radioButton210->Name = L"radioButton210";
			this->radioButton210->Size = System::Drawing::Size(14, 13);
			this->radioButton210->TabIndex = 210;
			this->radioButton210->UseVisualStyleBackColor = false;
			this->radioButton210->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton210_CheckedChanged);
			// 
			// radioButton211
			// 
			this->radioButton211->AutoSize = true;
			this->radioButton211->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton211->Location = System::Drawing::Point(170, 531);
			this->radioButton211->Name = L"radioButton211";
			this->radioButton211->Size = System::Drawing::Size(14, 13);
			this->radioButton211->TabIndex = 211;
			this->radioButton211->UseVisualStyleBackColor = false;
			this->radioButton211->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton211_CheckedChanged);
			// 
			// radioButton212
			// 
			this->radioButton212->AutoSize = true;
			this->radioButton212->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton212->Location = System::Drawing::Point(172, 551);
			this->radioButton212->Name = L"radioButton212";
			this->radioButton212->Size = System::Drawing::Size(14, 13);
			this->radioButton212->TabIndex = 212;
			this->radioButton212->UseVisualStyleBackColor = false;
			this->radioButton212->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton212_CheckedChanged);
			// 
			// radioButton213
			// 
			this->radioButton213->AutoSize = true;
			this->radioButton213->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton213->Location = System::Drawing::Point(192, 557);
			this->radioButton213->Name = L"radioButton213";
			this->radioButton213->Size = System::Drawing::Size(14, 13);
			this->radioButton213->TabIndex = 213;
			this->radioButton213->UseVisualStyleBackColor = false;
			this->radioButton213->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton213_CheckedChanged);
			// 
			// radioButton214
			// 
			this->radioButton214->AutoSize = true;
			this->radioButton214->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton214->Location = System::Drawing::Point(216, 557);
			this->radioButton214->Name = L"radioButton214";
			this->radioButton214->Size = System::Drawing::Size(14, 13);
			this->radioButton214->TabIndex = 214;
			this->radioButton214->UseVisualStyleBackColor = false;
			this->radioButton214->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton214_CheckedChanged);
			// 
			// radioButton215
			// 
			this->radioButton215->AutoSize = true;
			this->radioButton215->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton215->Location = System::Drawing::Point(243, 557);
			this->radioButton215->Name = L"radioButton215";
			this->radioButton215->Size = System::Drawing::Size(14, 13);
			this->radioButton215->TabIndex = 215;
			this->radioButton215->UseVisualStyleBackColor = false;
			this->radioButton215->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton215_CheckedChanged);
			// 
			// radioButton216
			// 
			this->radioButton216->AutoSize = true;
			this->radioButton216->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton216->Location = System::Drawing::Point(332, 557);
			this->radioButton216->Name = L"radioButton216";
			this->radioButton216->Size = System::Drawing::Size(14, 13);
			this->radioButton216->TabIndex = 216;
			this->radioButton216->UseVisualStyleBackColor = false;
			this->radioButton216->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton216_CheckedChanged);
			// 
			// radioButton217
			// 
			this->radioButton217->AutoSize = true;
			this->radioButton217->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton217->Location = System::Drawing::Point(352, 557);
			this->radioButton217->Name = L"radioButton217";
			this->radioButton217->Size = System::Drawing::Size(14, 13);
			this->radioButton217->TabIndex = 217;
			this->radioButton217->UseVisualStyleBackColor = false;
			this->radioButton217->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton217_CheckedChanged);
			// 
			// radioButton218
			// 
			this->radioButton218->AutoSize = true;
			this->radioButton218->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton218->Location = System::Drawing::Point(492, 559);
			this->radioButton218->Name = L"radioButton218";
			this->radioButton218->Size = System::Drawing::Size(14, 13);
			this->radioButton218->TabIndex = 218;
			this->radioButton218->UseVisualStyleBackColor = false;
			this->radioButton218->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton218_CheckedChanged);
			// 
			// radioButton219
			// 
			this->radioButton219->AutoSize = true;
			this->radioButton219->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton219->Location = System::Drawing::Point(568, 559);
			this->radioButton219->Name = L"radioButton219";
			this->radioButton219->Size = System::Drawing::Size(14, 13);
			this->radioButton219->TabIndex = 219;
			this->radioButton219->UseVisualStyleBackColor = false;
			this->radioButton219->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton219_CheckedChanged);
			// 
			// radioButton220
			// 
			this->radioButton220->AutoSize = true;
			this->radioButton220->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton220->Location = System::Drawing::Point(578, 467);
			this->radioButton220->Name = L"radioButton220";
			this->radioButton220->Size = System::Drawing::Size(14, 13);
			this->radioButton220->TabIndex = 220;
			this->radioButton220->UseVisualStyleBackColor = false;
			this->radioButton220->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton220_CheckedChanged);
			// 
			// radioButton221
			// 
			this->radioButton221->AutoSize = true;
			this->radioButton221->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton221->Location = System::Drawing::Point(591, 446);
			this->radioButton221->Name = L"radioButton221";
			this->radioButton221->Size = System::Drawing::Size(14, 13);
			this->radioButton221->TabIndex = 221;
			this->radioButton221->UseVisualStyleBackColor = false;
			this->radioButton221->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton221_CheckedChanged);
			// 
			// radioButton222
			// 
			this->radioButton222->AutoSize = true;
			this->radioButton222->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton222->Location = System::Drawing::Point(643, 395);
			this->radioButton222->Name = L"radioButton222";
			this->radioButton222->Size = System::Drawing::Size(14, 13);
			this->radioButton222->TabIndex = 222;
			this->radioButton222->UseVisualStyleBackColor = false;
			this->radioButton222->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton222_CheckedChanged);
			// 
			// radioButton223
			// 
			this->radioButton223->AutoSize = true;
			this->radioButton223->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton223->Location = System::Drawing::Point(692, 345);
			this->radioButton223->Name = L"radioButton223";
			this->radioButton223->Size = System::Drawing::Size(14, 13);
			this->radioButton223->TabIndex = 223;
			this->radioButton223->UseVisualStyleBackColor = false;
			this->radioButton223->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton223_CheckedChanged);
			// 
			// radioButton224
			// 
			this->radioButton224->AutoSize = true;
			this->radioButton224->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton224->Location = System::Drawing::Point(710, 326);
			this->radioButton224->Name = L"radioButton224";
			this->radioButton224->Size = System::Drawing::Size(14, 13);
			this->radioButton224->TabIndex = 224;
			this->radioButton224->UseVisualStyleBackColor = false;
			this->radioButton224->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton224_CheckedChanged);
			// 
			// radioButton225
			// 
			this->radioButton225->AutoSize = true;
			this->radioButton225->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton225->Location = System::Drawing::Point(710, 303);
			this->radioButton225->Name = L"radioButton225";
			this->radioButton225->Size = System::Drawing::Size(14, 13);
			this->radioButton225->TabIndex = 225;
			this->radioButton225->UseVisualStyleBackColor = false;
			this->radioButton225->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton225_CheckedChanged);
			// 
			// radioButton226
			// 
			this->radioButton226->AutoSize = true;
			this->radioButton226->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton226->Location = System::Drawing::Point(710, 284);
			this->radioButton226->Name = L"radioButton226";
			this->radioButton226->Size = System::Drawing::Size(14, 13);
			this->radioButton226->TabIndex = 226;
			this->radioButton226->UseVisualStyleBackColor = false;
			this->radioButton226->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton226_CheckedChanged);
			// 
			// radioButton227
			// 
			this->radioButton227->AutoSize = true;
			this->radioButton227->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton227->Location = System::Drawing::Point(710, 265);
			this->radioButton227->Name = L"radioButton227";
			this->radioButton227->Size = System::Drawing::Size(14, 13);
			this->radioButton227->TabIndex = 227;
			this->radioButton227->UseVisualStyleBackColor = false;
			this->radioButton227->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton227_CheckedChanged);
			// 
			// radioButton228
			// 
			this->radioButton228->AutoSize = true;
			this->radioButton228->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton228->Location = System::Drawing::Point(710, 245);
			this->radioButton228->Name = L"radioButton228";
			this->radioButton228->Size = System::Drawing::Size(14, 13);
			this->radioButton228->TabIndex = 228;
			this->radioButton228->UseVisualStyleBackColor = false;
			this->radioButton228->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton228_CheckedChanged);
			// 
			// radioButton229
			// 
			this->radioButton229->AutoSize = true;
			this->radioButton229->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton229->Location = System::Drawing::Point(710, 224);
			this->radioButton229->Name = L"radioButton229";
			this->radioButton229->Size = System::Drawing::Size(14, 13);
			this->radioButton229->TabIndex = 229;
			this->radioButton229->UseVisualStyleBackColor = false;
			this->radioButton229->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton229_CheckedChanged);
			// 
			// radioButton230
			// 
			this->radioButton230->AutoSize = true;
			this->radioButton230->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton230->Location = System::Drawing::Point(78, 177);
			this->radioButton230->Name = L"radioButton230";
			this->radioButton230->Size = System::Drawing::Size(14, 13);
			this->radioButton230->TabIndex = 230;
			this->radioButton230->UseVisualStyleBackColor = false;
			this->radioButton230->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton230_CheckedChanged);
			// 
			// radioButton231
			// 
			this->radioButton231->AutoSize = true;
			this->radioButton231->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton231->Location = System::Drawing::Point(102, 177);
			this->radioButton231->Name = L"radioButton231";
			this->radioButton231->Size = System::Drawing::Size(14, 13);
			this->radioButton231->TabIndex = 231;
			this->radioButton231->UseVisualStyleBackColor = false;
			this->radioButton231->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton231_CheckedChanged);
			// 
			// radioButton232
			// 
			this->radioButton232->AutoSize = true;
			this->radioButton232->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton232->Location = System::Drawing::Point(125, 177);
			this->radioButton232->Name = L"radioButton232";
			this->radioButton232->Size = System::Drawing::Size(14, 13);
			this->radioButton232->TabIndex = 232;
			this->radioButton232->UseVisualStyleBackColor = false;
			this->radioButton232->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton232_CheckedChanged);
			// 
			// radioButton233
			// 
			this->radioButton233->AutoSize = true;
			this->radioButton233->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton233->Location = System::Drawing::Point(153, 177);
			this->radioButton233->Name = L"radioButton233";
			this->radioButton233->Size = System::Drawing::Size(14, 13);
			this->radioButton233->TabIndex = 233;
			this->radioButton233->UseVisualStyleBackColor = false;
			this->radioButton233->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton233_CheckedChanged);
			// 
			// radioButton234
			// 
			this->radioButton234->AutoSize = true;
			this->radioButton234->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton234->Location = System::Drawing::Point(175, 177);
			this->radioButton234->Name = L"radioButton234";
			this->radioButton234->Size = System::Drawing::Size(14, 13);
			this->radioButton234->TabIndex = 234;
			this->radioButton234->UseVisualStyleBackColor = false;
			this->radioButton234->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton234_CheckedChanged);
			// 
			// radioButton235
			// 
			this->radioButton235->AutoSize = true;
			this->radioButton235->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton235->Location = System::Drawing::Point(199, 177);
			this->radioButton235->Name = L"radioButton235";
			this->radioButton235->Size = System::Drawing::Size(14, 13);
			this->radioButton235->TabIndex = 235;
			this->radioButton235->UseVisualStyleBackColor = false;
			this->radioButton235->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton235_CheckedChanged);
			// 
			// radioButton236
			// 
			this->radioButton236->AutoSize = true;
			this->radioButton236->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton236->Location = System::Drawing::Point(219, 177);
			this->radioButton236->Name = L"radioButton236";
			this->radioButton236->Size = System::Drawing::Size(14, 13);
			this->radioButton236->TabIndex = 236;
			this->radioButton236->UseVisualStyleBackColor = false;
			this->radioButton236->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton236_CheckedChanged);
			// 
			// radioButton237
			// 
			this->radioButton237->AutoSize = true;
			this->radioButton237->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton237->Location = System::Drawing::Point(242, 101);
			this->radioButton237->Name = L"radioButton237";
			this->radioButton237->Size = System::Drawing::Size(14, 13);
			this->radioButton237->TabIndex = 237;
			this->radioButton237->UseVisualStyleBackColor = false;
			this->radioButton237->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton237_CheckedChanged);
			// 
			// radioButton238
			// 
			this->radioButton238->AutoSize = true;
			this->radioButton238->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton238->Location = System::Drawing::Point(242, 125);
			this->radioButton238->Name = L"radioButton238";
			this->radioButton238->Size = System::Drawing::Size(14, 13);
			this->radioButton238->TabIndex = 238;
			this->radioButton238->UseVisualStyleBackColor = false;
			this->radioButton238->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton238_CheckedChanged);
			// 
			// radioButton239
			// 
			this->radioButton239->AutoSize = true;
			this->radioButton239->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton239->Location = System::Drawing::Point(242, 152);
			this->radioButton239->Name = L"radioButton239";
			this->radioButton239->Size = System::Drawing::Size(14, 13);
			this->radioButton239->TabIndex = 239;
			this->radioButton239->UseVisualStyleBackColor = false;
			this->radioButton239->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton239_CheckedChanged);
			// 
			// radioButton240
			// 
			this->radioButton240->AutoSize = true;
			this->radioButton240->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton240->Location = System::Drawing::Point(242, 179);
			this->radioButton240->Name = L"radioButton240";
			this->radioButton240->Size = System::Drawing::Size(14, 13);
			this->radioButton240->TabIndex = 240;
			this->radioButton240->UseVisualStyleBackColor = false;
			this->radioButton240->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton240_CheckedChanged);
			// 
			// radioButton241
			// 
			this->radioButton241->AutoSize = true;
			this->radioButton241->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton241->Location = System::Drawing::Point(258, 201);
			this->radioButton241->Name = L"radioButton241";
			this->radioButton241->Size = System::Drawing::Size(14, 13);
			this->radioButton241->TabIndex = 241;
			this->radioButton241->UseVisualStyleBackColor = false;
			this->radioButton241->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton241_CheckedChanged);
			// 
			// radioButton242
			// 
			this->radioButton242->AutoSize = true;
			this->radioButton242->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton242->Location = System::Drawing::Point(271, 219);
			this->radioButton242->Name = L"radioButton242";
			this->radioButton242->Size = System::Drawing::Size(14, 13);
			this->radioButton242->TabIndex = 242;
			this->radioButton242->UseVisualStyleBackColor = false;
			this->radioButton242->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton242_CheckedChanged);
			// 
			// radioButton243
			// 
			this->radioButton243->AutoSize = true;
			this->radioButton243->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton243->Location = System::Drawing::Point(285, 235);
			this->radioButton243->Name = L"radioButton243";
			this->radioButton243->Size = System::Drawing::Size(14, 13);
			this->radioButton243->TabIndex = 243;
			this->radioButton243->UseVisualStyleBackColor = false;
			this->radioButton243->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton243_CheckedChanged);
			// 
			// radioButton244
			// 
			this->radioButton244->AutoSize = true;
			this->radioButton244->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton244->Location = System::Drawing::Point(296, 251);
			this->radioButton244->Name = L"radioButton244";
			this->radioButton244->Size = System::Drawing::Size(14, 13);
			this->radioButton244->TabIndex = 244;
			this->radioButton244->UseVisualStyleBackColor = false;
			this->radioButton244->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton244_CheckedChanged);
			// 
			// radioButton245
			// 
			this->radioButton245->AutoSize = true;
			this->radioButton245->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton245->Location = System::Drawing::Point(311, 270);
			this->radioButton245->Name = L"radioButton245";
			this->radioButton245->Size = System::Drawing::Size(14, 13);
			this->radioButton245->TabIndex = 245;
			this->radioButton245->UseVisualStyleBackColor = false;
			this->radioButton245->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton245_CheckedChanged);
			// 
			// radioButton246
			// 
			this->radioButton246->AutoSize = true;
			this->radioButton246->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton246->Location = System::Drawing::Point(322, 288);
			this->radioButton246->Name = L"radioButton246";
			this->radioButton246->Size = System::Drawing::Size(14, 13);
			this->radioButton246->TabIndex = 246;
			this->radioButton246->UseVisualStyleBackColor = false;
			this->radioButton246->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton246_CheckedChanged);
			// 
			// radioButton247
			// 
			this->radioButton247->AutoSize = true;
			this->radioButton247->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton247->Location = System::Drawing::Point(339, 309);
			this->radioButton247->Name = L"radioButton247";
			this->radioButton247->Size = System::Drawing::Size(14, 13);
			this->radioButton247->TabIndex = 247;
			this->radioButton247->UseVisualStyleBackColor = false;
			this->radioButton247->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton247_CheckedChanged);
			// 
			// radioButton248
			// 
			this->radioButton248->AutoSize = true;
			this->radioButton248->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton248->Location = System::Drawing::Point(353, 327);
			this->radioButton248->Name = L"radioButton248";
			this->radioButton248->Size = System::Drawing::Size(14, 13);
			this->radioButton248->TabIndex = 248;
			this->radioButton248->UseVisualStyleBackColor = false;
			this->radioButton248->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton248_CheckedChanged);
			// 
			// radioButton249
			// 
			this->radioButton249->AutoSize = true;
			this->radioButton249->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton249->Location = System::Drawing::Point(364, 345);
			this->radioButton249->Name = L"radioButton249";
			this->radioButton249->Size = System::Drawing::Size(14, 13);
			this->radioButton249->TabIndex = 249;
			this->radioButton249->UseVisualStyleBackColor = false;
			this->radioButton249->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton249_CheckedChanged);
			// 
			// radioButton250
			// 
			this->radioButton250->AutoSize = true;
			this->radioButton250->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton250->Location = System::Drawing::Point(366, 426);
			this->radioButton250->Name = L"radioButton250";
			this->radioButton250->Size = System::Drawing::Size(14, 13);
			this->radioButton250->TabIndex = 250;
			this->radioButton250->UseVisualStyleBackColor = false;
			this->radioButton250->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton250_CheckedChanged);
			// 
			// radioButton251
			// 
			this->radioButton251->AutoSize = true;
			this->radioButton251->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton251->Location = System::Drawing::Point(370, 676);
			this->radioButton251->Name = L"radioButton251";
			this->radioButton251->Size = System::Drawing::Size(14, 13);
			this->radioButton251->TabIndex = 251;
			this->radioButton251->UseVisualStyleBackColor = false;
			this->radioButton251->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton251_CheckedChanged);
			// 
			// radioButton252
			// 
			this->radioButton252->AutoSize = true;
			this->radioButton252->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton252->Location = System::Drawing::Point(390, 689);
			this->radioButton252->Name = L"radioButton252";
			this->radioButton252->Size = System::Drawing::Size(14, 13);
			this->radioButton252->TabIndex = 252;
			this->radioButton252->UseVisualStyleBackColor = false;
			this->radioButton252->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton252_CheckedChanged);
			// 
			// radioButton253
			// 
			this->radioButton253->AutoSize = true;
			this->radioButton253->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton253->Location = System::Drawing::Point(435, 728);
			this->radioButton253->Name = L"radioButton253";
			this->radioButton253->Size = System::Drawing::Size(14, 13);
			this->radioButton253->TabIndex = 253;
			this->radioButton253->UseVisualStyleBackColor = false;
			this->radioButton253->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton253_CheckedChanged);
			// 
			// radioButton254
			// 
			this->radioButton254->AutoSize = true;
			this->radioButton254->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton254->Location = System::Drawing::Point(458, 745);
			this->radioButton254->Name = L"radioButton254";
			this->radioButton254->Size = System::Drawing::Size(14, 13);
			this->radioButton254->TabIndex = 254;
			this->radioButton254->UseVisualStyleBackColor = false;
			this->radioButton254->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton254_CheckedChanged);
			// 
			// radioButton255
			// 
			this->radioButton255->AutoSize = true;
			this->radioButton255->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton255->Location = System::Drawing::Point(561, 808);
			this->radioButton255->Name = L"radioButton255";
			this->radioButton255->Size = System::Drawing::Size(14, 13);
			this->radioButton255->TabIndex = 255;
			this->radioButton255->UseVisualStyleBackColor = false;
			this->radioButton255->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton255_CheckedChanged);
			// 
			// radioButton256
			// 
			this->radioButton256->AutoSize = true;
			this->radioButton256->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton256->Location = System::Drawing::Point(602, 807);
			this->radioButton256->Name = L"radioButton256";
			this->radioButton256->Size = System::Drawing::Size(14, 13);
			this->radioButton256->TabIndex = 256;
			this->radioButton256->UseVisualStyleBackColor = false;
			this->radioButton256->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton256_CheckedChanged);
			// 
			// radioButton257
			// 
			this->radioButton257->AutoSize = true;
			this->radioButton257->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton257->Location = System::Drawing::Point(656, 807);
			this->radioButton257->Name = L"radioButton257";
			this->radioButton257->Size = System::Drawing::Size(14, 13);
			this->radioButton257->TabIndex = 257;
			this->radioButton257->UseVisualStyleBackColor = false;
			this->radioButton257->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton257_CheckedChanged);
			// 
			// radioButton258
			// 
			this->radioButton258->AutoSize = true;
			this->radioButton258->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton258->Location = System::Drawing::Point(696, 806);
			this->radioButton258->Name = L"radioButton258";
			this->radioButton258->Size = System::Drawing::Size(14, 13);
			this->radioButton258->TabIndex = 258;
			this->radioButton258->UseVisualStyleBackColor = false;
			this->radioButton258->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton258_CheckedChanged);
			// 
			// radioButton259
			// 
			this->radioButton259->AutoSize = true;
			this->radioButton259->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton259->Location = System::Drawing::Point(741, 809);
			this->radioButton259->Name = L"radioButton259";
			this->radioButton259->Size = System::Drawing::Size(14, 13);
			this->radioButton259->TabIndex = 259;
			this->radioButton259->UseVisualStyleBackColor = false;
			this->radioButton259->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton259_CheckedChanged);
			// 
			// radioButton260
			// 
			this->radioButton260->AutoSize = true;
			this->radioButton260->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton260->Location = System::Drawing::Point(781, 809);
			this->radioButton260->Name = L"radioButton260";
			this->radioButton260->Size = System::Drawing::Size(14, 13);
			this->radioButton260->TabIndex = 260;
			this->radioButton260->UseVisualStyleBackColor = false;
			this->radioButton260->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton260_CheckedChanged);
			// 
			// radioButton261
			// 
			this->radioButton261->AutoSize = true;
			this->radioButton261->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton261->Location = System::Drawing::Point(812, 807);
			this->radioButton261->Name = L"radioButton261";
			this->radioButton261->Size = System::Drawing::Size(14, 13);
			this->radioButton261->TabIndex = 261;
			this->radioButton261->UseVisualStyleBackColor = false;
			this->radioButton261->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton261_CheckedChanged);
			// 
			// radioButton262
			// 
			this->radioButton262->AutoSize = true;
			this->radioButton262->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton262->Location = System::Drawing::Point(860, 807);
			this->radioButton262->Name = L"radioButton262";
			this->radioButton262->Size = System::Drawing::Size(14, 13);
			this->radioButton262->TabIndex = 262;
			this->radioButton262->UseVisualStyleBackColor = false;
			this->radioButton262->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton262_CheckedChanged);
			// 
			// radioButton263
			// 
			this->radioButton263->AutoSize = true;
			this->radioButton263->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton263->Location = System::Drawing::Point(116, 732);
			this->radioButton263->Name = L"radioButton263";
			this->radioButton263->Size = System::Drawing::Size(14, 13);
			this->radioButton263->TabIndex = 263;
			this->radioButton263->UseVisualStyleBackColor = false;
			this->radioButton263->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton263_CheckedChanged);
			// 
			// radioButton264
			// 
			this->radioButton264->AutoSize = true;
			this->radioButton264->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton264->Location = System::Drawing::Point(116, 713);
			this->radioButton264->Name = L"radioButton264";
			this->radioButton264->Size = System::Drawing::Size(14, 13);
			this->radioButton264->TabIndex = 264;
			this->radioButton264->UseVisualStyleBackColor = false;
			this->radioButton264->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton264_CheckedChanged);
			// 
			// radioButton265
			// 
			this->radioButton265->AutoSize = true;
			this->radioButton265->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton265->Location = System::Drawing::Point(116, 694);
			this->radioButton265->Name = L"radioButton265";
			this->radioButton265->Size = System::Drawing::Size(14, 13);
			this->radioButton265->TabIndex = 265;
			this->radioButton265->UseVisualStyleBackColor = false;
			this->radioButton265->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton265_CheckedChanged);
			// 
			// radioButton266
			// 
			this->radioButton266->AutoSize = true;
			this->radioButton266->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton266->Location = System::Drawing::Point(148, 695);
			this->radioButton266->Name = L"radioButton266";
			this->radioButton266->Size = System::Drawing::Size(14, 13);
			this->radioButton266->TabIndex = 266;
			this->radioButton266->UseVisualStyleBackColor = false;
			this->radioButton266->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton266_CheckedChanged);
			// 
			// radioButton267
			// 
			this->radioButton267->AutoSize = true;
			this->radioButton267->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton267->Location = System::Drawing::Point(175, 695);
			this->radioButton267->Name = L"radioButton267";
			this->radioButton267->Size = System::Drawing::Size(14, 13);
			this->radioButton267->TabIndex = 267;
			this->radioButton267->UseVisualStyleBackColor = false;
			this->radioButton267->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton267_CheckedChanged);
			// 
			// radioButton268
			// 
			this->radioButton268->AutoSize = true;
			this->radioButton268->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton268->Location = System::Drawing::Point(199, 695);
			this->radioButton268->Name = L"radioButton268";
			this->radioButton268->Size = System::Drawing::Size(14, 13);
			this->radioButton268->TabIndex = 268;
			this->radioButton268->UseVisualStyleBackColor = false;
			this->radioButton268->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton268_CheckedChanged);
			// 
			// radioButton269
			// 
			this->radioButton269->AutoSize = true;
			this->radioButton269->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton269->Location = System::Drawing::Point(226, 695);
			this->radioButton269->Name = L"radioButton269";
			this->radioButton269->Size = System::Drawing::Size(14, 13);
			this->radioButton269->TabIndex = 269;
			this->radioButton269->UseVisualStyleBackColor = false;
			this->radioButton269->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton269_CheckedChanged);
			// 
			// radioButton270
			// 
			this->radioButton270->AutoSize = true;
			this->radioButton270->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton270->Location = System::Drawing::Point(610, 467);
			this->radioButton270->Name = L"radioButton270";
			this->radioButton270->Size = System::Drawing::Size(14, 13);
			this->radioButton270->TabIndex = 270;
			this->radioButton270->UseVisualStyleBackColor = false;
			this->radioButton270->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton270_CheckedChanged);
			// 
			// radioButton271
			// 
			this->radioButton271->AutoSize = true;
			this->radioButton271->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton271->Location = System::Drawing::Point(656, 467);
			this->radioButton271->Name = L"radioButton271";
			this->radioButton271->Size = System::Drawing::Size(14, 13);
			this->radioButton271->TabIndex = 271;
			this->radioButton271->UseVisualStyleBackColor = false;
			this->radioButton271->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton271_CheckedChanged);
			// 
			// radioButton272
			// 
			this->radioButton272->AutoSize = true;
			this->radioButton272->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton272->Location = System::Drawing::Point(707, 454);
			this->radioButton272->Name = L"radioButton272";
			this->radioButton272->Size = System::Drawing::Size(14, 13);
			this->radioButton272->TabIndex = 272;
			this->radioButton272->UseVisualStyleBackColor = false;
			this->radioButton272->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton272_CheckedChanged);
			// 
			// radioButton273
			// 
			this->radioButton273->AutoSize = true;
			this->radioButton273->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton273->Location = System::Drawing::Point(738, 454);
			this->radioButton273->Name = L"radioButton273";
			this->radioButton273->Size = System::Drawing::Size(14, 13);
			this->radioButton273->TabIndex = 273;
			this->radioButton273->UseVisualStyleBackColor = false;
			this->radioButton273->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton273_CheckedChanged);
			// 
			// radioButton274
			// 
			this->radioButton274->AutoSize = true;
			this->radioButton274->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton274->Location = System::Drawing::Point(768, 454);
			this->radioButton274->Name = L"radioButton274";
			this->radioButton274->Size = System::Drawing::Size(14, 13);
			this->radioButton274->TabIndex = 274;
			this->radioButton274->UseVisualStyleBackColor = false;
			this->radioButton274->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton274_CheckedChanged);
			// 
			// radioButton275
			// 
			this->radioButton275->AutoSize = true;
			this->radioButton275->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton275->Location = System::Drawing::Point(799, 454);
			this->radioButton275->Name = L"radioButton275";
			this->radioButton275->Size = System::Drawing::Size(14, 13);
			this->radioButton275->TabIndex = 275;
			this->radioButton275->UseVisualStyleBackColor = false;
			this->radioButton275->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton275_CheckedChanged);
			// 
			// radioButton276
			// 
			this->radioButton276->AutoSize = true;
			this->radioButton276->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton276->Location = System::Drawing::Point(829, 467);
			this->radioButton276->Name = L"radioButton276";
			this->radioButton276->Size = System::Drawing::Size(14, 13);
			this->radioButton276->TabIndex = 276;
			this->radioButton276->UseVisualStyleBackColor = false;
			this->radioButton276->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton276_CheckedChanged);
			// 
			// radioButton277
			// 
			this->radioButton277->AutoSize = true;
			this->radioButton277->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton277->Location = System::Drawing::Point(829, 488);
			this->radioButton277->Name = L"radioButton277";
			this->radioButton277->Size = System::Drawing::Size(14, 13);
			this->radioButton277->TabIndex = 277;
			this->radioButton277->UseVisualStyleBackColor = false;
			this->radioButton277->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton277_CheckedChanged);
			// 
			// radioButton278
			// 
			this->radioButton278->AutoSize = true;
			this->radioButton278->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton278->Location = System::Drawing::Point(891, 495);
			this->radioButton278->Name = L"radioButton278";
			this->radioButton278->Size = System::Drawing::Size(14, 13);
			this->radioButton278->TabIndex = 278;
			this->radioButton278->UseVisualStyleBackColor = false;
			this->radioButton278->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton278_CheckedChanged);
			// 
			// radioButton279
			// 
			this->radioButton279->AutoSize = true;
			this->radioButton279->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton279->Location = System::Drawing::Point(914, 495);
			this->radioButton279->Name = L"radioButton279";
			this->radioButton279->Size = System::Drawing::Size(14, 13);
			this->radioButton279->TabIndex = 279;
			this->radioButton279->UseVisualStyleBackColor = false;
			this->radioButton279->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton279_CheckedChanged);
			// 
			// radioButton280
			// 
			this->radioButton280->AutoSize = true;
			this->radioButton280->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton280->Location = System::Drawing::Point(937, 495);
			this->radioButton280->Name = L"radioButton280";
			this->radioButton280->Size = System::Drawing::Size(14, 13);
			this->radioButton280->TabIndex = 280;
			this->radioButton280->UseVisualStyleBackColor = false;
			this->radioButton280->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton280_CheckedChanged);
			// 
			// radioButton281
			// 
			this->radioButton281->AutoSize = true;
			this->radioButton281->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton281->Location = System::Drawing::Point(937, 520);
			this->radioButton281->Name = L"radioButton281";
			this->radioButton281->Size = System::Drawing::Size(14, 13);
			this->radioButton281->TabIndex = 281;
			this->radioButton281->UseVisualStyleBackColor = false;
			this->radioButton281->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton281_CheckedChanged);
			// 
			// radioButton282
			// 
			this->radioButton282->AutoSize = true;
			this->radioButton282->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton282->Location = System::Drawing::Point(147, 360);
			this->radioButton282->Name = L"radioButton282";
			this->radioButton282->Size = System::Drawing::Size(14, 13);
			this->radioButton282->TabIndex = 282;
			this->radioButton282->UseVisualStyleBackColor = false;
			this->radioButton282->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton282_CheckedChanged);
			// 
			// radioButton283
			// 
			this->radioButton283->AutoSize = true;
			this->radioButton283->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton283->Location = System::Drawing::Point(175, 360);
			this->radioButton283->Name = L"radioButton283";
			this->radioButton283->Size = System::Drawing::Size(14, 13);
			this->radioButton283->TabIndex = 283;
			this->radioButton283->UseVisualStyleBackColor = false;
			this->radioButton283->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton283_CheckedChanged);
			// 
			// radioButton284
			// 
			this->radioButton284->AutoSize = true;
			this->radioButton284->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton284->Location = System::Drawing::Point(208, 360);
			this->radioButton284->Name = L"radioButton284";
			this->radioButton284->Size = System::Drawing::Size(14, 13);
			this->radioButton284->TabIndex = 284;
			this->radioButton284->UseVisualStyleBackColor = false;
			this->radioButton284->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton284_CheckedChanged);
			// 
			// radioButton285
			// 
			this->radioButton285->AutoSize = true;
			this->radioButton285->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton285->Location = System::Drawing::Point(237, 360);
			this->radioButton285->Name = L"radioButton285";
			this->radioButton285->Size = System::Drawing::Size(14, 13);
			this->radioButton285->TabIndex = 285;
			this->radioButton285->UseVisualStyleBackColor = false;
			this->radioButton285->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton285_CheckedChanged);
			// 
			// radioButton286
			// 
			this->radioButton286->AutoSize = true;
			this->radioButton286->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton286->Location = System::Drawing::Point(265, 360);
			this->radioButton286->Name = L"radioButton286";
			this->radioButton286->Size = System::Drawing::Size(14, 13);
			this->radioButton286->TabIndex = 286;
			this->radioButton286->UseVisualStyleBackColor = false;
			this->radioButton286->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton286_CheckedChanged);
			// 
			// radioButton287
			// 
			this->radioButton287->AutoSize = true;
			this->radioButton287->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton287->Location = System::Drawing::Point(287, 378);
			this->radioButton287->Name = L"radioButton287";
			this->radioButton287->Size = System::Drawing::Size(14, 13);
			this->radioButton287->TabIndex = 287;
			this->radioButton287->UseVisualStyleBackColor = false;
			this->radioButton287->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton287_CheckedChanged);
			// 
			// radioButton288
			// 
			this->radioButton288->AutoSize = true;
			this->radioButton288->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton288->Location = System::Drawing::Point(386, 430);
			this->radioButton288->Name = L"radioButton288";
			this->radioButton288->Size = System::Drawing::Size(14, 13);
			this->radioButton288->TabIndex = 288;
			this->radioButton288->UseVisualStyleBackColor = false;
			this->radioButton288->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton288_CheckedChanged);
			// 
			// radioButton289
			// 
			this->radioButton289->AutoSize = true;
			this->radioButton289->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton289->Location = System::Drawing::Point(441, 429);
			this->radioButton289->Name = L"radioButton289";
			this->radioButton289->Size = System::Drawing::Size(14, 13);
			this->radioButton289->TabIndex = 289;
			this->radioButton289->UseVisualStyleBackColor = false;
			this->radioButton289->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton289_CheckedChanged);
			// 
			// radioButton290
			// 
			this->radioButton290->AutoSize = true;
			this->radioButton290->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton290->Location = System::Drawing::Point(480, 467);
			this->radioButton290->Name = L"radioButton290";
			this->radioButton290->Size = System::Drawing::Size(14, 13);
			this->radioButton290->TabIndex = 290;
			this->radioButton290->UseVisualStyleBackColor = false;
			this->radioButton290->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton290_CheckedChanged);
			// 
			// radioButton291
			// 
			this->radioButton291->AutoSize = true;
			this->radioButton291->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton291->Location = System::Drawing::Point(477, 534);
			this->radioButton291->Name = L"radioButton291";
			this->radioButton291->Size = System::Drawing::Size(14, 13);
			this->radioButton291->TabIndex = 291;
			this->radioButton291->UseVisualStyleBackColor = false;
			this->radioButton291->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton291_CheckedChanged);
			// 
			// radioButton292
			// 
			this->radioButton292->AutoSize = true;
			this->radioButton292->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton292->Location = System::Drawing::Point(509, 660);
			this->radioButton292->Name = L"radioButton292";
			this->radioButton292->Size = System::Drawing::Size(14, 13);
			this->radioButton292->TabIndex = 292;
			this->radioButton292->UseVisualStyleBackColor = false;
			this->radioButton292->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton292_CheckedChanged);
			// 
			// radioButton293
			// 
			this->radioButton293->AutoSize = true;
			this->radioButton293->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton293->Location = System::Drawing::Point(509, 682);
			this->radioButton293->Name = L"radioButton293";
			this->radioButton293->Size = System::Drawing::Size(14, 13);
			this->radioButton293->TabIndex = 293;
			this->radioButton293->UseVisualStyleBackColor = false;
			this->radioButton293->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton293_CheckedChanged);
			// 
			// radioButton294
			// 
			this->radioButton294->AutoSize = true;
			this->radioButton294->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton294->Location = System::Drawing::Point(738, 768);
			this->radioButton294->Name = L"radioButton294";
			this->radioButton294->Size = System::Drawing::Size(14, 13);
			this->radioButton294->TabIndex = 294;
			this->radioButton294->UseVisualStyleBackColor = false;
			this->radioButton294->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton294_CheckedChanged);
			// 
			// radioButton295
			// 
			this->radioButton295->AutoSize = true;
			this->radioButton295->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton295->Location = System::Drawing::Point(738, 833);
			this->radioButton295->Name = L"radioButton295";
			this->radioButton295->Size = System::Drawing::Size(14, 13);
			this->radioButton295->TabIndex = 295;
			this->radioButton295->UseVisualStyleBackColor = false;
			this->radioButton295->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton295_CheckedChanged);
			// 
			// radioButton296
			// 
			this->radioButton296->AutoSize = true;
			this->radioButton296->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton296->Location = System::Drawing::Point(741, 854);
			this->radioButton296->Name = L"radioButton296";
			this->radioButton296->Size = System::Drawing::Size(14, 13);
			this->radioButton296->TabIndex = 296;
			this->radioButton296->UseVisualStyleBackColor = false;
			this->radioButton296->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton296_CheckedChanged);
			// 
			// radioButton297
			// 
			this->radioButton297->AutoSize = true;
			this->radioButton297->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton297->Location = System::Drawing::Point(768, 854);
			this->radioButton297->Name = L"radioButton297";
			this->radioButton297->Size = System::Drawing::Size(14, 13);
			this->radioButton297->TabIndex = 297;
			this->radioButton297->UseVisualStyleBackColor = false;
			this->radioButton297->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton297_CheckedChanged);
			// 
			// radioButton298
			// 
			this->radioButton298->AutoSize = true;
			this->radioButton298->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton298->Location = System::Drawing::Point(794, 854);
			this->radioButton298->Name = L"radioButton298";
			this->radioButton298->Size = System::Drawing::Size(14, 13);
			this->radioButton298->TabIndex = 298;
			this->radioButton298->UseVisualStyleBackColor = false;
			this->radioButton298->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton298_CheckedChanged);
			// 
			// radioButton299
			// 
			this->radioButton299->AutoSize = true;
			this->radioButton299->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton299->Location = System::Drawing::Point(818, 854);
			this->radioButton299->Name = L"radioButton299";
			this->radioButton299->Size = System::Drawing::Size(14, 13);
			this->radioButton299->TabIndex = 299;
			this->radioButton299->UseVisualStyleBackColor = false;
			this->radioButton299->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton299_CheckedChanged);
			// 
			// radioButton300
			// 
			this->radioButton300->AutoSize = true;
			this->radioButton300->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton300->Location = System::Drawing::Point(845, 854);
			this->radioButton300->Name = L"radioButton300";
			this->radioButton300->Size = System::Drawing::Size(14, 13);
			this->radioButton300->TabIndex = 300;
			this->radioButton300->UseVisualStyleBackColor = false;
			this->radioButton300->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton300_CheckedChanged);
			// 
			// radioButton301
			// 
			this->radioButton301->AutoSize = true;
			this->radioButton301->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton301->Location = System::Drawing::Point(869, 854);
			this->radioButton301->Name = L"radioButton301";
			this->radioButton301->Size = System::Drawing::Size(14, 13);
			this->radioButton301->TabIndex = 301;
			this->radioButton301->UseVisualStyleBackColor = false;
			this->radioButton301->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton301_CheckedChanged);
			// 
			// radioButton302
			// 
			this->radioButton302->AutoSize = true;
			this->radioButton302->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton302->Location = System::Drawing::Point(886, 879);
			this->radioButton302->Name = L"radioButton302";
			this->radioButton302->Size = System::Drawing::Size(14, 13);
			this->radioButton302->TabIndex = 302;
			this->radioButton302->UseVisualStyleBackColor = false;
			this->radioButton302->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton302_CheckedChanged);
			// 
			// radioButton303
			// 
			this->radioButton303->AutoSize = true;
			this->radioButton303->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton303->Location = System::Drawing::Point(905, 899);
			this->radioButton303->Name = L"radioButton303";
			this->radioButton303->Size = System::Drawing::Size(14, 13);
			this->radioButton303->TabIndex = 303;
			this->radioButton303->UseVisualStyleBackColor = false;
			this->radioButton303->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton303_CheckedChanged);
			// 
			// radioButton304
			// 
			this->radioButton304->AutoSize = true;
			this->radioButton304->BackColor = System::Drawing::SystemColors::Window;
			this->radioButton304->Location = System::Drawing::Point(927, 921);
			this->radioButton304->Name = L"radioButton304";
			this->radioButton304->Size = System::Drawing::Size(14, 13);
			this->radioButton304->TabIndex = 304;
			this->radioButton304->UseVisualStyleBackColor = false;
			this->radioButton304->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton304_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(1026, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(209, 35);
			this->textBox1->TabIndex = 305;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label1->Location = System::Drawing::Point(1026, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 26);
			this->label1->TabIndex = 306;
			this->label1->Text = L"起点站";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(1241, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 35);
			this->button1->TabIndex = 307;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(1241, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 36);
			this->button2->TabIndex = 310;
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(1026, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 26);
			this->label2->TabIndex = 309;
			this->label2->Text = L"终点站";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(1026, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(209, 35);
			this->textBox2->TabIndex = 308;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(1026, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 42);
			this->button3->TabIndex = 311;
			this->button3->Text = L"清    零";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(1167, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 42);
			this->button4->TabIndex = 312;
			this->button4->Text = L"计算换乘路线";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label3->Location = System::Drawing::Point(1026, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 26);
			this->label3->TabIndex = 313;
			this->label3->Text = L"换乘方案";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(1026, 279);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(275, 439);
			this->richTextBox1->TabIndex = 314;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Adobe 楷体 Std R", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->Location = System::Drawing::Point(1023, 772);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(278, 126);
			this->label4->TabIndex = 315;
			this->label4->Text = L"乘客持公共交通卡可在出站后的30分钟内，\r\n在上海火车站站（1号线、3/4号线）、\r\n南京西路站（2号线、12号线、13号线）、\r\n龙华站（11号线、12号线）、"
				L"\r\n虹桥2号航站楼站（2号线、10号线）\r\n进行一票换乘，享受连续计费；\r\n单程票请重新购票。";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label5->Location = System::Drawing::Point(1027, 738);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 22);
			this->label5->TabIndex = 316;
			this->label5->Text = L"温馨提示";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1311, 1031);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton304);
			this->Controls->Add(this->radioButton303);
			this->Controls->Add(this->radioButton302);
			this->Controls->Add(this->radioButton301);
			this->Controls->Add(this->radioButton300);
			this->Controls->Add(this->radioButton299);
			this->Controls->Add(this->radioButton298);
			this->Controls->Add(this->radioButton297);
			this->Controls->Add(this->radioButton296);
			this->Controls->Add(this->radioButton295);
			this->Controls->Add(this->radioButton294);
			this->Controls->Add(this->radioButton293);
			this->Controls->Add(this->radioButton292);
			this->Controls->Add(this->radioButton291);
			this->Controls->Add(this->radioButton290);
			this->Controls->Add(this->radioButton289);
			this->Controls->Add(this->radioButton288);
			this->Controls->Add(this->radioButton287);
			this->Controls->Add(this->radioButton286);
			this->Controls->Add(this->radioButton285);
			this->Controls->Add(this->radioButton284);
			this->Controls->Add(this->radioButton283);
			this->Controls->Add(this->radioButton282);
			this->Controls->Add(this->radioButton281);
			this->Controls->Add(this->radioButton280);
			this->Controls->Add(this->radioButton279);
			this->Controls->Add(this->radioButton278);
			this->Controls->Add(this->radioButton277);
			this->Controls->Add(this->radioButton276);
			this->Controls->Add(this->radioButton275);
			this->Controls->Add(this->radioButton274);
			this->Controls->Add(this->radioButton273);
			this->Controls->Add(this->radioButton272);
			this->Controls->Add(this->radioButton271);
			this->Controls->Add(this->radioButton270);
			this->Controls->Add(this->radioButton269);
			this->Controls->Add(this->radioButton268);
			this->Controls->Add(this->radioButton267);
			this->Controls->Add(this->radioButton266);
			this->Controls->Add(this->radioButton265);
			this->Controls->Add(this->radioButton264);
			this->Controls->Add(this->radioButton263);
			this->Controls->Add(this->radioButton262);
			this->Controls->Add(this->radioButton261);
			this->Controls->Add(this->radioButton260);
			this->Controls->Add(this->radioButton259);
			this->Controls->Add(this->radioButton258);
			this->Controls->Add(this->radioButton257);
			this->Controls->Add(this->radioButton256);
			this->Controls->Add(this->radioButton255);
			this->Controls->Add(this->radioButton254);
			this->Controls->Add(this->radioButton253);
			this->Controls->Add(this->radioButton252);
			this->Controls->Add(this->radioButton251);
			this->Controls->Add(this->radioButton250);
			this->Controls->Add(this->radioButton249);
			this->Controls->Add(this->radioButton248);
			this->Controls->Add(this->radioButton247);
			this->Controls->Add(this->radioButton246);
			this->Controls->Add(this->radioButton245);
			this->Controls->Add(this->radioButton244);
			this->Controls->Add(this->radioButton243);
			this->Controls->Add(this->radioButton242);
			this->Controls->Add(this->radioButton241);
			this->Controls->Add(this->radioButton240);
			this->Controls->Add(this->radioButton239);
			this->Controls->Add(this->radioButton238);
			this->Controls->Add(this->radioButton237);
			this->Controls->Add(this->radioButton236);
			this->Controls->Add(this->radioButton235);
			this->Controls->Add(this->radioButton234);
			this->Controls->Add(this->radioButton233);
			this->Controls->Add(this->radioButton232);
			this->Controls->Add(this->radioButton231);
			this->Controls->Add(this->radioButton230);
			this->Controls->Add(this->radioButton229);
			this->Controls->Add(this->radioButton228);
			this->Controls->Add(this->radioButton227);
			this->Controls->Add(this->radioButton226);
			this->Controls->Add(this->radioButton225);
			this->Controls->Add(this->radioButton224);
			this->Controls->Add(this->radioButton223);
			this->Controls->Add(this->radioButton222);
			this->Controls->Add(this->radioButton221);
			this->Controls->Add(this->radioButton220);
			this->Controls->Add(this->radioButton219);
			this->Controls->Add(this->radioButton218);
			this->Controls->Add(this->radioButton217);
			this->Controls->Add(this->radioButton216);
			this->Controls->Add(this->radioButton215);
			this->Controls->Add(this->radioButton214);
			this->Controls->Add(this->radioButton213);
			this->Controls->Add(this->radioButton212);
			this->Controls->Add(this->radioButton211);
			this->Controls->Add(this->radioButton210);
			this->Controls->Add(this->radioButton209);
			this->Controls->Add(this->radioButton208);
			this->Controls->Add(this->radioButton207);
			this->Controls->Add(this->radioButton206);
			this->Controls->Add(this->radioButton205);
			this->Controls->Add(this->radioButton204);
			this->Controls->Add(this->radioButton203);
			this->Controls->Add(this->radioButton202);
			this->Controls->Add(this->radioButton201);
			this->Controls->Add(this->radioButton200);
			this->Controls->Add(this->radioButton199);
			this->Controls->Add(this->radioButton198);
			this->Controls->Add(this->radioButton197);
			this->Controls->Add(this->radioButton196);
			this->Controls->Add(this->radioButton195);
			this->Controls->Add(this->radioButton194);
			this->Controls->Add(this->radioButton193);
			this->Controls->Add(this->radioButton192);
			this->Controls->Add(this->radioButton191);
			this->Controls->Add(this->radioButton190);
			this->Controls->Add(this->radioButton189);
			this->Controls->Add(this->radioButton188);
			this->Controls->Add(this->radioButton187);
			this->Controls->Add(this->radioButton186);
			this->Controls->Add(this->radioButton185);
			this->Controls->Add(this->radioButton184);
			this->Controls->Add(this->radioButton183);
			this->Controls->Add(this->radioButton182);
			this->Controls->Add(this->radioButton181);
			this->Controls->Add(this->radioButton180);
			this->Controls->Add(this->radioButton179);
			this->Controls->Add(this->radioButton178);
			this->Controls->Add(this->radioButton177);
			this->Controls->Add(this->radioButton176);
			this->Controls->Add(this->radioButton175);
			this->Controls->Add(this->radioButton174);
			this->Controls->Add(this->radioButton173);
			this->Controls->Add(this->radioButton172);
			this->Controls->Add(this->radioButton171);
			this->Controls->Add(this->radioButton170);
			this->Controls->Add(this->radioButton169);
			this->Controls->Add(this->radioButton168);
			this->Controls->Add(this->radioButton167);
			this->Controls->Add(this->radioButton166);
			this->Controls->Add(this->radioButton165);
			this->Controls->Add(this->radioButton164);
			this->Controls->Add(this->radioButton163);
			this->Controls->Add(this->radioButton162);
			this->Controls->Add(this->radioButton161);
			this->Controls->Add(this->radioButton160);
			this->Controls->Add(this->radioButton159);
			this->Controls->Add(this->radioButton158);
			this->Controls->Add(this->radioButton157);
			this->Controls->Add(this->radioButton156);
			this->Controls->Add(this->radioButton155);
			this->Controls->Add(this->radioButton154);
			this->Controls->Add(this->radioButton153);
			this->Controls->Add(this->radioButton152);
			this->Controls->Add(this->radioButton151);
			this->Controls->Add(this->radioButton150);
			this->Controls->Add(this->radioButton149);
			this->Controls->Add(this->radioButton148);
			this->Controls->Add(this->radioButton147);
			this->Controls->Add(this->radioButton146);
			this->Controls->Add(this->radioButton145);
			this->Controls->Add(this->radioButton144);
			this->Controls->Add(this->radioButton143);
			this->Controls->Add(this->radioButton142);
			this->Controls->Add(this->radioButton141);
			this->Controls->Add(this->radioButton140);
			this->Controls->Add(this->radioButton139);
			this->Controls->Add(this->radioButton138);
			this->Controls->Add(this->radioButton137);
			this->Controls->Add(this->radioButton136);
			this->Controls->Add(this->radioButton135);
			this->Controls->Add(this->radioButton134);
			this->Controls->Add(this->radioButton133);
			this->Controls->Add(this->radioButton132);
			this->Controls->Add(this->radioButton131);
			this->Controls->Add(this->radioButton130);
			this->Controls->Add(this->radioButton129);
			this->Controls->Add(this->radioButton128);
			this->Controls->Add(this->radioButton127);
			this->Controls->Add(this->radioButton126);
			this->Controls->Add(this->radioButton125);
			this->Controls->Add(this->radioButton124);
			this->Controls->Add(this->radioButton123);
			this->Controls->Add(this->radioButton122);
			this->Controls->Add(this->radioButton121);
			this->Controls->Add(this->radioButton120);
			this->Controls->Add(this->radioButton119);
			this->Controls->Add(this->radioButton118);
			this->Controls->Add(this->radioButton117);
			this->Controls->Add(this->radioButton116);
			this->Controls->Add(this->radioButton115);
			this->Controls->Add(this->radioButton114);
			this->Controls->Add(this->radioButton113);
			this->Controls->Add(this->radioButton112);
			this->Controls->Add(this->radioButton111);
			this->Controls->Add(this->radioButton110);
			this->Controls->Add(this->radioButton109);
			this->Controls->Add(this->radioButton108);
			this->Controls->Add(this->radioButton107);
			this->Controls->Add(this->radioButton106);
			this->Controls->Add(this->radioButton105);
			this->Controls->Add(this->radioButton104);
			this->Controls->Add(this->radioButton103);
			this->Controls->Add(this->radioButton102);
			this->Controls->Add(this->radioButton101);
			this->Controls->Add(this->radioButton100);
			this->Controls->Add(this->radioButton99);
			this->Controls->Add(this->radioButton98);
			this->Controls->Add(this->radioButton97);
			this->Controls->Add(this->radioButton96);
			this->Controls->Add(this->radioButton95);
			this->Controls->Add(this->radioButton94);
			this->Controls->Add(this->radioButton93);
			this->Controls->Add(this->radioButton92);
			this->Controls->Add(this->radioButton91);
			this->Controls->Add(this->radioButton90);
			this->Controls->Add(this->radioButton89);
			this->Controls->Add(this->radioButton88);
			this->Controls->Add(this->radioButton87);
			this->Controls->Add(this->radioButton86);
			this->Controls->Add(this->radioButton85);
			this->Controls->Add(this->radioButton84);
			this->Controls->Add(this->radioButton83);
			this->Controls->Add(this->radioButton82);
			this->Controls->Add(this->radioButton81);
			this->Controls->Add(this->radioButton80);
			this->Controls->Add(this->radioButton79);
			this->Controls->Add(this->radioButton78);
			this->Controls->Add(this->radioButton77);
			this->Controls->Add(this->radioButton76);
			this->Controls->Add(this->radioButton75);
			this->Controls->Add(this->radioButton74);
			this->Controls->Add(this->radioButton73);
			this->Controls->Add(this->radioButton72);
			this->Controls->Add(this->radioButton71);
			this->Controls->Add(this->radioButton70);
			this->Controls->Add(this->radioButton69);
			this->Controls->Add(this->radioButton68);
			this->Controls->Add(this->radioButton67);
			this->Controls->Add(this->radioButton66);
			this->Controls->Add(this->radioButton65);
			this->Controls->Add(this->radioButton64);
			this->Controls->Add(this->radioButton63);
			this->Controls->Add(this->radioButton62);
			this->Controls->Add(this->radioButton61);
			this->Controls->Add(this->radioButton60);
			this->Controls->Add(this->radioButton59);
			this->Controls->Add(this->radioButton58);
			this->Controls->Add(this->radioButton57);
			this->Controls->Add(this->radioButton56);
			this->Controls->Add(this->radioButton55);
			this->Controls->Add(this->radioButton54);
			this->Controls->Add(this->radioButton53);
			this->Controls->Add(this->radioButton52);
			this->Controls->Add(this->radioButton51);
			this->Controls->Add(this->radioButton50);
			this->Controls->Add(this->radioButton49);
			this->Controls->Add(this->radioButton48);
			this->Controls->Add(this->radioButton47);
			this->Controls->Add(this->radioButton46);
			this->Controls->Add(this->radioButton45);
			this->Controls->Add(this->radioButton44);
			this->Controls->Add(this->radioButton43);
			this->Controls->Add(this->radioButton42);
			this->Controls->Add(this->radioButton41);
			this->Controls->Add(this->radioButton40);
			this->Controls->Add(this->radioButton39);
			this->Controls->Add(this->radioButton38);
			this->Controls->Add(this->radioButton37);
			this->Controls->Add(this->radioButton36);
			this->Controls->Add(this->radioButton35);
			this->Controls->Add(this->radioButton34);
			this->Controls->Add(this->radioButton33);
			this->Controls->Add(this->radioButton32);
			this->Controls->Add(this->radioButton31);
			this->Controls->Add(this->radioButton30);
			this->Controls->Add(this->radioButton29);
			this->Controls->Add(this->radioButton28);
			this->Controls->Add(this->radioButton27);
			this->Controls->Add(this->radioButton26);
			this->Controls->Add(this->radioButton25);
			this->Controls->Add(this->radioButton24);
			this->Controls->Add(this->radioButton23);
			this->Controls->Add(this->radioButton22);
			this->Controls->Add(this->radioButton21);
			this->Controls->Add(this->radioButton20);
			this->Controls->Add(this->radioButton19);
			this->Controls->Add(this->radioButton18);
			this->Controls->Add(this->radioButton17);
			this->Controls->Add(this->radioButton16);
			this->Controls->Add(this->radioButton15);
			this->Controls->Add(this->radioButton14);
			this->Controls->Add(this->radioButton13);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"上海地铁";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ str = "";
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		str = "";
		Begin = 0;
		End = 0;
		textBox1->Text = "";
		textBox2->Text = "";
		richTextBox1->Text = "";
	}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 1;
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 2;
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 3;
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 4;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 5;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 6;
}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 7;
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 8;
}
private: System::Void radioButton9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 9;
}
private: System::Void radioButton10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 10;
}
private: System::Void radioButton11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 11;
}
private: System::Void radioButton12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 12;
}
private: System::Void radioButton13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 13;
}
private: System::Void radioButton14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 14;
}
private: System::Void radioButton15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 15;
}
private: System::Void radioButton16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 16;
}
private: System::Void radioButton17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 17;
}
private: System::Void radioButton18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 18;
}
private: System::Void radioButton19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 19;
}
private: System::Void radioButton20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 20;
}
private: System::Void radioButton21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 21;
}
private: System::Void radioButton22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 22;
}
private: System::Void radioButton23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 23;
}
private: System::Void radioButton24_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 24;
}
private: System::Void radioButton25_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 25;
}
private: System::Void radioButton26_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 26;
}
private: System::Void radioButton27_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 27;
}
private: System::Void radioButton28_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 28;
}
private: System::Void radioButton29_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 29;
}
private: System::Void radioButton30_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 30;
}
private: System::Void radioButton31_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 31;
}
private: System::Void radioButton32_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 32;
}
private: System::Void radioButton33_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 33;
}
private: System::Void radioButton34_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 34;
}
private: System::Void radioButton35_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 35;
}
private: System::Void radioButton36_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 36;
}
private: System::Void radioButton37_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 37;
}
private: System::Void radioButton38_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 38;
}
private: System::Void radioButton39_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 39;
}
private: System::Void radioButton40_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 40;
}
private: System::Void radioButton41_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 41;
}
private: System::Void radioButton42_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 42;
}
private: System::Void radioButton43_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 43;
}
private: System::Void radioButton44_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 44;
}
private: System::Void radioButton45_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 45;
}
private: System::Void radioButton46_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 46;
}
private: System::Void radioButton47_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 47;
}
private: System::Void radioButton48_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 48;
}
private: System::Void radioButton49_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 49;
}
private: System::Void radioButton50_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 50;
}
private: System::Void radioButton51_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 51;
}
private: System::Void radioButton52_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 52;
}
private: System::Void radioButton53_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 53;
}
private: System::Void radioButton54_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 54;
}
private: System::Void radioButton55_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 55;
}
private: System::Void radioButton56_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 56;
}
private: System::Void radioButton57_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 57;
}
private: System::Void radioButton58_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 58;
}
private: System::Void radioButton59_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 59;
}
private: System::Void radioButton60_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 60;
}
private: System::Void radioButton61_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 61;
}
private: System::Void radioButton62_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 62;
}
private: System::Void radioButton63_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 63;
}
private: System::Void radioButton64_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 64;
}
private: System::Void radioButton65_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 65;
}
private: System::Void radioButton66_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 66;
}
private: System::Void radioButton67_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 67;
}
private: System::Void radioButton68_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 68;
}
private: System::Void radioButton69_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 69;
}
private: System::Void radioButton70_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 70;
}
private: System::Void radioButton71_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 71;
}
private: System::Void radioButton72_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 72;
}
private: System::Void radioButton73_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 73;
}
private: System::Void radioButton74_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 74;
}
private: System::Void radioButton75_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 75;
}
private: System::Void radioButton76_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 76;
}
private: System::Void radioButton77_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 77;
}
private: System::Void radioButton78_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 78;
}
private: System::Void radioButton79_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 79;
}
private: System::Void radioButton80_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 80;
}
private: System::Void radioButton81_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 81;
}
private: System::Void radioButton82_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 82;
}
private: System::Void radioButton83_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 83;
}
private: System::Void radioButton84_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 84;
}
private: System::Void radioButton85_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 85;
}
private: System::Void radioButton86_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 86;
}
private: System::Void radioButton87_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 87;
}
private: System::Void radioButton88_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 88;
}
private: System::Void radioButton89_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 89;
}
private: System::Void radioButton90_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 90;
}
private: System::Void radioButton91_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 91;
}
private: System::Void radioButton92_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 92;
}
private: System::Void radioButton93_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 93;
}
private: System::Void radioButton94_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 94;
}
private: System::Void radioButton95_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 95;
}
private: System::Void radioButton96_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 96;
}
private: System::Void radioButton97_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 97;
}
private: System::Void radioButton98_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 98;
}
private: System::Void radioButton99_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 99;
}
private: System::Void radioButton100_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 100;
}
private: System::Void radioButton101_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 101;
}
private: System::Void radioButton102_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 102;
}
private: System::Void radioButton103_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 103;
}
private: System::Void radioButton104_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 104;
}
private: System::Void radioButton105_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 105;
}
private: System::Void radioButton106_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 106;
}
private: System::Void radioButton107_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 107;
}
private: System::Void radioButton108_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 108;
}
private: System::Void radioButton109_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 109;
}
private: System::Void radioButton110_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 110;
}
private: System::Void radioButton111_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 111;
}
private: System::Void radioButton112_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 112;
}
private: System::Void radioButton113_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 113;
}
private: System::Void radioButton114_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 114;
}
private: System::Void radioButton115_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 115;
}
private: System::Void radioButton116_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 116;
}
private: System::Void radioButton117_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 117;
}
private: System::Void radioButton118_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 118;
}
private: System::Void radioButton119_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 119;
}
private: System::Void radioButton120_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 120;
}
private: System::Void radioButton121_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 121;
}
private: System::Void radioButton122_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 122;
}
private: System::Void radioButton123_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 123;
}
private: System::Void radioButton124_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 124;
}
private: System::Void radioButton125_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 125;
}
private: System::Void radioButton126_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 126;
}
private: System::Void radioButton127_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 127;
}
private: System::Void radioButton128_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 128;
}
private: System::Void radioButton129_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 129;
}
private: System::Void radioButton130_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 130;
}
private: System::Void radioButton131_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 131;
}
private: System::Void radioButton132_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 132;
}
private: System::Void radioButton133_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 133;
}
private: System::Void radioButton134_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 134;
}
private: System::Void radioButton135_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 135;
}
private: System::Void radioButton136_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 136;
}
private: System::Void radioButton137_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 137;
}
private: System::Void radioButton138_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 138;
}
private: System::Void radioButton139_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 139;
}
private: System::Void radioButton140_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 140;
}
private: System::Void radioButton141_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 141;
}
private: System::Void radioButton142_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 142;
}
private: System::Void radioButton143_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 143;
}
private: System::Void radioButton144_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 144;
}
private: System::Void radioButton145_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 145;
}
private: System::Void radioButton146_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 146;
}
private: System::Void radioButton147_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 147;
}
private: System::Void radioButton148_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 148;
}
private: System::Void radioButton149_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 149;
}
private: System::Void radioButton150_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 150;
}
private: System::Void radioButton151_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 151;
}
private: System::Void radioButton152_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 152;
}
private: System::Void radioButton153_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 153;
}
private: System::Void radioButton154_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 154;
}
private: System::Void radioButton155_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 155;
}
private: System::Void radioButton156_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 156;
}
private: System::Void radioButton157_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 157;
}
private: System::Void radioButton158_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 158;
}
private: System::Void radioButton159_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 159;
}
private: System::Void radioButton160_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 160;
}
private: System::Void radioButton161_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 161;
}
private: System::Void radioButton162_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 162;
}
private: System::Void radioButton163_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 163;
}
private: System::Void radioButton164_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 164;
}
private: System::Void radioButton165_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 165;
}
private: System::Void radioButton166_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 166;
}
private: System::Void radioButton167_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 167;
}
private: System::Void radioButton168_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 168;
}
private: System::Void radioButton169_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 169;
}
private: System::Void radioButton170_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 170;
}
private: System::Void radioButton171_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 171;
}
private: System::Void radioButton172_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 172;
}
private: System::Void radioButton173_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 173;
}
private: System::Void radioButton174_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 174;
}
private: System::Void radioButton175_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 175;
}
private: System::Void radioButton176_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 176;
}
private: System::Void radioButton177_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 177;
}
private: System::Void radioButton178_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 178;
}
private: System::Void radioButton179_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 179;
}
private: System::Void radioButton180_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 180;
}
private: System::Void radioButton181_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 181;
}
private: System::Void radioButton182_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 182;
}
private: System::Void radioButton183_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 183;
}
private: System::Void radioButton184_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 184;
}
private: System::Void radioButton185_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 185;
}
private: System::Void radioButton186_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 186;
}
private: System::Void radioButton187_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 187;
}
private: System::Void radioButton188_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 188;
}
private: System::Void radioButton189_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 189;
}
private: System::Void radioButton190_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 190;
}
private: System::Void radioButton191_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 191;
}
private: System::Void radioButton192_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 192;
}
private: System::Void radioButton193_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 193;
}
private: System::Void radioButton194_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 194;
}
private: System::Void radioButton195_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 195;
}
private: System::Void radioButton196_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 196;
}
private: System::Void radioButton197_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 197;
}
private: System::Void radioButton198_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 198;
}
private: System::Void radioButton199_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 199;
}
private: System::Void radioButton200_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 200;
}
private: System::Void radioButton201_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 201;
}
private: System::Void radioButton202_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 202;
}
private: System::Void radioButton203_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 203;
}
private: System::Void radioButton204_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 204;
}
private: System::Void radioButton205_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 205;
}
private: System::Void radioButton206_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 206;
}
private: System::Void radioButton207_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 207;
}
private: System::Void radioButton208_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 208;
}
private: System::Void radioButton209_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 209;
}
private: System::Void radioButton210_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 210;
}
private: System::Void radioButton211_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 211;
}
private: System::Void radioButton212_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 212;
}
private: System::Void radioButton213_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 213;
}
private: System::Void radioButton214_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 214;
}
private: System::Void radioButton215_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 215;
}
private: System::Void radioButton216_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 216;
}
private: System::Void radioButton217_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 217;
}
private: System::Void radioButton218_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 218;
}
private: System::Void radioButton219_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 219;
}
private: System::Void radioButton220_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 220;
}
private: System::Void radioButton221_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 221;
}
private: System::Void radioButton222_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 222;
}
private: System::Void radioButton223_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 223;
}
private: System::Void radioButton224_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 224;
}
private: System::Void radioButton225_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 225;
}
private: System::Void radioButton226_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 226;
}
private: System::Void radioButton227_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 227;
}
private: System::Void radioButton228_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 228;
}
private: System::Void radioButton229_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 229;
}
private: System::Void radioButton230_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 230;
}
private: System::Void radioButton231_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 231;
}
private: System::Void radioButton232_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 232;
}
private: System::Void radioButton233_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 233;
}
private: System::Void radioButton234_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 234;
}
private: System::Void radioButton235_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 235;
}
private: System::Void radioButton236_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 236;
}
private: System::Void radioButton237_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 237;
}
private: System::Void radioButton238_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 238;
}
private: System::Void radioButton239_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 239;
}
private: System::Void radioButton240_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 240;
}
private: System::Void radioButton241_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 241;
}
private: System::Void radioButton242_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 242;
}
private: System::Void radioButton243_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 243;
}
private: System::Void radioButton244_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 244;
}
private: System::Void radioButton245_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 245;
}
private: System::Void radioButton246_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 246;
}
private: System::Void radioButton247_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 247;
}
private: System::Void radioButton248_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 248;
}
private: System::Void radioButton249_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 249;
}
private: System::Void radioButton250_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 250;
}
private: System::Void radioButton251_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 251;
}
private: System::Void radioButton252_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 252;
}
private: System::Void radioButton253_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 253;
}
private: System::Void radioButton254_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 254;
}
private: System::Void radioButton255_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 255;
}
private: System::Void radioButton256_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 256;
}
private: System::Void radioButton257_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 257;
}
private: System::Void radioButton258_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 258;
}
private: System::Void radioButton259_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 259;
}
private: System::Void radioButton260_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 260;
}
private: System::Void radioButton261_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 261;
}
private: System::Void radioButton262_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 262;
}
private: System::Void radioButton263_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 263;
}
private: System::Void radioButton264_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 264;
}
private: System::Void radioButton265_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 265;
}
private: System::Void radioButton266_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 266;
}
private: System::Void radioButton267_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 267;
}
private: System::Void radioButton268_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 268;
}
private: System::Void radioButton269_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 269;
}
private: System::Void radioButton270_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 270;
}
private: System::Void radioButton271_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 271;
}
private: System::Void radioButton272_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 272;
}
private: System::Void radioButton273_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 273;
}
private: System::Void radioButton274_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 274;
}
private: System::Void radioButton275_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 275;
}
private: System::Void radioButton276_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 276;
}
private: System::Void radioButton277_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 277;
}
private: System::Void radioButton278_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 278;
}
private: System::Void radioButton279_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 279;
}
private: System::Void radioButton280_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 280;
}
private: System::Void radioButton281_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 281;
}
private: System::Void radioButton282_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 282;
}
private: System::Void radioButton283_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 283;
}
private: System::Void radioButton284_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 284;
}
private: System::Void radioButton285_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 285;
}
private: System::Void radioButton286_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 286;
}
private: System::Void radioButton287_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 287;
}
private: System::Void radioButton288_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 288;
}
private: System::Void radioButton289_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 289;
}
private: System::Void radioButton290_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 290;
}
private: System::Void radioButton291_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 291;
}
private: System::Void radioButton292_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 292;
}
private: System::Void radioButton293_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 293;
}
private: System::Void radioButton294_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 294;
}
private: System::Void radioButton295_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 295;
}
private: System::Void radioButton296_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 296;
}
private: System::Void radioButton297_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 297;
}
private: System::Void radioButton298_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 298;
}
private: System::Void radioButton299_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 299;
}
private: System::Void radioButton300_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 300;
}
private: System::Void radioButton301_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 301;
}
private: System::Void radioButton302_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 302;
}
private: System::Void radioButton303_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 303;
}
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#pragma endregion
private: System::Void radioButton304_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	StatChosed = 304;
}
		 int CalculateTransferStation(int line1, int line2, int Begin, int End, int *MinD)//line1，line2分别是起终点所在的线路，Begin，End分别是起终点的序号
		 {
			 int TStemp, TS[20] = { 0 }, TScnt = 0, lineL = 0, lineS = 0, MinDistance = 99999;
			 if (line1 > line2)//LineL代表线路大的那条，LineS代表线路小的那条，一定是先找小的再找大的
			 {
				 lineL = line1;
				 lineS = line2;
			 }
			 else
			 {
				 lineL = line2;
				 lineS = line1;
			 }
			 int LineCombine = (line1 > line2) ? line1 * 100 + line2 : line2 * 100 + line1;//比如1号线和9号线，组合起来就是901，TransferStation[i][1]就是这样的形式
			 for (int i = 0; i < TransferStationSum; i++)
			 {
				 if (TransferStation[i][1] < LineCombine)continue;//如果TransferStation[i][1]比LineCombine小，说明指定的两条线不可能出现在这个换乘点i中（这是由LineCombine的计算方法决定的，大的数在前，小的数在后），则跳过不比较，提高效率
				 else if (TransferStation[i][1] == LineCombine)
				 {
					 TS[TScnt] = TransferStation[i][0];
					 TScnt++;
				 }
				 else
				 {
					 TStemp = TransferStation[i][1];
					 while (TStemp != 0)
					 {
						 if (TStemp % 100 == lineS)//如果在TStemp里找到第一条线路，则从此处继续，查找第二条线路
						 {
							 while (TStemp != 0)
							 {
								 if (TStemp % 100 == lineL)//如果找到第二条，则把这个换乘站的序号记录下来
								 {
									 TS[TScnt] = TransferStation[i][0];
									 TScnt++;
									 break;
								 }
								 TStemp /= 100;
							 }
						 }
						 TStemp /= 100;
					 }
				 }
			 }

			 int line1distance = 0, line2distance = 0, FinalTransferStation = 0, BeginPosition = 0, EndPosition = 0, MinStation = 0, flag = 0;

			 //如果两条线只有一个交点，那它一定是最优的交点
			 if (TScnt == 1)
			 {
				 line1distance = abs(line1distance - BeginPosition);
				 line2distance = abs(line2distance - EndPosition);

				 if (line1 == 4 || line2 == 4)//4号线是环线，特殊考虑
				 {
					 if (line1 == 4) { if (line1distance > 26 - line1distance)line1distance = 26 - line1distance; }
					 else { if (line2distance > 26 - line2distance)line2distance = 26 - line2distance; }
				 }

				 MinDistance = line1distance + line2distance;
				 *MinD = MinDistance;
				 return TS[0];
			 }

			 //如果两条线有多个交点，则需要找到路径更短的交点
			 for (int i = 0; i < TScnt; i++)
			 {
				 flag = 0;
				 if (TS[i] == 0)break;
				 for (int j = 0; j < 38; j++)
				 {
					 if (LineandStation[line1 - 1][j] == Begin)
					 {
						 BeginPosition = j;
						 flag++;
					 }
					 if (LineandStation[line1 - 1][j] == TS[i])
					 {
						 line1distance = j;
						 flag++;
					 }
					 if (LineandStation[line2 - 1][j] == End)
					 {
						 EndPosition = j;
						 flag++;
					 }
					 if (LineandStation[line2 - 1][j] == TS[i])
					 {
						 line2distance = j;
						 flag++;
					 }
					 if (flag == 4)break;//如果上面四个变量的值都获得了，就可以终止
				 }

				 line1distance = abs(line1distance - BeginPosition);
				 line2distance = abs(line2distance - EndPosition);

				 if (line1 == 4 || line2 == 4)//4号线是环线，特殊考虑
				 {
					 if (line1 == 4) { if (line1distance > 26 - line1distance)line1distance = 26 - line1distance; }
					 else { if (line2distance > 26 - line2distance)line2distance = 26 - line2distance; }
				 }

				 if (MinDistance > line1distance + line2distance)
				 {
					 MinDistance = line1distance + line2distance;
					 MinStation = TS[i];
				 }
			 }
			 *MinD = MinDistance;
			 return MinStation;
		 }
		 int TransferBy4(int Begin)
		 {
			 int i, Bline = station[Begin], line[4] = { 0 }, linecnt = 0, lineS = 0, lineL = 0, LineCombine = 0;
			 int TStemp, TS[9][2] = { 0 }, TScnt = 0, MinDistance = 99999;
			 //TS[][]第一列是换乘站序号，第二列是其对应的线

			 //把经过Begin的所有线路都放进line2[]
			 for (linecnt = 0; linecnt < 4; linecnt++)
			 {
				 if (linecnt != 0)Bline = Bline / 100;
				 line[linecnt] = Bline % 100;
				 if (Bline == 0)break;
			 }

			 //把所有line2[i]与4号线的交点找出来
			 for (i = 0; i < linecnt; i++)
			 {
				 if (line[i] > 4)
				 {
					 lineS = 4;
					 lineL = line[i];
				 }
				 else
				 {
					 lineL = 4;
					 lineS = line[i];
				 }
				 //比如1号线和9号线，组合起来就是901，TransferStation[j][1]就是这样的形式
				 LineCombine = lineL * 100 + lineS;
				 //cout << LineCombine;
				 //把所有符合条件的换乘站序号记录在TS[]中
				 for (int j = 0; j < TransferStationSum; j++)
				 {
					 // 如果TransferStation[j][1]比LineCombine小，说明指定的两条线不可能出现在这个换乘点i中（这是由LineCombine的计算方法决定的，大的数在前，小的数在后），则跳过不比较，提高效率
					 if (TransferStation[j][1] < LineCombine)continue;
					 //如果TransferStation[j][1]与LineCombine相等，就直接把这个点记录下来
					 else if (TransferStation[j][1] == LineCombine)
					 {
						 TS[TScnt][0] = TransferStation[j][0];
						 TS[TScnt][1] = line[i];
						 TScnt++;
					 }
					 // 如果TransferStation[j][1]比LineCombine大，则line2[i]与4号线有可能是经过此换乘站的两条线
					 else
					 {
						 //cout << TransferStation[j][1] << endl;
						 TStemp = TransferStation[j][1];
						 while (TStemp != 0)
						 {
							 if (TStemp % 100 == lineS)//如果在TStemp里找到第一条线路，则从此处继续，查找第二条线路
							 {
								 while (TStemp != 0)
								 {
									 if (TStemp % 100 == lineL)//如果找到第二条，则把这个换乘站的序号记录下来
									 {
										 TS[TScnt][0] = TransferStation[j][0];
										 TS[TScnt][1] = line[i];
										 TScnt++;
										 break;
									 }
									 TStemp /= 100;
								 }
							 }
							 TStemp /= 100;
						 }
					 }
				 }
			 }
			 //cout << TScnt<<endl;
			 //for (i = 0; i < TScnt; i++)cout << TS[i][0] << " " << TS[i][1] << endl;
			 int linedistance = 0, BeginPosition = 0, flag = 0, MinStation = 0;

			 //如果TS[]只有一个，那它一定是最优的交点
			 if (TScnt == 1)
			 {
				 return TS[0][0];
			 }

			 //如果两条线有多个交点，则需要找到路径更短的交点
			 for (int i = 0; i < TScnt; i++)
			 {
				 flag = 0;
				 if (TS[i] == 0)break;
				 for (int j = 0; j < 38; j++)
				 {
					 if (LineandStation[TS[i][1] - 1][j] == Begin)
					 {
						 BeginPosition = j;
						 flag++;
					 }
					 if (LineandStation[TS[i][1] - 1][j] == TS[i][0])
					 {
						 linedistance = j;
						 flag++;
					 }
					 if (flag == 2)break;//如果上面四个变量的值都获得了，就可以终止
				 }

				 if (MinDistance > abs(linedistance - BeginPosition))
				 {
					 MinDistance = abs(linedistance - BeginPosition);
					 MinStation = TS[i][0];
				 }
			 }
			 return MinStation;
		 }
		 int TakeMetro(int Begin, int End)
		 {
			 
			 int i, j, Bline = station[Begin], Eline = station[End], eline, bline;
			 //SameLine存储两个站点的公共线，Sline存储公共线的数量
			 int SameLine[4] = { 0 }, Sline = 0;
			 //CrossLine存储两个站点的相交线，Cline存储相交线的对数
			 int CrossLine[4][2] = { 0 }, Cline = 0;

			 if (End == 0 || Begin == 0)
			 {
				 richTextBox1->Text = "请选择起终点站";
			 }
			 else
			 {
				 //计算起终点所拥有的公共线路
				 for (i = 0; i < 4; i++)
				 {
					 if (i != 0)Bline = Bline / 100;
					 bline = Bline % 100;
					 if (Bline == 0)break;
					 Eline = station[End];
					 for (j = 0; j < 4; j++)
					 {
						 if (j != 0)Eline = Eline / 100;
						 eline = Eline % 100;
						 if (eline == 0)break;
						 if (eline == bline)//eline，bline是当前校验的两条线路
						 {
							 SameLine[Sline] = bline;
							 Sline++;
							 break;
						 }
					 }
				 }

				 //计算起终点所拥有的线路中能够相交的线路对（两个站不在同一条线上）
				 if (Sline == 0)
				 {
					 //计算起终点所拥有的线路中能够 直接 相交的线路对
					 Bline = station[Begin], Eline = station[End];
					 if (Sline == 0)
					 {
						 for (i = 0; i < 4; i++)
						 {
							 if (i != 0)Bline = Bline / 100;
							 bline = Bline % 100;
							 if (Bline == 0)break;
							 Eline = station[End];
							 for (j = 0; j < 4; j++)
							 {
								 if (j != 0)Eline = Eline / 100;
								 eline = Eline % 100;
								 if (eline == 0)break;
								 if (line[eline][bline])//eline，bline是当前校验的两条线路
								 {
									 CrossLine[Cline][0] = bline;
									 CrossLine[Cline][1] = eline;
									 Cline++;
								 }
							 }
						 }
					 }

					 if (Cline != 0)//如果起终点的线路有直接相交的
					 {
						 int MinStation = 306, tempMinStation = 0, MinBline = 0, MinEline = 0, MinDistance = 99999;//他们分别负责记录最优的换乘站序号，最优的起始地铁线，最优的终止地铁线

						 int* MinD = new int;
						 *MinD = 999999;
						 for (i = 0; i < Cline; i++)
						 {
							 if (CrossLine[i][0] == 0 || CrossLine[i][1] == 0)break;
							 tempMinStation = CalculateTransferStation(CrossLine[i][0], CrossLine[i][1], Begin, End, MinD);//目的是让MinD算出来
							 if (*MinD < MinDistance)
							 {
								 MinStation = tempMinStation;
								 MinDistance = *MinD;
								 MinBline = CrossLine[i][0];
								 MinEline = CrossLine[i][1];
							 }
						 }
						 str = " 乘坐 " + MinBline + "号线 在 " + stationName[MinStation] + " 换乘 " + MinEline + "号线 在 " + stationName[End] + " 下车";
						 richTextBox1->AppendText(str);
					 }
					 else//如果起终点的线路没有直接相交的，则要通过4号线联通，或者2号线（因为16号线），1号线（因为5号线）
					 {
						 if (station[Begin] == 16 || station[End] == 16)//如果涉及到16号线
						 {
							 if (station[Begin] == 16)//起点在16号线上
							 {
								 str = "乘坐 16号线 在 龙阳路站 换";
								 richTextBox1->AppendText(str);
								 TakeMetro(46, End);//递归调用（龙阳路站的序号为46）
							 }
							 else//终点在16号线上
							 {
								 TakeMetro(Begin, 46);
								 str = "换乘 16号线";
								 richTextBox1->AppendText(str);
							 }
						 }
						 else if (station[Begin] == 5 || station[End] == 5)//如果涉及到5号线
						 {
							 if (station[Begin] == 5)//起点在5号线上
							 {
								 str = "乘坐 5号线 在 莘庄站 换";
								 richTextBox1->AppendText(str);
								// richTextBox1->Text = str;
								 TakeMetro(1, End);//递归调用（莘庄站的序号为1）
							 }
							 else//终点在5号线上
							 {
								 TakeMetro(Begin, 1);
								 str = "换乘 5号线";
								 richTextBox1->AppendText(str);
								 //richTextBox1->Text = str;
							 }
						 }
						 else//如果均无涉及5，16号线，则要考虑4号线
						 {
							TakeMetro(Begin, TransferBy4(Begin));
							str = "换乘 4号线 在 " + stationName[TransferBy4(End)];
							richTextBox1->AppendText(str);
							TakeMetro(TransferBy4(End), End);
						 }
					 }

				 }
				 else //两个站在同一条线上
				 {
					 for (int i = 0; i < Sline; i++)
					 {
						 str = (i==0)?("乘坐 " + SameLine[i] + "号线 在 " + stationName[End] + " 下车"): ("\n或乘坐 " + SameLine[i] + "号线 在 " + stationName[End] + " 下车");
						 richTextBox1->AppendText(str);
					 }
				 }
			 }
			 return 0;
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Text = "";
	TakeMetro(Begin, End);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Begin = StatChosed;
	textBox1->Text = stationName[StatChosed];
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	End = StatChosed;
	textBox2->Text = stationName[StatChosed];
}
};
}
