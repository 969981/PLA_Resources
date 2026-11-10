/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c2f4; name: FUN_0315c2f4
 */


void FUN_0315c2f4(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  void *__s;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  
  iVar7 = *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4);
  if (iVar7 == -1) {
    iVar7 = *(int *)(param_1 + 0x88);
    *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4) = iVar7;
    iVar6 = *(int *)(param_1 + 0x88);
    iVar5 = iVar6 + 1;
    lVar9 = *(long *)(param_1 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar6) {
      lVar9 = FUN_0315c798(PTR_PTR_0434a080,iVar5);
      iVar6 = *(int *)(param_1 + 0x88);
      *(long *)(param_1 + 0x80) = lVar9;
    }
    *(int *)(param_1 + 0x88) = iVar5;
    *(undefined8 *)(lVar9 + (long)iVar6 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x80) + (long)iVar7 * 8);
  piVar8 = piVar1 + 1;
  iVar7 = *piVar8;
  lVar9 = (long)iVar7;
  if (iVar7 == 1) {
    local_58[0] = *piVar1;
    FUN_0315c188(param_1,local_58,1);
    *piVar1 = -1;
    *piVar8 = 0;
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + (long)(*param_3 - *(int *)(param_1 + 0x30)) * 4) = 0
    ;
  }
  else {
    iVar5 = iVar7 + -1;
    FUN_0315bc90(local_60,param_1,iVar5);
    iVar6 = *param_3 - *piVar1;
    lVar2 = *(long *)(param_1 + 0x90) + (long)(*piVar1 - *(int *)(param_1 + 0x30)) * 8;
    lVar3 = *(long *)(param_1 + 0x90) + (long)(local_60[0] - *(int *)(param_1 + 0x30)) * 8;
    FUN_0315c4e0(lVar3,lVar3 + (long)iVar5 * 8,lVar2,lVar2 + lVar9 * 8,iVar6);
    __s = (void *)(*(long *)(param_1 + 0xb0) + (long)(*piVar1 - *(int *)(param_1 + 0x30)) * 4);
    lVar2 = *(long *)(param_1 + 0xb0) + (long)(local_60[0] - *(int *)(param_1 + 0x30)) * 4;
    FUN_0315c550(lVar2,lVar2 + (long)iVar5 * 4,__s,(void *)((long)__s + lVar9 * 4),iVar6);
    if (iVar7 != 0) {
      memset(__s,0,lVar9 << 2);
    }
    iVar4 = *(int *)(param_1 + 0x58);
    lVar9 = *(long *)(param_1 + 0xa0) + (long)((*piVar1 - *(int *)(param_1 + 0x30)) * iVar4) * 4;
    lVar2 = *(long *)(param_1 + 0xa0) + (long)((local_60[0] - *(int *)(param_1 + 0x30)) * iVar4) * 4
    ;
    FUN_0315c5c0(lVar2,lVar2 + (long)(iVar4 * iVar5) * 4,lVar9,lVar9 + (long)(iVar4 * iVar7) * 4,
                 iVar4,iVar6);
    local_68[0] = *piVar1;
    FUN_0315c188(param_1,local_68,*piVar8);
    *piVar1 = local_60[0];
    *piVar8 = iVar5;
  }
  return;
}


