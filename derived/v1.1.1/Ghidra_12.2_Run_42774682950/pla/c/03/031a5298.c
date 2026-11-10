/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a5298; name: FUN_031a5298
 */


long FUN_031a5298(long param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  
  iVar11 = *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4);
  iVar9 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar11 == -1) {
    iVar11 = *(int *)(param_1 + 0x58);
    *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4) = iVar11;
    iVar8 = *(int *)(param_1 + 0x58);
    iVar2 = iVar8 + 1;
    lVar6 = *(long *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar8) {
      lVar6 = FUN_031a57a4(PTR_PTR_0434a080,iVar2);
      iVar8 = *(int *)(param_1 + 0x58);
      *(long *)(param_1 + 0x50) = lVar6;
    }
    *(int *)(param_1 + 0x58) = iVar2;
    *(undefined8 *)(lVar6 + (long)iVar8 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x50) + (long)iVar11 * 8);
  piVar12 = piVar1 + 1;
  if (*piVar12 == 0) {
    lVar6 = FUN_031a54e0(param_1);
    *piVar12 = *piVar12 + 1;
    *piVar1 = iVar3 + iVar9;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x68);
    lVar6 = *(long *)(param_1 + 0x60);
    iVar3 = (*piVar1 + *piVar12) - *(int *)(param_1 + 0x30);
    uVar4 = iVar9 - iVar3;
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) <= iVar9) {
      lVar6 = FUN_031a5918(PTR_PTR_0434a080,iVar9 + 1);
      *(long *)(param_1 + 0x60) = lVar6;
    }
    if (0 < (int)uVar4) {
      lVar6 = lVar6 + (long)iVar3 * 8;
      FUN_032d57d0(lVar6 + 8,lVar6,-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3)
      ;
      lVar6 = *(long *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x68) = iVar9 + 1;
    *piVar12 = *piVar12 + 1;
    puVar5 = PTR_PTR_0434a080;
    iVar9 = *(int *)(param_1 + 0x20);
    lVar6 = lVar6 + (long)iVar3 * 8;
    if (0 < iVar9) {
      uVar13 = 0;
      do {
        if (uVar13 != *param_2) {
          if ((*(int *)(param_1 + 0x48) == 0) ||
             (iVar11 = *(int *)(*(long *)(param_1 + 0x40) + uVar13 * 4), iVar11 == -1)) {
            iVar11 = -1;
          }
          else {
            iVar11 = (int)*(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar11 * 8);
          }
          if (iVar3 <= iVar11 - *(int *)(param_1 + 0x30)) {
            uVar4 = *(uint *)(*(long *)(param_1 + 0x40) + uVar13 * 4);
            if (uVar4 == 0xffffffff) {
              uVar4 = *(uint *)(param_1 + 0x58);
              *(uint *)(*(long *)(param_1 + 0x40) + uVar13 * 4) = uVar4;
              iVar11 = *(int *)(param_1 + 0x58);
              lVar7 = *(long *)(param_1 + 0x50);
              iVar9 = iVar11 + 1;
              if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar11) {
                lVar7 = FUN_031a57a4(puVar5,iVar9,lVar7,iVar11,param_1 + 0x5c);
                iVar11 = *(int *)(param_1 + 0x58);
                *(long *)(param_1 + 0x50) = lVar7;
              }
              *(int *)(param_1 + 0x58) = iVar9;
              *(undefined8 *)(lVar7 + (long)iVar11 * 8) = 0xffffffff;
            }
            uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
            *(int *)(*(long *)(param_1 + 0x50) + uVar10) =
                 *(int *)(*(long *)(param_1 + 0x50) + uVar10) + 1;
            iVar9 = *(int *)(param_1 + 0x20);
          }
        }
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)iVar9);
    }
  }
  return lVar6;
}


