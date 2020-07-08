#include <windows.h>
#include <glut.h>

void init(void); void ukuran(int,int);
void tampil(void); void hilang(void); void display(void);
void rumahmain(void); void balkon(void); void garasi(void); void khusus(void); void dasar(void); void ornament(void);
void keyboard(unsigned char, int x, int y);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Luthfi Seto Abiningtyas - 672018335");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(1.5f);
}

//kuy gambar
void ornament(void)
{
//lift
    //depan
    glBegin(GL_QUADS);
    glColor3ub(214, 47, 47);
    glVertex3f(-16.0, -10.0, -8.0);
    glVertex3f(-16.0, 30.0, -8.0);
    glVertex3f(-9.0, 30.0, -8.0);
    glVertex3f(-9.0, -10.0, -8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(217, 54, 54);
    glVertex3f(-9.0, 30.0, -8.0);
    glVertex3f(-9.0, -10.0, -8.0);
    glVertex3f(-9.0, -10.0, -15.0);
    glVertex3f(-9.0, 30.0, -15.0);
    glEnd();
    //atap lift
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(-15.5, 30.0, -7.8);
    glVertex3f(-9.0, 30.0, -7.8);
    glVertex3f(-9.0, 30.0, -15.0);
    glVertex3f(-15.5, 30.0, -15.0);
    //bates pintu lt 1
    glBegin(GL_QUADS);
    glColor3ub(214, 47, 47);
    glVertex3f(-16.0, 10.0, -7.85);
    glVertex3f(-9.0, 10.0, -7.85);
    glVertex3f(-9.0, 5.5, -7.85);
    glVertex3f(-16.0, 5.5, -7.85);
    glEnd();
    //bates pintu lt 2
    glBegin(GL_QUADS);
    glColor3ub(214, 47, 47);
    glVertex3f(-16.0, 30.0, -7.85);
    glVertex3f(-9.0, 30.0, -7.85);
    glVertex3f(-9.0, 25.5, -7.85);
    glVertex3f(-16.0, 25.5, -7.85);
    glEnd();
    //pencetan lt 1
    glBegin(GL_QUADS);
    glColor3ub(252, 208, 8);
    glVertex3f(-9.9, 0.25, -7.95);
    glVertex3f(-8.9, 0.25, -7.95);
    glVertex3f(-8.9, -0.75, -7.95);
    glVertex3f(-9.9, -0.75, -7.95);
    glEnd();
    //pencetan lt 2
    glBegin(GL_QUADS);
    glColor3ub(252, 208, 8);
    glVertex3f(-9.9, 20.75, -7.95);
    glVertex3f(-8.9, 20.75, -7.95);
    glVertex3f(-8.9, 19.75, -7.95);
    glVertex3f(-9.9, 19.75, -7.95);
    glEnd();
    //pintu lift kiri
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex3f(-14.5, -10.0, -7.9);
    glVertex3f(-14.5, 30.0, -7.9);
    glVertex3f(-12.5, 30.0, -7.9);
    glVertex3f(-12.5, -10.0, -7.9);
    glEnd();
    //pintu lift kanan
    glBegin(GL_QUADS);
    glColor3ub(189, 189, 189);
    glVertex3f(-12.5, -10.0, -7.95);
    glVertex3f(-12.5, 30.0, -7.95);
    glVertex3f(-10.5, 30.0, -7.95);
    glVertex3f(-10.5, -10.0, -7.95);
    glEnd();

//pulau kapuk
    //kasur atas
    glBegin(GL_QUADS);
    glColor3ub(240, 240, 240);
    glVertex3f(5.5, 14.0, -3.0);
    glVertex3f(13.5, 14.0, -3.0);
    glVertex3f(13.5, 14.0, -14.5);
    glVertex3f(5.5, 14.0, -14.5);
    glEnd();
    //kasur kiri
    glBegin(GL_QUADS);
    glColor3ub(240, 240, 240);
    glVertex3f(5.5, 14.0, -3.0);
    glColor3ub(220, 220, 220);
    glVertex3f(5.5, 12.0, -3.0);
    glVertex3f(5.5, 12.0, -14.5);
    glColor3ub(240, 240, 240);
    glVertex3f(5.5, 14.0, -14.);
    glEnd();
    //kasur depan
    glBegin(GL_QUADS);
    glColor3ub(240, 240, 240);
    glVertex3f(5.5, 14.0, -3.0);
    glColor3ub(220, 220, 220);
    glVertex3f(5.5, 12.0, -3.0);
    glVertex3f(13.5, 12.0, -3.0);
    glColor3ub(240, 240, 240);
    glVertex3f(13.5, 14.0, -3.0);
    glEnd();
    //dipan kiri
    glBegin(GL_QUADS);
    glColor3ub(153, 120, 47);
    glVertex3f(5.6, 12.2, -3.0);
    glColor3ub(171, 134, 51);
    glVertex3f(5.6, 10.0, -3.0);
    glVertex3f(5.6, 10.0, -14.5);
    glColor3ub(153, 120, 47);
    glVertex3f(5.6, 12.2, -14.5);
    glEnd();
    //dipan depan
    glBegin(GL_QUADS);
    glColor3ub(153, 120, 47);
    glVertex3f(5.6, 12.2, -3.0);
    glColor3ub(171, 134, 51);
    glVertex3f(5.6, 10.0, -3.0);
    glVertex3f(13.6, 10.0, -3.0);
    glColor3ub(153, 120, 47);
    glVertex3f(13.6, 12.2, -3.0);
    glEnd();

//kursi kamar
    //pinggir kanan
    glBegin(GL_QUADS);
    glColor3ub(0, 9, 41);
    glVertex3f(2.0, 14.2, 10.7);
    glColor3ub(0, 19, 87);
    glVertex3f(2.0, 10.0, 10.7);
    glVertex3f(6.0, 10.0, 10.7);
    glColor3ub(0, 9, 41);
    glVertex3f(6.0, 14.2, 10.7);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(2.0, 18.0, 2.6);
    glVertex3f(2.0, 10.0, 2.6);
    glColor3ub(0, 9, 41);
    glVertex3f(2.0, 10.0, 10.7);
    glVertex3f(2.0, 18.0, 10.7);
    glEnd();
    //pinggir kiri
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(2.0, 14.2, 2.6);
    glVertex3f(2.0, 10.0, 2.6);
    glVertex3f(6.0, 10.0, 2.6);
    glVertex3f(6.0, 14.2, 2.6);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(6.0, 13.0, 2.6);
    glVertex3f(6.0, 10.0, 2.6);
    glColor3ub(0, 9, 41);
    glVertex3f(6.0, 10.0, 10.7);
    glVertex3f(6.0, 13.0, 10.7);
    glEnd();
    //dudukan
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(6.0, 13.0, 2.6);
    glColor3ub(88, 117, 224);
    glVertex3f(3.0, 13.0, 2.6);
    glVertex3f(3.0, 13.0, 10.7);
    glColor3ub(0, 5, 23);
    glVertex3f(6.0, 13.0, 10.7);
    glEnd();
    //senderan
    glBegin(GL_QUADS);
    glColor3ub(88, 117, 224);
    glVertex3f(3.0, 13.0, 2.6);
    glColor3ub(0, 5, 23);
    glVertex3f(2.0, 18.0, 2.6);
    glVertex3f(2.0, 18.0, 10.7);
    glColor3ub(88, 117, 224);
    glVertex3f(3.0, 13.0, 10.7);
    glEnd();
    //s3penutup kanan
    glBegin(GL_POLYGON);
    glColor3ub(88, 117, 224);
    glVertex3f(3.0, 13.0, 10.6);
    glVertex3f(2.0, 18.0, 10.6);
    glVertex3f(2.0, 13.0, 10.6);
    glEnd();
    //s3penutup kiri
    glBegin(GL_POLYGON);
    glColor3ub(88, 117, 224);
    glVertex3f(3.0, 13.0, 2.7);
    glVertex3f(2.0, 18.0, 2.7);
    glVertex3f(2.0, 13.0, 2.7);
    glEnd();

//kursi ruang tamu
    //pinggir kanan
    glBegin(GL_QUADS);
    glColor3ub(0, 9, 41);
    glVertex3f(-13.0, -6.2, 10.7);
    glColor3ub(0, 19, 87);
    glVertex3f(-13.0, -10.0, 10.7);
    glVertex3f(-9.0, -10.0, 10.7);
    glColor3ub(0, 9, 41);
    glVertex3f(-9.0, -6.2, 10.7);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(-13.0, -2.0, 2.6);
    glVertex3f(-13.0, -10.0, 2.6);
    glColor3ub(0, 9, 41);
    glVertex3f(-13.0, -10.0, 10.7);
    glVertex3f(-13.0, -2.0, 10.7);
    glEnd();
    //pinggir kiri
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(-13.0, -6.2, 2.6);
    glVertex3f(-13.0, -10.0, 2.6);
    glVertex3f(-9.0, -10.0, 2.6);
    glVertex3f(-9.0, -6.2, 2.6);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(-9.0, -7.0, 2.6);
    glVertex3f(-9.0, -10.0, 2.6);
    glColor3ub(0, 9, 41);
    glVertex3f(-9.0, -10.0, 10.7);
    glVertex3f(-9.0, -7.0, 10.7);
    glEnd();
    //dudukan
    glBegin(GL_QUADS);
    glColor3ub(0, 5, 23);
    glVertex3f(-9.0, -7.0, 2.6);
    glColor3ub(88, 117, 224);
    glVertex3f(-12.0, -7.0, 2.6);
    glVertex3f(-12.0, -7.0, 10.7);
    glColor3ub(0, 5, 23);
    glVertex3f(-9.0, -7.0, 10.7);
    glEnd();
    //senderan
    glBegin(GL_QUADS);
    glColor3ub(88, 117, 224);
    glVertex3f(-12.0, -7.0, 2.6);
    glColor3ub(0, 5, 23);
    glVertex3f(-13.0, -2.0, 2.6);
    glVertex3f(-13.0, -2.0, 10.7);
    glColor3ub(88, 117, 224);
    glVertex3f(-12.0, -7.0, 10.7);
    glEnd();
    //s3penutup kanan
    glBegin(GL_POLYGON);
    glColor3ub(88, 117, 224);
    glVertex3f(-12.0, -7.0, 10.6);
    glVertex3f(-13.0, -2.0, 10.6);
    glVertex3f(-13.0, -7.0, 10.6);
    glEnd();
    //s3penutup kiri
    glBegin(GL_POLYGON);
    glColor3ub(88, 117, 224);
    glVertex3f(-12.0, -7.0, 2.7);
    glVertex3f(-13.0, -2.0, 2.7);
    glVertex3f(-13.0, -7.0, 2.7);
    glEnd();

//meja
    //papan atas
    glBegin(GL_QUADS);
    glColor3ub(97, 81, 36);
    glVertex3f(-6.0, -7.0, 1.5);
    glVertex3f(-2.0, -7.0, 1.5);
    glVertex3f(-2.0, -7.0, 10.0);
    glVertex3f(-6.0, -7.0, 10.0);
    //papan bawah
    glBegin(GL_QUADS);
    glColor3ub(51, 43, 19);
    glVertex3f(-6.0, -8.0, 1.5);
    glVertex3f(-2.0, -8.0, 1.5);
    glVertex3f(-2.0, -8.0, 10.0);
    glVertex3f(-6.0, -8.0, 10.0);
    //papan kiri
    glBegin(GL_QUADS);
    glColor3ub(51, 43, 19);
    glVertex3f(-6.0, -8.0, 1.5);
    glVertex3f(-6.0, -8.0, 10.0);
    glVertex3f(-6.0, -7.0, 10.0);
    glVertex3f(-6.0, -7.0, 1.5);
    //papan kanan
    glBegin(GL_QUADS);
    glColor3ub(51, 43, 19);
    glVertex3f(-2.0, -8.0, 1.5);
    glVertex3f(-2.0, -8.0, 10.0);
    glVertex3f(-2.0, -7.0, 10.0);
    glVertex3f(-2.0, -7.0, 1.5);
    //papan depan
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 25);
    glVertex3f(-6.0, -8.0, 10.0);
    glVertex3f(-2.0, -8.0, 10.0);
    glVertex3f(-2.0, -7.0, 10.0);
    glVertex3f(-6.0, -7.0, 10.0);
    //kaki kiri depan
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 25);
    glVertex3f(-5.5, -7.0, 9.5);
    glVertex3f(-2.5, -7.0, 9.5);
    glVertex3f(-2.5, -10.0, 9.5);
    glVertex3f(-5.5, -10.0, 9.5);
    //kaki kanan depan
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 25);
    glVertex3f(-5.5, -7.0, 2.0);
    glVertex3f(-2.5, -7.0, 2.0);
    glVertex3f(-2.5, -10.0, 2.0);
    glVertex3f(-5.5, -10.0, 2.0);
