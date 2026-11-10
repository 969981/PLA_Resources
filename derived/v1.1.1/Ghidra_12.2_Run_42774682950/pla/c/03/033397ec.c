/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033397ec; name: FUN_033397ec
 */


void FUN_033397ec(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  iVar4 = (int)param_1[1];
  uVar1 = iVar4 + 1;
  if ((int)uVar3 <= iVar4) {
    lVar5 = FUN_033398e0(PTR_PTR_0434a080,uVar1,*param_1,iVar4);
    uVar3 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
    *param_1 = lVar5;
  }
  uVar6 = (ulong)uVar3;
  if ((int)uVar3 <= iVar4 || (int)uVar1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 1) = uVar1;
  if (iVar4 < (int)uVar3) {
    uVar8 = (ulong)iVar4;
    uVar9 = ~uVar8;
    if ((uVar3 - iVar4 & 1) != 0) {
      lVar5 = uVar8 * 0x18;
      uVar8 = uVar8 + 1;
      *(int *)(*param_1 + lVar5 + 0x10) = (int)uVar8;
    }
    if (uVar9 + uVar6 != 0) {
      lVar5 = uVar8 * 0x18;
      do {
        iVar7 = (int)uVar8;
        uVar8 = uVar8 + 2;
        *(int *)(*param_1 + lVar5 + 0x10) = iVar7 + 1;
        lVar2 = *param_1 + lVar5;
        lVar5 = lVar5 + 0x30;
        *(int *)(lVar2 + 0x28) = (int)uVar8;
      } while (uVar6 != uVar8);
    }
  }
  *(undefined4 *)(*param_1 + uVar6 * 0x18 + -8) = 0xffffffff;
  *(int *)(param_1 + 2) = iVar4;
  return;
}


