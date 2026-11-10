/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292841c; name: FUN_0292841c
 */


void FUN_0292841c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 local_58 [6];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x3b0));
  if (*(int *)(param_2 + 0x60) < 1) {
    puVar2 = *(undefined8 **)(param_2 + 0xd8);
    for (puVar5 = *(undefined8 **)(param_2 + 0xd0); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      FUN_0292c430(param_1,*puVar5);
    }
    lVar4 = *(long *)(param_2 + 0x58);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x26) == '\0')) {
      for (plVar1 = *(long **)(param_2 + 0xd0);
          (plVar1 != *(long **)(param_2 + 0xd8) && (lVar6 = *plVar1, *(int *)(lVar6 + 0x20) < 1));
          plVar1 = plVar1 + 1) {
        if ((*(char *)(lVar6 + 0x25) != '\0') && (*(char *)(lVar6 + 0x26) == '\0')) {
          FUN_0292f77c(local_58,param_2 + 0x108,lVar4,lVar6,0);
          uVar3 = FUN_0292ce60(local_58[0],0,lVar6,4);
          if ((uVar3 & 1) == 0) {
            lVar6 = 0;
          }
          *(long *)(param_2 + 0x58) = lVar6;
          goto LAB_02928454;
        }
      }
      *(undefined8 *)(param_2 + 0x58) = 0;
    }
  }
LAB_02928454:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x3b0));
  return;
}


