int find_bit_size(int number)
{
    int bit_size = 0;
    int two_exponent = 1;
    while(number >= two_exponent<<1)
    {
        bit_size++;
        two_exponent <<= 1;
    }
    return bit_size;
}