/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061bb30; name: FUN_0061bb30
 */


void FUN_0061bb30(undefined8 param_1,long *param_2,char *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  size_t sVar4;
  bool bVar5;
  byte *__s;
  byte *pbVar6;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168 [8];
  ulong local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_043732f0;
  local_f8[0] = PTR_DAT_043732f8 + 0x40;
  local_180 = PTR_DAT_043732f8 + 0x18;
  puVar1 = PTR_DAT_043732f0 + 0x40;
  local_178 = 0;
  local_170 = puVar1;
                    /* try { // try from 0061bb8c to 0061bb97 has its CatchHandler @ 0061bd00 */
  std::ios_base::init((ios *)local_f8);
  local_68 = 0xffffffff;
  local_180 = puVar3 + 0x18;
  local_f8[0] = puVar3 + 0x68;
  local_70 = 0;
  local_170 = puVar1;
                    /* try { // try from 0061bbb8 to 0061bbbf has its CatchHandler @ 0061bcf8 */
  std::streambuf::streambuf((streambuf *)local_168);
  puVar1 = PTR_DAT_04373300;
  local_118 = 0;
  local_128 = 0;
  local_120 = 0;
  local_168[0] = PTR_DAT_04373300 + 0x10;
  local_110 = (long *)FUN_00612290();
  uStack_108 = 0;
  local_128 = 0;
  local_100 = 0x18;
  local_120 = 0;
  local_118 = 0;
  pbVar6 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  if (pbVar6 != pbVar2) {
    bVar5 = true;
    do {
      if (!bVar5) {
        sVar4 = strlen(param_3);
                    /* try { // try from 0061bc18 to 0061bc4f has its CatchHandler @ 0061bd14 */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)&local_170,param_3,sVar4);
      }
      if ((*pbVar6 & 1) == 0) {
        __s = pbVar6 + 1;
      }
      else {
        __s = *(byte **)(pbVar6 + 0x10);
      }
      sVar4 = strlen((char *)__s);
      std::__put_character_sequence<char,std::char_traits<char>>
                ((ostream *)&local_170,(char *)__s,sVar4);
      pbVar6 = pbVar6 + 0x20;
      bVar5 = false;
    } while (pbVar2 != pbVar6);
  }
                    /* try { // try from 0061bc60 to 0061bc6b has its CatchHandler @ 0061bcf4 */
  FUN_002a82f0(param_1,(streambuf *)local_168);
  local_180 = puVar3 + 0x18;
  local_170 = puVar3 + 0x40;
  local_f8[0] = puVar3 + 0x68;
  local_168[0] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    (**(code **)(*local_110 + 0x18))(local_110,local_118,local_128 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)local_168);
  std::iostream::~iostream((iostream *)&local_180);
  std::ios::~ios((ios *)local_f8);
  return;
}


