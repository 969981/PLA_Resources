/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b82b4; name: FUN_032b82b4
 */


void FUN_032b82b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  MutexType *pMVar3;
  long lVar4;
  
  pMVar3 = (MutexType *)param_1[5];
  *param_1 = &PTR_LAB_04348930;
  if (pMVar3 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar3);
    FUN_032cf640(pMVar3,0x20);
  }
  if (*(int *)(param_1 + 4) != 0) {
    lVar2 = param_1[3];
    lVar4 = (long)*(int *)(param_1 + 4) * 8;
    lVar1 = *(long *)(lVar2 + -8 + lVar4);
    while( true ) {
      if (lVar1 != 0) {
        FUN_032d647c();
      }
      if (lVar4 == 8) break;
      lVar4 = lVar4 + -8;
      lVar1 = *(long *)(lVar2 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_032b60c8(param_1);
  return;
}


