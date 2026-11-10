/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e87e4; name: FUN_032e87e4
 */


int FUN_032e87e4(long *param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  long local_58;
  undefined1 auStack_44 [4];
  
  *param_3 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_58 = param_2;
  lVar5 = FUN_032e8b9c(param_1,&local_58);
  if ((lVar5 != 0) &&
     (iVar3 = *(int *)(*param_1 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), iVar3 != 0)) {
    return iVar3;
  }
  if (((*(char *)(param_2 + 2) < '\0') &&
      (puVar6 = (undefined8 *)FUN_032e2008(param_2,0x800000), puVar6 != (undefined8 *)0x0)) &&
     (psVar9 = (short *)*puVar6, psVar9 != (short *)0x0)) {
    if (*psVar9 < psVar9[2]) {
      lVar5 = (long)(int)*psVar9;
      psVar8 = psVar9 + lVar5 * 4;
      iVar3 = 0;
      do {
        psVar8 = psVar8 + 4;
        uVar7 = FUN_032e2c18(psVar8);
        iVar3 = FUN_032e81b0(iVar3,uVar7);
        lVar5 = lVar5 + 1;
      } while (lVar5 < psVar9[2]);
      goto LAB_032e88cc;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) {
    iVar3 = FUN_032e87e4(param_1,*(long *)(param_2 + 8),auStack_44);
    goto LAB_032e88cc;
  }
  iVar3 = 0;
LAB_032e88cc:
  uVar4 = FUN_032e8c3c(param_1,&local_58);
  if (*(uint *)(param_1 + 1) == uVar4) {
    lVar5 = *param_1;
    iVar2 = uVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar4) {
      lVar5 = FUN_032e8d44(PTR_PTR_0434a080,iVar2);
      uVar4 = *(uint *)(param_1 + 1);
      *param_1 = lVar5;
    }
    plVar1 = (long *)(lVar5 + (long)(int)uVar4 * 0x10);
    *plVar1 = param_2;
    *(int *)(plVar1 + 1) = iVar3;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(int *)(*param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = iVar3;
  }
  *param_3 = 1;
  return iVar3;
}


