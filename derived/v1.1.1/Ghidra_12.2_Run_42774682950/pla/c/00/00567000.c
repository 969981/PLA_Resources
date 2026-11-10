/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00567000; name: FUN_00567000
 */


uint FUN_00567000(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  ostream *poVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    return 1;
  case 5:
  case 6:
    uVar6 = (ulong)*(ushort *)(param_1 + 6);
    plVar5 = (long *)(param_1 + 8);
    if (uVar6 < 2) {
      if (*(ushort *)(param_1 + 6) != 0) goto LAB_005670ac;
      return 1;
    }
    plVar5 = (long *)*plVar5;
    cVar1 = *(char *)(*plVar5 + 1);
    while (cVar1 != '\0') {
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 1;
      }
LAB_005670ac:
      cVar1 = *(char *)(*plVar5 + 1);
    }
    break;
  case 7:
  case 8:
  case 9:
    plVar5 = (long *)(param_1 + 8);
    if (1 < *(ushort *)(param_1 + 6)) {
      plVar5 = (long *)*plVar5;
    }
    if (((byte *)*plVar5)[1] != 0) {
      uVar2 = *(byte *)*plVar5 - 1;
      if (uVar2 < 9) {
        return 0x3cU >> (ulong)(uVar2 & 0x1f) & 1;
      }
      return 1;
    }
    break;
  case 10:
    break;
  case 0xb:
    plVar5 = (long *)(param_1 + 8);
    if (1 < *(ushort *)(param_1 + 6)) {
      plVar5 = (long *)*plVar5;
    }
    return (uint)(*(char *)(*plVar5 + 1) != '\0');
  case 0x14:
    if (*(long *)(param_1 + 0x20) == 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 4);
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 8);
    }
    return (uint)(iVar4 != 0 && iVar4 != 0x110000);
  default:
    FUN_0054f038(auStack_130,"external/com_github_google_re2/re2/simplify.cc",99);
                    /* try { // try from 0056718c to 005671a7 has its CatchHandler @ 005671b0 */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_128,"Case not handled in ComputeSimple: ",0x23);
    FUN_005671c0(poVar3,*param_1);
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_130);
  }
  return 0;
}


