/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055f0b0; name: FUN_0055f0b0
 */


bool FUN_0055f0b0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  void *__s1;
  ostream *this;
  void *__s2;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  if (*param_1 != *param_2) {
    return false;
  }
  switch(*param_1) {
  case 1:
  case 2:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    return true;
  case 3:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 1) == 0;
    break;
  case 4:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    if (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 1) != 0) {
      return false;
    }
    __s1 = *(void **)(param_1 + 0x20);
    __n = (long)*(int *)(param_1 + 0x18) << 2;
    __s2 = *(void **)(param_2 + 0x20);
    goto LAB_0055f1e4;
  case 5:
  case 6:
    bVar1 = *(short *)(param_1 + 6) == *(short *)(param_2 + 6);
    break;
  case 7:
  case 8:
  case 9:
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 0x40) == 0;
    break;
  case 10:
    if (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) >> 6 & 1) != 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      return false;
    }
  case 0x15:
    bVar1 = *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18);
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20);
    break;
  case 0x13:
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 0x2000) == 0;
    break;
  case 0x14:
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_2 + 0x18);
    if (*(int *)(lVar3 + 4) != *(int *)(lVar4 + 4)) {
      return false;
    }
    __n = (long)*(int *)(lVar3 + 0x10) * 8;
    if (__n != (long)*(int *)(lVar4 + 0x10) * 8) {
      return false;
    }
    __s2 = *(void **)(lVar4 + 8);
    __s1 = *(void **)(lVar3 + 8);
LAB_0055f1e4:
    iVar2 = memcmp(__s1,__s2,__n);
    bVar1 = iVar2 == 0;
    break;
  default:
    FUN_0054f038(auStack_130,"external/com_github_google_re2/re2/regexp.cc",0x198);
                    /* try { // try from 0055f268 to 0055f283 has its CatchHandler @ 0055f28c */
    this = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_128,"Unexpected op in Regexp::Equal: ",0x20);
    std::ostream::operator<<(this,(uint)*param_1);
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_130);
  }
  return bVar1;
}


