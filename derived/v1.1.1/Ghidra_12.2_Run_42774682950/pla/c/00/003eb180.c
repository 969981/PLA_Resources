/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eb180; name: FUN_003eb180
 */


void FUN_003eb180(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  puVar5 = PTR_LAB_04373088;
  lVar9 = *param_1;
  uVar10 = (param_3 - param_2 >> 4) * -0x3333333333333333;
  lVar6 = param_1[2];
  if ((ulong)((lVar6 - lVar9 >> 4) * -0x3333333333333333) < uVar10) {
    if (lVar9 != 0) {
      lVar6 = param_1[1];
      if (lVar6 == lVar9) {
        lVar6 = lVar9;
      }
      else {
        do {
          lVar11 = lVar6 + -0x50;
          FUN_003e7200(lVar6 + -0x18);
          FUN_003e9f80(lVar6 + -0x30,*(undefined8 *)(lVar6 + -0x28));
          if ((*(byte *)(lVar6 + -0x48) & 1) != 0) {
            FUN_002e2ea0(puVar5,*(undefined8 *)(lVar6 + -0x38));
          }
          lVar6 = lVar11;
        } while (lVar9 != lVar11);
        lVar6 = *param_1;
      }
      param_1[1] = lVar9;
      FUN_002e2ea0(PTR_LAB_04373088,lVar6);
      lVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar8 = 0x333333333333333;
    if (0x333333333333333 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar6 >> 4) * -0x3333333333333333) < 0x199999999999999) {
      uVar7 = (lVar6 >> 4) * -0x6666666666666666;
      uVar8 = uVar10;
      if (uVar10 <= uVar7) {
        uVar8 = uVar7;
      }
    }
    lVar9 = FUN_002e2e80(PTR_FUN_04373078,uVar8 * 0x50);
    param_1[2] = lVar9 + uVar8 * 0x50;
    *param_1 = lVar9;
    param_1[1] = lVar9;
    for (; param_2 != param_3; param_2 = param_2 + 0x50) {
      FUN_003eaa30(lVar9,param_2);
      lVar9 = param_1[1] + 0x50;
      param_1[1] = lVar9;
    }
  }
  else {
    uVar8 = (param_1[1] - lVar9 >> 4) * -0x3333333333333333;
    lVar6 = param_2 + (param_1[1] - lVar9);
    lVar11 = lVar6;
    if (uVar10 <= uVar8) {
      lVar11 = param_3;
    }
    if (lVar11 != param_2) {
      lVar12 = 0;
      do {
        piVar1 = (int *)(param_2 + lVar12);
        iVar3 = *piVar1;
        piVar2 = (int *)(lVar9 + lVar12);
        *piVar2 = iVar3;
        if (iVar3 - 3U < 2) {
          if (piVar1 != piVar2) {
            uVar7 = (ulong)(*(byte *)(piVar1 + 2) >> 1);
            lVar4 = (long)piVar1 + 9;
            if ((*(byte *)(piVar1 + 2) & 1) != 0) {
              uVar7 = *(ulong *)(piVar1 + 4);
              lVar4 = *(long *)(piVar1 + 6);
            }
            FUN_00291910(piVar2 + 2,lVar4,uVar7);
          }
        }
        else if (iVar3 == 5) {
          if (piVar1 != piVar2) {
            FUN_003eab54(piVar2 + 8,*(undefined8 *)(piVar1 + 8),piVar1 + 10);
          }
        }
        else if ((iVar3 == 6) && (piVar1 != piVar2)) {
          FUN_003eb180(piVar2 + 0xe,*(undefined8 *)(piVar1 + 0xe),*(undefined8 *)(piVar1 + 0x10));
        }
        lVar12 = lVar12 + 0x50;
      } while (lVar11 - param_2 != lVar12);
      lVar9 = lVar9 + lVar12;
    }
    puVar5 = PTR_LAB_04373088;
    if (uVar8 < uVar10) {
      if (lVar11 != param_3) {
        lVar9 = param_1[1];
        do {
          FUN_003eaa30(lVar9,lVar6);
          lVar6 = lVar6 + 0x50;
          lVar9 = param_1[1] + 0x50;
          param_1[1] = lVar9;
        } while (param_3 != lVar6);
      }
    }
    else {
      lVar6 = param_1[1];
      while (lVar11 = lVar6, lVar11 != lVar9) {
        FUN_003e7200(lVar11 + -0x18);
        FUN_003e9f80(lVar11 + -0x30,*(undefined8 *)(lVar11 + -0x28));
        lVar6 = lVar11 + -0x50;
        if ((*(byte *)(lVar11 + -0x48) & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(lVar11 + -0x38));
        }
      }
      param_1[1] = lVar9;
    }
  }
  return;
}


