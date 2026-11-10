/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec74fc; name: FUN_02ec74fc
 */


undefined8 FUN_02ec74fc(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  MutexType *pMVar5;
  float fVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x88))();
  *(uint *)((long)param_1 + 0xaa) =
       *(uint *)((long)param_1 + 0xaa) & 0xfffc0000 |
       *(uint *)((long)param_1 + 0xaa) & 0x1ffff | (uint)(iVar2 == 0 || iVar2 == 10) << 0x11;
  pMVar5 = DAT_0440a120;
  if ((iVar2 == 10) != (iVar2 == 0)) {
    pMVar5 = DAT_0440a120 + 0x38;
  }
  nn::os::LockMutex(pMVar5);
  uVar3 = *(uint *)(pMVar5 + 0x28);
  if ((uVar3 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(pMVar5 + 0x30)), 0.9 < fVar6 / (float)uVar3)) {
    FUN_02e87758(pMVar5 + 0x20);
    uVar3 = *(uint *)(pMVar5 + 0x28);
    if (uVar3 == 0) goto LAB_02ec75ac;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 2) / uVar3;
  }
  lVar4 = (ulong)(*(uint *)(param_1 + 2) - uVar1 * uVar3) * 8;
  param_1[1] = *(long *)(*(long *)(pMVar5 + 0x20) + lVar4);
  *(long **)(*(long *)(pMVar5 + 0x20) + lVar4) = param_1;
  *(int *)(pMVar5 + 0x30) = *(int *)(pMVar5 + 0x30) + 1;
LAB_02ec75ac:
  nn::os::UnlockMutex(pMVar5);
  return 1;
}


