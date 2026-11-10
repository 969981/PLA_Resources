/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f9ab8; name: FUN_007f9ab8
 */


void FUN_007f9ab8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0x1118) == 1) && (*(int *)(param_1 + 0x1148) == 6)) {
    local_38 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_40 = *param_2;
    local_28 = 0;
    local_34 = '0';
    local_48 = PTR_DAT_043775c8 + 0x10;
    local_30 = 4;
    uVar1 = FUN_007fd53c(&local_48);
    if (((uVar1 & 1) != 0) &&
       ((*(int *)((long)param_2 + 0xc) == local_30._4_4_ + (int)local_30 && (local_34 == '1')))) {
      nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
      uVar1 = (**(code **)(**(long **)(param_1 + 0x120) + 0x68))
                        (*(long **)(param_1 + 0x120),param_3);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
      if ((uVar1 & 1) != 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
        (**(code **)(**(long **)(param_1 + 0x118) + 0x10))();
        local_50 = 0;
        local_58 = 0x40;
        (**(code **)(**(long **)(param_1 + 0x118) + 0x40))(*(long **)(param_1 + 0x118),&local_58);
        *(undefined1 *)(param_1 + 0x24b) = 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
      }
      if (*(int *)(param_1 + 0x288) != 0) {
        *(undefined4 *)(param_1 + 0x288) = 0;
      }
    }
  }
  return;
}


