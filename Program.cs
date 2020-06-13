using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectList
{
    class Program
    {
        static void Main(string[] args)
        {
            //int[] name = new int[10];
            //List<Student> student = new List<Student>
            //{
            //    new Student("Zubair Afzal","Lahore",621,"Pakistan"),
            //    new Student("Zubair Afzal","Lahore",621,"Pakistan"),
            //    new Student("Zubair Afzal","Lahore",621,"Pakistan"),
            //};
            //for(int i = 1; i < 3; i++)
            //{
            //    Console.WriteLine(student[i].name);
            //    Console.WriteLine(student[i].city);
            //    Console.WriteLine(student[i].id);
            //    Console.WriteLine(student[i].state);


            //}
            int[] roll ={2,3,4,5 };
            Console.WriteLine( roll.Length);
            // Iniializing Array of Objects
            Student []student ={
               new Student ("Zubair", "Sheikhupura", 621, "Pakistan"),
               new Student ("James", "London", 623, "UK"),
               new Student ("Angle", "Morse", 624, "Hungry"),
            };
            for (int i = 0; i < student.Length; i++)
            {
                Console.WriteLine(student[i].name +"\t"+ student[i].city +"\t"+ student[i].id +"\t" +student[i].state);
            }
            Console.ReadKey();
        }
    }
    class Student
    {
        public String name;
        public int id;
        public String city;
        public String state;
        public Student(String name,String city,int id,String state)
        {
            this.name = name;
            this.id = id;
            this.city = city;
            this.state = state;
        }
    }
}
