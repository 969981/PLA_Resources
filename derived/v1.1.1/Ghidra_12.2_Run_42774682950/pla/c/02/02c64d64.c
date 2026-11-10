/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c64d64; name: FUN_02c64d64
 */


bool FUN_02c64d64(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = *param_4;
  if (iVar3 == 5) {
LAB_02c64e38:
    bVar1 = true;
  }
  else {
    if (iVar3 == 7) {
      if ((param_3 != 0) && (sVar2 = FUN_02c687d4(*(undefined8 *)(param_3 + 0x98)), sVar2 != 0xe5))
      {
        uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_3 + 0x98));
        if ((uVar4 & 1) != 0) {
          return false;
        }
        if ((*(ushort *)(*(long *)(*(long *)(param_3 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) {
          return false;
        }
        iVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
        if (((iVar3 == 0x268) &&
            (iVar3 = FUN_02c6849c(*(undefined8 *)(param_3 + 0x98)), iVar3 == 0x24c)) ||
           ((iVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98)), iVar3 == 0x24c &&
            (iVar3 = FUN_02c6849c(*(undefined8 *)(param_3 + 0x98)), iVar3 == 0x268))))
        goto LAB_02c64e38;
      }
    }
    else if (iVar3 == 6) {
      sVar2 = FUN_02c687d4(*(undefined8 *)(param_2 + 0x98));
      return (short)param_4[1] == sVar2;
    }
    bVar1 = false;
  }
  return bVar1;
}


