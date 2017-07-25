using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        double x;
        double y;
        double resp;
        private void button1_Click(object sender, EventArgs e)
        {
            x = Double.Parse(lado1.Text);
            y = Double.Parse(lado2.Text);
            resp = x * y;
            area.Text = resp.ToString();
      
        }

        private void button2_Click(object sender, EventArgs e)
        {
            lado1.Text = ' '.ToString();
            lado2.Text = ' '.ToString();
            area.Text = ' '.ToString();
            
        }   
    }
}
