/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fe070; name: FUN_030fe070
 */


void FUN_030fe070(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *local_100;
  undefined8 local_f8;
  int local_f0 [32];
  ulong local_70 [2];
  
  if (*param_2 == param_2[1]) {
    return;
  }
  FUN_030fdb18();
  piVar10 = (int *)*param_2;
  piVar22 = (int *)param_2[1];
  if (piVar10 != piVar22) {
    uVar14 = (long)piVar22 + (-4 - (long)piVar10);
    uVar17 = ((uint)(uVar14 >> 2) & 0x3fffffff) + 1;
    if ((uVar17 & 3) != 0) {
      lVar16 = -((ulong)uVar17 & 3);
      piVar9 = piVar10;
      do {
        piVar10 = piVar9 + 1;
        bVar5 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*piVar9) = 0;
        piVar9 = piVar10;
      } while (bVar5);
    }
    if (0xb < uVar14) {
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*piVar10) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)piVar10[1]) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)piVar10[2]) = 0;
        piVar9 = piVar10 + 3;
        piVar10 = piVar10 + 4;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*piVar9) = 0;
      } while (piVar10 != piVar22);
    }
  }
  if (*(long *)(param_1 + 0x1660) == 0) goto LAB_030fe2c4;
  *(undefined1 *)(param_1 + 0x1668) = 1;
  puVar4 = PTR_PTR_0434a080;
  local_100 = local_f0;
  local_f8 = -0x7fffffe000000000;
  piVar10 = (int *)*param_2;
  piVar22 = (int *)param_2[1];
  uVar14 = (ulong)((long)piVar22 - (long)piVar10) >> 2;
  iVar19 = (int)uVar14;
  if (iVar19 < 0x21) {
    if (piVar10 != piVar22) goto LAB_030fe180;
LAB_030fe1e4:
    uVar20 = (uint)local_f8;
    if (0x20 < (int)(uint)local_f8) goto LAB_030fe1f0;
LAB_030fe48c:
    if (0 < (int)uVar20) {
      uVar14 = 0;
      iVar19 = *local_100;
      piVar10 = local_100;
      do {
        iVar13 = 0;
        while( true ) {
          uVar14 = uVar14 + 1;
          piVar10 = piVar10 + 1;
          local_100[iVar13] = iVar19;
          if (uVar14 == uVar20) goto LAB_030fe200;
          iVar19 = local_100[uVar14];
          if (uVar14 == 0) break;
          lVar16 = 0;
          do {
            if (piVar10[lVar16 + -1] <= iVar19) break;
            piVar10[lVar16] = piVar10[lVar16 + -1];
            lVar16 = lVar16 + -1;
          } while (0 < (long)(uVar14 + lVar16));
          iVar13 = (int)uVar14 + (int)lVar16;
        }
      } while( true );
    }
  }
  else {
    if (iVar19 < 0x40000000) {
      uVar11 = 0x40;
    }
    else {
      FUN_032bd0a8(uVar14 & 0xffffffff);
      uVar11 = (ulong)((local_f8._4_4_ & 0x3fffffff) << 1);
    }
    if ((uint)uVar11 < 0x3fffffff) {
      if (iVar19 <= (int)(uint)uVar11) goto LAB_030fe454;
    }
    else {
      uVar11 = 0x3fffffff;
      if (iVar19 < 0x40000000) {
LAB_030fe454:
        uVar14 = uVar11;
      }
    }
    local_100 = (int *)FUN_032bd1d4(puVar4,uVar14 & 0xffffffff,4,local_100,0,(long)&local_f8 + 4);
    piVar10 = (int *)*param_2;
    piVar22 = (int *)param_2[1];
    if (piVar10 == piVar22) goto LAB_030fe1e4;
LAB_030fe180:
    uVar17 = (uint)local_f8;
    do {
      iVar19 = *piVar10;
      lVar16 = *(long *)(param_1 + 0x1648);
      uVar20 = uVar17 + 1;
      if ((int)(local_f8._4_4_ & 0x3fffffff) <= (int)uVar17) {
        if (0x3ffffffe < (int)uVar17) {
          FUN_032bd0a8(uVar20);
        }
        uVar21 = (local_f8._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar21) {
          uVar21 = 0x3fffffff;
        }
        if ((int)uVar21 < (int)uVar20) {
          uVar21 = uVar17 + 1;
        }
        local_100 = (int *)FUN_032bd1d4(puVar4,uVar21,4,local_100,uVar17,(long)&local_f8 + 4);
        uVar17 = (uint)local_f8;
      }
      piVar10 = piVar10 + 1;
      local_100[(int)uVar17] = *(int *)(lVar16 + (long)iVar19 * 4);
      local_f8 = CONCAT44(local_f8._4_4_,uVar20);
      uVar17 = uVar20;
    } while (piVar22 != piVar10);
    if ((int)uVar20 < 0x21) goto LAB_030fe48c;
LAB_030fe1f0:
    FUN_02ff1e50(local_100,0,uVar20 - 1);
  }
