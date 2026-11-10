/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe25c; name: FUN_007fe25c
 */


void FUN_007fe25c(long *param_1,long param_2,undefined4 param_3,undefined1 param_4,long param_5)

{
  undefined *puVar1;
  MutexType *pMVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[10] = param_5;
  puVar1 = PTR_DAT_04377630 + 0x10;
  *(undefined1 *)((long)param_1 + 0x14) = param_4;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  param_1[3] = 0x26;
  uVar7 = FUN_007f63fc(param_5);
  if (((uVar7 & 1) == 0) && (uVar7 = FUN_007f6c84(param_5), (uVar7 & 1) == 0)) {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    param_1[7] = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    return;
  }
  pMVar2 = (MutexType *)(param_5 + 0x1f8);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_5 + 100);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(param_5 + 0x218) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_007f2084();
  }
  nn::os::UnlockMutex(pMVar2);
  param_1[5] = lVar8;
  uVar5 = FUN_007f9434(param_5);
  *(undefined2 *)(param_1 + 6) = uVar5;
  *(undefined2 *)((long)param_1 + 0x32) = *(undefined2 *)(param_5 + 0x114e);
  uVar3 = FUN_007fabd0(param_5);
  *(undefined1 *)(param_1 + 8) = uVar3;
  nn::os::LockMutex(pMVar2);
  bVar4 = (**(code **)(**(long **)(param_5 + 0x218) + 0x30))();
  *(byte *)((long)param_1 + 0x41) = bVar4 & 1;
  lVar8 = (**(code **)(**(long **)(param_5 + 0x218) + 0x38))();
  param_1[7] = lVar8;
  uVar6 = FUN_007f21a8(*(undefined8 *)(param_5 + 0x218));
  *(undefined4 *)((long)param_1 + 0x44) = uVar6;
  uVar6 = FUN_007f2110(*(undefined8 *)(param_5 + 0x218));
  *(undefined4 *)(param_1 + 9) = uVar6;
  nn::os::UnlockMutex(pMVar2);
  return;
}


