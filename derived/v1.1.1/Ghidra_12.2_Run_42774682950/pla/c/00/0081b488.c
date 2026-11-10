/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081b488; name: FUN_0081b488
 */


long FUN_0081b488(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_0081ab18(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x104),PTR_LAB_04377b48);
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x100);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xe0);
    if (uVar3 != 0) {
      uVar3 = uVar3 - (long)*(int *)(param_1 + 0xec);
    }
    iVar1 = *(int *)(param_1 + 0x100);
  }
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0xf8);
    if (uVar4 != 0) {
      uVar4 = uVar4 - (long)*(int *)(param_1 + 0x104);
    }
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if ((uVar3 != 0) && ((uVar4 == 0) == uVar4 <= uVar3)) {
    lVar5 = ((lVar5 - (ulong)*(ushort *)(uVar3 + 0x12)) - *(long *)(uVar3 + 0x18)) + -0x20;
    FUN_0081aac8((long)*(int *)(param_1 + 0xec) + uVar3);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x40))
                      (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar5);
    if (lVar2 == 0) {
      return *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x30) = lVar2;
    *(long *)(param_1 + 0x38) = lVar5;
    DataMemoryBarrier(3,1);
  }
  return lVar5;
}