LAB_030fe200:
  lVar16 = (long)(int)(uint)local_f8;
  uVar17 = *(int *)(param_1 + 0x15d4) - (uint)local_f8;
  if (0 < (int)(uint)local_f8) {
    iVar19 = (uint)local_f8 + -1;
    iVar13 = *(int *)(param_1 + 0x1640) + -1;
LAB_030fe22c:
    lVar16 = lVar16 + -1;
    iVar2 = local_100[lVar16];
    if (iVar2 < (int)uVar17) {
      piVar10 = local_100 + iVar19;
      do {
        if (iVar13 == *piVar10) {
          iVar13 = iVar13 + -1;
        }
        else if (*piVar10 <= iVar13) goto code_r0x030fe268;
        iVar19 = iVar19 + -1;
        piVar10 = piVar10 + -1;
      } while( true );
    }
    goto LAB_030fe224;
  }
LAB_030fe298:
  uVar20 = *(uint *)(param_1 + 0x1644);
  if ((int)(uVar20 & 0x3fffffff) < (int)uVar17) {
    puVar18 = *(undefined8 **)(param_1 + 0x1638);
    uVar21 = *(uint *)(param_1 + 0x1640);
    if (0x3fffffff < (int)uVar17) {
      FUN_032bd0a8(uVar17);
      uVar20 = *(uint *)(param_1 + 0x1644);
    }
    uVar7 = (uVar20 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar1 = uVar17;
    if ((int)uVar17 <= (int)uVar7) {
      uVar1 = uVar7;
    }
    FUN_032bd100(uVar1,0x10,uVar20,local_70);
    uVar20 = *(uint *)(param_1 + 0x1644);
    puVar6 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_70[0],local_70);
    if (0 < (int)uVar21) {
      puVar6[1] = puVar18[1];
      *puVar6 = *puVar18;
      if (uVar21 != 1) {
        puVar6[3] = puVar18[3];
        puVar6[2] = puVar18[2];
        if (uVar21 != 2) {
          puVar6[5] = puVar18[5];
          puVar6[4] = puVar18[4];
          if (uVar21 != 3) {
            lVar16 = (ulong)uVar21 - 3;
            puVar12 = puVar18 + 6;
            puVar15 = puVar6 + 6;
            do {
              puVar15[1] = puVar12[1];
              lVar16 = lVar16 + -1;
              *puVar15 = *puVar12;
              puVar12 = puVar12 + 2;
              puVar15 = puVar15 + 2;
            } while (lVar16 != 0);
          }
        }
      }
    }
    if (-1 < (int)uVar20) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar18,((ulong)uVar20 & 0x3fffffff) << 4);
    }
    if (local_70[0] < 0x3fffffff0) {
      uVar8 = (undefined4)(local_70[0] >> 4);
    }
    else {
      uVar8 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x1644) = uVar8;
    *(undefined8 **)(param_1 + 0x1638) = puVar6;
  }
  lVar16 = local_f8;
  if (*(uint *)(param_1 + 0x1640) != uVar17) {
    *(uint *)(param_1 + 0x1640) = uVar17;
  }
  uVar17 = local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_100 != (int *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_100,uVar17 << 2);
  }
LAB_030fe2c4:
  *(int *)(param_1 + 0x15d4) =
       *(int *)(param_1 + 0x15d4) - (int)((ulong)(param_2[1] - *param_2) >> 2);
  *(undefined1 *)(param_1 + 0x16a0) = 1;
  return;
code_r0x030fe268:
  puVar18 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)iVar13 * 0x10);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)iVar2 * 0x10);
  iVar3 = *(int *)((long)puVar18 + 0xc);
  puVar6[1] = puVar18[1];
  *puVar6 = *puVar18;
  iVar13 = iVar13 + -1;
  *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar3 * 4) = iVar2;
LAB_030fe224:
  if (lVar16 < 1) goto LAB_030fe298;
  goto LAB_030fe22c;
}


