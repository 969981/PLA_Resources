/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f892c; name: FUN_007f892c
 */


void FUN_007f892c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auStack_58 [16];
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(char *)(param_1 + 0x284) == '\0') && (*(int *)(param_1 + 0x1118) != 1)) {
    local_38 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_40 = *param_2;
    local_28 = 0;
    local_34 = '\x13';
    local_48 = PTR_DAT_043775b8 + 0x10;
    local_30 = 4;
    uVar1 = FUN_007fd53c(&local_48);
    if (((uVar1 & 1) != 0) &&
       ((*(int *)((long)param_2 + 0xc) == local_30._4_4_ + (int)local_30 && (local_34 == '\x13'))))
    {
      nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
      FUN_00802694(*(undefined8 *)(param_1 + 0x120),2);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
      FUN_007f8a00(auStack_58,param_1,1);
    }
  }
  return;
}


