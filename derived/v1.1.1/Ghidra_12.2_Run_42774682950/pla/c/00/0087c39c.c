/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c39c; name: FUN_0087c39c
 */


void FUN_0087c39c(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar3 = *(int *)(param_2 + 0x20);
  uVar5 = FUN_00877120(param_2[1],1 < iVar3,1 < *(ushort *)(param_2 + 8));
  uVar4 = *(uint *)(&DAT_03a751c8 + (ulong)uVar5 * 4);
  (**(code **)PTR_DAT_04378a38)(param_1);
  (**(code **)PTR_DAT_04378a50)(param_1,*(undefined4 *)(param_2 + 0x14));
  iVar7 = iVar3;
  if (uVar5 != 4) {
    iVar7 = *(int *)(param_2 + 0x18);
  }
  (**(code **)PTR_DAT_04378a58)(param_1,iVar7);
  if ((uVar4 | 2) != 6) {
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  (**(code **)PTR_DAT_04378a60)(param_1,iVar3);
  (**(code **)PTR_DAT_04378a80)(param_1,*(undefined2 *)(param_2 + 6));
  if (1 < *(ushort *)(param_2 + 8)) {
    (**(code **)PTR_DAT_04378a90)(param_1);
  }
  (**(code **)PTR_DAT_04378a48)(param_1,uVar4);
  uVar10 = 0x62;
  piVar9 = &DAT_041b39e8;
  do {
    uVar11 = uVar10 >> 1;
    piVar1 = piVar9 + uVar11 * 2 + 2;
    uVar10 = uVar10 + ~uVar11;
    if (*(int *)(param_2 + 0xc) <= piVar9[uVar11 * 2]) {
      piVar1 = piVar9;
      uVar10 = uVar11;
    }
    piVar9 = piVar1;
  } while (uVar10 != 0);
  if ((piVar1 == &DAT_041b3cf8) || (*(int *)(param_2 + 0xc) < *piVar1)) {
    iVar7 = 0;
  }
  else {
    iVar7 = piVar1[1];
  }
  (**(code **)PTR_DAT_04378a88)(param_1,iVar7);
  uVar4 = *(uint *)(param_2 + 0x10) & 0x180;
  uVar5 = 4;
  if (*(short *)(param_2 + 2) != 1 && uVar4 != 0) {
    uVar5 = 0xc;
  }
  uVar5 = uVar5 | *(uint *)(param_2 + 0x10) >> 10 & 1 | (*param_2 >> 2 & 1) << 5;
  if (*(short *)(param_2 + 2) == 1) {
    lVar2 = 0x20;
    if (uVar4 != 0) {
      lVar2 = 0x80;
    }
    uVar8 = 0x10;
    if (uVar4 != 0) {
      uVar8 = 0x40;
    }
    uVar5 = uVar5 | uVar8;
    lVar6 = FUN_00877060(*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0xc) >> 8);
    (**(code **)PTR_DAT_04378ad0)(param_1,(lVar2 + lVar6) - 1U & -lVar2);
  }
  (**(code **)PTR_DAT_04378a40)(param_1,uVar5);
  if ((*param_2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0087c5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378ac8)(param_1,param_2 + 0x24);
  return;
}


