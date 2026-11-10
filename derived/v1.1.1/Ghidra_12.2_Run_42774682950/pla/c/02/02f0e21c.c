/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e21c; name: FUN_02f0e21c
 */


void FUN_02f0e21c(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  DAT_0440ad30 = nn::os::GetCurrentThread();
  nn::os::WaitEvent((EventType *)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x178) == '\0') {
    pMVar1 = (MutexType *)(param_1 + 0x180);
    do {
      while (nn::os::LockMutex(pMVar1), *(int *)(param_1 + 0x1c4) != 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x1a0);
        local_78 = puVar2[1];
        local_70 = puVar2[2];
        local_68 = puVar2[3];
        local_60 = puVar2[4];
        uStack_58 = puVar2[5];
        local_50 = puVar2[6];
        uStack_48 = puVar2[7];
        local_40 = puVar2[8];
        uStack_38 = puVar2[9];
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x1a0) = *puVar2;
          if (*(undefined8 **)(param_1 + 0x1a8) == puVar2) {
            *(undefined8 *)(param_1 + 0x1a8) = 0;
          }
          if ((puVar2 < *(undefined8 **)(param_1 + 0x1b8)) ||
             (*(undefined8 **)(param_1 + 0x1b8) + (ulong)*(uint *)(param_1 + 0x1c0) * 10 <= puVar2))
          {
            FUN_02f59e60(0);
          }
          else {
            *puVar2 = *(undefined8 *)(param_1 + 0x1b0);
            *(undefined8 **)(param_1 + 0x1b0) = puVar2;
          }
          *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + -1;
        }
        nn::os::UnlockMutex(pMVar1);
        FUN_02e8f2c8(param_1,&local_78);
        if ((char)local_68 != '\0') {
          FUN_02f59e60(0,local_70);
        }
      }
      nn::os::UnlockMutex(pMVar1);
      nn::os::WaitEvent((EventType *)(param_1 + 0x150));
    } while (*(char *)(param_1 + 0x178) == '\0');
  }
  FUN_02f57a40();
  return;
}


