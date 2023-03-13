#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void WlcScreen()
{
	int progress=0, width;
	char text[10];

    while (progress <= 100)
    {
		// Set the background color
		setbkcolor(DARKGRAY);
		cleardevice();
		outtextxy(270,185, "LOADING...");
		//border of the loading bar
		rectangle(200, 200, 400, 225);
		//Calculate the width of the loading bar based on progress
		width = (progress * 2);
		//loading bar
		setfillstyle(SOLID_FILL, RED);
		bar(201, 201, 200 + width, 224);
		//text to show the percentage of the loading bar
		sprintf(text, "%d%%", progress);
		outtextxy(290, 210, text);
		rectangle(200,200,400,225);
		// Delay for a short period of time to show the progress
		delay(50);
		//outtextxy(285,185, "LOADING");
		progress++;
    }
    cleardevice();
	settextstyle(4,0,4);
	outtextxy(125,160,"A Guide to IOE Pulchowk");
	settextstyle(3,0,3);
	outtextxy(170,225,"Press any key to continue");
	settextstyle(0,0,1);
	outtextxy(10,465 ,"A mini project developed by team AXC");
}
void LoveGarden()
{
	setlinestyle(1,0,0);
	line(160,290,180,280);
	line(160,290,180,300);
	arc(180,285,270,300,5);
	arc(180,285,335,0,5);
	arc(180,285,25,60,5);
	arc(180,285,80,90,5);
	arc(180,295,270,300,5);
	arc(180,295,335,0,5);
	arc(180,295,25,60,5);
	outtextxy(172,286,"A");
}
void Whitehouse()
{
	setlinestyle(0,0,0);
	line(200,295,240,295);
	line(200,295,200,280);
	line(200,280,225,280);
	line(225,280,225,288);
	line(225,288,240,288);
	line(240,288,240,295);
	outtextxy(205,285,"B");
}
void Architecture()
{
	setlinestyle(0,0,0);
	line(190,325,230,325);
	line(190,325,190,320);
	line(190,320,180,320);
	line(180,320,180,315);
	line(180,315,200,315);
	line(200,315,200,300);
	line(200,300,215,300);
	line(215,300,215,315);
	line(215,315,230,315);
	line(230,315,230,325);
	outtextxy(205,310,"C");
}
void MasterHostel()
{
	setlinestyle(0,0,0);
	rectangle(265,300,253,313);
	outtextxy(256,304,"D");
}
void Hydrolab()
{
	setlinestyle(0,0,0);
	rectangle(265,315,253,327);
	outtextxy(256,318,"E");
}
void Cafe()
{
	setlinestyle(0,0,0);
	line(267,275,257,275);
	line(267,275,267,265);
	line(262,265,257,265);
	line(262,265,262,260);
	line(262,260,267,260);
	line(267,260,267,265);
	line(257,265,257,275);
	outtextxy(259,267,"F");
}
void RoboticsClub()
{
	setlinestyle(0,0,0);
	line(205,270,217,270);
	line(217,270,217,253);
	line(217,253,205,253);
	line(205,253,205,270);
	outtextxy(208,258,"G");
}
void Electronic()
{
	setlinestyle(0,0,0);
	line(182,270,182,263);
	line(182,263,185,263);
	line(185,263,185,258);
	line(185,258,182,258);
	line(182,258,182,235);
	line(182,235,165,235);
	line(165,235,165,233);
	line(165,233,163,233);
	line(163,233,161,233);
	line(161,233,161,245);
	line(161,245,163,245);
	line(163,245,163,245);
	line(163,245,165,245);
	line(165,245,165,239);
	line(165,239,172,239);
	line(172,239,172,270);
	line(172,270,182,270);
	outtextxy(174,250,"H");
}
void Cit()
{
	setlinestyle(0,0,0);
	rectangle(205,235,217,245);
	outtextxy(208,237,"I");
}
void Library()
{
	setlinestyle(0,0,0);
	outtextxy(243,235,"J");
	line(240,243,252,243);
	line(240,243,240,245);
	line(240,245,227,245);
	line(227,245,227,237);
	line(227,237,240,237);
	line(240,237,240,230);
	line(240,230,252,230);
	line(252,230,252,243);
}
void Ictc()
{
	setlinestyle(0,0,0);
	outtextxy(208,212,"K");
	line(207,208,207,211);
	line(207,211,204,211);
	line(204,211,204,220);
	line(204,220,210,220);
	line(210,220,216,220);
	line(216,220,218,220);
	line(218,220,218,213);
}
void Workshop()
{
	setlinestyle(0,0,0);
	line(252,270,252,253);
	line(252,270,240,270);
	line(252,253,240,253);
	line(240,253,240,270);
	outtextxy(244,260,"L");
}
void Mechanical()
{
	setlinestyle(0,0,0);
	line(240,190,242,192);
	line(242,192,240,194);
	line(240,194,242,196);
	line(240,190,242,188);
	line(242,188,244,190);
	line(244,190,254,180);
	line(254,180,249,175);
	line(249,175,256,168);
	line(256,168,262,174);
	line(262,174,264,172);
	line(264,172,272,180);
	line(272,180,250,202);
	line(250,202,242,196);
	outtextxy(257,177,"M");
}
void Civil()
{
	setlinestyle(0,0,0);
	line(205,185,205,178);
	line(205,178,213,178);
	line(213,178,213,180);
	line(205,185,213,185);
	line(213,185,213,190);
	line(213,180,228,180);
	line(228,180,228,190);
	line(228,190,213,190);
	outtextxy(217,182,"N");
}
void Chemical()
{
	setlinestyle(0,0,0);
	line(250,155,258,155);
	line(258,155,258,160);
	line(258,160,273,160);
	line(250,155,250,148);
	line(250,148,260,148);
	line(260,148,260,150);
	line(260,150,273,150);
	line(273,150,273,160);
	outtextxy(261,152,"O");
}
void Incubation()
{
	setlinestyle(0,0,0);
	line(243,130,255,133);
	line(255,133,257,120);
	line(257,120,246,120);
	line(245,120,243,130);
	outtextxy(248,123,"P");
}
void Zero()
{
	setlinestyle(0,0,0);
	arc(274,120,240,10,4);
	arc(271,127,50,270,3);
	line(271,130,283,133);
	line(283,133,286,136);
	line(286,136,288,134);
	line(290,120,288,130);
	line(278,118,290,120);
	line(288,130,288,134);
	outtextxy(278,123,"Q");
}
void Heavy()
{
	setlinestyle(0,0,0);
	line(295,195,305,201);
	line(305,201,290,216);
	line(290,216,282,210);
	line(282,210,295,195);
	outtextxy(293,200,"R");
}
void Aero()
{
	setlinestyle(0,0,0);
	line(293,180,295,185);
	line(295,185,300,183);
	line(300,183,303,190);
	line(303,190,310,186);
	line(310,186,307,179);
	line(307,179,316,175);
	line(316,175,308,167);
	line(308,167,302,170);
	line(302,170,303,172);
	outtextxy(305,170,"S");
	line(303,172,292,179);
}
void Ground()
{
	setlinestyle(0,0,0);
	line(330,80,410,110);
	line(330,80,310,130);
	line(310,130,340,140);
	line(340,140,342,132);
	line(342,132,400,150);
	line(400,150,410,110);
	//setfillstyle(1,2);
       //	floodfill(334,114,WHITE);
	settextstyle(0,0,2);
	outtextxy(360,110,"T");
	settextstyle(0,0,0);
}
void Carpentary()
{
	line(265,295,250,295);
	line(265,295,265,280);
	line(250,295,250,280);
	line(250,280,265,280);
	outtextxy(255,285,"U");
}
void Basket()
{
	setlinestyle(0,0,0);
	rectangle(395,175,415,185);
	outtextxy(402,177,"V");
}
void Boys()
{
	setlinestyle(0,0,0);
	line(455,161,465,164);
	line(465,164,467,154);
	line(455,160,457,154);
	line(467,154,459,152);
	line(459,152,461,142);
	line(457,154,447,152);
	line(461,142,453,140);
	line(447,152,449,142);
	line(453,140,455,130);
	line(449,142,439,140);
	line(455,130,443,128);
	line(439,140,443,128);
	line(446,132,451,133);
	line(446,132,444,137);
	line(444,137,450,138);
	line(451,133,450,138);
	outtextxy(451,144,"W");
}
void TtHall()
{
	rectangle(260,212,275,222);
	outtextxy(264,214,"X");
}
void Girls()
{
	setlinestyle(0,0,0);
	setlinestyle(0,0,0);
	rectangle(410,90,425,100);
	outtextxy(414,92,"Y");
}
void Staff()
{
	setlinestyle(0,0,0);
	rectangle(440,70,455,75);
	rectangle(460,80,475,85);
	rectangle(480,90,495,95);
	rectangle(485,80,500,85);
	rectangle(435,85,450,90);
	line(430,70,430,100);
	line(430,100,500,100);
	line(500,100,510,70);
	outtextxy(460,90,"Z");
}

