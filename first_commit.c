S16 input = 0xc000;
S16 originCode = input;
if (input > 2^15)
{
  originCode = input - 2^16
}
