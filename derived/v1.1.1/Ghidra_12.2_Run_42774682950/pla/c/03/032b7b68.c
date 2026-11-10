/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7b68; name: FUN_032b7b68
 */


void FUN_032b7b68(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  MutexType *pMVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_04348298;
  if ((int)param_1[5] != 0) {
    lVar4 = (long)(int)param_1[5] << 6;
    lVar5 = param_1[4] + 0x20;
    do {
      FUN_032e6310(lVar5,3,1);
      lVar4 = lVar4 + -0x40;
      lVar5 = lVar5 + 0x40;
    } while (lVar4 != 0);
  }
  pMVar3 = (MutexType *)param_1[0xe];
  if (pMVar3 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar3);
    FUN_032cf640(pMVar3,0x20);
  }
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  FUN_032b7e20(param_1 + 10);
  FUN_032c20d0(param_1 + 8);
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[7] != 0) {
    lVar4 = param_1[6];
    lVar5 = (long)(int)param_1[7] * 0xa0;
    do {
      FUN_032c4ce8(lVar4 + -0x98 + lVar5);
      lVar5 = lVar5 + -0xa0;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(puVar1,param_1[6],0xa0,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    lVar4 = param_1[4];
    lVar5 = (long)(int)param_1[5] << 6;
    do {
      uVar2 = *(ulong *)(lVar4 + lVar5 + -0x10);
      if ((uVar2 & 1) != 0) {
        FUN_032e0c40(uVar2 & 0xfffffffffffffffe);
      }
      FUN_032c7b9c(lVar4 + lVar5 + -0x40);
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_032cf244(puVar1,param_1[4],0x40,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


