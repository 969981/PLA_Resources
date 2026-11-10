/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e0080; name: FUN_019e0080
 */


void FUN_019e0080(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  iVar1 = *(int *)(param_1 + 800);
  iVar2 = *(int *)(param_1 + 0x324);
  iVar3 = *(int *)(param_1 + 0x328);
  iVar4 = *(int *)(param_1 + 0x32c);
  iVar5 = *(int *)(param_1 + 0x330);
  iVar6 = *(int *)(param_1 + 0x334);
  iVar7 = iVar1 + iVar9 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
  if (iVar7 < 1) {
    return;
  }
  iVar7 = FUN_019e1cf0(iVar7 + -1);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else if (iVar7 < iVar9) {
    uVar8 = 0;
    goto LAB_019e0174;
  }
  if ((iVar1 < 1) || (iVar9 = iVar9 + iVar1, iVar9 <= iVar7)) {
    if ((iVar2 < 1) || (iVar9 = iVar9 + iVar2, iVar9 <= iVar7)) {
      if ((iVar3 < 1) || (iVar9 = iVar9 + iVar3, iVar9 <= iVar7)) {
        if ((iVar4 < 1) || (iVar9 = iVar9 + iVar4, iVar9 <= iVar7)) {
          if ((iVar5 < 1) || (iVar9 = iVar9 + iVar5, iVar9 <= iVar7)) {
            if (iVar6 < 1) {
              return;
            }
            if (iVar9 + iVar6 <= iVar7) {
              return;
            }
            uVar8 = 6;
          }
          else {
            uVar8 = 5;
          }
        }
        else {
          uVar8 = 4;
        }
      }
      else {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 2;
    }
  }
  else {
    uVar8 = 1;
  }
LAB_019e0174:
  *(undefined4 *)(param_1 + 0x3c0) = uVar8;
  return;
}


