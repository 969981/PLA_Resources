/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0bc1c; name: FUN_02f0bc1c
 */


void FUN_02f0bc1c(undefined8 param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  long *plVar4;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar1 = *(uint *)(pMVar3 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      if (*(uint *)(plVar4 + 2) == param_2) {
        *(int *)((long)plVar4 + 0x14) = *(int *)((long)plVar4 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar3);
        FUN_02e83118(DAT_0440a128,plVar4,param_4,0);
        if ((*(byte *)(param_3 + 2) & 7) == 1) {
          local_54 = 0;
          local_48 = 0;
          local_4c = 0;
          local_70[0] = 0;
          local_58 = 4;
          uStack_5c = *param_3;
          local_60 = 0;
          local_50 = 0;
          local_68 = param_4;
          (**(code **)(*plVar4 + 0x98))(plVar4,local_70);
          FUN_02e83118(DAT_0440a128,plVar4,param_4,local_60);
        }
        else {
          (**(code **)(*plVar4 + 0xb8))(plVar4,param_4,param_1,0);
        }
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return;
}


