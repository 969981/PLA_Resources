/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c0dc; name: FUN_02e6c0dc
 */


void FUN_02e6c0dc(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  bVar1 = *(byte *)(param_1 + 0x18);
  uVar3 = (uint)bVar1;
  param_1[0xf] = param_2;
  if ((uint)bVar1 < *(uint *)(param_1 + 0x15)) {
    plVar2 = (long *)param_1[0x17];
    if (bVar1 != 0) {
      do {
        plVar2 = (long *)*plVar2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*(long *)plVar2[1] + (ulong)*(uint *)(plVar2 + 2) != param_2) {
      FUN_02e6b230(param_1);
      goto LAB_02e6c13c;
    }
  }
  else {
    (**(code **)(*param_1 + 0x100))(param_1,param_2);
  }
  FUN_02e6ba60(param_1);
LAB_02e6c13c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


