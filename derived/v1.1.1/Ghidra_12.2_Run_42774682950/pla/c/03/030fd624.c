/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fd624; name: FUN_030fd624
 */


void FUN_030fd624(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  undefined8 *puVar27;
  int iVar28;
  int *local_100;
  undefined8 local_f8;
  int local_f0 [32];
  ulong local_70 [2];
  
  puVar7 = PTR_PTR_0434a080;
  lVar11 = *param_2;
  uVar24 = (ulong)(param_2[1] - lVar11) >> 2;
  iVar23 = (int)uVar24;
  iVar13 = iVar23 + -1;
  iVar25 = *(int *)(param_1 + 0x15d4) - iVar23;
  lVar20 = (param_2[1] - lVar11) * 0x40000000 >> 0x20;
  if (0 < iVar23) {
    iVar28 = *(int *)(param_1 + 0x15d4) + -1;
    lVar26 = lVar20;
LAB_030fd68c:
    lVar26 = lVar26 + -1;
    iVar6 = *(int *)(lVar11 + lVar26 * 4);
    if (iVar6 < iVar25) {
      piVar17 = (int *)(lVar11 + (long)iVar13 * 4);
      do {
        if (iVar28 == *piVar17) {
          iVar28 = iVar28 + -1;
        }
        else if (*piVar17 <= iVar28) goto code_r0x030fd6c0;
        iVar13 = iVar13 + -1;
        piVar17 = piVar17 + -1;
      } while( true );
    }
    goto LAB_030fd704;
  }
LAB_030fd714:
  *(int *)(param_1 + 0x15d4) = iVar25;
  if (*(long *)(param_1 + 0x1660) == 0) goto LAB_030fd910;
  *(undefined1 *)(param_1 + 0x1668) = 1;
  FUN_030fdb18(param_1);
  puVar7 = PTR_PTR_0434a080;
  local_100 = local_f0;
  local_f8 = 0x8000002000000000;
  if (iVar23 < 0x21) {
    uVar19 = 0;
    if (iVar23 != 0) {
LAB_030fd768:
      uVar19 = uVar24 & 0xffffffff;
      local_f8 = CONCAT44(local_f8._4_4_,iVar23);
    }
  }
  else {
    if (iVar23 < 0x40000000) {
      local_f8._4_4_ = 0x80000020;
    }
    else {
      FUN_032bd0a8(uVar24 & 0xffffffff);
    }
    uVar10 = (local_f8._4_4_ & 0x3fffffff) << 1;
    uVar19 = (ulong)uVar10;
    if (0x3ffffffe < uVar10) {
      uVar19 = 0x3fffffff;
    }
    uVar9 = uVar24 & 0xffffffff;
    if (iVar23 <= (int)uVar19) {
      uVar9 = uVar19;
    }
    local_100 = (int *)FUN_032bd1d4(puVar7,uVar9,4,local_100,0,(long)&local_f8 + 4);
    uVar19 = local_f8 & 0xffffffff;
    if ((int)local_f8 != iVar23) goto LAB_030fd768;
  }
  if (0 < (int)uVar19) {
    lVar11 = 0;
    do {
      lVar26 = lVar11 + 1;
      local_100[lVar11] =
           *(int *)(*(long *)(param_1 + 0x1648) + (long)*(int *)(*param_2 + lVar11 * 4) * 4);
      uVar19 = (ulong)(int)local_f8;
      lVar11 = lVar26;
    } while (lVar26 < (long)uVar19);
  }
  iVar13 = (int)uVar19;
  if (iVar23 < 0x21) {
    if (0 < iVar13) {
      uVar24 = 0;
      iVar13 = *local_100;
      piVar17 = local_100;
      do {
        iVar25 = 0;
        while( true ) {
          uVar24 = uVar24 + 1;
          piVar17 = piVar17 + 1;
          local_100[iVar25] = iVar13;
          if (uVar24 == (uVar19 & 0xffffffff)) goto LAB_030fd834;
          iVar13 = local_100[uVar24];
          if (uVar24 == 0) break;
          lVar11 = 0;
          do {
            if (piVar17[lVar11 + -1] <= iVar13) break;
            piVar17[lVar11] = piVar17[lVar11 + -1];
            lVar11 = lVar11 + -1;
          } while (0 < (long)(uVar24 + lVar11));
          iVar25 = (int)uVar24 + (int)lVar11;
        }
      } while( true );
    }
  }
  else if (1 < iVar13) {
    FUN_02ff1e50(local_100,0,iVar13 + -1);
  }
LAB_030fd834:
  lVar11 = param_3[1];
  if ((int)lVar11 != 0) {
    piVar16 = (int *)*param_3;
    piVar17 = piVar16;
    do {
      piVar18 = piVar17 + 2;
      iVar13 = piVar17[1];
      iVar25 = *(int *)(*(long *)(param_1 + 0x1648) + (long)*piVar17 * 4);
      *(int *)(*(long *)(param_1 + 0x1638) + (long)iVar25 * 0x10 + 0xc) = iVar13;
      *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar13 * 4) = iVar25;
      piVar17 = piVar18;
    } while (piVar18 != piVar16 + (long)(int)lVar11 * 2);
  }
  if (0 < iVar23) {
    iVar13 = *(int *)(param_1 + 0x1640);
    lVar11 = (long)iVar13 * 0x10;
    do {
      iVar13 = iVar13 + -1;
      lVar11 = lVar11 + -0x10;
      lVar20 = lVar20 + -1;
      if (iVar13 != local_100[lVar20]) {
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1638) + lVar11);
        iVar25 = *(int *)((long)puVar27 + 0xc);
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)local_100[lVar20] * 0x10);
        uVar3 = puVar27[1];
        *puVar8 = *puVar27;
        puVar8[1] = uVar3;
        *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar25 * 4) = local_100[lVar20];
      }
    } while (0 < lVar20);
  }
  uVar10 = *(uint *)(param_1 + 0x1644);
  uVar4 = *(uint *)(param_1 + 0x15d4);
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar4) {
    puVar27 = *(undefined8 **)(param_1 + 0x1638);
    uVar5 = *(uint *)(param_1 + 0x1640);
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4);
      uVar10 = *(uint *)(param_1 + 0x1644);
    }
    uVar14 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar14) {
      uVar14 = 0x3fffffff;
    }
    uVar2 = uVar4;
    if ((int)uVar4 <= (int)uVar14) {
      uVar2 = uVar14;
    }
    FUN_032bd100(uVar2,0x10,uVar10,local_70);
    uVar10 = *(uint *)(param_1 + 0x1644);
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_70[0],local_70);
    if (0 < (int)uVar5) {
      puVar8[1] = puVar27[1];
      *puVar8 = *puVar27;
      if (uVar5 != 1) {
        puVar8[3] = puVar27[3];
        puVar8[2] = puVar27[2];
        if (uVar5 != 2) {
          puVar8[5] = puVar27[5];
          puVar8[4] = puVar27[4];
          if (uVar5 != 3) {
            lVar11 = (ulong)uVar5 - 3;
            puVar21 = puVar27 + 6;
            puVar22 = puVar8 + 6;
            do {
              puVar22[1] = puVar21[1];
              lVar11 = lVar11 + -1;
              *puVar22 = *puVar21;
              puVar21 = puVar21 + 2;
              puVar22 = puVar22 + 2;
            } while (lVar11 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar10) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar27,((ulong)uVar10 & 0x3fffffff) << 4);
    }
    if (local_70[0] < 0x3fffffff0) {
      uVar15 = (undefined4)(local_70[0] >> 4);
    }
    else {
      uVar15 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x1644) = uVar15;
    *(undefined8 **)(param_1 + 0x1638) = puVar8;
  }
  uVar24 = local_f8;
  if (*(uint *)(param_1 + 0x1640) != uVar4) {
    *(uint *)(param_1 + 0x1640) = uVar4;
  }
  uVar10 = local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < (long)uVar24) && (local_100 != (int *)0x0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_100,uVar10 << 2);
  }
LAB_030fd910:
  FUN_030fdb64(param_1,*param_3,*param_3 + (long)(int)param_3[1] * 8);
  return;
code_r0x030fd6c0:
  iVar12 = (int)param_3[1];
  lVar11 = *param_3;
  iVar1 = iVar12 + 1;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar12) {
    lVar11 = FUN_030ff0ec(puVar7,iVar1,lVar11,iVar12,(long)param_3 + 0xc);
    iVar12 = (int)param_3[1];
    *param_3 = lVar11;
  }
  piVar17 = (int *)(lVar11 + (long)iVar12 * 8);
  *(int *)(param_3 + 1) = iVar1;
  *piVar17 = iVar28;
  piVar17[1] = iVar6;
  iVar28 = iVar28 + -1;
LAB_030fd704:
  if (lVar26 < 1) goto LAB_030fd714;
  lVar11 = *param_2;
  goto LAB_030fd68c;
}


