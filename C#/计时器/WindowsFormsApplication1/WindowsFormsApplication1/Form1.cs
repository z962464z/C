using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        int time;//用于定时器计数
        int count;//存储设定的定时值
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            int i;
            for(i=1;i<100;i++)//计数范围（0-100）
            {
                comboBox1.Items.Add(i.ToString() + " 秒");//初始化下拉框内容
            }
        }

        private void button1_Click(object sender, EventArgs e)//开始计时按钮事件
        {
            string str = comboBox1.Text;//将下拉框内容添加到一个变量中
            time = Convert.ToInt16(str.Substring(0, 2));//得到设定定时值（整形）
            progressBar1.Maximum = time;//进度条最大数组
            timer1.Start();//开始计时器
        }

        private void timer1_Tick(object sender, EventArgs e)//定时器事件
        {
            count++;
            label3.Text = (time - count).ToString() + "秒";//显示剩余时间
            progressBar1.Value = count;//设置进度条
            if(count==time)
            {
                timer1.Stop();//时间到，停止计时
                System.Media.SystemSounds.Asterisk.Play();//提示音
                MessageBox.Show("时间到了！", "提示");//弹出提示框
            }
        }
    }
}
