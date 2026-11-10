/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65d1c; name: FUN_02e65d1c
 */


int FUN_02e65d1c(undefined8 param_1,long param_2,long param_3,int param_4,undefined8 *param_5,
                byte param_6)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_60;
  byte local_54 [4];
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 0;
  }
  plVar2 = (long *)(*DAT_0442d138)(7,0x30);
  if (plVar2 != (long *)0x0) {
    local_54[0] = param_6 & 1;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    iVar1 = (**(code **)(*DAT_0440a0a0 + 0x10))
                      (DAT_0440a0a0,param_2,param_4,param_3,local_54,plVar2);
    if ((iVar1 != 1) || (((*plVar2 < 1 && (param_4 == 0)) && (local_54[0] != 0)))) {
      (*DAT_0442d150)(7,plVar2);
      if (iVar1 != 0x42) {
        iVar1 = 2;
      }
      return iVar1;
    }
    if ((*(uint *)(plVar2 + 4) < DAT_0440a0b0) &&
       (plVar4 = *(long **)(DAT_0440a0a8 + (ulong)*(uint *)(plVar2 + 4) * 8), plVar4 != (long *)0x0)
       ) {
      local_60 = 0;
      plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,plVar2,param_4,&local_60);
      if (plVar3 != (long *)0x0) {
        nn::os::LockMutex((MutexType *)(plVar4 + 0x51));
        if (plVar4[0x4f] == 0) {
          plVar4[0x4f] = (long)plVar3;
          plVar3[2] = 0;
        }
        else {
          plVar3[2] = plVar4[0x4f];
          plVar4[0x4f] = (long)plVar3;
        }
        nn::os::UnlockMutex((MutexType *)(plVar4 + 0x51));
        if (local_54[0] == 0) {
          iVar1 = FUN_02e69cb8(plVar3,plVar2,param_2,param_3,param_4);
          if (iVar1 != 1) {
            *(undefined1 *)(plVar3 + 0xd) = 1;
            *(undefined1 *)((long)plVar3 + 0x6c) = 0;
            (**(code **)(*plVar3 + 0x18))(plVar3);
            return 2;
          }
        }
        else {
          plVar3[4] = (long)plVar2;
          *(undefined1 *)((long)plVar3 + 0x69) = 1;
        }
        *param_5 = local_60;
        return 1;
      }
      if (local_54[0] != 0) {
        (**(code **)(*(long *)plVar4[0xc2] + 0x10))((long *)plVar4[0xc2],plVar2);
      }
    }
    (*DAT_0442d150)(7,plVar2);
  }
  return 2;
}


