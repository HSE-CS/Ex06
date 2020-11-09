using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NeuralNetwork.BL
{
    public class Neuron
    {
        public List<double> Weight { get; set; }
        public List<double> Inputs { get; set; }
        public double Output { get; private set; }
        //public double Delta { get; private set; }
        public int InputsCount { get; private set; }
        public double Delta {get;set;}
        public Neuron(int inputCount)
        {
            Inputs = new List<double>();
            Weight = new List<double>();
            InputsCount = inputCount;
        }
        public void  FeedForward(List<double> inputs,bool isInput)
        {
            Inputs = inputs;
            if (inputs == null)
                throw new Exception("Error");
            var sum = 0.0;
            for (int i = 0; i< inputs.Count; i++)
            {
                if(isInput)
                    sum += inputs[i];
                else
                    sum += inputs[i] * Weight[i];
            }
            if (isInput)
                Output = sum;
            else
                Output = Sigmoid(sum);
            
        }




        public void CalculateDelta(double error)
        {
            Delta = (error)*Output * (1-Output);
            
        }
        public void CalculateDelta(double[] delts,double [] weights)
        {
            double sum = 0.0;
            for(int i = 0; i < delts.Length; i++)
            {
                sum = sum + ( delts[i]*weights[i]);
            }
            Delta = sum * Output * (1-Output);
            
        }
        public void ChangeWeight(double learningRate)
        {
            for(int i = 0; i < Weight.Count(); i++)
            {
                Weight[i] = Weight[i] + Inputs[i]*Delta*learningRate;
            }
        }






        //public void Learn( double learningRate)
        //{

        //    for (int i = 0; i < Weight.Count; i++)
        //    {
        //        Weight[i] += Delta * Inputs[i]*learningRate;  
        //    }
        //}
        //public void Learn(double learningRate, double[] inputs)
        //{
        //    for (int i = 0; i < Weight.Count; i++)
        //    {
        //        Weight[i] += Delta * inputs[i] * learningRate;
        //    }
        //}
        private double Sigmoid(double value) => 1.0 / (1.0 + Math.Exp(-value));
        private double SigmDx(double value) => Math.Exp(-value)/((Math.Exp(-value) * Math.Exp(-value)));
        //public void ChangeDelta(double error)
        //{
        //    Delta = error * SigmDx(Output);
        //}
    }
}
