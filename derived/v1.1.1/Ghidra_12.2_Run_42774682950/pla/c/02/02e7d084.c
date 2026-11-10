/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d084; name: FUN_02e7d084
 */


void FUN_02e7d084(MutexType *param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong local_28;
  
  nn::os::LockMutex(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = (long *)**(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
      local_28 = 0;
      do {
        if (*(int *)(param_1 + 0x28) - 1 == local_28) goto LAB_02e7d148;
        local_28 = local_28 + 1;
        plVar2 = (long *)(*(long **)(param_1 + 0x20))[local_28 & 0xffffffff];
      } while (plVar2 == (long *)0x0);
    }
    else {
      local_28 = 0;
    }
    do {
      plVar4 = (long *)plVar2[1];
      if (plVar4 == (long *)0x0) {
        uVar3 = (uint)local_28;
        do {
          uVar3 = uVar3 + 1;
          local_28 = (ulong)uVar3;
          if (*(uint *)(param_1 + 0x28) <= uVar3) {
            plVar4 = (long *)0x0;
            iVar1 = (int)plVar2[2];
            goto joined_r0x02e7d140;
          }
          plVar4 = *(long **)(*(long *)(param_1 + 0x20) + local_28 * 8);
        } while (plVar4 == (long *)0x0);
      }
      iVar1 = (int)plVar2[2];
joined_r0x02e7d140:
      if (iVar1 < 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      plVar2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_02e7d148:
  nn::os::UnlockMutex(param_1);
  if (*(int *)(param_1 + 0x290) != 0) {
    plVar2 = (long *)**(long **)(param_1 + 0x288);
    if (plVar2 == (long *)0x0) {
      local_28 = 0;
      do {
        if (*(int *)(param_1 + 0x290) - 1 == local_28) {
          return;
        }
        local_28 = local_28 + 1;
        plVar2 = (long *)(*(long **)(param_1 + 0x288))[local_28 & 0xffffffff];
      } while (plVar2 == (long *)0x0);
    }
    else {
      local_28 = 0;
    }
    do {
      plVar4 = (long *)plVar2[1];
      if (plVar4 == (long *)0x0) {
        uVar3 = (uint)local_28;
        do {
          uVar3 = uVar3 + 1;
          local_28 = (ulong)uVar3;
          if (*(uint *)(param_1 + 0x290) <= uVar3) {
            plVar4 = (long *)0x0;
            iVar1 = (int)plVar2[2];
            goto joined_r0x02e7d1f4;
          }
          plVar4 = *(long **)(*(long *)(param_1 + 0x288) + local_28 * 8);
        } while (plVar4 == (long *)0x0);
      }
      iVar1 = (int)plVar2[2];
joined_r0x02e7d1f4:
      if (iVar1 < 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      plVar2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


