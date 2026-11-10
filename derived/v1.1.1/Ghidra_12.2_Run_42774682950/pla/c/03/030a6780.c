/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a6780; name: FUN_030a6780
 */


undefined8 FUN_030a6780(long param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined2 *puVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  undefined2 uVar11;
  long lVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  short sVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  int *piVar33;
  long *plVar34;
  ulong uVar35;
  int iVar36;
  long lVar37;
  uint *puVar38;
  int iVar39;
  long *local_160;
  undefined *local_158;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  uint local_130;
  int *local_88;
  undefined8 local_80;
  int *local_78;
  uint local_70;
  
  uVar6 = *(uint *)(param_1 + 0x184);
  uVar35 = (ulong)uVar6;
  *(undefined1 *)(param_1 + 0x120) = 0;
  if ((int)(*(uint *)(param_1 + 0x144) & 0x3fffffff) < (int)uVar6) {
    uVar17 = FUN_030a8a08(PTR_PTR_0434a080,uVar6,*(undefined8 *)(param_1 + 0x138),
                          *(undefined4 *)(param_1 + 0x140),param_1 + 0x144);
    *(undefined8 *)(param_1 + 0x138) = uVar17;
  }
  iVar36 = *(int *)(param_1 + 0x140);
  lVar37 = (long)(int)uVar6;
  if (iVar36 < (int)uVar6) {
    pvVar2 = (void *)(*(long *)(param_1 + 0x138) + (long)iVar36);
    *(uint *)(param_1 + 0x140) = uVar6;
    memset(pvVar2,0,(*(long *)(param_1 + 0x138) + lVar37) - (long)pvVar2);
  }
  else if ((int)uVar6 < iVar36) {
    *(uint *)(param_1 + 0x140) = uVar6;
  }
  local_88 = (int *)0x0;
  local_80 = 0x8000000000000000;
  lVar12 = tpidr_el0;
  local_70 = uVar6;
  if (uVar6 == 0) {
    local_78 = (int *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar12 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar21;
    }
    lVar21 = *(long *)(lVar21 + 8);
    uVar19 = (ulong)(int)(uVar6 * 8 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar21 + 0x10) < uVar19) {
LAB_030a7390:
      local_78 = (int *)FUN_032ce670();
    }
    else {
      local_78 = *(int **)(lVar21 + 0x18);
      uVar19 = (long)local_78 + uVar19;
      if (*(ulong *)(lVar21 + 0x20) < uVar19) goto LAB_030a7390;
      *(ulong *)(lVar21 + 0x18) = uVar19;
    }
  }
  local_80 = CONCAT44(uVar6,(uint)local_80) | 0x8000000000000000;
  local_88 = local_78;
  if ((int)uVar6 < 0x40000000) {
    uVar20 = 0;
    bVar14 = SBORROW4(0,uVar6);
    iVar36 = -uVar6;
    bVar15 = uVar6 == 0;
    if ((int)uVar6 < 1) goto LAB_030a68b8;
LAB_030a68e0:
    piVar33 = local_88;
    local_80 = CONCAT44(local_80._4_4_,uVar6);
    memset(local_88 + (long)(int)uVar20 * 2,0xff,
           (long)local_88 + (lVar37 * 8 - (long)(local_88 + (long)(int)uVar20 * 2)) &
           0xfffffffffffffff8);
  }
  else {
    local_88 = (int *)FUN_030a8b70(PTR_PTR_0434a080,uVar6,local_78,(long)&local_80 + 4);
    bVar14 = SBORROW4((uint)local_80,uVar6);
    iVar36 = (uint)local_80 - uVar6;
    bVar15 = (uint)local_80 == uVar6;
    uVar20 = (uint)local_80;
    if ((int)(uint)local_80 < (int)uVar6) goto LAB_030a68e0;
LAB_030a68b8:
    piVar33 = local_88;
    if (!bVar15 && iVar36 < 0 == bVar14) {
      local_80 = CONCAT44(local_80._4_4_,uVar6);
    }
  }
  if ((int)uVar6 < 1) {
    iVar36 = 0;
    uVar20 = 0;
    iVar39 = 0;
LAB_030a6b04:
    local_158 = PTR_PTR_0434a080;
  }
  else {
    uVar19 = 0;
    iVar36 = 0;
    uVar20 = 0;
    iVar39 = 0;
    iVar18 = uVar6 + 2;
    do {
      lVar21 = *(long *)(param_1 + 0x38);
      if (*(int *)(lVar21 + uVar19 * 0x70 + 8) == 0x7fffffff) {
LAB_030a6ad0:
        uVar17 = 0x80040200;
        *(undefined1 *)(param_1 + 0x120) = 1;
        goto LAB_030a6fc8;
      }
      lVar28 = lVar21 + uVar19 * 0x70;
      sVar9 = *(short *)(lVar28 + 0xc);
      sVar10 = *(short *)(lVar28 + 0xe);
      lVar29 = (long)sVar10;
      uVar26 = (uint)*(byte *)(lVar28 + 0x19);
      iVar27 = uVar26 * uVar26;
      iVar36 = iVar36 + 1;
      if (iVar18 < 1) {
        if ((((-1 < sVar9) && (-1 < sVar10)) &&
            (*(char *)(*(long *)(param_1 + 8) + (long)sVar9 * 0x10 + 0xf) != '\0')) &&
           (*(char *)(*(long *)(param_1 + 8) + lVar29 * 0x10 + 0xf) != '\0')) goto LAB_030a6928;
        goto LAB_030a6ad0;
      }
      if (sVar9 < 0) goto LAB_030a6ad0;
      lVar30 = *(long *)(param_1 + 8);
      lVar32 = lVar30 + (long)sVar9 * 0x10;
      if (*(char *)(lVar32 + 0xf) == '\0') {
        sVar25 = *(short *)(lVar32 + 0xc);
        uVar16 = (uint)sVar25;
        bVar14 = (int)sVar25 < (int)uVar6;
        bVar15 = true;
        if ((-1 < sVar25) && ((int)sVar25 < (int)uVar6)) {
          iVar31 = 1;
          do {
            lVar32 = lVar21 + (long)(short)uVar16 * 0x70;
            uVar4 = uVar26;
            if (uVar19 == uVar16) {
              uVar4 = 0;
            }
            iVar27 = iVar27 + uVar4 * *(byte *)(lVar32 + 0x19);
            if (uVar19 != uVar16) {
              iVar36 = iVar36 + 1;
            }
            psVar5 = (short *)(lVar32 + 0x10);
            if (*(short *)(lVar32 + 0xc) != sVar9) {
              psVar5 = (short *)(lVar32 + 0x12);
            }
            uVar16 = (uint)*psVar5;
            bVar14 = (int)uVar16 < (int)uVar6;
            bVar15 = iVar31 < iVar18;
          } while (((iVar31 < iVar18) && (-1 < (int)uVar16)) &&
                  (iVar31 = iVar31 + 1, (int)uVar16 < (int)uVar6));
        }
        if (!bVar14 || !bVar15) goto LAB_030a6ad0;
      }
      if (sVar10 < 0) goto LAB_030a6ad0;
      if (*(char *)(lVar30 + lVar29 * 0x10 + 0xf) == '\0') {
        sVar9 = *(short *)(lVar30 + lVar29 * 0x10 + 0xc);
        uVar16 = (uint)sVar9;
        bVar14 = (int)sVar9 < (int)uVar6;
        bVar15 = true;
        if ((-1 < sVar9) && ((int)sVar9 < (int)uVar6)) {
          iVar31 = 1;
          do {
            lVar29 = lVar21 + (long)(short)uVar16 * 0x70;
            uVar4 = uVar26;
            if (uVar19 == uVar16) {
              uVar4 = 0;
            }
            iVar27 = iVar27 + uVar4 * *(byte *)(lVar29 + 0x19);
            if (uVar19 != uVar16) {
              iVar36 = iVar36 + 1;
            }
            psVar5 = (short *)(lVar29 + 0x10);
            if (*(short *)(lVar29 + 0xc) != sVar10) {
              psVar5 = (short *)(lVar29 + 0x12);
            }
            uVar16 = (uint)*psVar5;
            bVar14 = (int)uVar16 < (int)uVar6;
            bVar15 = iVar31 < iVar18;
          } while (((iVar31 < iVar18) && (-1 < (int)uVar16)) &&
                  (iVar31 = iVar31 + 1, (int)uVar16 < (int)uVar6));
        }
        if ((!bVar14) || (!bVar15)) goto LAB_030a6ad0;
      }
LAB_030a6928:
      uVar20 = uVar20 + *(byte *)(lVar28 + 0x19);
      piVar33[uVar19 * 2] = (int)uVar19;
      (piVar33 + uVar19 * 2)[1] = iVar27;
      uVar19 = uVar19 + 1;
      iVar39 = iVar27 + iVar39;
    } while (uVar19 != uVar35);
    if (*(long *)(param_1 + 0xd8) != 0) goto LAB_030a6b04;
    local_148 = 0;
    local_140 = 0x8000000000000000;
    lVar21 = *(long *)(lVar12 + 0x38d490);
    local_130 = uVar6;
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar21;
    }
    lVar21 = *(long *)(lVar21 + 8);
    uVar19 = lVar37 + 0x7fU & 0xffffffffffffff80;
    if (*(ulong *)(lVar21 + 0x10) < uVar19) {
LAB_030a73cc:
      lVar37 = FUN_032ce670();
    }
    else {
      lVar37 = *(long *)(lVar21 + 0x18);
      uVar19 = lVar37 + uVar19;
      if (*(ulong *)(lVar21 + 0x20) < uVar19) goto LAB_030a73cc;
      *(ulong *)(lVar21 + 0x18) = uVar19;
    }
    puVar13 = PTR_PTR_0434a080;
    local_158 = PTR_PTR_0434a080;
    local_140._4_4_ = uVar6 | 0x80000000;
    local_148 = lVar37;
    local_138 = lVar37;
    if ((int)uVar6 < 0x40000000) {
      bVar14 = SBORROW4(0,uVar6);
      iVar18 = -uVar6;
      bVar15 = uVar6 == 0;
      uVar26 = 0;
      if ((int)uVar6 < 1) goto LAB_030a7374;
LAB_030a7190:
      local_140._0_4_ = uVar6;
      memset((void *)(local_148 + (int)uVar26),0,(ulong)(uVar6 + ~uVar26) + 1);
      uVar26 = (uint)local_140;
    }
    else {
      FUN_032bd0a8(uVar6);
      uVar26 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar26) {
        uVar26 = 0x3fffffff;
      }
      uVar16 = uVar6;
      if ((int)uVar6 <= (int)uVar26) {
        uVar16 = uVar26;
      }
      local_148 = FUN_032bd1d4(puVar13,uVar16,1,lVar37,0,(long)&local_140 + 4);
      bVar14 = SBORROW4((uint)local_140,uVar6);
      iVar18 = (uint)local_140 - uVar6;
      bVar15 = (uint)local_140 == uVar6;
      uVar26 = (uint)local_140;
      if ((int)(uint)local_140 < (int)uVar6) goto LAB_030a7190;