void Map()
{
	settextstyle(4,0,4);
	outtextxy(120,0,"MAP OF IOE PULCHOWK'");

	settextstyle(0,0,0);
//Outline of Map
	line(0,40,1000,40);
	line(0,350,1000,350);
	line(0,376,1000,376);
	rectangle(0,0,639,476);
	setlinestyle(0,0,3);
// ICTC section
    setcolor(BROWN);
    line(150,330,270,330);
    line(270,330,270,300);
    line(270,300,270,300);
    line(150,330,150,300);
    line(150,280,150,220);
    line(270,300,270,237);
    line(150,220,160,210);
    line(160,210,190,220);
    line(190,220,205,205);
    line(205,205,230,217);
    line(270,237,243,224);
// Aerospace section
    line(210,200,240,215);
    line(249,219,270,230);
    line(210,200,190,185);
    line(190,185,205,170);
    line(205,170,210,160);
    line(210,160,200,150);
    line(200,150,230,135);
    line(230,135,240,105);
    line(240,105,290,100);
    line(290,100,300,60);
    line(300,60,330,50);
    line(330,50,350,60);
    line(350,60,365,75);
    line(365,75,385,71);
    line(385,71,430,71);
    line(430,71,435,65);
    line(435,65,485,75);
    line(485,75,510,70);
    line(270,230,310,220);
    line(310,220,307,205);
    line(307,205,335,190);
    line(335,190,410,200);
    line(410,200,413,190);
    line(413,190,460,195);
    line(460,195,510,175);
    line(510,175,520,120);
    line(520,120,510,70);
    setcolor(WHITE);
// Outline complete
// compass
	line(575,60,575,100);
	line(555,80,595,80);
	outtextxy(573,50,"N");
	outtextxy(600,77,"E");
	outtextxy(545,77,"W");
	outtextxy(573,105,"S");
//buildings
	LoveGarden();
	Whitehouse();
	Architecture();
	MasterHostel();
	Hydrolab();
	Cafe();
	RoboticsClub();
	Electronic();
	Cit();
	Library();
	Ictc();
	Workshop();
	Mechanical();
	Civil();
	Chemical();
	Incubation();
	Zero();
	Heavy();
	Aero();
	Ground();
	Carpentary();
	Basket();
	Boys();
	TtHall();
	Girls();
	Staff();
// see saw
	ellipse(223,261,270,315,6,6);
	ellipse(223,261,345,0,6,6);
	ellipse(223,261,35,70,6,6);
	ellipse(223,261,90,135,6,6);
	ellipse(223,261,150,175,6,6);
	ellipse(223,261,200,225,6,6);
	ellipse(223,261,245,260,6,6);
//Road

	setcolor(LIGHTGRAY);
	line(150,287,180,277);
	line(150,282,180,272);
	line(180,272,190,272);
	line(180,277,190,277);
	line(190,272,190,235);
	line(150,293,180,303);
	line(150,298,180,308);
	line(150,293,150,298);
	line(180,308,198,308);
	line(180,303,190,303);
	line(190,277,190,303);
	line(198,277,198,308);
	line(198,272,232,272);
	line(198,277,240,277);
	line(150,287,150,282);
	line(198,252,198,272);
	line(198,251,232,251);
	line(237,251,250,251);
	line(250,251,250,248);
	line(232,251,232,272);
	line(237,251,237,272);
	line(237,272,255,272);
	line(255,272,255,277);
	line(242,277,198,277);
	line(242,277,242,295);
	line(242,295,247,295);
	line(247,295,247,277);
	line(247,277,255,277);
	line(198,248,198,235);
	line(198,248,250,248);
	line(190,235,185,230);
	line(185,230,160,230);
	line(160,226,185,226);
	line(185,226,190,230);
	line(190,230,230,220);
	line(198,235,240,225);
	line(230,220,240,225);
	line(160,226,160,230);
	setcolor(WHITE);
	setlinestyle(3,0,1);
	line(150,285,180,275);
	line(182,275,260,275);
	line(194,272,194,235);
	line(194,232,235,223);
	line(194,277,194,300);
	line(150,295,180,306);
	line(180,306,196,306);
	line(244,275,244,290);
	line(160,228,185,228);
	setlinestyle(2,0,0);
	line(198,250,250,250);
	line(235,253,235,270);
	setlinestyle(0,0,0);
//Soil Testing lab
	rectangle(160,217,167,223);
//Other side of ICTC
//Water pond
	setfillstyle(1,BLUE);
	circle(310,110,3);
	floodfill(310,110,WHITE);
//road
	setcolor(WHITE);
	setlinestyle(2,0,2);
	line(247,216,309,154);
	setcolor(LIGHTGRAY);
	setlinestyle(0,0,0);
	line(245,214,250,217);
	line(250,217,312,155);
	line(245,214,306,153);
	line(306,153,241,140);
	line(241,140,244,135);
	setlinestyle(2,0,0);
	setcolor(WHITE);
	line(245,138,310,150);
	setcolor(LIGHTGRAY);
	setlinestyle(0,0,0);
	line(244,135,314,148);
	line(314,148,324,152);
	line(312,155,324,160);
	setcolor(WHITE);
	ellipse(340,156,180,220,16,2);
	ellipse(340,156,240,260,16,2);
	ellipse(340,156,280,300,16,2);
	setcolor(LIGHTGRAY);
	ellipse(340,152,180,0,16,2);
	ellipse(340,160,180,0,16,2);
	setcolor(WHITE);
	ellipse(356,166,0,20,48,10);
	ellipse(356,166,30,50,48,10);
	ellipse(356,166,60,65,48,10);
	ellipse(356,166,70,80,48,10);
	ellipse(356,166,85,90,48,10);
	setcolor(LIGHTGRAY);
	ellipse(356,170,0,90,48,10);
	ellipse(356,162,0,90,48,10);
	ellipse(404,152,270,0,16,10);
	ellipse(404,160,270,315,16,10);
	setcolor(LIGHTGRAY);
	line(415,167,440,174);
	line(440,174,443,170);
	line(443,170,425,164);
	setcolor(WHITE);
	setlinestyle(2,0,1);
	line(422,160,433,112);
	setcolor(LIGHTGRAY);
	setlinestyle(0,0,0);
	setcolor(LIGHTGRAY);
	line(425,164,435,115);
	line(420,152,430,110);
	arc(435,110,90,180,5);
	arc(440,115,90,180,5);
	line(435,105,510,105);
	line(440,109,510,109);
	line(510,105,510,109);
	setcolor(WHITE);
	setlinestyle(3,0,1);
	line(435,107,505,107);
	setlinestyle(0,0,0);
// the building i dont know about
	line(445,124,453,125);
	line(445,124,447,118);
	line(453,124,455,119);
	line(447,118,455,119);
//campus mess
	line(460,183,463,173);
	line(460,183,453,181);
	line(463,173,456,171);
	line(456,171,453,181);
//Gym
	line(445,167,453,169);
	line(453,169,454,166);
	line(445,167,446,164);
	line(454,166,446,164);
	settextstyle(0,0,1);
//Path of mechanical
	setlinestyle(1,0,3);
	setcolor(YELLOW);
	line(247,207,230,190);
	line(233,190,233,140);
	line(233,173,247,173);
	line(247,173,247,163);
	line(247,163,233,163);
	line(247,163,290,163);
	line(233,177,215,177);
	setlinestyle(0,0,0);
	setcolor(WHITE);
//green area around chemical
	setcolor(10);
	line(230,170,220,173);
	line(220,173,210,170);
	line(210,170,213,163);
	line(213,163,213,158);
	line(213,158,215,150);
	line(215,150,225,147);
	line(225,147,230,170);
	setfillstyle(1,10);
	floodfill(219,154,10);
//green area architecture
	line(170,325,170,310);
	line(170,310,155,307);
	line(155,307,155,325);
	line(155,325,170,325);
	floodfill(159,320,10);
//green area electronics engineering
	setcolor(10);
	rectangle(160,250,167,270);
	floodfill(164,254,10);
//green area around basketball court
	line(380,170,385,190);
	line(380,170,365,167);
	line(365,167,353,170);
	line(353,170,343,167);
	line(343,167,335,171);
	line(335,171,327,187);
	line(327,187,335,185);
	line(335,185,385,190);
	floodfill(380,185,10);
//green area behind mess
	line(470,185,475,150);
	line(475,150,470,120);
	line(470,120,510,113);
	line(510,113,512,140);
	line(512,140,506,170);
	line(506,170,470,185);
	floodfill(500,160,10);
//green area around ground
	line(300,95,310,100);
	line(300,95,300,70);
	line(300,70,325,57);
	line(325,57,340,63);
	line(340,63,342,74);
	line(342,74,330,74);
	line(330,74,310,100);
	floodfill(310,70,10);
//green area around incubtion
	line(243,110,270,108);
	line(270,108,272,115);
	line(243,110,240,116);
	line(240,116,272,115);
	floodfill(250,115,10);
	setcolor(WHITE);
//tt
	line(430,162,440,165);
	line(440,165,443,156);
	line(430,162,433,153);
	line(433,153,443,156);
	outtextxy(470,465,"Press ESC key to quit");
}
void Fix()
{
	cleardevice();
	Map();
	settextstyle(7,0,2);
	outtextxy(10,348,"Use your keyboard to select your destination on the map.");
	settextstyle(0,0,0);
	setcolor(LIGHTCYAN);

}
void Swich()
{
	char c;

	while (1)
	 {
	if (kbhit)
		{
			if ((int)c == 27)
			    break;
			settextstyle(7,0,2);
			outtextxy(10,348,"Use your keyboard to select your destination on the map.");
			c = getch();
			switch (c)
			{
		case 'a':
			Fix();

			LoveGarden();
			settextstyle(7,0,2);
			outtextxy(10,375,"Love Garden");
			setcolor(WHITE);

			break;
		case 'b':
			Fix();

			Whitehouse();
			settextstyle(7,0,2);
			outtextxy(10,375,"Office of the Dean");
			setcolor(WHITE);
			break;
		case 'c':
			Fix();
			Architecture();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Architecture");
			setcolor(WHITE);
			break;
		case 'd':
			Fix();
			MasterHostel();
			settextstyle(7,0,2);
			outtextxy(10,375,"M. Sc Hostel");
			setcolor(WHITE);
			break;
		case 'e':
			Fix();
			Hydrolab();
			settextstyle(7,0,2);
			outtextxy(10,375,"Hydro Lab");
			setcolor(WHITE);
			break;
		case 'f':
			Fix();
			Cafe();
			settextstyle(7,0,2);
			outtextxy(10,375,"Campus Cafeteria");
			setcolor(WHITE);
			break;
		case 'g':
			Fix();
			RoboticsClub();
			settextstyle(7,0,2);
			outtextxy(10,375,"Robotics Club");
			setcolor(WHITE);
			break;
		case 'h':
			Fix();
			Electronic();
			settextstyle(7,0,1);
			outtextxy(10,375,"Department of Electrical, Electronics & Computer Engineering");
			setcolor(WHITE);
			break;
		case 'i':
			Fix();
			Cit();
			settextstyle(7,0,2);
			outtextxy(10,375,"CIT Building");
			setcolor(WHITE);
			break;
		case 'j':
			Fix();
			Library();
			settextstyle(7,0,2);
			outtextxy(10,375,"Library Block");
			setcolor(WHITE);
			break;
		case 'k':
			Fix();
			Ictc();
			settextstyle(7,0,2);
			outtextxy(10,375,"ICTC Building");
			setcolor(WHITE);
			break;
		case 'l':
			Fix();
			Workshop();
			settextstyle(7,0,2);
			outtextxy(10,375,"Workshop and Engine Lab");
			setcolor(WHITE);
			break;
		case 'm':
			Fix();
			Mechanical();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Mechanical Engineering");
			setcolor(WHITE);
			break;
		case 'n':
			Fix();
			Civil();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Civil Engineering");
			setcolor(WHITE);
			break;
		case 'o':
			Fix();
			Chemical();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Applied Sciences & Chemical engineering");
			setcolor(WHITE);
			break;
		case 'p':
			Fix();
			Incubation();
			settextstyle(7,0,2);
			outtextxy(10,375,"Incubation, Innovation and Entrepreneurship Center");
			setcolor(WHITE);
			break;
		case 'q':
			Fix();
			Zero();
			settextstyle(7,0,2);
			outtextxy(10,375,"Centre for Energy Studies");
			setcolor(WHITE);
			break;
		case 'r':
			Fix();
			Heavy();
			settextstyle(7,0,2);
			outtextxy(10,375,"Heavy Lab");
			setcolor(WHITE);
			break;
		case 's':
			Fix();
			Aero();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Aerospace engineering");
			setcolor(WHITE);
			break;
		case 't':
			Fix();
			Ground();
			settextstyle(7,0,2);
			outtextxy(10,375,"Football and Cricket Ground");
			setcolor(WHITE);
			break;
		case 'u':
			Fix();
			Carpentary();
			settextstyle(7,0,2);
			outtextxy(10,375,"Department of Carpentary");
			setcolor(WHITE);
			break;
		case 'v':
			Fix();
			Basket();
			settextstyle(7,0,2);
			outtextxy(10,375,"Basketball Court");
			setcolor(WHITE);
			break;
		case 'w':
			Fix();
			Boys();
			settextstyle(7,0,2);
			outtextxy(10,375,"Boy's Hostel");
			setcolor(WHITE);
			break;
		case 'x':
			Fix();
			TtHall();
			settextstyle(7,0,2);
			outtextxy(10,375,"Guard Post");
			setcolor(WHITE);
			break;
		case 'y':
			Fix();
			Girls();
			settextstyle(7,0,2);
			outtextxy(10,375,"Girl's Hostel");
			setcolor(WHITE);
			break;
		case 'z':
			Fix();
			Staff();
			settextstyle(7,0,2);
			outtextxy(10,375,"IOE Staff Quarter");
			setcolor(WHITE);
			break;
		default:
			break;
			}
		}
	 }
}
void EndScreen()
{
	settextstyle(4,0,5);
	outtextxy(120,150,"Thanks for your visit.");
	settextstyle(5,0,5);
	outtextxy(260,290,"Credits");
	settextstyle(1,0,3);
	outtextxy(60,350,"Shubham Ranabhat");
	outtextxy(350,350,"Saurya Shrestha");
	settextstyle(1,0,2);
	outtextxy(60,400,"Sandesh Kumar");
	outtextxy(350,400,"Saurav Sen Khawas");
	settextstyle(6,0,1);
	outtextxy(60,370,"078BAS040");
	outtextxy(350,370,"078BAS039");
	outtextxy(60,417,"078BAS048");
	outtextxy(350,417,"078BAS038");
	settextstyle(0,0,1);
	outtextxy(10,5,"source code is available on");
	outtextxy(10,15,"https://github.com/shubham-per/Map-mini-project");
}

void main()
{
	int graphdriver=DETECT, graphmode;
	initgraph(&graphdriver,&graphmode,"C:\\TURBOC3\\BGI");
	cleardevice();

	WlcScreen();
	getch();
	cleardevice();

	Map();
	Swich();

	cleardevice();
	EndScreen();

	getch();
	closegraph();
}

