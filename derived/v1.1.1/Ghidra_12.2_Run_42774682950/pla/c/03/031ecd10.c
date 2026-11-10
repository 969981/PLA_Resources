/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ecd10; name: FUN_031ecd10
 */


void FUN_031ecd10(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined4 local_28 [2];
  
  lVar9 = (long)DAT_0444b53c;
  local_28[0] = 0;
  lVar5 = tpidr_el0;
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  if (*(long *)(lVar4 + lVar9 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (1 < (int)uVar1) {
    FUN_031eded0(*param_1,0,uVar1 - 1,local_28);
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 == 0) {
    iVar8 = 0;
  }
  else {
    if ((int)uVar1 < 2) {
      iVar3 = 0;
    }
    else {
      piVar6 = (int *)*param_1;
      lVar5 = 0;
      lVar4 = (ulong)uVar1 - 1;
      piVar7 = piVar6;
      do {
        piVar7 = piVar7 + 1;
        if (piVar6[(int)lVar5] != *piVar7) {
          lVar5 = (long)(int)lVar5 + 1;
          piVar6[lVar5] = *piVar7;
        }
        iVar3 = (int)lVar5;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar8 = iVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
      uVar2 = FUN_0315f314(PTR_PTR_0434a080,iVar8,*param_1,*(undefined4 *)(param_1 + 1));
      *param_1 = uVar2;
    }
  }
  if (*(int *)(param_1 + 1) != iVar8) {
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}


