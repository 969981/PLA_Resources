/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332cd08; name: FUN_0332cd08
 */


void FUN_0332cd08(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  SemaphoreType *pSVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_04350a28;
  if ((int)param_1[9] != 0) {
    lVar4 = (long)(int)param_1[9] * 8;
    lVar2 = param_1[8];
    pSVar3 = *(SemaphoreType **)(lVar2 + -8 + lVar4);
    while( true ) {
      if (pSVar3 != (SemaphoreType *)0x0) {
        nn::os::FinalizeSemaphore(pSVar3);
        FUN_032cf640(pSVar3,0x28);
      }
      if (lVar4 == 8) break;
      lVar4 = lVar4 + -8;
      pSVar3 = *(SemaphoreType **)(lVar2 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[8],8,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


