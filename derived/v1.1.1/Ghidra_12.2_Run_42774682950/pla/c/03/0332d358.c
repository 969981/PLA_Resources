/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d358; name: FUN_0332d358
 */


void FUN_0332d358(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 100);
  lVar3 = (long)iVar1;
  if (iVar1 < iVar5) {
    bVar4 = false;
    lVar7 = param_2 + 0x4c;
    lVar9 = lVar3 * 0x18;
    iVar2 = *(int *)(lVar7 + lVar9);
    lVar8 = lVar3;
    while( true ) {
      if (iVar2 != 0) {
        if (*(short *)(lVar7 + lVar8 * 2 + -0x22) != 0) goto LAB_0332d420;
        bVar4 = true;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x18;
      if (iVar5 == lVar8) break;
      iVar2 = *(int *)(lVar7 + lVar9);
    }
  }
  else {
    bVar4 = false;
    iVar5 = iVar1;
  }
  if (iVar5 < *(int *)(param_1 + 0x48)) {
    lVar7 = (long)*(int *)(param_1 + 0x48) - (long)iVar5;
    piVar6 = (int *)(param_2 + (long)iVar5 * 0x18 + 0x4c);
    do {
      if (*piVar6 != 0) goto LAB_0332d3f4;
      lVar7 = lVar7 + -1;
      piVar6 = piVar6 + 6;
    } while (lVar7 != 0);
  }
  if (bVar4) {
LAB_0332d3f4:
    if (iVar1 < *(int *)(param_1 + 0xb8)) {
      do {
        lVar8 = lVar3;
        if (*(short *)(param_2 + 0x2a + lVar3 * 2) != 0) {
LAB_0332d420:
          param_2 = param_2 + ((lVar8 << 0x20) >> 0x1f);
          *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) + -1;
          nn::os::ReleaseSemaphore
                    (*(SemaphoreType **)(param_1 + ((lVar8 << 0x20) >> 0x1d) + 0x90),1);
          return;
        }
        lVar3 = lVar3 + 1;
      } while (*(int *)(param_1 + 0xb8) != lVar3);
    }
  }
  return;
}