//tv
    //layar
    glBegin(GL_QUADS);
    glColor3ub(71, 70, 68);
    glVertex3f(13.4, 21.0, 4.0);
    glVertex3f(13.4, 15.0, 4.0);
    glColor3ub(61, 61, 61);
    glVertex3f(13.4, 15.0, 9.6);
    glVertex3f(13.4, 21.0, 9.6);
    glEnd();
    //lis TV
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glVertex3f(13.5, 21.0, 4.0);
    glVertex3f(13.5, 15.0, 4.0);
    glVertex3f(13.5, 15.0, 9.6);
    glVertex3f(13.5, 21.0, 9.6);
    glEnd();

//shower
    //batas
    glBegin(GL_QUADS);
    glColor3ub(120, 214, 179);
    glVertex3f(18.1, 27.0, -10.0);
    glVertex3f(23.9, 27.0, -10.0);
    glVertex3f(23.9, 10.1, -10.0);
    glVertex3f(18.1, 10.1, -10.0);
    glEnd();
    //shower
    glBegin(GL_QUADS);
    glColor3ub(211, 219, 216);
    glVertex3f(21.1, 24.0, -12.8);
    glVertex3f(23.9, 24.0, -12.8);
    glVertex3f(23.9, 24.0, -11.7);
    glVertex3f(21.1, 24.0, -11.8);
    glEnd();
    //lubang air
    glBegin(GL_QUADS);
    glColor3ub(5, 5, 5);
    glVertex3f(22.8, 10.2, -14.5);
    glVertex3f(23.3, 10.2, -14.5);
    glVertex3f(23.3, 10.2, -14.0);
    glVertex3f(22.8, 10.2, -14.0);
    glEnd();

