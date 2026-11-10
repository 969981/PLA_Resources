/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd82c; name: FUN_007fd82c
 */


void FUN_007fd82c(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[9] = param_4;
  *param_1 = (long)(PTR_DAT_04377600 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x11;
  param_1[3] = 0x1e;
  uVar4 = FUN_007f63fc(param_4);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_007f6c84(param_4), (uVar4 & 1) == 0)) {
    bVar1 = false;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined2 *)((long)param_1 + 0x42) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_4 + 0x60);
    uVar3 = FUN_008473f4(param_4);
    *(undefined2 *)(param_1 + 5) = uVar3;
    lVar5 = FUN_008473ec(param_4);
    param_1[6] = lVar5;
    nn::os::LockMutex((MutexType *)(param_4 + 0x1f8));
    if (*(long *)(param_4 + 0x218) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_007f2084();
    }
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x1f8));
    param_1[7] = lVar5;
    uVar2 = FUN_007fabd0(param_4);
    *(undefined1 *)(param_1 + 8) = uVar2;
    *(undefined2 *)((long)param_1 + 0x42) = *(undefined2 *)(param_4 + 0x114e);
    bVar1 = *(int *)(param_4 + 0x1c0) == 1;
  }
  *(bool *)((long)param_1 + 0x44) = bVar1;
  return;
}


