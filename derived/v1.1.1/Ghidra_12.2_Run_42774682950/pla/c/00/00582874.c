/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00582874; name: FUN_00582874
 */


void FUN_00582874(long param_1,byte *param_2,int *param_3,int param_4,byte param_5,byte *param_6)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  ostream *poVar5;
  size_t sVar6;
  byte *pbVar7;
  long lVar8;
  
  if ((*param_3 == param_4) && (*(byte *)(param_3 + 10) == (param_5 & 1))) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar8 = param_1 + 0x41;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x50);
    }
    pcVar1 = (char *)(lVar8 + (ulong)*(byte *)((long)param_3 + 0x29));
    __n = strlen(pcVar1);
    bVar3 = *param_6;
    sVar6 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar6 = *(size_t *)(param_6 + 8);
    }
    if (__n == sVar6) {
      if (__n == 0) {
        return;
      }
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00582a34 to 00582a3b has its CatchHandler @ 00582a3c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar7 = *(byte **)(param_6 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar7 = param_6 + 1;
      }
      iVar4 = memcmp(pbVar7,pcVar1,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)PTR_clog_04374e40,(char *)pbVar7,uVar2);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,": Transition",0xc);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5," offset=",8);
  poVar5 = (ostream *)std::ostream::operator<<(poVar5,*param_3);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,"/",1);
  pcVar1 = "STD";
  if ((char)param_3[10] != '\0') {
    pcVar1 = "DST";
  }
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,pcVar1,3);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,"/abbr=",6);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar8 = param_1 + 0x41;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x50);
  }
  pcVar1 = (char *)(lVar8 + (ulong)*(byte *)((long)param_3 + 0x29));
  sVar6 = strlen(pcVar1);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,pcVar1,sVar6);
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                     (poVar5," does not match POSIX spec \'",0x1c);
  uVar2 = (ulong)(*(byte *)(param_1 + 0x70) >> 1);
  pcVar1 = (char *)(param_1 + 0x71);
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x78);
    pcVar1 = *(char **)(param_1 + 0x80);
  }
  poVar5 = std::__put_character_sequence<char,std::char_traits<char>>(poVar5,pcVar1,uVar2);
  std::__put_character_sequence<char,std::char_traits<char>>(poVar5,"\'\n",2);
  return;
}


