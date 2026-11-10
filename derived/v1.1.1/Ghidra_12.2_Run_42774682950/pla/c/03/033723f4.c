/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033723f4; name: FUN_033723f4
 */


void FUN_033723f4(long *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long *plVar3;
  
  pMVar2 = (MutexType *)param_1[9];
  *param_1 = (long)(PTR_DAT_04389418 + 0x10);
  if (pMVar2 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar2);
    FUN_032cf640(pMVar2,0x20);
    param_1[9] = 0;
  }
  puVar1 = PTR_PTR_0434a080;
  plVar3 = (long *)param_1[8];
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
      FUN_032cf244(puVar1,*plVar3,0x10,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
    }
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
    FUN_032cf640(plVar3,0x30);
    param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(puVar1,param_1[6],0x40,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