//lemari
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(122, 108, 65);
    glVertex3f(19.9, 27.0, 13.0);
    glVertex3f(23.9, 27.0, 13.0);
    glVertex3f(23.9, 10.1, 13.0);
    glVertex3f(19.9, 10.1, 13.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(122, 108, 65);
    glVertex3f(19.9, 27.0, 7.0);
    glVertex3f(23.9, 27.0, 7.0);
    glVertex3f(23.9, 10.1, 7.0);
    glVertex3f(19.9, 10.1, 7.0);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(171, 152, 92);
    glVertex3f(19.9, 27.0, 7.0);
    glVertex3f(19.9, 27.0, 13.0);
    glVertex3f(19.9, 10.1, 13.0);
    glVertex3f(19.9, 10.1, 7.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(176, 153, 81);
    glVertex3f(19.9, 27.0, 7.0);
    glVertex3f(23.9, 27.0, 7.0);
    glVertex3f(23.9, 27.0, 13.0);
    glVertex3f(19.9, 27.0, 13.0);
    glEnd();
    //lis depan
    glLineWidth(1.5f);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(19.9, 27.0, 10.0);
    glVertex3f(19.9, 10.1, 10.0);
    glEnd();
}

void khusus(void)
{
    //s3 depan
    glBegin(GL_POLYGON);
    glColor3ub(242, 203, 128);
    glVertex3f(-16.0, 30.0, 15.0);
    glColor3ub(184, 153, 94);
    glVertex3f(4.0, 40.0, 15.0);
    glColor3ub(242, 203, 128);
    glVertex3f(24.0, 30.0, 15.0);
    glEnd();
    //s3 belakang
    glBegin(GL_POLYGON);
    glColor3ub(125, 105, 66);
    glVertex3f(-16.0, 30.0, -15.0);
    glColor3ub(105, 88, 55);
    glVertex3f(4.0, 40.0, -15.0);
    glColor3ub(125, 105, 66);
    glVertex3f(24.0, 30.0, -15.0);
    glEnd();

    //genteng kanan
    glBegin(GL_QUADS);
    glColor3ub(71, 52, 24);
    glVertex3f(4.0, 30.0+10.0, 17.0);
    glVertex3f(26.0, 9.0+20.0, 17.0);
    glVertex3f(26.0, 9.0+20.0, -17.0);
    glVertex3f(4.0, 30.0+10.0, -17.0);
    glEnd();
    //genteng kiri
    glBegin(GL_QUADS);
    glColor3ub(97, 70, 32);
    glVertex3f(4.0, 30.0+10.0, 17.0);
    glVertex3f(-18.0, 9.0+20.0, 17.0);
    glVertex3f(-18.0, 9.0+20.0, -17.0);
    glVertex3f(4.0, 30.0+10.0, -17.0);
    glEnd();

    //depan kiri
    glBegin(GL_QUADS);
    glColor3ub(242, 203, 128);
    glVertex3f(-16.0, -10.0, 15.0);
    glVertex3f(-16.0, 30.0, 15.0);
    glVertex3f(4.0, 30.0, 15.0);
    glVertex3f(4.0, -10.0, 15.0);
    glEnd();

    //depan kanan
    glBegin(GL_QUADS);
    glColor3ub(242, 203, 128);
    glVertex3f(4.0, 10.0, 15.0);
    glVertex3f(4.0, 30.0, 15.0);
    glVertex3f(24.0, 30.0, 15.0);
    glVertex3f(24.0, 10.0, 15.0);
    glEnd();

//pintu
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(74, 34, 10);
    glVertex3f(-5.4, -10.0, 15.05);
    glVertex3f(-5.4, 4.0, 15.05);
    glColor3ub(110, 51, 14);
    glVertex3f(-3.0, 4.0, 15.05);
    glVertex3f(-3.0, -10.0, 15.05);
    glEnd();
    //handle
    glBegin(GL_QUADS);
    glColor3ub(255, 230, 0);
    glVertex3f(-4.8, -3.2, 15.1);
    glVertex3f(-4.8, -2.8, 15.1);
    glVertex3f(-6.0, -2.8, 15.1);
    glVertex3f(-6.0, -3.2, 15.1);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(110, 51, 14);
    glVertex3f(-7.8, -10.0, 15.05);
    glVertex3f(-7.8, 4.0, 15.05);
    glColor3ub(74, 34, 10);
    glVertex3f(-5.4, 4.0, 15.05);
    glVertex3f(-5.4, -10.0, 15.05);
    glEnd();
    //lis
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex3f(-3.0, -10.0, 15.05);
    glVertex3f(-3.0, 4.0, 15.05);
    glVertex3f(-5.4, 4.0, 15.05);
    glVertex3f(-5.4, -10.0, 15.05);
    glVertex3f(-5.4, 4.0, 15.05);
    glVertex3f(-7.8, 4.0, 15.05);
    glVertex3f(-7.8, -10.0, 15.05);
    glEnd();

//jendela
    //kanan
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-1.6, -8.0, 15.05);
    glVertex3f(-1.6, 2.0, 15.05);
    glVertex3f(0.8, 2.0, 15.05);
    glVertex3f(0.8, -8.0, 15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
     glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.6, -8.0, 15.05);
    glVertex3f(-1.6, 2.0, 15.05);
    glVertex3f(0.8, 2.0, 15.05);
    glVertex3f(0.8, -8.0, 15.05);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-11.6, -8.0, 15.05);
    glVertex3f(-11.6, 2.0, 15.05);
    glVertex3f(-9.2, 2.0, 15.05);
    glVertex3f(-9.2, -8.0, 15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
     glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-11.6, -8.0, 15.05);
    glVertex3f(-11.6, 2.0, 15.05);
    glVertex3f(-9.2, 2.0, 15.05);
    glVertex3f(-9.2, -8.0, 15.05);
    glEnd();

