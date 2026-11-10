/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061c950; name: FUN_0061c950
 */


void FUN_0061c950(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ostream *poVar3;
  size_t sVar4;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158 [8];
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined *local_e8 [17];
  undefined8 local_60;
  undefined4 local_58;
  char local_44 [4];
  
  puVar2 = PTR_DAT_043732f0;
  puVar1 = PTR_DAT_043732f0 + 0x40;
  local_e8[0] = PTR_DAT_043732f8 + 0x40;
  local_170 = PTR_DAT_043732f8 + 0x18;
  local_168 = 0;
  local_160 = puVar1;
                    /* try { // try from 0061c9a4 to 0061c9af has its CatchHandler @ 0061cb60 */
  std::ios_base::init((ios *)local_e8);
  local_58 = 0xffffffff;
  local_170 = puVar2 + 0x18;
  local_e8[0] = puVar2 + 0x68;
  local_60 = 0;
  local_160 = puVar1;
                    /* try { // try from 0061c9d0 to 0061c9d7 has its CatchHandler @ 0061cb38 */
  std::streambuf::streambuf((streambuf *)local_158);
  puVar1 = PTR_DAT_04373300;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_158[0] = PTR_DAT_04373300 + 0x10;
  local_100 = (long *)FUN_00612290();
  local_f0 = 0x18;
  uStack_f8 = 0;
  local_108 = 0;
  local_44[0] = '`';
  local_118 = 0;
  uStack_110 = 0;
                    /* try { // try from 0061ca18 to 0061ca53 has its CatchHandler @ 0061cb74 */
  poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)&local_160,local_44,1);
  sVar4 = strlen(param_2);
  poVar3 = std::__put_character_sequence<char,std::char_traits<char>>(poVar3,param_2,sVar4);
  local_44[0] = '`';
  std::__put_character_sequence<char,std::char_traits<char>>(poVar3,local_44,1);
                    /* try { // try from 0061ca54 to 0061ca5f has its CatchHandler @ 0061cae4 */
  FUN_002a82f0(param_1,(streambuf *)local_158);
  local_170 = puVar2 + 0x18;
  local_160 = puVar2 + 0x40;
  local_e8[0] = puVar2 + 0x68;
  local_158[0] = puVar1 + 0x10;
  if ((local_118 & 1) != 0) {
    (**(code **)(*local_100 + 0x18))(local_100,local_108,local_118 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)local_158);
  std::iostream::~iostream((iostream *)&local_170);
  std::ios::~ios((ios *)local_e8);
  return;
}


