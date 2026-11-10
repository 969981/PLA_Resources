/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033961e0; name: FUN_033961e0
 */


ulong FUN_033961e0(long *param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *__s1;
  char *__s2;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = (uint *)(param_1 + 1);
  if ((int)param_1[3] * 2 < (int)((*puVar8 + 1) * 3)) {
    FUN_032c2334(param_1 + 2);
    lVar4 = *param_2;
  }
  else {
    lVar4 = *param_2;
  }
  if (lVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_032bb190();
    uVar5 = uVar5 & 0xffffffff;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 3);
  uVar7 = uVar6 & uVar5;
  lVar4 = param_1[2];
  while( true ) {
    piVar1 = (int *)(lVar4 + uVar7 * 8);
    puVar9 = (uint *)(piVar1 + 1);
    if ((int)*puVar9 < 0) break;
    if (*piVar1 == (int)uVar5) {
      __s1 = *(char **)(*param_1 + (long)(int)*puVar9 * 8);
      __s2 = (char *)*param_2;
      if (__s1 == __s2) goto LAB_033962bc;
      if (__s1 != (char *)0x0 && __s2 != (char *)0x0) {
        iVar3 = strcmp(__s1,__s2);
        if (iVar3 == 0) goto LAB_033962b8;
        lVar4 = param_1[2];
        uVar6 = (ulong)*(uint *)(param_1 + 3);
      }
    }
    uVar7 = ((ulong)((long)piVar1 - lVar4) >> 3) + 1 & (long)(int)uVar6;
  }
  uVar2 = *puVar8;
  *piVar1 = (int)uVar5;
  *puVar9 = uVar2;
  puVar9 = puVar8;
LAB_033962b8:
  lVar4 = param_1[2];
LAB_033962bc:
  return (ulong)*puVar9 | ((long)piVar1 - lVar4) * 0x20000000;
}


