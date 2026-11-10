/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c64a30; name: FUN_02c64a30
 */


bool FUN_02c64a30(undefined8 param_1,long param_2,long param_3,uint param_4,undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  
  bVar1 = false;
  switch(*param_5) {
  case 8:
    return *(ushort *)(param_5 + 1) == param_4;
  default:
    goto switchD_02c64a60_caseD_9;
  case 0x11:
    if (*(ushort *)(param_5 + 1) == param_4) {
      iVar2 = FUN_02c6f5e8(*(undefined8 *)(param_2 + 0x98));
      return iVar2 == 0;
    }
    return false;
  case 0x12:
    if (*(ushort *)(param_5 + 1) == param_4) {
      iVar2 = FUN_02c6f5e8(*(undefined8 *)(param_2 + 0x98));
      return iVar2 == 1;
    }
    return false;
  case 0x2a:
    if (*(ushort *)(param_5 + 1) != param_4) {
      return false;
    }
    cVar3 = *(char *)(param_3 + 4);
    break;
  case 0x30:
    if (*(ushort *)(param_5 + 1) != param_4) {
      return false;
    }
    if (*(char *)(param_3 + 5) != '\0') {
      return true;
    }
    cVar3 = *(char *)(param_3 + 7);
    break;
  case 0x31:
    if (*(ushort *)(param_5 + 1) != param_4) {
      return false;
    }
    cVar3 = *(char *)(param_3 + 6);
    break;
  case 0x32:
    if (*(ushort *)(param_5 + 1) != param_4) {
      return false;
    }
    if (*(char *)(param_3 + 6) == '\0') {
      return false;
    }
    cVar3 = *(char *)(param_3 + 9);
  }
  bVar1 = cVar3 != '\0';
switchD_02c64a60_caseD_9:
  return bVar1;
}