LAB_030a7374:
      if (!bVar15 && iVar18 < 0 == bVar14) {
        uVar26 = uVar6;
        local_140._0_4_ = uVar6;
      }
    }
    FUN_030a74a0(param_1,0,local_148,local_148 + (int)uVar26);
    lVar37 = local_138;
    if (local_138 == local_148) {
      local_140._0_4_ = 0;
    }
    lVar28 = (long)(int)local_130;
    lVar21 = *(long *)(lVar12 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar21;
    }
    lVar21 = *(long *)(lVar21 + 8);
    uVar19 = lVar28 + 0x7fU & 0xffffffffffffff80;
    if (((*(ulong *)(lVar21 + 0x10) < uVar19) || (*(long *)(lVar21 + 0x18) != uVar19 + lVar37)) ||
       (*(long *)(lVar21 + 0x28) == lVar37)) {
      FUN_032cedf0(lVar21,lVar37);
    }
    else {
      *(long *)(lVar21 + 0x18) = lVar37;
    }
    uVar26 = local_140._4_4_;
    local_140 = (ulong)local_140._4_4_ << 0x20;
    if ((-1 < (int)uVar26) && (local_148 != 0)) {
      (**(code **)(*(long *)puVar13 + 0x18))(puVar13,local_148,uVar26 & 0x3fffffff);
    }
  }
  local_160 = (long *)(param_1 + 0xd8);
  puVar38 = (uint *)(param_1 + 0xc4);
  uVar26 = *puVar38;
  *(uint *)(param_1 + 0x110) = uVar20;
  if ((int)(uVar26 & 0x3fffffff) < (int)uVar6) {
    uVar17 = *(undefined8 *)(param_1 + 0xb8);
    uVar7 = *(undefined4 *)(param_1 + 0xc0);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
      uVar26 = *puVar38;
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar16 = uVar6;
    if ((int)uVar6 <= (int)uVar26) {
      uVar16 = uVar26;
    }
    uVar17 = FUN_032bd1d4(local_158,uVar16,2,uVar17,uVar7,puVar38);
    *(undefined8 *)(param_1 + 0xb8) = uVar17;
  }
  if (*(uint *)(param_1 + 0xc0) != uVar6) {
    *(uint *)(param_1 + 0xc0) = uVar6;
  }
  puVar38 = (uint *)(param_1 + 0xd4);
  uVar26 = *puVar38;
  if ((int)(uVar26 & 0x3fffffff) < (int)uVar6) {
    uVar17 = *(undefined8 *)(param_1 + 200);
    uVar7 = *(undefined4 *)(param_1 + 0xd0);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
      uVar26 = *puVar38;
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar16 = uVar6;
    if ((int)uVar6 <= (int)uVar26) {
      uVar16 = uVar26;
    }
    uVar17 = FUN_032bd1d4(local_158,uVar16,2,uVar17,uVar7,puVar38);
    *(undefined8 *)(param_1 + 200) = uVar17;
  }
  if (*(uint *)(param_1 + 0xd0) != uVar6) {
    *(uint *)(param_1 + 0xd0) = uVar6;
  }
  if (((((int)uVar6 < 5) || (uVar20 < 0x1f)) || ((int)(uVar20 * uVar20) <= iVar39 * 2)) ||
     (*(char *)(param_1 + 0x174) == '\x01')) {
    if (*(char *)(param_1 + 0x174) != '\x02') {
      if ((int)uVar6 < 1) {
LAB_030a7318:
        bVar15 = false;
      }
      else {
        if (uVar6 == 1) {
          lVar37 = 0;
        }
        else {
          lVar37 = 0;
          do {
            lVar21 = lVar37 * 2;
            sVar9 = (short)lVar37;
            *(short *)(*(long *)(param_1 + 0xb8) + lVar21) = sVar9;
            *(short *)(*(long *)(param_1 + 200) + lVar21) = sVar9;
            *(short *)(*(long *)(param_1 + 0xb8) + lVar21 + 2) = sVar9 + 1;
            lVar37 = lVar37 + 2;
            *(short *)(*(long *)(param_1 + 200) + lVar21 + 2) = sVar9 + 1;
          } while (uVar35 - (uVar35 & 1) != lVar37);
          if ((uVar6 & 1) == 0) goto LAB_030a7318;
        }
        bVar15 = false;
        *(short *)(*(long *)(param_1 + 0xb8) + lVar37 * 2) = (short)lVar37;
        *(short *)(*(long *)(param_1 + 200) + lVar37 * 2) = (short)lVar37;
      }
      goto LAB_030a6d60;
    }
    if (1 < (int)uVar6) goto LAB_030a6c2c;
  }
  else {
LAB_030a6c2c:
    uVar20 = 0;
    iVar39 = 1;
    uVar26 = uVar6;
    do {
      uVar26 = uVar26 - 1;
      if (uVar6 + ~uVar20 == 1) {
        lVar37 = 0;
        bVar15 = false;
      }
      else {
        lVar37 = 0;
        bVar15 = false;
        piVar22 = piVar33 + 3;
        do {
          if (*piVar22 < piVar22[-2]) {
            uVar17 = *(undefined8 *)(piVar22 + -3);
            *(undefined8 *)(piVar22 + -3) = *(undefined8 *)(piVar22 + -1);
            bVar15 = true;
            *(undefined8 *)(piVar22 + -1) = uVar17;
          }
          lVar37 = lVar37 + 2;
          if (piVar22[2] < *piVar22) {
            uVar17 = *(undefined8 *)(piVar22 + -1);
            *(undefined8 *)(piVar22 + -1) = *(undefined8 *)(piVar22 + 1);
            bVar15 = true;
            *(undefined8 *)(piVar22 + 1) = uVar17;
          }
          piVar22 = piVar22 + 4;
        } while ((ulong)uVar26 - ((ulong)uVar26 & 1) != lVar37);
      }
      if (((uVar6 + ~uVar20 & 1) != 0) &&
         (lVar21 = lVar37 + 1, piVar33[lVar21 * 2 + 1] < piVar33[lVar37 * 2 + 1])) {
        uVar17 = *(undefined8 *)(piVar33 + lVar21 * 2);
        *(undefined8 *)(piVar33 + lVar21 * 2) = *(undefined8 *)(piVar33 + lVar37 * 2);
        bVar15 = true;
        *(undefined8 *)(piVar33 + lVar37 * 2) = uVar17;
      }
      iVar39 = iVar39 + 1;
    } while ((iVar39 < (int)uVar6) && (uVar20 = uVar20 + 1, bVar15));
  }
  if (0 < (int)uVar6) {
    uVar19 = 0;
    piVar22 = piVar33;
    do {
      *(short *)(*(long *)(param_1 + 0xb8) + (long)*piVar22 * 2) = (short)uVar19;
      *(short *)(*(long *)(param_1 + 200) + uVar19 * 2) = (short)*piVar22;
      uVar19 = uVar19 + 1;
      piVar22 = piVar22 + 2;
    } while (uVar35 != uVar19);
  }
  bVar15 = true;
