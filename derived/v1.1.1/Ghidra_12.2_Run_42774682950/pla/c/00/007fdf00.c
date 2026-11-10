/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fdf00; name: FUN_007fdf00
 */


void FUN_007fdf00(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(PTR_DAT_04377620 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x41;
  param_1[3] = 0x16;
  if (param_4 == 0) {
    uVar1 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_4 + 0x1f8));
    if (*(long *)(param_4 + 0x218) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_007f2084();
    }
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x1f8));
    param_1[5] = lVar2;
    lVar2 = FUN_008473ec(param_4);
    param_1[6] = lVar2;
    uVar1 = FUN_008473f4(param_4);
  }
  *(undefined2 *)(param_1 + 7) = uVar1;
  return;
}