//jendela lt2
    //kanan
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-1.6, 14.0, 15.05);
    glVertex3f(-1.6, 24.0, 15.05);
    glVertex3f(0.8, 24.0, 15.05);
    glVertex3f(0.8, 14.0, 15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
     glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.6, 14.0, 15.05);
    glVertex3f(-1.6, 24.0, 15.05);
    glVertex3f(0.8, 24.0, 15.05);
    glVertex3f(0.8, 14.0, 15.05);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-5.6, 14.0, 15.05);
    glVertex3f(-5.6, 24.0, 15.05);
    glVertex3f(-3.2, 24.0, 15.05);
    glVertex3f(-3.2, 14.0, 15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
     glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-5.6, 14.0, 15.05);
    glVertex3f(-5.6, 24.0, 15.05);
    glVertex3f(-3.2, 24.0, 15.05);
    glVertex3f(-3.2, 14.0, 15.05);
    glEnd();
}

void rumahmain(void)
{
    //level depan
    glBegin(GL_QUADS);
    glColor3ub(242, 203, 128);
    glVertex3f(-16.0, -12.0, 15.0);
    glVertex3f(-16.0, -10.0, 15.0);
    glVertex3f(4.0, -10.0, 15.0);
    glVertex3f(4.0, -12.0, 15.0);
    glEnd();

    //jendela kanan lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(3.499, 3.0, 1.0);
    glVertex3f(3.499, -5.0, 1.0);
    glVertex3f(3.499, -5.0, -3.2);
    glVertex3f(3.499, 3.0, -3.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(3.5, 3.0, 1.0);
    glVertex3f(3.5, -5.0, 1.0);
    glVertex3f(3.5, -5.0, -3.2);
    glVertex3f(3.5, 3.0, -3.2);
    glEnd();

    //kanan dalam
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(3.5, 10.0, 15.0);
    glVertex3f(3.5, -10.0, 15.0);
    glVertex3f(3.5, -10.0, -15.0);
    glVertex3f(3.5, 10.0, -15.0);
    glEnd();
    //kanan dalam pinggir
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(3.5, -10.0, 14.5);
    glVertex3f(3.5, 10.0, 14.5);
    glVertex3f(4.0, 10.0, 15.0);
    glVertex3f(4.0, -10.0, 15.0);
    glEnd();
    //kanan dalam lt2
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(13.6, 30.0, 15.0);
    glVertex3f(13.6, 10.0, 15.0);
    glVertex3f(13.6, 10.0, -15.0);
    glVertex3f(13.6, 30.0, -15.0);
    glEnd();
    //kanan dalam pinggir lt2
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(13.6, 10.0, 14.9);
    glVertex3f(14.1, 10.0, 14.9);
    glVertex3f(14.1, 30.0, 14.9);
    glVertex3f(13.6, 30.0, 14.9);
    glEnd();
    //pintu kamar mandi
    glBegin(GL_QUADS);
    glColor3ub(66, 27, 0);
    glVertex3f(13.55, 23.5, -2.0);
    glVertex3f(13.55, 23.5, 2.0);
    glVertex3f(13.55, 10.1, 2.0);
    glVertex3f(13.55, 10.1, -2.0);
    glEnd();
    //lis
    glBegin(GL_LINE_STRIP);
    glLineWidth(2.0f);
    glColor3ub(0, 0, 0);
    glVertex3f(13.55, 23.5, -2.0);
    glVertex3f(13.55, 23.5, 2.0);
    glVertex3f(13.55, 10.1, 2.0);
    glVertex3f(13.55, 10.1, -2.0);
    glEnd();
    //gagang
    glBegin(GL_QUADS);
    glColor3ub(238, 255, 0);
    glVertex3f(13.545, 16.9, -1.5);
    glVertex3f(13.545, 16.9, -1.0);
    glVertex3f(13.545, 16.7, -1.0);
    glVertex3f(13.545, 16.7, -1.5);
    glEnd();

    //kiri luar
    glBegin(GL_QUADS);
    glColor3ub(179, 150, 95);
    glVertex3f(-16.0, 30.0, 15.0);
    glColor3ub(232, 194, 123);
    glVertex3f(-16.0, -12.0, 15.0);
    glColor3ub(173, 145, 92);
    glVertex3f(-16.0, -12.0, -15.0);
    glColor3ub(179, 150, 95);
    glVertex3f(-16.0, 30.0, -15.0);
    glEnd();
    //kiri dalam
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(-15.5, 30.0, 15.0);
    glVertex3f(-15.5, -10.0, 15.0);
    glVertex3f(-15.5, -10.0, -15.0);
    glVertex3f(-15.5, 30.0, -15.0);
    glEnd();
    //kiri dalam pinggir
    glBegin(GL_QUADS);
    glColor3ub(214, 56, 56);
    glVertex3f(-15.5, -10.0, 14.5);
    glVertex3f(-15.5, 30.0, 14.5);
    glVertex3f(-16.0, 30.0, 15.0);
    glVertex3f(-16.0, -10.0, 15.0);
    glEnd();

    //jendela kiri luar lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-16.001, 3.0, 2.0);
    glVertex3f(-16.001, -5.0, 2.0);
    glVertex3f(-16.001, -5.0, -4.2);
    glVertex3f(-16.001, 3.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-16.001, 3.0, 2.0);
    glVertex3f(-16.001, -5.0, 2.0);
    glVertex3f(-16.001, -5.0, -4.2);
    glVertex3f(-16.001, 3.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-16.001, 3.0, -1.1);
    glVertex3f(-16.001, -5.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-16.001, -1.0, 2.0);
    glVertex3f(-16.001, -1.0, -4.2);
    glEnd();
    //jendela kiri luar lt2
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-16.001, 23.0, 2.0);
    glVertex3f(-16.001, 15.0, 2.0);
    glVertex3f(-16.001, 15.0, -4.2);
    glVertex3f(-16.001, 23.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-16.001, 23.0, 2.0);
    glVertex3f(-16.001, 15.0, 2.0);
    glVertex3f(-16.001, 15.0, -4.2);
    glVertex3f(-16.001, 23.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-16.001, 23.0, -1.1);
    glVertex3f(-16.001, 15.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-16.001, 19.0, 2.0);
    glVertex3f(-16.001, 19.0, -4.2);
    glEnd();

    //jendela kiri dalam lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-15.499, 3.0, 2.0);
    glVertex3f(-15.499, -5.0, 2.0);
    glVertex3f(-15.499, -5.0, -4.2);
    glVertex3f(-15.499, 3.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-15.499, 3.0, 2.0);
    glVertex3f(-15.499, -5.0, 2.0);
    glVertex3f(-15.499, -5.0, -4.2);
    glVertex3f(-15.499, 3.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-15.499, 3.0, -1.1);
    glVertex3f(-15.499, -5.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-15.499, -1.0, 2.0);
    glVertex3f(-15.499, -1.0, -4.2);
    glEnd();
    //jendela kiri dalam lt2
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-15.499, 23.0, 2.0);
    glVertex3f(-15.499, 15.0, 2.0);
    glVertex3f(-15.499, 15.0, -4.2);
    glVertex3f(-15.499, 23.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-15.499, 23.0, 2.0);
    glVertex3f(-15.499, 15.0, 2.0);
    glVertex3f(-15.499, 15.0, -4.2);
    glVertex3f(-15.499, 23.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-15.499, 23.0, -1.1);
    glVertex3f(-15.499, 15.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-15.499, 19.0, 2.0);
    glVertex3f(-15.499, 19.0, -4.2);
    glEnd();

    //belakang luar
    glBegin(GL_QUADS);
    glColor3ub(125, 105, 66);
    glVertex3f(-16.0, -12.0, -15.0);
    glVertex3f(-16.0, 30.0, -15.0);
    glVertex3f(4.0, 30.0, -15.0);
    glVertex3f(4.0, -12.0, -15.0);
    glEnd();
    //belakang dalam
    glBegin(GL_QUADS);
    glColor3ub(186, 48, 48);
    glVertex3f(-15.5, -12.0, -14.5);
    glVertex3f(-15.5, 30.0, -14.5);
    glVertex3f(3.5, 30.0, -14.5);
    glVertex3f(3.5, -12.0, -14.5);
    glEnd();
    //belakang dalam lt2
    glBegin(GL_QUADS);
    glColor3ub(186, 48, 48);
    glVertex3f(3.4, 10.0, -14.5);
    glVertex3f(3.4, 30.0, -14.5);
    glVertex3f(13.6, 30.0, -14.5);
    glVertex3f(13.6, 10.0, -14.5);
    glEnd();

    //alas dalam lt1
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-16.0, -10.0, 15.0);
    glVertex3f(4.0, -10.0, 15.0);
    glVertex3f(4.0, -10.0, -15.0);
    glVertex3f(-16.0, -10.0, -15.0);
    glEnd();
    //alas dalam lt2
    glBegin(GL_QUADS);
    glColor3ub(33, 32, 30);
    glVertex3f(-16.0, 10.1, 15.0);
    glVertex3f(13.6, 10.1, 15.0);
    glVertex3f(13.6, 10.1, -15.0);
    glVertex3f(-16.0, 10.1, -15.0);
    glEnd();
    //alas kamar mandi
    glBegin(GL_QUADS);
    glColor3ub(0, 255, 191);
    glVertex3f(14.1, 10.1, 15.0);
    glVertex3f(23.5, 10.1, 15.0);
    glVertex3f(23.5, 10.1, -15.0);
    glVertex3f(14.1, 10.1, -15.0);
    glEnd();

    //dinding kamar mandi blkg
    glBegin(GL_QUADS);
    glColor3ub(61, 255, 206);
    glVertex3f(14.1, 10.1, -14.9);
    glVertex3f(23.5, 10.1, -14.9);
    glVertex3f(23.5, 29.9, -14.9);
    glVertex3f(14.1, 29.9, -14.9);
    glEnd();
    //dinding kamar mandi kiri
    glBegin(GL_QUADS);
    glColor3ub(99, 255, 216);
    glVertex3f(14.1, 29.9, 14.9);
    glVertex3f(14.1, 29.9, -14.9);
    glVertex3f(14.1, 10.1, -14.9);
    glVertex3f(14.1, 10.1, 14.9);
    glEnd();
    //dinding kamar mandi kanan
    glBegin(GL_QUADS);
    glColor3ub(99, 255, 216);
    glVertex3f(23.5, 29.9, 14.9);
    glVertex3f(23.5, 29.9, -14.9);
    glVertex3f(23.5, 10.1, -14.9);
    glVertex3f(23.5, 10.1, 14.9);
    glEnd();
    //kamar mandi pinggir
    glBegin(GL_QUADS);
    glColor3ub(99, 255, 216);
    glVertex3f(23.5, 10.0, 14.9);
    glVertex3f(23.99, 10.0, 14.9);
    glVertex3f(23.99, 30.0, 14.9);
    glVertex3f(23.5, 30.0, 14.9);
    glEnd();
    //pintu kamar mandi
    glBegin(GL_QUADS);
    glColor3ub(66, 27, 0);
    glVertex3f(14.15, 23.5, -2.0);
    glVertex3f(14.15, 23.5, 2.0);
    glVertex3f(14.15, 10.1, 2.0);
    glVertex3f(14.15, 10.1, -2.0);
    glEnd();
    //lis
    glBegin(GL_LINE_STRIP);
    glLineWidth(2.0f);
    glColor3ub(0, 0, 0);
    glVertex3f(14.15, 23.5, -2.0);
    glVertex3f(14.15, 23.5, 2.0);
    glVertex3f(14.15, 10.1, 2.0);
    glVertex3f(14.15, 10.1, -2.0);
    glEnd();
    //gagang
    glBegin(GL_QUADS);
    glColor3ub(238, 255, 0);
    glVertex3f(14.155, 16.9, -1.5);
    glVertex3f(14.155, 16.9, -1.0);
    glVertex3f(14.155, 16.7, -1.0);
    glVertex3f(14.155, 16.7, -1.5);
    glEnd();

    //dag bawah
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-16.0, 9.5, 14.9);
    glVertex3f(23.9, 9.5, 14.9);
    glVertex3f(23.9, 9.5, -15.0);
    glVertex3f(-16.0, 9.5, -15.0);
    glEnd();
    //dag atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-16.0, 10.0, 14.9);
    glVertex3f(23.9, 10.0, 14.9);
    glVertex3f(23.9, 10.0, -15.0);
    glVertex3f(-16.0, 10.0, -15.0);
    glEnd();
    //level dag
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-16.0, 9.5, 14.9);
    glVertex3f(-16.0, 10.0, 14.9);
    glVertex3f(23.9, 10.0, 14.5);
    glVertex3f(23.9, 9.5, 14.5);
    glEnd();