LAB_030a6d60:
  if ((int)(*(uint *)(param_1 + 0x154) & 0x3fffffff) < iVar36) {
    uVar17 = FUN_030a8c50(local_158,iVar36,*(undefined8 *)(param_1 + 0x148),
                          *(undefined4 *)(param_1 + 0x150),param_1 + 0x154);
    *(undefined8 *)(param_1 + 0x148) = uVar17;
  }
  iVar39 = *(int *)(param_1 + 0x150);
  if (iVar39 < iVar36) {
    pvVar2 = (void *)(*(long *)(param_1 + 0x148) + (long)iVar39 * 4);
    *(int *)(param_1 + 0x150) = iVar36;
    memset(pvVar2,0,(*(long *)(param_1 + 0x148) + (long)iVar36 * 4) - (long)pvVar2 &
                    0xfffffffffffffffc);
  }
  else if (iVar36 < iVar39) {
    *(int *)(param_1 + 0x150) = iVar36;
  }
  plVar1 = (long *)(param_1 + 0x148);
  if (0 < (int)uVar6) {
    uVar19 = 0;
    iVar36 = 0;
    do {
      iVar39 = iVar36 + 1;
      uVar8 = *(ushort *)(*(long *)(param_1 + 200) + uVar19 * 2);
      uVar11 = (undefined2)uVar19;
      local_148 = CONCAT62(local_148._2_6_,uVar11);
      lVar28 = *(long *)(param_1 + 0x38) + (ulong)uVar8 * 0x70;
      *(undefined1 *)(*(long *)(param_1 + 0x138) + uVar19) = *(undefined1 *)(lVar28 + 0x19);
      sVar9 = *(short *)(lVar28 + 0xc);
      lVar21 = *(long *)(param_1 + 8);
      lVar37 = lVar21 + (long)sVar9 * 0x10;
      sVar10 = *(short *)(lVar28 + 0xe);
      if ((*(char *)(lVar37 + 0xf) == '\0') && (sVar25 = *(short *)(lVar37 + 0xc), -1 < sVar25)) {
        iVar18 = 1;
        if ((uint)uVar8 == (int)sVar25) goto LAB_030a6f3c;
        do {
          lVar37 = (long)sVar25;
          iVar39 = iVar39 + 1;
          *(undefined2 *)((long)&local_148 + (long)iVar18 * 2) =
               *(undefined2 *)(*(long *)(param_1 + 0xb8) + lVar37 * 2);
          iVar18 = iVar18 + 1;
          while( true ) {
            lVar37 = *(long *)(param_1 + 0x38) + lVar37 * 0x70;
            psVar5 = (short *)(lVar37 + 0x10);
            if (*(short *)(lVar37 + 0xc) != sVar9) {
              psVar5 = (short *)(lVar37 + 0x12);
            }
            sVar25 = *psVar5;
            if (sVar25 < 0) goto LAB_030a6e30;
            if ((uint)uVar8 != (int)sVar25) break;
LAB_030a6f3c:
            lVar37 = (long)sVar25;
          }
        } while( true );
      }
      iVar18 = 1;
LAB_030a6e30:
      lVar21 = lVar21 + (long)sVar10 * 0x10;
      if (*(char *)(lVar21 + 0xf) == '\0') {
        sVar9 = *(short *)(lVar21 + 0xc);
        while (-1 < sVar9) {
          if ((uint)uVar8 != (int)sVar9) {
            iVar39 = iVar39 + 1;
            *(undefined2 *)((long)&local_148 + (long)iVar18 * 2) =
                 *(undefined2 *)(*(long *)(param_1 + 0xb8) + (long)sVar9 * 2);
            iVar18 = iVar18 + 1;
          }
          lVar37 = *(long *)(param_1 + 0x38) + (long)sVar9 * 0x70;
          psVar5 = (short *)(lVar37 + 0x10);
          if (*(short *)(lVar37 + 0xc) != sVar10) {
            psVar5 = (short *)(lVar37 + 0x12);
          }
          sVar9 = *psVar5;
        }
      }
      FUN_030a8dc0(&local_148);
      if (iVar36 < iVar39) {
        uVar23 = (ulong)iVar36;
        uVar24 = ~uVar23;
        if ((iVar39 - iVar36 & 1U) != 0) {
          lVar37 = uVar23 * 4;
          uVar23 = uVar23 + 1;
          *(undefined2 *)(*plVar1 + lVar37) = uVar11;
          *(undefined2 *)(*plVar1 + lVar37 + 2) = (undefined2)local_148;
        }
        if (uVar24 + (long)iVar39 != 0) {
          lVar21 = (long)iVar39 - uVar23;
          lVar37 = uVar23 << 1;
          do {
            lVar28 = lVar37 * 2;
            lVar21 = lVar21 + -2;
            *(undefined2 *)(*plVar1 + lVar28) = uVar11;
            puVar3 = (undefined2 *)((long)&local_148 + lVar37 + uVar24 * 2 + 2);
            lVar37 = lVar37 + 4;
            *(undefined2 *)(*plVar1 + lVar28 + 2) = *puVar3;
            *(undefined2 *)(*plVar1 + lVar28 + 4) = uVar11;
            *(undefined2 *)(*plVar1 + lVar28 + 6) = puVar3[1];
          } while (lVar21 != 0);
        }
      }
      uVar19 = uVar19 + 1;
      iVar36 = iVar39;
    } while (uVar19 != uVar35);
  }
  plVar34 = (long *)*local_160;
  if (plVar34 == (long *)0x0) {
    if (bVar15) {
      plVar34 = (long *)FUN_032cf5b0(0x90);
      FUN_030a4954();
    }
    else {
      plVar34 = (long *)FUN_032cf5b0(0x60);
      *plVar34 = (long)&PTR_LAB_042b42b0;
      plVar34[1] = 0xffffffff;
      plVar34[2] = 1;
      plVar34[3] = 0;
      plVar34[6] = 0;
      plVar34[7] = -0x8000000000000000;
      plVar34[8] = 0;
      plVar34[9] = -0x8000000000000000;
      plVar34[10] = 0;
      plVar34[0xb] = -0x8000000000000000;
      plVar34[4] = 0;
      plVar34[5] = 0;
      lVar37 = *local_160;
      *local_160 = (long)plVar34;
      if (lVar37 != 0) {
        FUN_032d647c();
        plVar34 = (long *)*local_160;
      }
      if (plVar34 != (long *)0x0) {
        FUN_032d645c(plVar34);
      }
    }
    lVar37 = *local_160;
    *local_160 = (long)plVar34;
    if (lVar37 != 0) {
      FUN_032d647c();
      plVar34 = (long *)*local_160;
    }
  }
  (**(code **)(*plVar34 + 0x20))(plVar34,param_1 + 0x138,plVar1);
  uVar17 = 0;
LAB_030a6fc8:
  uVar6 = local_70;
  piVar22 = local_78;
  if (local_78 == piVar33) {
    local_80 = local_80 & 0xffffffff00000000;
  }
  lVar37 = *(long *)(lVar12 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar37;
  }
  lVar37 = *(long *)(lVar37 + 8);
  uVar35 = (ulong)(int)(uVar6 * 8 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar37 + 0x10) < uVar35) || (*(long *)(lVar37 + 0x18) != uVar35 + (long)piVar22))
     || (*(int **)(lVar37 + 0x28) == piVar22)) {
    FUN_032cedf0(lVar37,piVar22);
  }
  else {
    *(int **)(lVar37 + 0x18) = piVar22;
  }
  if (piVar33 != (int *)0x0) {
    uVar35 = local_80 >> 0x20;
    local_80 = uVar35 << 0x20;
    if (-1 < (long)local_80) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,piVar33,(uVar35 & 0x3fffffff) << 3);
    }
  }
  return uVar17;
}


