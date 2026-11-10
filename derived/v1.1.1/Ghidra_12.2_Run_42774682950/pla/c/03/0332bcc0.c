/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332bcc0; name: FUN_0332bcc0
 */


void FUN_0332bcc0(undefined8 *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  iVar6 = param_2 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) <= param_2) {
    uVar5 = FUN_0332c8b8(PTR_PTR_0434a080,iVar6,param_1[8],*(undefined4 *)(param_1 + 9));
    param_1[8] = uVar5;
  }
  if ((*(int *)(param_1 + 9) <= param_2) || (iVar6 < *(int *)(param_1 + 9))) {
    *(int *)(param_1 + 9) = iVar6;
  }
  if ((int)(*(uint *)((long)param_1 + 0x49c) & 0x3fffffff) <= param_2) {
    uVar5 = FUN_0332cabc(PTR_PTR_0434a080,iVar6,param_1[0x92],*(undefined4 *)(param_1 + 0x93),
                         (long)param_1 + 0x49c);
    param_1[0x92] = uVar5;
  }
  if ((*(int *)(param_1 + 0x93) <= param_2) || (iVar6 < *(int *)(param_1 + 0x93))) {
    *(int *)(param_1 + 0x93) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 9);
  uVar4 = iVar6 - 1;
  uVar2 = param_3;
  if (uVar4 != 1) {
    uVar2 = param_4;
  }
  if ((int)uVar2 < 0) {
    *param_1 = 0x100000000;
    param_1[1] = 0x100000001;
    puVar8 = (ulong *)param_1[0x92];
    if (0 < (int)uVar4) {
      uVar13 = (ulong)(int)uVar4;
      uVar9 = uVar13;
      if ((uVar13 & 1) != 0) {
        uVar9 = uVar13 - 1;
        puVar8[uVar13 * 8] = 0;
        *(undefined4 *)(param_1[8] + uVar13 * 0x40) = 0;
        puVar8 = (ulong *)param_1[0x92];
      }
      if (uVar4 != 1) {
        lVar11 = uVar9 << 6;
        do {
          *(undefined8 *)((long)puVar8 + lVar11) = 0;
          *(undefined4 *)(param_1[8] + lVar11) = 0;
          *(undefined8 *)(param_1[0x92] + lVar11 + -0x40) = 0;
          lVar12 = param_1[8] + lVar11;
          lVar11 = lVar11 + -0x80;
          *(undefined4 *)(lVar12 + -0x40) = 0;
          puVar8 = (ulong *)param_1[0x92];
          uVar9 = uVar9 - 2;
        } while (0 < (long)uVar9);
      }
    }
    uVar10 = 0;
    uVar9 = (ulong)param_3 << 0x20;
  }
  else {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = (int)param_3 / (int)uVar4;
    }
    uVar9 = (ulong)uVar7;
    *param_1 = 1;
    uVar3 = uVar7;
    if ((int)uVar7 < 2) {
      uVar3 = 1;
    }
    *(uint *)(param_1 + 1) = uVar2;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if ((int)uVar4 < 1) {
      uVar9 = 0;
    }
    else {
      uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar4 << 6;
      *(ulong *)(param_1[0x92] + uVar13) = uVar9 << 0x20;
      *(uint *)(param_1[8] + uVar13) = uVar4;
      lVar11 = (long)(int)uVar4;
      lVar12 = lVar11 + -1;
      if (0 < lVar12) {
        uVar2 = param_3 - uVar7;
        if (lVar12 != 1) {
          uVar2 = uVar7;
        }
        uVar4 = uVar2 + uVar7;
        uVar9 = (ulong)uVar4;
        *(ulong *)(param_1[0x92] + lVar12 * 0x40) = CONCAT44(uVar4,uVar7);
        *(int *)(param_1[8] + lVar12 * 0x40) = (int)lVar12;
        lVar12 = lVar11 + -2;
        if (0 < lVar12) {
          uVar7 = param_3 - uVar4;
          if (lVar12 != 1) {
            uVar7 = uVar2;
          }
          uVar9 = (ulong)(uVar7 + uVar4);
          *(ulong *)(param_1[0x92] + lVar12 * 0x40) = CONCAT44(uVar7 + uVar4,uVar4);
          *(int *)(param_1[8] + lVar12 * 0x40) = (int)lVar12;
          if (0 < lVar11 + -3) {
            lVar12 = lVar11 * 0x40 + -0xc0;
            iVar6 = iVar6 + -4;
            lVar11 = lVar11 + -4;
            uVar13 = uVar9;
            do {
              uVar2 = param_3 - (int)uVar13;
              if (lVar11 != 0) {
                uVar2 = uVar7;
              }
              uVar9 = (ulong)(uVar2 + (int)uVar13);
              *(ulong *)(param_1[0x92] + lVar12) = uVar13 | uVar9 << 0x20;
              *(int *)(param_1[8] + lVar12) = iVar6;
              lVar12 = lVar12 + -0x40;
              iVar6 = iVar6 + -1;
              bVar1 = 0 < lVar11;
              lVar11 = lVar11 + -1;
              uVar13 = uVar9;
              uVar7 = uVar2;
            } while (bVar1);
          }
        }
      }
    }
    puVar8 = (ulong *)param_1[0x92];
    uVar9 = uVar9 | (ulong)param_3 << 0x20;
    uVar10 = 1;
  }
  *puVar8 = uVar9;
  *(undefined4 *)param_1[8] = uVar10;
  return;
}