//jendela blkg
    //lt1
    //jendela luar
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-3.6, -5.0, -15.05);
    glVertex3f(-3.6, 2.5, -15.05);
    glVertex3f(0.8, 2.5, -15.05);
    glVertex3f(0.8, -5.0, -15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis luar
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, -5.0, -15.05);
    glVertex3f(-3.6, 2.5, -15.05);
    glVertex3f(0.8, 2.5, -15.05);
    glVertex3f(0.8, -5.0, -15.05);
    glEnd();
    //jendela dalam
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-3.6, -5.0, -14.45);
    glVertex3f(-3.6, 2.5, -14.45);
    glVertex3f(0.8, 2.5, -14.45);
    glVertex3f(0.8, -5.0, -14.45);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis dalam
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, -5.0, -14.45);
    glVertex3f(-3.6, 2.5, -14.45);
    glVertex3f(0.8, 2.5, -14.45);
    glVertex3f(0.8, -5.0, -14.45);
    glEnd();
    //lis tengah dalam
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.4, -5.0, -14.45);
    glVertex3f(-1.4, 2.5, -14.45);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, -1.25, -14.45);
    glVertex3f(0.8, -1.25, -14.45);
    glEnd();
    //lis tengah luar
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.4, -5.0, -15.05);
    glVertex3f(-1.4, 2.5, -15.05);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, -1.25, -15.05);
    glVertex3f(0.8, -1.25, -15.05);
    glEnd();
    //lt2
    //jendela luar
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-3.6, 15.0, -15.05);
    glVertex3f(-3.6, 22.5, -15.05);
    glVertex3f(0.8, 22.5, -15.05);
    glVertex3f(0.8, 15.0, -15.05);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis luar
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, 15.0, -15.05);
    glVertex3f(-3.6, 22.5, -15.05);
    glVertex3f(0.8, 22.5, -15.05);
    glVertex3f(0.8, 15.0, -15.05);
    glEnd();
    //jendela dalam
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(-3.6, 15.0, -14.45);
    glVertex3f(-3.6, 22.5, -14.45);
    glVertex3f(0.8, 22.5, -14.45);
    glVertex3f(0.8, 15.0, -14.45);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis dalam
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, 15.0, -14.45);
    glVertex3f(-3.6, 22.5, -14.45);
    glVertex3f(0.8, 22.5, -14.45);
    glVertex3f(0.8, 15.0, -14.45);
    glEnd();
    //lis tengah dalam
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.4, 15.0, -14.45);
    glVertex3f(-1.4, 22.5, -14.45);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, 18.25, -14.45);
    glVertex3f(0.8, 18.25, -14.45);
    glEnd();
    //lis tengah luar
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-1.4, 15.0, -15.05);
    glVertex3f(-1.4, 22.5, -15.05);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3ub(69, 43, 16);
    glVertex3f(-3.6, 18.25, -15.05);
    glVertex3f(0.8, 18.25, -15.05);
    glEnd();
}

