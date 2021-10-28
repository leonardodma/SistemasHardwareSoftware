var1 = 4000;
var2 = 4010;
// 4000 <= edi 
// 4010 >= edi
int func2(int edi){
    if (var1 <= edi)
    {
        if (var2 < edi)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else{
        return 0;
    }
}

// ----------------------------------------------
int func3(unsigned int edi)
{
    edi -= 62;
    return edi < 1;
}