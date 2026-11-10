/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413720; name: FUN_00413720
 */


void FUN_00413720(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong __n;
  uint *puVar9;
  long lVar10;
  void *__s;
  
  uVar3 = param_3;
  if ((int)param_3 < 0) {
    uVar3 = param_3 + 1;
  }
  if (param_3 == 8) {
    FUN_0040fd40(param_1,param_2);
    return;
  }
  if (param_3 == 4) {
    FUN_004102a0(param_1,param_2);
    return;
  }
  if ((int)param_3 < 0x10) {
    FUN_00413620(param_1,param_2,param_3,param_4);
    return;
  }
  iVar2 = (int)uVar3 >> 1;
  lVar1 = param_2 + (long)iVar2 * 4;
  iVar5 = FUN_0040cec0(param_2,lVar1,iVar2);
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      __n = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
      __s = (void *)(param_4 + __n);
      lVar10 = param_4 + (long)(int)param_3 * 8;
      memset(__s,0,__n);
      goto LAB_00413858;
    }
    lVar10 = lVar1;
    lVar8 = param_2;
  }
  else {
    lVar10 = param_2;
    lVar8 = lVar1;
  }
  FUN_0040f430(param_4,lVar10,lVar8,iVar2);
  lVar10 = param_4 + (long)(int)param_3 * 8;
  __s = (void *)(param_4 + (long)(int)param_3 * 4);
  FUN_00413720(__s,param_4,iVar2,lVar10);
LAB_00413858:
  FUN_00413720(param_1,param_2,iVar2,lVar10);
  lVar8 = param_1 + (long)(int)param_3 * 4;
  FUN_00413720(lVar8,lVar1,iVar2,lVar10);
  iVar5 = FUN_0040f2e0(param_4,param_1,lVar8,param_3);
  iVar6 = FUN_0040f430(__s,param_4,__s,param_3);
  lVar1 = param_1 + (long)iVar2 * 4;
  iVar7 = FUN_0040f2e0(lVar1,lVar1,__s,param_3);
  uVar3 = (iVar5 - iVar6) + iVar7;
  if (uVar3 != 0) {
    lVar1 = (long)iVar2 + (long)(int)param_3;
    lVar10 = lVar1 * 4;
    uVar4 = *(uint *)(param_1 + lVar10);
    *(uint *)(param_1 + lVar10) = uVar4 + uVar3;
    if (CARRY4(uVar4,uVar3)) {
      puVar9 = (uint *)(param_1 + lVar1 * 4);
      do {
        puVar9 = puVar9 + 1;
        uVar3 = *puVar9;
        *puVar9 = uVar3 + 1;
      } while (0xfffffffe < uVar3);
    }
  }
  return;
}


