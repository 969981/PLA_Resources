/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a76df0; name: FUN_02a76df0
 */


void FUN_02a76df0(long param_1,long *param_2,int param_3)

{
  size_t sVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *local_58;
  
  local_58 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  plVar6 = *(long **)(param_1 + 0x128);
  plVar4 = *(long **)(param_1 + 0x130);
  if (plVar6 == plVar4) {
    plVar2 = *(long **)(param_1 + 0xf8);
  }
  else {
    plVar2 = *(long **)(param_1 + 0xf8);
    do {
      plVar5 = *(long **)(param_1 + 0xf0);
      if ((plVar5 != plVar2) && (*plVar5 != *plVar6)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar2 == plVar5) goto LAB_02a76e44;
        } while (*plVar5 != *plVar6);
      }
      if (plVar2 != plVar5) {
        sVar1 = (long)plVar2 - (long)(plVar5 + 1);
        if (sVar1 != 0) {
          memmove(plVar5,plVar5 + 1,sVar1);
        }
        plVar2 = plVar5 + ((long)sVar1 >> 3);
        *(long **)(param_1 + 0xf8) = plVar2;
      }
LAB_02a76e44:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4);
    plVar6 = *(long **)(param_1 + 0x128);
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0x130) = plVar6;
  if ((plVar4 != plVar2) && ((long *)*plVar4 != param_2)) {
    do {
      plVar4 = plVar4 + 1;
      if (plVar2 == plVar4) goto LAB_02a76f0c;
    } while ((long *)*plVar4 != param_2);
  }
  if (plVar2 != plVar4) goto LAB_02a76ffc;
LAB_02a76f0c:
  FUN_02a7701c((undefined8 *)(param_1 + 0xf0),&local_58);
  if ((param_3 == 2) && (*(long *)(param_1 + 0xe8) != 0)) {
    pcVar3 = *(code **)(*param_2 + 8);
LAB_02a76f58:
    (*pcVar3)(param_2);
  }
  else if ((param_3 == 1) && (*(char *)(param_1 + 0x1e1) != '\0')) {
    pcVar3 = *(code **)*param_2;
    goto LAB_02a76f58;
  }
  plVar6 = *(long **)(param_1 + 0x128);
  plVar4 = *(long **)(param_1 + 0x130);
  if (plVar6 != plVar4) {
    plVar2 = *(long **)(param_1 + 0xf8);
    do {
      plVar5 = *(long **)(param_1 + 0xf0);
      if ((plVar5 != plVar2) && (*plVar5 != *plVar6)) {
        do {
          plVar5 = plVar5 + 1;
          if (plVar2 == plVar5) goto LAB_02a76f7c;
        } while (*plVar5 != *plVar6);
      }
      if (plVar2 != plVar5) {
        sVar1 = (long)plVar2 - (long)(plVar5 + 1);
        if (sVar1 != 0) {
          memmove(plVar5,plVar5 + 1,sVar1);
        }
        plVar2 = plVar5 + ((long)sVar1 >> 3);
        *(long **)(param_1 + 0xf8) = plVar2;
      }
LAB_02a76f7c:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4);
    plVar6 = *(long **)(param_1 + 0x128);
  }
  *(long **)(param_1 + 0x130) = plVar6;
LAB_02a76ffc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
}


