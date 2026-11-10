/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4da0; name: FUN_004c4da0
 */


undefined4 FUN_004c4da0(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (0 < param_2) {
    return 0;
  }
  uVar3 = FUN_00401a50();
  if (uVar3 != 0) {
    uVar4 = 5;
    if ((uVar3 & 0xff000000) != 0x2000000) {
      uVar4 = 1;
    }
    return uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = FUN_00404050(uVar5,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_00404050(uVar5,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_00404050(uVar5,4);
    if (iVar2 != 0) goto LAB_004c4eac;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 == 2) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = FUN_00404050(uVar5,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_00404050(uVar5,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_00404050(uVar5,4);
    if (iVar2 != 0) {
LAB_004c4eac:
      iVar2 = FUN_00404cb0(uVar5);
      uVar4 = 8;
      if (iVar2 != 3) {
        uVar4 = 5;
      }
      uVar1 = 7;
      if (iVar2 != 2) {
        uVar1 = uVar4;
      }
      return uVar1;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 - 4U < 4) {
    return *(undefined4 *)(&DAT_03889160 + (long)(int)(iVar2 - 4U) * 4);
  }
  if (((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) ||
     (*(int *)(*(long *)(param_1 + 0xa8) + 0xf4) != 0)) {
    return 5;
  }
  return 6;
}


