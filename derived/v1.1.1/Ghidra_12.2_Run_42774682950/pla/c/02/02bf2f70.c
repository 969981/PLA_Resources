/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf2f70; name: FUN_02bf2f70
 */


void FUN_02bf2f70(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  uVar2 = 0;
  lVar1 = *(long *)(param_1 + 0x118) + 0x28;
  do {
    uVar4 = 1L << (uVar2 & 0x3f);
    lVar3 = uVar2 * 8;
    if ((uVar4 & param_2) != 0) {
      *(ulong *)(lVar1 + lVar3) = *(ulong *)(lVar1 + lVar3) & ~(ulong)param_3;
    }
    if ((uVar4 & param_3) != 0) {
      *(ulong *)(lVar1 + lVar3) = *(ulong *)(lVar1 + lVar3) & ~(ulong)param_2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x40);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


