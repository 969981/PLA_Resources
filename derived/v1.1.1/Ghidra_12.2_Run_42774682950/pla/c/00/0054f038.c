/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f038; name: FUN_0054f038
 */


void FUN_0054f038(undefined1 *param_1,char *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  size_t sVar3;
  ostream *poVar4;
  
  puVar1 = PTR_DAT_04374d00 + 0x18;
  puVar2 = PTR_DAT_04374d00 + 0x40;
  *param_1 = 0;
  *(undefined **)(param_1 + 8) = puVar1;
  *(undefined **)(param_1 + 0x78) = puVar2;
                    /* try { // try from 0054f080 to 0054f08b has its CatchHandler @ 0054f140 */
  std::ios_base::init(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  puVar1 = PTR_DAT_04373800;
  *(undefined **)(param_1 + 8) = PTR_DAT_04373800 + 0x18;
  *(undefined **)(param_1 + 0x78) = puVar1 + 0x40;
                    /* try { // try from 0054f0b0 to 0054f0b7 has its CatchHandler @ 0054f138 */
  std::streambuf::streambuf((streambuf *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x10) = PTR_DAT_04373808 + 0x10;
  *(undefined4 *)(param_1 + 0x70) = 0x10;
  sVar3 = strlen(param_2);
                    /* try { // try from 0054f0ec to 0054f11f has its CatchHandler @ 0054f154 */
  poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)(param_1 + 8),param_2,sVar3);
  poVar4 = std::__put_character_sequence<char,std::char_traits<char>>(poVar4,":",1);
  poVar4 = (ostream *)std::ostream::operator<<(poVar4,param_3);
  std::__put_character_sequence<char,std::char_traits<char>>(poVar4,": ",2);
  return;
}


