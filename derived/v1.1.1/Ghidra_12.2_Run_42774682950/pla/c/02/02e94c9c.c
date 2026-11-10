/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94c9c; name: FUN_02e94c9c
 */


void FUN_02e94c9c(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (puVar3 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if ((*puVar3 == param_2) && (*(long *)(puVar3 + 2) == 0)) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if (((param_3 & 1) != 0) && (puVar3[0x1c] != 0)) {
          puVar3[0x1c] = puVar3[0x1c] - 1;
        }
        FUN_02e8e9ac(puVar3,param_4 & 1);
        return;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  return;
}


