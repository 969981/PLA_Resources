/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01133988; name: FUN_01133988
 */


void FUN_01133988(long param_1,long param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) {
    return;
  }
  iVar2 = FUN_02c6849c();
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
  if (iVar2 < 0x225) {
    if ((iVar2 != 0x3b) && (iVar2 != 0x65)) goto LAB_01133a10;
  }
  else if ((iVar2 != 0x225) && (iVar2 != 0x2c9)) {
    if ((iVar2 == 900) && (sVar1 == 1)) {
      return;
    }
    goto LAB_01133a10;
  }
  if (sVar1 == 2) {
    return;
  }
LAB_01133a10:
  *(long *)(param_1 + 0x1f440) = param_2;
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  FUN_01133a90(param_1,uVar3);
  if (param_3 == (int *)0x0) {
    return;
  }
  iVar2 = *param_3;
  if (iVar2 == 0) {
    if ((char)param_3[1] == '\x12') {
      return;
    }
    iVar2 = 0;
  }
  FUN_01133b28(param_1,uVar3,iVar2);
  return;
}


