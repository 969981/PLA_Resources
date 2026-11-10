/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e9ac; name: FUN_02e8e9ac
 */


void FUN_02e8e9ac(undefined4 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  piVar1 = param_1 + 0x19;
  if ((param_2 & 1) == 0) {
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (0 < iVar2 + -1) goto LAB_02e8e9f4;
  }
  else {
    *piVar1 = 0;
  }
  FUN_02e8ea90(DAT_0440a148,param_1);
  if ((int)param_1[0x18] < 1) {
    FUN_02e97998(DAT_0440a148 + 0xa8,*param_1,0);
    nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
    FUN_02e8ec28(param_1);
    if (*(long *)(param_1 + 6) != 0) {
      (*DAT_0442d158)(((*(byte *)(param_1 + 0x1a) & 8) >> 3) << 0x1f | 3);
      *(undefined8 *)(param_1 + 6) = 0;
    }
    FUN_02e8e940(0,param_1);
    return;
  }
LAB_02e8e9f4:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  return;
}