void garasi(void)
{
    //belakang garasi luar
    glBegin(GL_QUADS);
    glColor3ub(125, 105, 66);
    glVertex3f(4.0, -12.0, -15.0);
    glVertex3f(4.0, 30.0, -15.0);
    glVertex3f(24.0, 30.0, -15.0);
    glVertex3f(24.0, -12.0, -15.0);
    glEnd();

    //belakang garasi dalam
    glBegin(GL_QUADS);
    glColor3ub(140, 137, 133);
    glVertex3f(4.0, -12.0, -14.5);
    glVertex3f(3.5, 10.0, -14.5);
    glVertex3f(24.0, 10.0, -14.5);
    glVertex3f(24.0, -12.0, -14.5);
    glEnd();

    //kanan luar
    glBegin(GL_QUADS);
    glColor3ub(179, 150, 95);
    glVertex3f(24.0, 30.0, 15.0);
    glColor3ub(232, 194, 123);
    glVertex3f(24.0, -12.0, 15.0);
    glColor3ub(173, 145, 92);
    glVertex3f(24.0, -12.0, -15.0);
    glColor3ub(179, 150, 95);
    glVertex3f(24.0, 30.0, -15.0);
    glEnd();

    //kanan garasi dalam
    glBegin(GL_QUADS);
    glColor3ub(171, 167, 161);
    glVertex3f(23.5, 10.0, 15.0);
    glVertex3f(23.5, -12.0, 15.0);
    glColor3ub(156, 152, 146);
    glVertex3f(23.5, -12.0, -15.0);
    glVertex3f(23.5, 10.0, -15.0);
    glEnd();

    //kanan garasi pinggiran
    glBegin(GL_QUADS);
    glColor3ub(186, 181, 173);
    glVertex3f(23.5, 10.0, 15.0);
    glVertex3f(23.5, -12.0, 15.0);
    glVertex3f(24.0, -12.0, 15.0);
    glVertex3f(24.0, 10.0, 15.0);
    glEnd();

    //jendela kanan luar lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(24.001, 3.0, 2.0);
    glVertex3f(24.001, -5.0, 2.0);
    glVertex3f(24.001, -5.0, -4.2);
    glVertex3f(24.001, 3.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(24.001, 3.0, 2.0);
    glVertex3f(24.001, -5.0, 2.0);
    glVertex3f(24.001, -5.0, -4.2);
    glVertex3f(24.001, 3.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(24.001, 3.0, -1.1);
    glVertex3f(24.001, -5.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(24.001, -1.0, 2.0);
    glVertex3f(24.001, -1.0, -4.2);
    glEnd();

    //jendela kanan dalam lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(23.499, 3.0, 2.0);
    glVertex3f(23.499, -5.0, 2.0);
    glVertex3f(23.499, -5.0, -4.2);
    glVertex3f(23.499, 3.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(23.499, 3.0, 2.0);
    glVertex3f(23.499, -5.0, 2.0);
    glVertex3f(23.499, -5.0, -4.2);
    glVertex3f(23.499, 3.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(23.499, 3.0, -1.1);
    glVertex3f(23.499, -5.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(23.499, -1.0, 2.0);
    glVertex3f(23.499, -1.0, -4.2);
    glEnd();

    //jendela kanan luar lt2
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(24.001, 23.0, 2.0);
    glVertex3f(24.001, 15.0, 2.0);
    glVertex3f(24.001, 15.0, -4.2);
    glVertex3f(24.001, 23.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(24.001, 23.0, 2.0);
    glVertex3f(24.001, 15.0, 2.0);
    glVertex3f(24.001, 15.0, -4.2);
    glVertex3f(24.001, 23.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(24.001, 23.0, -1.1);
    glVertex3f(24.001, 15.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(24.001, 19.0, 2.0);
    glVertex3f(24.001, 19.0, -4.2);
    glEnd();

    //jendela kanan dalam lt1
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(23.499, 23.0, 2.0);
    glVertex3f(23.499, 15.0, 2.0);
    glVertex3f(23.499, 15.0, -4.2);
    glVertex3f(23.499, 23.0, -4.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(23.499, 23.0, 2.0);
    glVertex3f(23.499, 15.0, 2.0);
    glVertex3f(23.499, 15.0, -4.2);
    glVertex3f(23.499, 23.0, -4.2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(23.499, 23.0, -1.1);
    glVertex3f(23.499, 15.0, -1.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(23.499, 19.0, 2.0);
    glVertex3f(23.499, 19.0, -4.2);
    glEnd();

    //kiri garasi dalam
    glBegin(GL_QUADS);
    glColor3ub(171, 167, 161);
    glVertex3f(4.5, 10.0, 14.9);
    glVertex3f(4.5, -12.0, 14.9);
    glColor3ub(156, 152, 146);
    glVertex3f(4.5, -12.0, -15.0);
    glVertex3f(4.5, 10.0, -15.0);
    glEnd();

    //kiri garasi pinggiran
    glBegin(GL_QUADS);
    glColor3ub(186, 181, 173);
    glVertex3f(4.5, 10.0, 14.9);
    glVertex3f(4.5, -12.0, 14.9);
    glVertex3f(4.0, -12.0, 14.9);
    glVertex3f(4.0, 10.0, 14.9);
    glEnd();

    //jendela kiri
    glBegin(GL_QUADS);
    glColor4ub(133, 255, 235,0.5);
    glVertex3f(4.501, 3.0, 1.0);
    glVertex3f(4.501, -5.0, 1.0);
    glVertex3f(4.501, -5.0, -3.2);
    glVertex3f(4.501, 3.0, -3.2);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE);
    glEnd();
    //lis
    glBegin(GL_LINE_LOOP);
    glColor3ub(69, 43, 16);
    glVertex3f(4.501, 3.0, 1.0);
    glVertex3f(4.501, -5.0, 1.0);
    glVertex3f(4.501, -5.0, -3.2);
    glVertex3f(4.501, 3.0, -3.2);
    glEnd();

    //alas garasi
    glBegin(GL_QUADS);
    glColor3ub(125, 122, 116);
    glVertex3f(4.0, -10.0, 15.0);
    glVertex3f(24.0, -10.0, 15.0);
    glColor3ub(84, 82, 77);
    glVertex3f(24.0, -10.0, -15.0);
    glVertex3f(4.0, -10.0, -15.0);
    glEnd();

    //tanjakan garasi
    glBegin(GL_QUADS);
    glColor3ub(171, 166, 159);
    glVertex3f(4.0, -12.0, 20.0);
    glVertex3f(24.0, -12.0, 20.0);
    glColor3ub(143, 139, 133);
    glVertex3f(24.0, -10.0, 15.0);
    glVertex3f(4.0, -10.0, 15.0);
    glEnd();

    //s3 kanan alas garasi
    glBegin(GL_POLYGON);
    glColor3ub(171, 166, 159);
    glVertex3f(24.0, -12.0, 20.0);
    glColor3ub(143, 139, 133);
    glVertex3f(24.0, -10.0, 15.0);
    glVertex3f(24.0, -12.0, 15.0);
    glEnd();

    //s3 kiri alas garasi
    glBegin(GL_POLYGON);
    glColor3ub(171, 166, 159);
    glVertex3f(4.0, -12.0, 20.0);
    glColor3ub(143, 139, 133);
    glVertex3f(4.0, -10.0, 15.0);
    glVertex3f(4.0, -12.0, 15.0);
    glEnd();
}

void balkon(void)
{
    //alas balkon
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 214);
    glVertex3f(-11.0, -10.0, 15.0);
    glVertex3f(0.0, -10.0, 15.0);
    glColor3ub(255, 255, 255);
    glVertex3f(0.0, -10.0, 30.0);
    glVertex3f(-11.0, -10.0, 30.0);
    glEnd();

    //step depan
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 214);
    glVertex3f(-11.0, -10.0, 30.0);
    glVertex3f(0.0, -10.0, 30.0);
    glColor3ub(196, 196, 196);
    glVertex3f(0.0, -12.0, 30.0);
    glVertex3f(-11.0, -12.0, 30.0);
    glEnd();

    //step kanan
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 214);
    glVertex3f(0.0, -10.0, 30.0);
    glVertex3f(0.0, -10.0, 15.0);
    glColor3ub(196, 196, 196);
    glVertex3f(0.0, -12.0, 15.0);
    glVertex3f(0.0, -12.0, 30.0);
    glEnd();

    //step kiri
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 214);
    glVertex3f(-11.0, -10.0, 30.0);
    glVertex3f(-11.0, -10.0, 15.0);
    glColor3ub(196, 196, 196);
    glVertex3f(-11.0, -12.0, 15.0);
    glVertex3f(-11.0, -12.0, 30.0);
    glEnd();

    //genteng kanan
    glBegin(GL_QUADS);
    glColor3ub(97, 70, 32);
    glVertex3f(-5.4, 6.0+5.0, 31.0);
    glVertex3f(1.0, -10.0+15.0, 31.0);
    glColor3ub(51, 39, 15);
    glVertex3f(1.0, -10.0+15.0, 15.0);
    glVertex3f(-5.4, 6.0+5.0, 15.0);
    glEnd();

    //genteng kiri
    glBegin(GL_QUADS);
    glColor3ub(97, 70, 32);
    glVertex3f(-5.4, 6.0+5.0, 31.0);
    glVertex3f(-12.0, -9.7+15.0, 31.0);
    glColor3ub(51, 39, 15);
    glVertex3f(-12.0, -9.7+15.0, 15.0);
    glVertex3f(-5.4, 6.0+5.0, 15.0);
    glEnd();

    //atap
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-10.9, 6.0, 30.0);
    glVertex3f(-0.3, 6.0, 30.0);
    glVertex3f(-0.3, 6.0, 15.0);
    glVertex3f(-10.9, 6.0, 15.0);
    glEnd();

    //s3 depan
    glBegin(GL_POLYGON);
    glColor3ub(176, 143, 77);
    glVertex3f(-11.0, 6.0, 30.0);
    glColor3ub(161, 130, 69);
    glVertex3f(-5.4, 11.0, 30.0);
    glColor3ub(176, 143, 77);
    glVertex3f(-0.2, 6.0, 30.0);
    glEnd();

    //depan tiang kanan
    glBegin(GL_QUADS);
    glColor3ub(247, 151, 32);
    glVertex3f(-1.5, -10.0, 29.0);
    glVertex3f(-1.5, 6.0, 29.0);
    glVertex3f(-0.5, 6.0, 29.0);
    glVertex3f(-0.5, -10.0, 29.0);
    glEnd();

    //kanan tiang kanan
    glBegin(GL_QUADS);
    glColor3ub(214, 131, 28);
    glVertex3f(-0.5, -10.0, 29.0);
    glVertex3f(-0.5, 6.0, 29.0);
    glColor3ub(166, 101, 22);
    glVertex3f(-0.5, 6.0, 28.0);
    glVertex3f(-0.5, -10.0, 28.0);
    glEnd();

    //belakang tiang kanan
    glBegin(GL_QUADS);
    glColor3ub(140, 86, 20);
    glVertex3f(-1.5, -10.0, 28.0);
    glVertex3f(-1.5, 6.0, 28.0);
    glVertex3f(-0.5, 6.0, 28.0);
    glVertex3f(-0.5, -10.0, 28.0);
    glEnd();

    //kiri tiang kanan
    glBegin(GL_QUADS);
    glColor3ub(214, 131, 28);
    glVertex3f(-1.5, -10.0, 28.0);
    glVertex3f(-1.5, 6.0, 28.0);
    glVertex3f(-1.5, 6.0, 29.0);
    glVertex3f(-1.5, -10.0, 29.0);
    glEnd();

    //depan tiang kiri
    glBegin(GL_QUADS);
    glColor3ub(247, 151, 32);
    glVertex3f(-10.5, -10.0, 29.0);
    glVertex3f(-10.5, 6.0, 29.0);
    glVertex3f(-9.5, 6.0, 29.0);
    glVertex3f(-9.5, -10.0, 29.0);
    glEnd();

    //kanan tiang kiri
    glBegin(GL_QUADS);
    glColor3ub(214, 131, 28);
    glVertex3f(-9.5, -10.0, 29.0);
    glVertex3f(-9.5, 6.0, 29.0);
    glColor3ub(166, 101, 22);
    glVertex3f(-9.5, 6.0, 28.0);
    glVertex3f(-9.5, -10.0, 28.0);
    glEnd();

    //belakang tiang kiri
    glBegin(GL_QUADS);
    glColor3ub(140, 86, 20);
    glVertex3f(-10.5, -10.0, 28.0);
    glVertex3f(-10.5, 6.0, 28.0);
    glVertex3f(-9.5, 6.0, 28.0);
    glVertex3f(-9.5, -10.0, 28.0);
    glEnd();

    //kiri tiang kiri
    glBegin(GL_QUADS);
    glColor3ub(214, 131, 28);
    glVertex3f(-10.5, -10.0, 28.0);
    glVertex3f(-10.5, 6.0, 28.0);
    glVertex3f(-10.5, 6.0, 29.0);
    glVertex3f(-10.5, -10.0, 29.0);
    glEnd();
}

void dasar(void)
{
    glBegin(GL_QUADS);
    glColor3ub(98, 232, 77);
    glVertex3f(-18.0, -12.0, 35.0);
    glVertex3f(26.0, -12.0, 35.0);
    glVertex3f(26.0, -12.0, -17.0);
    glVertex3f(-18.0, -12.0, -17.0);
    glEnd();
}

void hilang(void)
{
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    rumahmain();
    garasi();
    dasar();
    ornament();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    rumahmain();
    khusus();
    garasi();
    balkon();
    dasar();
    ornament();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void display(void)
{
    if (is_depth)
        tampil();
    else
        hilang();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case'w':
        case'W':
            glTranslatef(0.0, 0.0, 3.0);
            break;
        case'd':
        case'D':
            glTranslatef(-3.0, 0.0, 0.0);
            break;
        case's':
        case'S':
            glTranslatef(0.0, 0.0, -3.0);
            break;
        case'a':
        case'A':
            glTranslatef(3.0, 0.0, 0.0);
            break;
        case'7':
            glTranslatef(0.0, 3.0, 0.0);
            break;
        case'9':
            glTranslatef(0.0, -3.0, 0.0);
            break;
        case'2':
            glRotatef(2.0, 1.0, 0.0, 0.0);
            break;
        case'8':
            glRotatef(-2.0, 1.0, 0.0, 0.0);
            break;
        case'6':
            glRotatef(2.0, 0.0, 1.0, 0.0);
            break;
        case'4':
            glRotatef(-2.0, 0.0, 1.0, 0.0);
            break;
        case'1':
            glRotatef(2.0, 0.0, 0.0, 1.0);
            break;
        case'3':
            glRotatef(-2.0, 0.0, 0.0, 1.0);
            break;
        case'5':
            if(is_depth)
            {
                is_depth = 0;
                tampil();
            }
            else
            {
                is_depth = 1;
                hilang();
            }
            break;
    }
    display();
}

void idle()
{
    if (!mouseDown)
    {
        xrot == 0.3f;
        yrot == 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void posenggggg()
{
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f,0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void mouseMotion(int x, int y)
{
    posenggggg();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(-3.5, -15.0, -100.0);
    glMatrixMode(GL_MODELVIEW);
}
