/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013134e0; name: FUN_013134e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013134e0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  char cVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_var;
  float extraout_var_00;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong local_e8;
  ulong local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  float fStack_94;
  ulong local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined1 local_68 [4];
  undefined4 local_64;
  
  *(undefined8 *)(param_1 + 0x16a0) = 0x300000001;
  *(undefined8 *)(param_1 + 0x16a8) = 0x1700000004;
  lVar9 = *(long *)(param_1 + 0x5c0);
  iVar4 = *(int *)(lVar9 + 0x84);
  if (iVar4 < 7) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    fStack_94 = 0.0;
    local_90 = 0;
    local_a8._0_1_ = 0;
    local_a8._1_1_ = '\0';
    local_a8._2_1_ = 0;
    local_a8._3_1_ = 0;
    fStack_a4 = 0.0;
    fStack_a0 = 0.0;
    uStack_9c = 0;
    uVar5 = FUN_013175d0(param_1,(long)iVar4,*(undefined4 *)(&DAT_03a7aa40 + (long)iVar4 * 4),
                         &local_a8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(lVar9 + 0x2540) = 0;
      lVar18 = *(long *)(lVar9 + 0x24b0);
      *(undefined8 *)(lVar9 + 0x2570) = 0;
      *(undefined8 *)(lVar9 + 0x2568) = 0;
      *(undefined8 *)(lVar9 + 0x2560) = 0;
      *(undefined8 *)(lVar9 + 0x2558) = 0;
      *(undefined8 *)(lVar9 + 0x2550) = 0;
      *(undefined8 *)(lVar9 + 0x2548) = 0;
      *(undefined8 *)(lVar18 + 0x30) = 0;
      *(undefined4 *)(lVar18 + 0x38) = 0;
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
      lVar18 = *(long *)(lVar9 + 0x24b0);
      *(undefined8 *)(lVar18 + 0x3c) = 0;
      *(undefined4 *)(lVar18 + 0x44) = 0;
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar9 + 0x24b0) + 0x58) =
           *(byte *)(*(long *)(lVar9 + 0x24b0) + 0x58) & 0xfe;
      lVar18 = *(long *)(lVar9 + 0x24b8);
      if (lVar18 != 0) {
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x24b8);
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x24b8) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x24b8) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar9 + 0x24c8);
        *(undefined8 *)(lVar9 + 0x24b8) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar9 + 0x24d8) = 0;
          *(undefined8 *)(lVar9 + 0x24d0) = 0;
          *(undefined8 *)(lVar9 + 0x24c8) = 0;
          *(undefined8 *)(lVar9 + 0x24c0) = 0;
          (*pcVar11)(lVar9 + 0x24e0);
        }
      }
    }
    else {
      local_a8._0_1_ = 8;
      if (*(char *)(param_1 + 0x16b4) != '\0') {
        uVar15 = 10;
        if (*(int *)(param_1 + 0x16b0) != 2) {
          uVar15 = 8;
        }
        local_a8._0_1_ = 9;
        if (*(int *)(param_1 + 0x16b0) != 1) {
          local_a8._0_1_ = uVar15;
        }
      }
      FUN_013065d0(lVar9,0x2d,&local_a8);
    }
    lVar9 = *(long *)(param_1 + 0x5c0);
  }
  lVar18 = *(long *)(lVar9 + 0x78);
  lVar20 = *(long *)(lVar9 + 0x198);
  if (*(char *)(lVar18 + 8) == '\0') {
LAB_01315998:
    lVar9 = *(long *)(lVar20 + 0x20);
    *(undefined1 *)(lVar20 + 0xb0) = 0;
    *(undefined8 *)(lVar20 + 0xd8) = 0;
    *(undefined8 *)(lVar20 + 0xe0) = 0;
    *(undefined8 *)(lVar20 + 200) = 0;
    *(undefined8 *)(lVar20 + 0xd0) = 0;
    *(undefined8 *)(lVar20 + 0xb8) = 0;
    *(undefined8 *)(lVar20 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined4 *)(lVar9 + 0x38) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    lVar9 = *(long *)(lVar20 + 0x20);
    *(undefined8 *)(lVar9 + 0x3c) = 0;
    *(undefined4 *)(lVar9 + 0x44) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    *(byte *)(*(long *)(lVar20 + 0x20) + 0x58) = *(byte *)(*(long *)(lVar20 + 0x20) + 0x58) & 0xfe;
    lVar9 = *(long *)(lVar20 + 0x28);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar20 + 0x28);
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar20 + 0x28) + 0x58) = *(byte *)(*(long *)(lVar20 + 0x28) + 0x58) & 0xfe
      ;
      pcVar11 = *(code **)(lVar20 + 0x38);
      *(undefined8 *)(lVar20 + 0x28) = 0;
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar20 + 0x40) = 0;
        *(undefined8 *)(lVar20 + 0x48) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined8 *)(lVar20 + 0x38) = 0;
        (*pcVar11)(lVar20 + 0x50);
      }
    }
  }
  else {
    iVar4 = *(int *)(lVar9 + 0x84);
    iVar3 = FUN_0131a338();
    if (iVar3 == 7) {
      if (iVar4 != 5) goto LAB_01315998;
    }
    else if (iVar4 != iVar3) goto LAB_01315998;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    fStack_94 = 0.0;
    local_90 = 0;
    local_a8._0_1_ = 1;
    local_a8._1_1_ = 0;
    local_a8._2_1_ = 0;
    local_a8._3_1_ = 0;
    fStack_a4 = 0.0;
    fStack_a0 = 0.0;
    uStack_9c = 0;
    if (*(int *)(lVar18 + 0xc) < 7) {
      lVar9 = (long)*(int *)(lVar18 + 0xc) * 0x10;
      fVar28 = *(float *)(&DAT_03a7ac58 + lVar9);
      fVar29 = *(float *)(&DAT_03a7ac50 + lVar9);
      fVar31 = *(float *)(&DAT_03a7ac5c + lVar9);
      fVar32 = *(float *)(&DAT_03a7ac54 + lVar9);
      fVar30 = (float)*(undefined8 *)(lVar18 + 0x10);
      fVar33 = (float)*(undefined8 *)(lVar18 + 0x18);
      pfVar14 = (float *)(&DAT_03a7ac58 + lVar9);
      if (fVar30 <= fVar28) {
        pfVar14 = (float *)&local_d0;
      }
      pfVar13 = (float *)(&DAT_03a7ac50 + lVar9);
      if (fVar29 <= fVar30) {
        pfVar13 = pfVar14;
      }
      local_d0 = CONCAT44(local_d0._4_4_,fVar30);
      local_d0 = CONCAT44(local_d0._4_4_,fVar33);
      pfVar14 = (float *)(&DAT_03a7ac5c + lVar9);
      if (fVar33 <= fVar31) {
        pfVar14 = (float *)&local_d0;
      }
      pfVar12 = (float *)(&DAT_03a7ac54 + lVar9);
      if (fVar32 <= fVar33) {
        pfVar12 = pfVar14;
      }
      fVar30 = ((*pfVar13 - fVar29) / (fVar28 - fVar29)) * 2000.0 + -1000.0;
      fVar31 = 1027.0 - ((*pfVar12 - fVar32) / (fVar31 - fVar32)) * 2000.0;
      fVar28 = fVar30;
      fVar29 = fVar31;
      if (*(char *)(param_1 + 0x1e08) == '\0') goto LAB_0131369c;
LAB_0131705c:
      fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
      fVar32 = *(float *)(param_1 + 0x1e30);
      fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
      fStack_a4 = fStack_a4 + fVar32 * ((fVar28 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
      fVar28 = (fVar29 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
    }
    else {
      fVar29 = 0.0;
      fVar31 = 0.0;
      fVar28 = 0.0;
      fVar30 = 0.0;
      if (*(char *)(param_1 + 0x1e08) != '\0') goto LAB_0131705c;
LAB_0131369c:
      fVar32 = *(float *)(param_1 + 0x1e30);
      fStack_a0 = *(float *)(param_1 + 0xd64);
      fStack_a4 = *(float *)(param_1 + 0xd60) +
                  ((((fVar30 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60)) *
                  fVar32;
      fVar28 = (((fVar31 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
    }
    fStack_a0 = fStack_a0 + fVar28 * fVar32;
    uStack_9c = 0;
    local_98 = 0;
    local_a8._3_1_ = 0;
    fStack_94 = (*(float *)(lVar18 + 0x20) - *(float *)PTR_FloatPi_04372db0) *
                (*(float *)PTR_FloatDegree180_04372ce0 / *(float *)PTR_FloatPi_04372cf0);
    local_a8._1_1_ = '\0';
    local_a8._2_1_ = 1;
    FUN_013065d0(lVar20,0,&local_a8);
  }
  FUN_0131300c(param_1);
  FUN_01313234(param_1);
  lVar9 = *(long *)(param_1 + 0x5c0);
  iVar4 = *(int *)(lVar9 + 0x84);
  if (iVar4 == 5) {
    lVar9 = *(long *)(lVar9 + 0x198);
    iVar4 = FUN_0131a338();
    if (iVar4 == 7) {
      iVar4 = 5;
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_0131c8b8(5,iVar4,&local_d0,1);
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 0x2e;
      uVar6 = FUN_0131d7f8(uVar5 & 0xffffffff);
      if ((uVar6 & 1) == 0) {
        lVar18 = lVar9 + uVar7 * 0xd0;
        lVar20 = *(long *)(lVar18 + 0x20);
        *(undefined1 *)(lVar18 + 0xb0) = 0;
        *(undefined8 *)(lVar18 + 0xd8) = 0;
        *(undefined8 *)(lVar18 + 0xe0) = 0;
        *(undefined8 *)(lVar18 + 200) = 0;
        *(undefined8 *)(lVar18 + 0xd0) = 0;
        *(undefined8 *)(lVar18 + 0xb8) = 0;
        *(undefined8 *)(lVar18 + 0xc0) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x20);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x20) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x20) + 0x58) & 0xfe;
        plVar10 = (long *)(lVar18 + 0x28);
        lVar18 = *plVar10;
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *plVar10;
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*plVar10 + 0x58) = *(byte *)(*plVar10 + 0x58) & 0xfe;
          *plVar10 = 0;
          pcVar11 = *(code **)(lVar9 + uVar7 * 0xd0 + 0x38);
          if (pcVar11 != (code *)0x0) {
            lVar18 = lVar9 + uVar7 * 0xd0;
            *(undefined8 *)(lVar18 + 0x40) = 0;
            *(undefined8 *)(lVar18 + 0x48) = 0;
            *(undefined8 *)(lVar18 + 0x30) = 0;
            *(undefined8 *)(lVar18 + 0x38) = 0;
            (*pcVar11)(lVar18 + 0x50);
          }
        }
      }
      else {
        uVar26 = (ulong)(int)(&DAT_03a7acc8)[uVar5];
        uVar6 = local_d0 & 0xffffffff;
        if ((float)local_d0 != 0.0) {
          piVar16 = (int *)((ulong)&local_d0 | 4);
          do {
            if (*piVar16 == (&DAT_03a7acc8)[uVar5]) {
              cVar23 = '\x01';
              goto LAB_01314b2c;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar6 != 0);
        }
        cVar23 = '\0';
LAB_01314b2c:
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        fStack_94 = 0.0;
        local_90 = 0;
        local_a8._0_1_ = 7;
        local_a8._1_1_ = 0;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        uStack_9c = 0;
        FUN_0131dc10(uVar5 & 0xffffffff);
        pfVar14 = (float *)&DAT_03a7aca8;
        if (extraout_s0_00 <= 631.4) {
          pfVar14 = (float *)&local_e8;
        }
        local_e8 = CONCAT44(local_e8._4_4_,extraout_s0_00);
        pfVar13 = (float *)&DAT_03a7aca0;
        if (332.1 <= extraout_s0_00) {
          pfVar13 = pfVar14;
        }
        local_e8 = CONCAT44(local_e8._4_4_,extraout_var_00);
        pfVar14 = (float *)&DAT_03a7acac;
        if (extraout_var_00 <= 690.85004) {
          pfVar14 = (float *)&local_e8;
        }
        if (extraout_var_00 < 392.57498) {
          pfVar14 = (float *)&DAT_03a7aca4;
        }
        fVar29 = ((*pfVar13 + -332.1) / 299.30002) * 2000.0 + -1000.0;
        fVar28 = ((*pfVar14 + -392.57498) / -298.27505) * 2000.0 + 1027.0;
        if (*(char *)(param_1 + 0x1e08) == '\0') {
          fVar31 = *(float *)(param_1 + 0x1e30);
          fStack_a0 = *(float *)(param_1 + 0xd64);
          fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
          fStack_a4 = *(float *)(param_1 + 0xd60) +
                      ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60)
                      ) * fVar31;
        }
        else {
          fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
          fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
          fVar31 = *(float *)(param_1 + 0x1e30);
          fStack_a4 = fStack_a4 + fVar31 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
          fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
        }
        fStack_a0 = fStack_a0 + fVar28 * fVar31;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        if (cVar23 == '\0') {
          uVar26 = 0;
        }
        local_a8._1_1_ = cVar23;
        local_90 = uVar26;
        FUN_013065d0(lVar9,uVar7 & 0xffffffff,&local_a8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 5);
    puVar19 = &DAT_03a7a920;
    do {
      uVar25 = *puVar19;
      lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      lVar18 = (long)(int)uVar25;
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      uVar5 = FUN_013175d0(param_1,5,puVar19[1],&local_a8);
      if ((uVar5 & 1) == 0) {
        if (uVar25 < 100) {
          lVar20 = lVar9 + lVar18 * 0xd0;
          lVar21 = *(long *)(lVar20 + 0x20);
          *(undefined1 *)(lVar20 + 0xb0) = 0;
          *(undefined8 *)(lVar20 + 0xd8) = 0;
          *(undefined8 *)(lVar20 + 0xe0) = 0;
          *(undefined8 *)(lVar20 + 200) = 0;
          *(undefined8 *)(lVar20 + 0xd0) = 0;
          *(undefined8 *)(lVar20 + 0xb8) = 0;
          *(undefined8 *)(lVar20 + 0xc0) = 0;
          *(undefined8 *)(lVar21 + 0x30) = 0;
          *(undefined4 *)(lVar21 + 0x38) = 0;
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
          lVar21 = *(long *)(lVar20 + 0x20);
          *(undefined8 *)(lVar21 + 0x3c) = 0;
          *(undefined4 *)(lVar21 + 0x44) = 0;
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar20 + 0x20) + 0x58) =
               *(byte *)(*(long *)(lVar20 + 0x20) + 0x58) & 0xfe;
          plVar10 = (long *)(lVar20 + 0x28);
          lVar20 = *plVar10;
          if (lVar20 != 0) {
            *(undefined8 *)(lVar20 + 0x30) = 0;
            *(undefined4 *)(lVar20 + 0x38) = 0;
            *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
            lVar20 = *plVar10;
            *(undefined4 *)(lVar20 + 0x44) = 0;
            *(undefined8 *)(lVar20 + 0x3c) = 0;
            *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
            *(byte *)(*plVar10 + 0x58) = *(byte *)(*plVar10 + 0x58) & 0xfe;
            *plVar10 = 0;
            pcVar11 = *(code **)(lVar9 + lVar18 * 0xd0 + 0x38);
            if (pcVar11 != (code *)0x0) {
              lVar9 = lVar9 + lVar18 * 0xd0;
              *(undefined8 *)(lVar9 + 0x40) = 0;
              *(undefined8 *)(lVar9 + 0x48) = 0;
              *(undefined8 *)(lVar9 + 0x30) = 0;
              *(undefined8 *)(lVar9 + 0x38) = 0;
              (*pcVar11)(lVar9 + 0x50);
            }
          }
        }
      }
      else {
        FUN_013065d0(lVar9,uVar25,&local_a8);
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != (uint *)&DAT_03a7aa40);
LAB_01317178:
    pcVar11 = *(code **)(param_1 + 0xa50);
    if (pcVar11 == (code *)0x0) goto LAB_013145cc;
    lVar9 = param_1 + 0xa70;
  }
  else {
    if (iVar4 == 6) {
      lVar9 = *(long *)(lVar9 + 0x198);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      uVar5 = FUN_013175d0(param_1,6,0x3b,&local_a8);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar9 + 0x2610) = 0;
        lVar18 = *(long *)(lVar9 + 0x2580);
        *(undefined8 *)(lVar9 + 0x2640) = 0;
        *(undefined8 *)(lVar9 + 0x2638) = 0;
        *(undefined8 *)(lVar9 + 0x2630) = 0;
        *(undefined8 *)(lVar9 + 0x2628) = 0;
        *(undefined8 *)(lVar9 + 0x2620) = 0;
        *(undefined8 *)(lVar9 + 0x2618) = 0;
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x2580);
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x2580) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x2580) + 0x58) & 0xfe;
        lVar18 = *(long *)(lVar9 + 0x2588);
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x2588);
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x2588) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x2588) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar9 + 0x2598);
          *(undefined8 *)(lVar9 + 0x2588) = 0;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x25a8) = 0;
            *(undefined8 *)(lVar9 + 0x25a0) = 0;
            *(undefined8 *)(lVar9 + 0x2598) = 0;
            *(undefined8 *)(lVar9 + 0x2590) = 0;
            (*pcVar11)(lVar9 + 0x25b0);
          }
        }
      }
      else {
        FUN_013065d0(lVar9,0x2e,&local_a8);
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      uVar5 = FUN_013175d0(param_1,6,0x3c,&local_a8);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar9 + 0x27b0) = 0;
        lVar18 = *(long *)(lVar9 + 0x2720);
        *(undefined8 *)(lVar9 + 0x27e0) = 0;
        *(undefined8 *)(lVar9 + 0x27d8) = 0;
        *(undefined8 *)(lVar9 + 0x27d0) = 0;
        *(undefined8 *)(lVar9 + 0x27c8) = 0;
        *(undefined8 *)(lVar9 + 0x27c0) = 0;
        *(undefined8 *)(lVar9 + 0x27b8) = 0;
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x2720);
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x2720) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x2720) + 0x58) & 0xfe;
        lVar18 = *(long *)(lVar9 + 0x2728);
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x2728);
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x2728) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x2728) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar9 + 0x2738);
          *(undefined8 *)(lVar9 + 0x2728) = 0;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x2748) = 0;
            *(undefined8 *)(lVar9 + 0x2740) = 0;
            *(undefined8 *)(lVar9 + 0x2738) = 0;
            *(undefined8 *)(lVar9 + 0x2730) = 0;
            (*pcVar11)(lVar9 + 0x2750);
          }
        }
      }
      else {
        FUN_013065d0(lVar9,0x30,&local_a8);
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      uVar5 = FUN_013175d0(param_1,6,0x3e,&local_a8);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar9 + 0x26e0) = 0;
        lVar18 = *(long *)(lVar9 + 0x2650);
        *(undefined8 *)(lVar9 + 10000) = 0;
        *(undefined8 *)(lVar9 + 0x2708) = 0;
        *(undefined8 *)(lVar9 + 0x2700) = 0;
        *(undefined8 *)(lVar9 + 0x26f8) = 0;
        *(undefined8 *)(lVar9 + 0x26f0) = 0;
        *(undefined8 *)(lVar9 + 0x26e8) = 0;
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x2650);
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x2650) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x2650) + 0x58) & 0xfe;
        lVar18 = *(long *)(lVar9 + 0x2658);
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x2658);
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x2658) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x2658) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar9 + 0x2668);
          *(undefined8 *)(lVar9 + 0x2658) = 0;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x2678) = 0;
            *(undefined8 *)(lVar9 + 0x2670) = 0;
            *(undefined8 *)(lVar9 + 0x2668) = 0;
            *(undefined8 *)(lVar9 + 0x2660) = 0;
            (*pcVar11)(lVar9 + 0x2680);
          }
        }
      }
      else {
        FUN_013065d0(lVar9,0x2f,&local_a8);
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      uVar5 = FUN_013175d0(param_1,6,0x3f,&local_a8);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar9 + 0x2880) = 0;
        lVar18 = *(long *)(lVar9 + 0x27f0);
        *(undefined8 *)(lVar9 + 0x28b0) = 0;
        *(undefined8 *)(lVar9 + 0x28a8) = 0;
        *(undefined8 *)(lVar9 + 0x28a0) = 0;
        *(undefined8 *)(lVar9 + 0x2898) = 0;
        *(undefined8 *)(lVar9 + 0x2890) = 0;
        *(undefined8 *)(lVar9 + 0x2888) = 0;
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x27f0);
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x27f0) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x27f0) + 0x58) & 0xfe;
        lVar18 = *(long *)(lVar9 + 0x27f8);
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x27f8);
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x27f8) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x27f8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar9 + 0x2808);
          *(undefined8 *)(lVar9 + 0x27f8) = 0;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x2818) = 0;
            *(undefined8 *)(lVar9 + 0x2810) = 0;
            *(undefined8 *)(lVar9 + 0x2808) = 0;
            *(undefined8 *)(lVar9 + 0x2800) = 0;
            (*pcVar11)(lVar9 + 0x2820);
          }
        }
      }
      else {
        FUN_013065d0(lVar9,0x31,&local_a8);
      }
      goto LAB_01317178;
    }
    lVar18 = (long)iVar4;
    if (lVar18 - 5U < 2) {
      return;
    }
    lVar9 = *(long *)(lVar9 + 0x198);
    iVar3 = FUN_0131a338();
    if (iVar3 == 7) {
      iVar3 = 5;
    }
    local_c8 = 0;
    local_c0 = 0;
    local_d0 = 0;
    FUN_0131c8b8(iVar4,iVar3,&local_d0,1);
    lVar20 = lVar18 * 0x10;
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 0x2e;
      uVar6 = FUN_0131d590(iVar4,uVar5 & 0xffffffff);
      if ((uVar6 & 1) == 0) {
        lVar21 = lVar9 + uVar7 * 0xd0;
        lVar27 = *(long *)(lVar21 + 0x20);
        *(undefined1 *)(lVar21 + 0xb0) = 0;
        *(undefined8 *)(lVar21 + 0xd8) = 0;
        *(undefined8 *)(lVar21 + 0xe0) = 0;
        *(undefined8 *)(lVar21 + 200) = 0;
        *(undefined8 *)(lVar21 + 0xd0) = 0;
        *(undefined8 *)(lVar21 + 0xb8) = 0;
        *(undefined8 *)(lVar21 + 0xc0) = 0;
        *(undefined8 *)(lVar27 + 0x30) = 0;
        *(undefined4 *)(lVar27 + 0x38) = 0;
        *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 0x10;
        lVar27 = *(long *)(lVar21 + 0x20);
        *(undefined8 *)(lVar27 + 0x3c) = 0;
        *(undefined4 *)(lVar27 + 0x44) = 0;
        *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x20) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x20) + 0x58) & 0xfe;
        plVar10 = (long *)(lVar21 + 0x28);
        lVar21 = *plVar10;
        if (lVar21 != 0) {
          *(undefined8 *)(lVar21 + 0x30) = 0;
          *(undefined4 *)(lVar21 + 0x38) = 0;
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
          lVar21 = *plVar10;
          *(undefined4 *)(lVar21 + 0x44) = 0;
          *(undefined8 *)(lVar21 + 0x3c) = 0;
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
          *(byte *)(*plVar10 + 0x58) = *(byte *)(*plVar10 + 0x58) & 0xfe;
          *plVar10 = 0;
          pcVar11 = *(code **)(lVar9 + uVar7 * 0xd0 + 0x38);
          if (pcVar11 != (code *)0x0) {
            lVar21 = lVar9 + uVar7 * 0xd0;
            *(undefined8 *)(lVar21 + 0x40) = 0;
            *(undefined8 *)(lVar21 + 0x48) = 0;
            *(undefined8 *)(lVar21 + 0x30) = 0;
            *(undefined8 *)(lVar21 + 0x38) = 0;
            (*pcVar11)(lVar21 + 0x50);
          }
        }
      }
      else {
        switch(iVar4) {
        case 0:
        case 2:
          if (uVar5 != 2) break;
LAB_01313ad0:
          local_a8._0_1_ = 7;
          goto joined_r0x01313870;
        case 1:
        case 4:
          if (((uint)uVar5 | 1) == 3) goto LAB_01313ad0;
          break;
        case 3:
          if (uVar5 == 3) goto LAB_01313ad0;
        }
        local_a8._0_1_ = 5;
joined_r0x01313870:
        if ((float)local_d0 != 0.0) {
          uVar6 = local_d0 & 0xffffffff;
          iVar3 = *(int *)(&DAT_03a7acdc + uVar5 * 4 + lVar18 * 0x10);
          piVar16 = (int *)((ulong)&local_d0 | 4);
          do {
            if (*piVar16 == iVar3) {
              switch(iVar4) {
              case 0:
              case 2:
                if (uVar5 != 2) break;
LAB_01313ae8:
                local_a8._0_1_ = 7;
                goto LAB_013138d8;
              case 1:
              case 4:
                if (((uint)uVar5 | 1) == 3) goto LAB_01313ae8;
                break;
              case 3:
                if (uVar5 == 3) goto LAB_01313ae8;
              }
              local_a8._0_1_ = 6;
LAB_013138d8:
              cVar23 = '\x01';
              goto LAB_013138dc;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar6 != 0);
        }
        cVar23 = '\0';
        iVar3 = 0;
LAB_013138dc:
        local_a8._1_1_ = 0;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        uStack_9c = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        fStack_94 = 0.0;
        local_90 = 0;
        FUN_0131da54(iVar4,uVar5 & 0xffffffff);
        fVar28 = 0.0;
        fVar29 = 0.0;
        if (iVar4 < 7) {
          fVar31 = *(float *)(&DAT_03a7ac58 + lVar20);
          fVar29 = *(float *)(&DAT_03a7ac50 + lVar20);
          fVar30 = *(float *)(&DAT_03a7ac5c + lVar20);
          fVar28 = *(float *)(&DAT_03a7ac54 + lVar20);
          local_e8 = CONCAT44(local_e8._4_4_,extraout_s0);
          pfVar14 = (float *)(&DAT_03a7ac58 + lVar20);
          if (extraout_s0 <= fVar31) {
            pfVar14 = (float *)&local_e8;
          }
          pfVar13 = (float *)(&DAT_03a7ac50 + lVar20);
          if (fVar29 <= extraout_s0) {
            pfVar13 = pfVar14;
          }
          local_e8 = CONCAT44(local_e8._4_4_,extraout_var);
          pfVar14 = (float *)(&DAT_03a7ac5c + lVar20);
          if (extraout_var <= fVar30) {
            pfVar14 = (float *)&local_e8;
          }
          pfVar12 = (float *)(&DAT_03a7ac54 + lVar20);
          if (fVar28 <= extraout_var) {
            pfVar12 = pfVar14;
          }
          fVar29 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
          fVar28 = 1027.0 - ((*pfVar12 - fVar28) / (fVar30 - fVar28)) * 2000.0;
        }
        if (*(char *)(param_1 + 0x1e08) == '\0') {
          fVar31 = *(float *)(param_1 + 0x1e30);
          fStack_a0 = *(float *)(param_1 + 0xd64);
          fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
          fStack_a4 = *(float *)(param_1 + 0xd60) +
                      ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60)
                      ) * fVar31;
        }
        else {
          fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
          fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
          fVar31 = *(float *)(param_1 + 0x1e30);
          fStack_a4 = fStack_a4 + fVar31 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
          fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
        }
        fStack_a0 = fStack_a0 + fVar28 * fVar31;
        local_90 = (ulong)iVar3;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        local_a8._1_1_ = cVar23;
        FUN_013065d0(lVar9,uVar7 & 0xffffffff,&local_a8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 4);
    uVar25 = 0;
    lVar20 = *(long *)(param_1 + 0x5c0);
    lVar21 = *(long *)(lVar20 + 0x198);
    local_d8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    lVar9 = *(long *)(lVar20 + 0x130);
    lVar18 = *(long *)(lVar20 + 0x138) - lVar9;
    if (lVar18 != 0) {
      iVar4 = *(int *)(lVar20 + 0x84);
      lVar20 = (long)iVar4 * 0x10;
      uVar5 = 0;
      uVar7 = 0;
      do {
        if ((iVar4 < 7) && ((&DAT_03a7aae8)[iVar4] == *(char *)(lVar9 + uVar5 * 0x78 + 0x41))) {
          lVar27 = lVar9 + uVar5 * 0x78;
          fVar28 = *(float *)(&DAT_03a7ac5c + lVar20);
          fVar31 = *(float *)(&DAT_03a7ac54 + lVar20);
          fVar29 = *(float *)(lVar27 + 0x44);
          fVar30 = *(float *)(lVar27 + 0x4c);
          fVar32 = *(float *)(&DAT_03a7ac58 + lVar20);
          fVar33 = *(float *)(&DAT_03a7ac50 + lVar20);
          pfVar14 = (float *)(&DAT_03a7ac58 + lVar20);
          if (fVar29 <= fVar32) {
            pfVar14 = (float *)&local_a8;
          }
          pfVar13 = (float *)(&DAT_03a7ac50 + lVar20);
          if (fVar33 <= fVar29) {
            pfVar13 = pfVar14;
          }
          pfVar14 = (float *)(&DAT_03a7ac5c + lVar20);
          if (fVar30 <= fVar28) {
            pfVar14 = (float *)&local_a8;
          }
          local_a8._0_1_ = SUB41(fVar29,0);
          local_a8._1_1_ = (char)((uint)fVar29 >> 8);
          local_a8._2_1_ = (undefined1)((uint)fVar29 >> 0x10);
          local_a8._3_1_ = (undefined1)((uint)fVar29 >> 0x18);
          local_a8._0_1_ = SUB41(fVar30,0);
          local_a8._1_1_ = (char)((uint)fVar30 >> 8);
          local_a8._2_1_ = (undefined1)((uint)fVar30 >> 0x10);
          local_a8._3_1_ = (undefined1)((uint)fVar30 >> 0x18);
          pfVar12 = (float *)(&DAT_03a7ac54 + lVar20);
          if (fVar31 <= fVar30) {
            pfVar12 = pfVar14;
          }
          fVar29 = ((*pfVar13 - fVar33) / (fVar32 - fVar33)) * 2000.0 + -1000.0;
          fVar28 = 1027.0 - ((*pfVar12 - fVar31) / (fVar28 - fVar31)) * 2000.0;
          if (*(char *)(param_1 + 0x1e08) == '\0') {
            fVar32 = *(float *)(param_1 + 0x1e30);
            fVar31 = *(float *)(param_1 + 0xd64);
            fVar30 = *(float *)(param_1 + 0xd60) +
                     ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60))
                     * fVar32;
            fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fVar31;
          }
          else {
            fVar30 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
            fVar32 = *(float *)(param_1 + 0x1e30);
            fVar31 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
            fVar30 = fVar30 + fVar32 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fVar30);
            fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fVar31;
          }
          lVar27 = uVar7 * 8;
          *(int *)(local_68 + uVar7 * 4 + -0x80) = (int)uVar5;
          uVar25 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar25;
          *(float *)(local_68 + lVar27 + -0x68) = fVar30;
          *(float *)(local_68 + lVar27 + -100) = fVar31 + fVar28 * fVar32;
          if (4 < uVar25) break;
        }
        uVar25 = (uint)uVar7;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)((lVar18 >> 3) * -0x1111111111111111));
    }
    if (uVar25 == 0) {
      *(undefined1 *)(lVar21 + 0x2950) = 0;
      lVar9 = *(long *)(lVar21 + 0x28c0);
      *(undefined8 *)(lVar21 + 0x2980) = 0;
      *(undefined8 *)(lVar21 + 0x2978) = 0;
      *(undefined8 *)(lVar21 + 0x2970) = 0;
      *(undefined8 *)(lVar21 + 0x2968) = 0;
      *(undefined8 *)(lVar21 + 0x2960) = 0;
      *(undefined8 *)(lVar21 + 0x2958) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar21 + 0x28c0);
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar21 + 0x28c0) + 0x58) =
           *(byte *)(*(long *)(lVar21 + 0x28c0) + 0x58) & 0xfe;
      lVar9 = *(long *)(lVar21 + 0x28c8);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar21 + 0x28c8);
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x28c8) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x28c8) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar21 + 0x28d8);
        *(undefined8 *)(lVar21 + 0x28c8) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar21 + 0x28e8) = 0;
          *(undefined8 *)(lVar21 + 0x28e0) = 0;
          *(undefined8 *)(lVar21 + 0x28d8) = 0;
          *(undefined8 *)(lVar21 + 0x28d0) = 0;
          (*pcVar11)(lVar21 + 0x28f0);
        }
      }
LAB_01313bd8:
      *(undefined1 *)(lVar21 + 0x2a20) = 0;
      lVar9 = *(long *)(lVar21 + 0x2990);
      *(undefined8 *)(lVar21 + 0x2a50) = 0;
      *(undefined8 *)(lVar21 + 0x2a48) = 0;
      *(undefined8 *)(lVar21 + 0x2a40) = 0;
      *(undefined8 *)(lVar21 + 0x2a38) = 0;
      *(undefined8 *)(lVar21 + 0x2a30) = 0;
      *(undefined8 *)(lVar21 + 0x2a28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar21 + 0x2990);
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar21 + 0x2990) + 0x58) =
           *(byte *)(*(long *)(lVar21 + 0x2990) + 0x58) & 0xfe;
      lVar9 = *(long *)(lVar21 + 0x2998);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar21 + 0x2998);
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x2998) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x2998) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar21 + 0x29a8);
        *(undefined8 *)(lVar21 + 0x2998) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar21 + 0x29b8) = 0;
          *(undefined8 *)(lVar21 + 0x29b0) = 0;
          *(undefined8 *)(lVar21 + 0x29a8) = 0;
          *(undefined8 *)(lVar21 + 0x29a0) = 0;
          (*pcVar11)(lVar21 + 0x29c0);
        }
      }
LAB_01313c3c:
      *(undefined1 *)(lVar21 + 0x2af0) = 0;
      lVar9 = *(long *)(lVar21 + 0x2a60);
      *(undefined8 *)(lVar21 + 0x2b20) = 0;
      *(undefined8 *)(lVar21 + 0x2b18) = 0;
      *(undefined8 *)(lVar21 + 0x2b10) = 0;
      *(undefined8 *)(lVar21 + 0x2b08) = 0;
      *(undefined8 *)(lVar21 + 0x2b00) = 0;
      *(undefined8 *)(lVar21 + 11000) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar21 + 0x2a60);
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar21 + 0x2a60) + 0x58) =
           *(byte *)(*(long *)(lVar21 + 0x2a60) + 0x58) & 0xfe;
      lVar9 = *(long *)(lVar21 + 0x2a68);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar21 + 0x2a68);
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x2a68) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x2a68) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar21 + 0x2a78);
        *(undefined8 *)(lVar21 + 0x2a68) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar21 + 0x2a88) = 0;
          *(undefined8 *)(lVar21 + 0x2a80) = 0;
          *(undefined8 *)(lVar21 + 0x2a78) = 0;
          *(undefined8 *)(lVar21 + 0x2a70) = 0;
          (*pcVar11)(lVar21 + 0x2a90);
        }
      }
LAB_01313ca0:
      *(undefined1 *)(lVar21 + 0x2bc0) = 0;
      lVar9 = *(long *)(lVar21 + 0x2b30);
      *(undefined8 *)(lVar21 + 0x2bf0) = 0;
      *(undefined8 *)(lVar21 + 0x2be8) = 0;
      *(undefined8 *)(lVar21 + 0x2be0) = 0;
      *(undefined8 *)(lVar21 + 0x2bd8) = 0;
      *(undefined8 *)(lVar21 + 0x2bd0) = 0;
      *(undefined8 *)(lVar21 + 0x2bc8) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar21 + 0x2b30);
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar21 + 0x2b30) + 0x58) =
           *(byte *)(*(long *)(lVar21 + 0x2b30) + 0x58) & 0xfe;
      lVar9 = *(long *)(lVar21 + 0x2b38);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar21 + 0x2b38);
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x2b38) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x2b38) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar21 + 0x2b48);
        *(undefined8 *)(lVar21 + 0x2b38) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar21 + 0x2b58) = 0;
          *(undefined8 *)(lVar21 + 0x2b50) = 0;
          *(undefined8 *)(lVar21 + 0x2b48) = 0;
          *(undefined8 *)(lVar21 + 0x2b40) = 0;
          (*pcVar11)(lVar21 + 0x2b60);
        }
      }
LAB_01313d04:
      *(undefined1 *)(lVar21 + 0x2c90) = 0;
      lVar9 = *(long *)(lVar21 + 0x2c00);
      *(undefined8 *)(lVar21 + 0x2cc0) = 0;
      *(undefined8 *)(lVar21 + 0x2cb8) = 0;
      *(undefined8 *)(lVar21 + 0x2cb0) = 0;
      *(undefined8 *)(lVar21 + 0x2ca8) = 0;
      *(undefined8 *)(lVar21 + 0x2ca0) = 0;
      *(undefined8 *)(lVar21 + 0x2c98) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined4 *)(lVar9 + 0x38) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar21 + 0x2c00);
      *(undefined8 *)(lVar9 + 0x3c) = 0;
      *(undefined4 *)(lVar9 + 0x44) = 0;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar21 + 0x2c00) + 0x58) =
           *(byte *)(*(long *)(lVar21 + 0x2c00) + 0x58) & 0xfe;
      lVar9 = *(long *)(lVar21 + 0x2c08);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar21 + 0x2c08);
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar21 + 0x2c08) + 0x58) =
             *(byte *)(*(long *)(lVar21 + 0x2c08) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar21 + 0x2c18);
        *(undefined8 *)(lVar21 + 0x2c08) = 0;
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar21 + 0x2c28) = 0;
          *(undefined8 *)(lVar21 + 0x2c20) = 0;
          *(undefined8 *)(lVar21 + 0x2c18) = 0;
          *(undefined8 *)(lVar21 + 0x2c10) = 0;
          (*pcVar11)(lVar21 + 0x2c30);
        }
      }
    }
    else {
      local_90 = local_e8 & 0xffffffff;
      uVar5 = (ulong)&local_a8 | 4;
      lVar9 = param_1 + 0xbf0;
      uStack_9c = 0;
      local_a8._0_1_ = 0x24;
      local_88 = 0;
      uStack_80 = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = (float)local_d0;
      fStack_a0 = (float)(local_d0 >> 0x20);
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      FUN_013065d0(lVar21,0x32,&local_a8);
      if (*(code **)(param_1 + 0xbd0) != (code *)0x0) {
        local_68[0] = *(undefined1 *)(param_1 + 0x1e08);
        local_64 = 0;
        (**(code **)(param_1 + 0xbd0))(lVar9,&local_64,uVar5,local_68);
      }
      if (uVar25 < 2) goto LAB_01313bd8;
      local_90 = local_e8 >> 0x20;
      local_98 = 0;
      fStack_94 = 0.0;
      uStack_9c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_a8._0_1_ = 0x24;
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = (float)local_c8;
      fStack_a0 = (float)((ulong)local_c8 >> 0x20);
      FUN_013065d0(lVar21,0x33,&local_a8);
      if (*(code **)(param_1 + 0xbd0) != (code *)0x0) {
        local_68[0] = *(undefined1 *)(param_1 + 0x1e08);
        local_64 = 1;
        (**(code **)(param_1 + 0xbd0))(lVar9,&local_64,uVar5,local_68);
      }
      if (uVar25 < 3) goto LAB_01313c3c;
      local_90 = local_e0 & 0xffffffff;
      local_98 = 0;
      fStack_94 = 0.0;
      uStack_9c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_a8._0_1_ = 0x24;
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = (float)local_c0;
      fStack_a0 = (float)((ulong)local_c0 >> 0x20);
      FUN_013065d0(lVar21,0x34,&local_a8);
      if (*(code **)(param_1 + 0xbd0) != (code *)0x0) {
        local_68[0] = *(undefined1 *)(param_1 + 0x1e08);
        local_64 = 2;
        (**(code **)(param_1 + 0xbd0))(lVar9,&local_64,uVar5,local_68);
      }
      if (uVar25 < 4) goto LAB_01313ca0;
      local_90 = local_e0 >> 0x20;
      local_98 = 0;
      fStack_94 = 0.0;
      uStack_9c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_a8._0_1_ = 0x24;
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = (float)local_b8;
      fStack_a0 = (float)((ulong)local_b8 >> 0x20);
      FUN_013065d0(lVar21,0x35,&local_a8);
      if (*(code **)(param_1 + 0xbd0) != (code *)0x0) {
        local_68[0] = *(undefined1 *)(param_1 + 0x1e08);
        local_64 = 3;
        (**(code **)(param_1 + 0xbd0))(lVar9,&local_64,uVar5,local_68);
      }
      if (uVar25 < 5) goto LAB_01313d04;
      local_90 = (ulong)local_d8;
      local_98 = 0;
      fStack_94 = 0.0;
      uStack_9c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_a8._0_1_ = 0x24;
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = (float)local_b0;
      fStack_a0 = (float)((ulong)local_b0 >> 0x20);
      FUN_013065d0(lVar21,0x36,&local_a8);
      if (*(code **)(param_1 + 0xbd0) != (code *)0x0) {
        local_68[0] = *(undefined1 *)(param_1 + 0x1e08);
        local_64 = 4;
        (**(code **)(param_1 + 0xbd0))(lVar9,&local_64,uVar5,local_68);
      }
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
    if (*(int *)(param_1 + 0x1840) == 0) {
LAB_01313d7c:
      *(undefined1 *)(lVar9 + 0x2d60) = 0;
      lVar18 = *(long *)(lVar9 + 0x2cd0);
      *(undefined8 *)(lVar9 + 0x2d90) = 0;
      *(undefined8 *)(lVar9 + 0x2d88) = 0;
      *(undefined8 *)(lVar9 + 0x2d80) = 0;
      *(undefined8 *)(lVar9 + 0x2d78) = 0;
      *(undefined8 *)(lVar9 + 0x2d70) = 0;
      *(undefined8 *)(lVar9 + 0x2d68) = 0;
      *(undefined8 *)(lVar18 + 0x30) = 0;
      *(undefined4 *)(lVar18 + 0x38) = 0;
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
      lVar18 = *(long *)(lVar9 + 0x2cd0);
      *(undefined8 *)(lVar18 + 0x3c) = 0;
      *(undefined4 *)(lVar18 + 0x44) = 0;
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar9 + 0x2cd0) + 0x58) =
           *(byte *)(*(long *)(lVar9 + 0x2cd0) + 0x58) & 0xfe;
      lVar18 = *(long *)(lVar9 + 0x2cd8);
      if (lVar18 == 0) {
LAB_01313de4:
        pcVar11 = *(code **)(param_1 + 0x950);
      }
      else {
        *(undefined8 *)(lVar18 + 0x30) = 0;
        *(undefined4 *)(lVar18 + 0x38) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        lVar18 = *(long *)(lVar9 + 0x2cd8);
        *(undefined4 *)(lVar18 + 0x44) = 0;
        *(undefined8 *)(lVar18 + 0x3c) = 0;
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar9 + 0x2cd8) + 0x58) =
             *(byte *)(*(long *)(lVar9 + 0x2cd8) + 0x58) & 0xfe;
        pcVar11 = *(code **)(lVar9 + 0x2ce8);
        *(undefined8 *)(lVar9 + 0x2cd8) = 0;
        if (pcVar11 == (code *)0x0) goto LAB_01313de4;
        *(undefined8 *)(lVar9 + 0x2cf8) = 0;
        *(undefined8 *)(lVar9 + 0x2cf0) = 0;
        *(undefined8 *)(lVar9 + 0x2ce8) = 0;
        *(undefined8 *)(lVar9 + 0x2ce0) = 0;
        (*pcVar11)(lVar9 + 0x2d00);
        pcVar11 = *(code **)(param_1 + 0x950);
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(param_1 + 0x970);
      }
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
      if (iVar4 != *(int *)(param_1 + 0x1860)) goto LAB_01313d7c;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0x27;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      if (iVar4 < 7) {
        lVar18 = (long)iVar4 * 0x10;
        fVar31 = *(float *)(&DAT_03a7ac58 + lVar18);
        fVar29 = *(float *)(&DAT_03a7ac50 + lVar18);
        fVar32 = *(float *)(&DAT_03a7ac5c + lVar18);
        fVar28 = *(float *)(&DAT_03a7ac54 + lVar18);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x1850);
        pfVar14 = (float *)(&DAT_03a7ac58 + lVar18);
        if (fVar30 <= fVar31) {
          pfVar14 = (float *)&local_d0;
        }
        local_d0 = CONCAT44(local_d0._4_4_,fVar30);
        pfVar13 = (float *)(&DAT_03a7ac50 + lVar18);
        if (fVar29 <= fVar30) {
          pfVar13 = pfVar14;
        }
        fVar30 = (float)*(undefined8 *)(param_1 + 0x1858);
        local_d0 = CONCAT44(local_d0._4_4_,fVar30);
        pfVar14 = (float *)(&DAT_03a7ac5c + lVar18);
        if (fVar30 <= fVar32) {
          pfVar14 = (float *)&local_d0;
        }
        pfVar12 = (float *)(&DAT_03a7ac54 + lVar18);
        if (fVar28 <= fVar30) {
          pfVar12 = pfVar14;
        }
        fVar30 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
        fVar31 = 1027.0 - ((*pfVar12 - fVar28) / (fVar32 - fVar28)) * 2000.0;
        fVar28 = fVar30;
        fVar29 = fVar31;
        if (*(char *)(param_1 + 0x1e08) == '\0') goto LAB_0131589c;
LAB_01317128:
        fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
        fVar32 = *(float *)(param_1 + 0x1e30);
        fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
        fStack_a4 = fStack_a4 + fVar32 * ((fVar28 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
        fVar28 = (fVar29 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
      }
      else {
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar28 = 0.0;
        fVar30 = 0.0;
        if (*(char *)(param_1 + 0x1e08) != '\0') goto LAB_01317128;
LAB_0131589c:
        fVar32 = *(float *)(param_1 + 0x1e30);
        fStack_a0 = *(float *)(param_1 + 0xd64);
        fStack_a4 = *(float *)(param_1 + 0xd60) +
                    ((((fVar30 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60))
                    * fVar32;
        fVar28 = (((fVar31 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
      }
      fStack_a0 = fStack_a0 + fVar28 * fVar32;
      local_90 = (ulong)(*(int *)(param_1 + 0x1840) == 2);
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      FUN_013065d0(lVar9,0x37,&local_a8);
      if (*(code **)(param_1 + 0x8d0) != (code *)0x0) {
        local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0x1e08));
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0x1864));
        local_64 = CONCAT31(local_64._1_3_,*(int *)(param_1 + 0x1840) == 2);
        (**(code **)(param_1 + 0x8d0))
                  (param_1 + 0x8f0,(ulong)&local_a8 | 4,&local_e8,&local_64,&local_d0);
      }
    }
    lVar9 = *(long *)(param_1 + 0x5c0);
    lVar18 = *(long *)(lVar9 + 0x198);
    if (*(char *)(param_1 + 0x1870) == '\0') {
      if (*(char *)(param_1 + 0x1db0) == '\0') {
        *(undefined1 *)(lVar18 + 0x2e30) = 0;
        lVar9 = *(long *)(lVar18 + 0x2da0);
        *(undefined8 *)(lVar18 + 0x2e60) = 0;
        *(undefined8 *)(lVar18 + 0x2e58) = 0;
        *(undefined8 *)(lVar18 + 0x2e50) = 0;
        *(undefined8 *)(lVar18 + 0x2e48) = 0;
        *(undefined8 *)(lVar18 + 0x2e40) = 0;
        *(undefined8 *)(lVar18 + 0x2e38) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined4 *)(lVar9 + 0x38) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        lVar9 = *(long *)(lVar18 + 0x2da0);
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(undefined4 *)(lVar9 + 0x44) = 0;
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x2da0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x2da0) + 0x58) & 0xfe;
        lVar9 = *(long *)(lVar18 + 0x2da8);
        if (lVar9 == 0) {
LAB_01314da0:
          pcVar11 = *(code **)(param_1 + 0xa50);
        }
        else {
          *(undefined8 *)(lVar9 + 0x30) = 0;
          *(undefined4 *)(lVar9 + 0x38) = 0;
          *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
          lVar9 = *(long *)(lVar18 + 0x2da8);
          *(undefined4 *)(lVar9 + 0x44) = 0;
          *(undefined8 *)(lVar9 + 0x3c) = 0;
          *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x2da8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x2da8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x2db8);
          *(undefined8 *)(lVar18 + 0x2da8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01314da0;
          *(undefined8 *)(lVar18 + 0x2dc8) = 0;
          *(undefined8 *)(lVar18 + 0x2dc0) = 0;
          *(undefined8 *)(lVar18 + 0x2db8) = 0;
          *(undefined8 *)(lVar18 + 0x2db0) = 0;
          (*pcVar11)(lVar18 + 0x2dd0);
          pcVar11 = *(code **)(param_1 + 0xa50);
        }
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(param_1 + 0xa70);
        }
        *(undefined1 *)(lVar18 + 0x2f00) = 0;
        lVar20 = *(long *)(lVar18 + 0x2e70);
        *(undefined8 *)(lVar18 + 0x2f30) = 0;
        lVar9 = param_1 + 0xb70;
        *(undefined8 *)(lVar18 + 0x2f28) = 0;
        *(undefined8 *)(lVar18 + 0x2f20) = 0;
        *(undefined8 *)(lVar18 + 0x2f18) = 0;
        *(undefined8 *)(lVar18 + 0x2f10) = 0;
        *(undefined8 *)(lVar18 + 0x2f08) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x2e70);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x2e70) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x2e70) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x2e78);
        if (lVar20 == 0) {
LAB_01314e18:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x2e78);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x2e78) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x2e78) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x2e88);
          *(undefined8 *)(lVar18 + 0x2e78) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01314e18;
          *(undefined8 *)(lVar18 + 0x2e98) = 0;
          *(undefined8 *)(lVar18 + 0x2e90) = 0;
          *(undefined8 *)(lVar18 + 0x2e88) = 0;
          *(undefined8 *)(lVar18 + 0x2e80) = 0;
          (*pcVar11)(lVar18 + 0x2ea0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x2fd0) = 0;
        lVar20 = *(long *)(lVar18 + 0x2f40);
        *(undefined8 *)(lVar18 + 0x3000) = 0;
        *(undefined8 *)(lVar18 + 0x2ff8) = 0;
        *(undefined8 *)(lVar18 + 0x2ff0) = 0;
        *(undefined8 *)(lVar18 + 0x2fe8) = 0;
        *(undefined8 *)(lVar18 + 0x2fe0) = 0;
        *(undefined8 *)(lVar18 + 0x2fd8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x2f40);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x2f40) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x2f40) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x2f48);
        if (lVar20 == 0) {
LAB_01314e94:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x2f48);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x2f48) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x2f48) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x2f58);
          *(undefined8 *)(lVar18 + 0x2f48) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01314e94;
          *(undefined8 *)(lVar18 + 0x2f68) = 0;
          *(undefined8 *)(lVar18 + 0x2f60) = 0;
          *(undefined8 *)(lVar18 + 0x2f58) = 0;
          *(undefined8 *)(lVar18 + 0x2f50) = 0;
          (*pcVar11)(lVar18 + 0x2f70);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 1;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x30a0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3010);
        *(undefined8 *)(lVar18 + 0x30d0) = 0;
        *(undefined8 *)(lVar18 + 0x30c8) = 0;
        *(undefined8 *)(lVar18 + 0x30c0) = 0;
        *(undefined8 *)(lVar18 + 0x30b8) = 0;
        *(undefined8 *)(lVar18 + 0x30b0) = 0;
        *(undefined8 *)(lVar18 + 0x30a8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3010);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3010) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3010) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3018);
        if (lVar20 == 0) {
LAB_01314f14:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3018);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3018) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3018) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3028);
          *(undefined8 *)(lVar18 + 0x3018) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01314f14;
          *(undefined8 *)(lVar18 + 0x3038) = 0;
          *(undefined8 *)(lVar18 + 0x3030) = 0;
          *(undefined8 *)(lVar18 + 0x3028) = 0;
          *(undefined8 *)(lVar18 + 0x3020) = 0;
          (*pcVar11)(lVar18 + 0x3040);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 2;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3170) = 0;
        lVar20 = *(long *)(lVar18 + 0x30e0);
        *(undefined8 *)(lVar18 + 0x31a0) = 0;
        *(undefined8 *)(lVar18 + 0x3198) = 0;
        *(undefined8 *)(lVar18 + 0x3190) = 0;
        *(undefined8 *)(lVar18 + 0x3188) = 0;
        *(undefined8 *)(lVar18 + 0x3180) = 0;
        *(undefined8 *)(lVar18 + 0x3178) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x30e0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x30e0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x30e0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x30e8);
        if (lVar20 == 0) {
LAB_01314f94:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x30e8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x30e8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x30e8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x30f8);
          *(undefined8 *)(lVar18 + 0x30e8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01314f94;
          *(undefined8 *)(lVar18 + 0x3108) = 0;
          *(undefined8 *)(lVar18 + 0x3100) = 0;
          *(undefined8 *)(lVar18 + 0x30f8) = 0;
          *(undefined8 *)(lVar18 + 0x30f0) = 0;
          (*pcVar11)(lVar18 + 0x3110);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 3;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3240) = 0;
        lVar20 = *(long *)(lVar18 + 0x31b0);
        *(undefined8 *)(lVar18 + 0x3270) = 0;
        *(undefined8 *)(lVar18 + 0x3268) = 0;
        *(undefined8 *)(lVar18 + 0x3260) = 0;
        *(undefined8 *)(lVar18 + 0x3258) = 0;
        *(undefined8 *)(lVar18 + 0x3250) = 0;
        *(undefined8 *)(lVar18 + 0x3248) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x31b0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x31b0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x31b0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x31b8);
        if (lVar20 == 0) {
LAB_01315014:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x31b8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x31b8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x31b8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x31c8);
          *(undefined8 *)(lVar18 + 0x31b8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315014;
          *(undefined8 *)(lVar18 + 0x31d8) = 0;
          *(undefined8 *)(lVar18 + 0x31d0) = 0;
          *(undefined8 *)(lVar18 + 0x31c8) = 0;
          *(undefined8 *)(lVar18 + 0x31c0) = 0;
          (*pcVar11)(lVar18 + 0x31e0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 4;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3310) = 0;
        lVar20 = *(long *)(lVar18 + 0x3280);
        *(undefined8 *)(lVar18 + 0x3340) = 0;
        *(undefined8 *)(lVar18 + 0x3338) = 0;
        *(undefined8 *)(lVar18 + 0x3330) = 0;
        *(undefined8 *)(lVar18 + 0x3328) = 0;
        *(undefined8 *)(lVar18 + 0x3320) = 0;
        *(undefined8 *)(lVar18 + 0x3318) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3280);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3280) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3280) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3288);
        if (lVar20 == 0) {
LAB_01315094:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3288);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3288) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3288) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3298);
          *(undefined8 *)(lVar18 + 0x3288) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315094;
          *(undefined8 *)(lVar18 + 0x32a8) = 0;
          *(undefined8 *)(lVar18 + 0x32a0) = 0;
          *(undefined8 *)(lVar18 + 0x3298) = 0;
          *(undefined8 *)(lVar18 + 0x3290) = 0;
          (*pcVar11)(lVar18 + 0x32b0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 5;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x33e0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3350);
        *(undefined8 *)(lVar18 + 0x3410) = 0;
        *(undefined8 *)(lVar18 + 0x3408) = 0;
        *(undefined8 *)(lVar18 + 0x3400) = 0;
        *(undefined8 *)(lVar18 + 0x33f8) = 0;
        *(undefined8 *)(lVar18 + 0x33f0) = 0;
        *(undefined8 *)(lVar18 + 0x33e8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3350);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3350) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3350) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3358);
        if (lVar20 == 0) {
LAB_01315114:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3358);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3358) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3358) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3368);
          *(undefined8 *)(lVar18 + 0x3358) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315114;
          *(undefined8 *)(lVar18 + 0x3378) = 0;
          *(undefined8 *)(lVar18 + 0x3370) = 0;
          *(undefined8 *)(lVar18 + 0x3368) = 0;
          *(undefined8 *)(lVar18 + 0x3360) = 0;
          (*pcVar11)(lVar18 + 0x3380);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 6;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x34b0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3420);
        *(undefined8 *)(lVar18 + 0x34e0) = 0;
        *(undefined8 *)(lVar18 + 0x34d8) = 0;
        *(undefined8 *)(lVar18 + 0x34d0) = 0;
        *(undefined8 *)(lVar18 + 0x34c8) = 0;
        *(undefined8 *)(lVar18 + 0x34c0) = 0;
        *(undefined8 *)(lVar18 + 0x34b8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3420);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3420) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3420) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3428);
        if (lVar20 == 0) {
LAB_01315194:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3428);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3428) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3428) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3438);
          *(undefined8 *)(lVar18 + 0x3428) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315194;
          *(undefined8 *)(lVar18 + 0x3448) = 0;
          *(undefined8 *)(lVar18 + 0x3440) = 0;
          *(undefined8 *)(lVar18 + 0x3438) = 0;
          *(undefined8 *)(lVar18 + 0x3430) = 0;
          (*pcVar11)(lVar18 + 0x3450);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 7;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3580) = 0;
        lVar20 = *(long *)(lVar18 + 0x34f0);
        *(undefined8 *)(lVar18 + 0x35b0) = 0;
        *(undefined8 *)(lVar18 + 0x35a8) = 0;
        *(undefined8 *)(lVar18 + 0x35a0) = 0;
        *(undefined8 *)(lVar18 + 0x3598) = 0;
        *(undefined8 *)(lVar18 + 0x3590) = 0;
        *(undefined8 *)(lVar18 + 0x3588) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x34f0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x34f0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x34f0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x34f8);
        if (lVar20 == 0) {
LAB_01315214:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x34f8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x34f8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x34f8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3508);
          *(undefined8 *)(lVar18 + 0x34f8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315214;
          *(undefined8 *)(lVar18 + 0x3518) = 0;
          *(undefined8 *)(lVar18 + 0x3510) = 0;
          *(undefined8 *)(lVar18 + 0x3508) = 0;
          *(undefined8 *)(lVar18 + 0x3500) = 0;
          (*pcVar11)(lVar18 + 0x3520);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 8;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3650) = 0;
        lVar20 = *(long *)(lVar18 + 0x35c0);
        *(undefined8 *)(lVar18 + 0x3680) = 0;
        *(undefined8 *)(lVar18 + 0x3678) = 0;
        *(undefined8 *)(lVar18 + 0x3670) = 0;
        *(undefined8 *)(lVar18 + 0x3668) = 0;
        *(undefined8 *)(lVar18 + 0x3660) = 0;
        *(undefined8 *)(lVar18 + 0x3658) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x35c0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x35c0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x35c0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x35c8);
        if (lVar20 == 0) {
LAB_01315294:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x35c8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x35c8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x35c8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x35d8);
          *(undefined8 *)(lVar18 + 0x35c8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315294;
          *(undefined8 *)(lVar18 + 0x35e8) = 0;
          *(undefined8 *)(lVar18 + 0x35e0) = 0;
          *(undefined8 *)(lVar18 + 0x35d8) = 0;
          *(undefined8 *)(lVar18 + 0x35d0) = 0;
          (*pcVar11)(lVar18 + 0x35f0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 9;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3720) = 0;
        lVar20 = *(long *)(lVar18 + 0x3690);
        *(undefined8 *)(lVar18 + 0x3750) = 0;
        *(undefined8 *)(lVar18 + 0x3748) = 0;
        *(undefined8 *)(lVar18 + 0x3740) = 0;
        *(undefined8 *)(lVar18 + 0x3738) = 0;
        *(undefined8 *)(lVar18 + 0x3730) = 0;
        *(undefined8 *)(lVar18 + 0x3728) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3690);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3690) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3690) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3698);
        if (lVar20 == 0) {
LAB_01315314:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3698);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3698) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3698) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x36a8);
          *(undefined8 *)(lVar18 + 0x3698) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315314;
          *(undefined8 *)(lVar18 + 0x36b8) = 0;
          *(undefined8 *)(lVar18 + 14000) = 0;
          *(undefined8 *)(lVar18 + 0x36a8) = 0;
          *(undefined8 *)(lVar18 + 0x36a0) = 0;
          (*pcVar11)(lVar18 + 0x36c0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 10;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x37f0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3760);
        *(undefined8 *)(lVar18 + 0x3820) = 0;
        *(undefined8 *)(lVar18 + 0x3818) = 0;
        *(undefined8 *)(lVar18 + 0x3810) = 0;
        *(undefined8 *)(lVar18 + 0x3808) = 0;
        *(undefined8 *)(lVar18 + 0x3800) = 0;
        *(undefined8 *)(lVar18 + 0x37f8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3760);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3760) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3760) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3768);
        if (lVar20 == 0) {
LAB_01315394:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3768);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3768) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3768) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3778);
          *(undefined8 *)(lVar18 + 0x3768) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315394;
          *(undefined8 *)(lVar18 + 0x3788) = 0;
          *(undefined8 *)(lVar18 + 0x3780) = 0;
          *(undefined8 *)(lVar18 + 0x3778) = 0;
          *(undefined8 *)(lVar18 + 0x3770) = 0;
          (*pcVar11)(lVar18 + 0x3790);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0xb;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x38c0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3830);
        *(undefined8 *)(lVar18 + 0x38f0) = 0;
        *(undefined8 *)(lVar18 + 0x38e8) = 0;
        *(undefined8 *)(lVar18 + 0x38e0) = 0;
        *(undefined8 *)(lVar18 + 0x38d8) = 0;
        *(undefined8 *)(lVar18 + 0x38d0) = 0;
        *(undefined8 *)(lVar18 + 0x38c8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3830);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3830) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3830) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3838);
        if (lVar20 == 0) {
LAB_01315414:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3838);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3838) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3838) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3848);
          *(undefined8 *)(lVar18 + 0x3838) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315414;
          *(undefined8 *)(lVar18 + 0x3858) = 0;
          *(undefined8 *)(lVar18 + 0x3850) = 0;
          *(undefined8 *)(lVar18 + 0x3848) = 0;
          *(undefined8 *)(lVar18 + 0x3840) = 0;
          (*pcVar11)(lVar18 + 0x3860);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0xc;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3990) = 0;
        lVar20 = *(long *)(lVar18 + 0x3900);
        *(undefined8 *)(lVar18 + 0x39c0) = 0;
        *(undefined8 *)(lVar18 + 0x39b8) = 0;
        *(undefined8 *)(lVar18 + 0x39b0) = 0;
        *(undefined8 *)(lVar18 + 0x39a8) = 0;
        *(undefined8 *)(lVar18 + 0x39a0) = 0;
        *(undefined8 *)(lVar18 + 0x3998) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3900);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3900) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3900) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3908);
        if (lVar20 == 0) {
LAB_01315494:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3908);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3908) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3908) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3918);
          *(undefined8 *)(lVar18 + 0x3908) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315494;
          *(undefined8 *)(lVar18 + 0x3928) = 0;
          *(undefined8 *)(lVar18 + 0x3920) = 0;
          *(undefined8 *)(lVar18 + 0x3918) = 0;
          *(undefined8 *)(lVar18 + 0x3910) = 0;
          (*pcVar11)(lVar18 + 0x3930);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0xd;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3a60) = 0;
        lVar20 = *(long *)(lVar18 + 0x39d0);
        *(undefined8 *)(lVar18 + 0x3a90) = 0;
        *(undefined8 *)(lVar18 + 0x3a88) = 0;
        *(undefined8 *)(lVar18 + 0x3a80) = 0;
        *(undefined8 *)(lVar18 + 0x3a78) = 0;
        *(undefined8 *)(lVar18 + 0x3a70) = 0;
        *(undefined8 *)(lVar18 + 0x3a68) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x39d0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x39d0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x39d0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x39d8);
        if (lVar20 == 0) {
LAB_01315514:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x39d8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x39d8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x39d8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x39e8);
          *(undefined8 *)(lVar18 + 0x39d8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315514;
          *(undefined8 *)(lVar18 + 0x39f8) = 0;
          *(undefined8 *)(lVar18 + 0x39f0) = 0;
          *(undefined8 *)(lVar18 + 0x39e8) = 0;
          *(undefined8 *)(lVar18 + 0x39e0) = 0;
          (*pcVar11)(lVar18 + 0x3a00);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0xe;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3b30) = 0;
        lVar20 = *(long *)(lVar18 + 0x3aa0);
        *(undefined8 *)(lVar18 + 0x3b60) = 0;
        *(undefined8 *)(lVar18 + 0x3b58) = 0;
        *(undefined8 *)(lVar18 + 0x3b50) = 0;
        *(undefined8 *)(lVar18 + 0x3b48) = 0;
        *(undefined8 *)(lVar18 + 0x3b40) = 0;
        *(undefined8 *)(lVar18 + 0x3b38) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3aa0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3aa0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3aa0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3aa8);
        if (lVar20 == 0) {
LAB_01315594:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3aa8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3aa8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3aa8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3ab8);
          *(undefined8 *)(lVar18 + 0x3aa8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315594;
          *(undefined8 *)(lVar18 + 0x3ac8) = 0;
          *(undefined8 *)(lVar18 + 0x3ac0) = 0;
          *(undefined8 *)(lVar18 + 0x3ab8) = 0;
          *(undefined8 *)(lVar18 + 0x3ab0) = 0;
          (*pcVar11)(lVar18 + 0x3ad0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0xf;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3c00) = 0;
        lVar20 = *(long *)(lVar18 + 0x3b70);
        *(undefined8 *)(lVar18 + 0x3c30) = 0;
        *(undefined8 *)(lVar18 + 0x3c28) = 0;
        *(undefined8 *)(lVar18 + 0x3c20) = 0;
        *(undefined8 *)(lVar18 + 0x3c18) = 0;
        *(undefined8 *)(lVar18 + 0x3c10) = 0;
        *(undefined8 *)(lVar18 + 0x3c08) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3b70);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3b70) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3b70) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3b78);
        if (lVar20 == 0) {
LAB_01315614:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3b78);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3b78) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3b78) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3b88);
          *(undefined8 *)(lVar18 + 0x3b78) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315614;
          *(undefined8 *)(lVar18 + 0x3b98) = 0;
          *(undefined8 *)(lVar18 + 0x3b90) = 0;
          *(undefined8 *)(lVar18 + 0x3b88) = 0;
          *(undefined8 *)(lVar18 + 0x3b80) = 0;
          (*pcVar11)(lVar18 + 0x3ba0);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0x10;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3cd0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3c40);
        *(undefined8 *)(lVar18 + 0x3d00) = 0;
        *(undefined8 *)(lVar18 + 0x3cf8) = 0;
        *(undefined8 *)(lVar18 + 0x3cf0) = 0;
        *(undefined8 *)(lVar18 + 0x3ce8) = 0;
        *(undefined8 *)(lVar18 + 0x3ce0) = 0;
        *(undefined8 *)(lVar18 + 0x3cd8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3c40);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3c40) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3c40) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3c48);
        if (lVar20 == 0) {
LAB_01315698:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3c48);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3c48) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3c48) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3c58);
          *(undefined8 *)(lVar18 + 0x3c48) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_01315698;
          *(undefined8 *)(lVar18 + 0x3c68) = 0;
          *(undefined8 *)(lVar18 + 0x3c60) = 0;
          *(undefined8 *)(lVar18 + 0x3c58) = 0;
          *(undefined8 *)(lVar18 + 0x3c50) = 0;
          (*pcVar11)(lVar18 + 0x3c70);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0x11;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3da0) = 0;
        lVar20 = *(long *)(lVar18 + 0x3d10);
        *(undefined8 *)(lVar18 + 0x3dd0) = 0;
        *(undefined8 *)(lVar18 + 0x3dc8) = 0;
        *(undefined8 *)(lVar18 + 0x3dc0) = 0;
        *(undefined8 *)(lVar18 + 0x3db8) = 0;
        *(undefined8 *)(lVar18 + 0x3db0) = 0;
        *(undefined8 *)(lVar18 + 0x3da8) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3d10);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3d10) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3d10) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3d18);
        if (lVar20 == 0) {
LAB_0131571c:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3d18);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3d18) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3d18) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3d28);
          *(undefined8 *)(lVar18 + 0x3d18) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_0131571c;
          *(undefined8 *)(lVar18 + 0x3d38) = 0;
          *(undefined8 *)(lVar18 + 0x3d30) = 0;
          *(undefined8 *)(lVar18 + 0x3d28) = 0;
          *(undefined8 *)(lVar18 + 0x3d20) = 0;
          (*pcVar11)(lVar18 + 0x3d40);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0x12;
          (*pcVar11)(lVar9,&local_a8);
        }
        *(undefined1 *)(lVar18 + 0x3e70) = 0;
        lVar20 = *(long *)(lVar18 + 0x3de0);
        *(undefined8 *)(lVar18 + 0x3ea0) = 0;
        *(undefined8 *)(lVar18 + 0x3e98) = 0;
        *(undefined8 *)(lVar18 + 0x3e90) = 0;
        *(undefined8 *)(lVar18 + 0x3e88) = 0;
        *(undefined8 *)(lVar18 + 16000) = 0;
        *(undefined8 *)(lVar18 + 0x3e78) = 0;
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined4 *)(lVar20 + 0x38) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        lVar20 = *(long *)(lVar18 + 0x3de0);
        *(undefined8 *)(lVar20 + 0x3c) = 0;
        *(undefined4 *)(lVar20 + 0x44) = 0;
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar18 + 0x3de0) + 0x58) =
             *(byte *)(*(long *)(lVar18 + 0x3de0) + 0x58) & 0xfe;
        lVar20 = *(long *)(lVar18 + 0x3de8);
        if (lVar20 == 0) {
LAB_0131579c:
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        else {
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          lVar20 = *(long *)(lVar18 + 0x3de8);
          *(undefined4 *)(lVar20 + 0x44) = 0;
          *(undefined8 *)(lVar20 + 0x3c) = 0;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar18 + 0x3de8) + 0x58) =
               *(byte *)(*(long *)(lVar18 + 0x3de8) + 0x58) & 0xfe;
          pcVar11 = *(code **)(lVar18 + 0x3df8);
          *(undefined8 *)(lVar18 + 0x3de8) = 0;
          if (pcVar11 == (code *)0x0) goto LAB_0131579c;
          *(undefined8 *)(lVar18 + 0x3e08) = 0;
          *(undefined8 *)(lVar18 + 0x3e00) = 0;
          *(undefined8 *)(lVar18 + 0x3df8) = 0;
          *(undefined8 *)(lVar18 + 0x3df0) = 0;
          (*pcVar11)(lVar18 + 0x3e10);
          pcVar11 = *(code **)(param_1 + 0xb50);
        }
        if (pcVar11 != (code *)0x0) {
          local_a8._0_1_ = 0x13;
          (*pcVar11)(lVar9,&local_a8);
        }
      }
      else {
        iVar3 = *(int *)(lVar9 + 0x84);
        lVar9 = (long)iVar3 * 0x10;
        lVar20 = 0;
        iVar4 = 0;
        lVar27 = -0x1040;
        lVar21 = 0x2ea0;
        lVar24 = 0x2f00;
        do {
          lVar1 = param_1 + lVar20;
          if (*(uint *)(lVar1 + 0x18d0) == 0) {
            if (iVar4 + 0x39U < 100) {
              *(undefined1 *)(lVar18 + lVar24) = 0;
              lVar1 = lVar18 + lVar27;
              lVar17 = *(long *)(lVar1 + 0x3eb0);
              *(undefined8 *)(lVar1 + 0x3f70) = 0;
              *(undefined8 *)(lVar1 + 0x3f68) = 0;
              *(undefined8 *)(lVar1 + 0x3f60) = 0;
              *(undefined8 *)(lVar1 + 0x3f58) = 0;
              *(undefined8 *)(lVar1 + 0x3f50) = 0;
              *(undefined8 *)(lVar1 + 0x3f48) = 0;
              *(undefined8 *)(lVar17 + 0x30) = 0;
              *(undefined4 *)(lVar17 + 0x38) = 0;
              *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
              lVar17 = *(long *)(lVar1 + 0x3eb0);
              *(undefined8 *)(lVar17 + 0x3c) = 0;
              *(undefined4 *)(lVar17 + 0x44) = 0;
              *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
              *(byte *)(*(long *)(lVar1 + 0x3eb0) + 0x58) =
                   *(byte *)(*(long *)(lVar1 + 0x3eb0) + 0x58) & 0xfe;
              lVar17 = *(long *)(lVar1 + 0x3eb8);
              if (lVar17 != 0) {
                *(undefined8 *)(lVar17 + 0x30) = 0;
                *(undefined4 *)(lVar17 + 0x38) = 0;
                *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
                lVar17 = *(long *)(lVar1 + 0x3eb8);
                *(undefined4 *)(lVar17 + 0x44) = 0;
                *(undefined8 *)(lVar17 + 0x3c) = 0;
                *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
                *(byte *)(*(long *)(lVar1 + 0x3eb8) + 0x58) =
                     *(byte *)(*(long *)(lVar1 + 0x3eb8) + 0x58) & 0xfe;
                pcVar11 = *(code **)(lVar1 + 0x3ec8);
                *(undefined8 *)(lVar1 + 0x3eb8) = 0;
                if (pcVar11 != (code *)0x0) {
                  *(undefined8 *)(lVar1 + 0x3ed8) = 0;
                  *(undefined8 *)(lVar1 + 0x3ed0) = 0;
                  *(undefined8 *)(lVar1 + 0x3ec8) = 0;
                  *(undefined8 *)(lVar1 + 0x3ec0) = 0;
                  (*pcVar11)(lVar18 + lVar21);
                }
              }
            }
            if (*(code **)(param_1 + 0xb50) != (code *)0x0) {
              local_a8._0_1_ = (char)iVar4;
              (**(code **)(param_1 + 0xb50))(param_1 + 0xb70,&local_a8);
            }
          }
          else {
            fVar28 = 0.0;
            fVar29 = 0.0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            fStack_94 = 0.0;
            local_90 = 0;
            local_a8._0_1_ = 0x27;
            local_a8._1_1_ = 0;
            local_a8._2_1_ = 0;
            local_a8._3_1_ = 0;
            fStack_a4 = 0.0;
            fStack_a0 = 0.0;
            uStack_9c = 0;
            if (iVar3 < 7) {
              fVar31 = *(float *)(&DAT_03a7ac58 + lVar9);
              fVar29 = *(float *)(&DAT_03a7ac50 + lVar9);
              fVar32 = (float)*(undefined8 *)(lVar1 + 0x18c0);
              local_d0 = CONCAT44(local_d0._4_4_,fVar32);
              fVar30 = *(float *)(&DAT_03a7ac5c + lVar9);
              fVar28 = *(float *)(&DAT_03a7ac54 + lVar9);
              pfVar14 = (float *)(&DAT_03a7ac58 + lVar9);
              if (fVar32 <= fVar31) {
                pfVar14 = (float *)&local_d0;
              }
              pfVar13 = (float *)(&DAT_03a7ac50 + lVar9);
              if (fVar29 <= fVar32) {
                pfVar13 = pfVar14;
              }
              fVar32 = (float)*(undefined8 *)(lVar1 + 0x18c8);
              local_d0 = CONCAT44(local_d0._4_4_,fVar32);
              pfVar14 = (float *)(&DAT_03a7ac5c + lVar9);
              if (fVar32 <= fVar30) {
                pfVar14 = (float *)&local_d0;
              }
              pfVar12 = (float *)(&DAT_03a7ac54 + lVar9);
              if (fVar28 <= fVar32) {
                pfVar12 = pfVar14;
              }
              fVar29 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
              fVar28 = 1027.0 - ((*pfVar12 - fVar28) / (fVar30 - fVar28)) * 2000.0;
            }
            if (*(char *)(param_1 + 0x1e08) == '\0') {
              fVar31 = *(float *)(param_1 + 0x1e30);
              fStack_a0 = *(float *)(param_1 + 0xd64);
              fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
              fStack_a4 = *(float *)(param_1 + 0xd60) +
                          ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) -
                          *(float *)(param_1 + 0xd60)) * fVar31;
            }
            else {
              fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
              fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
              fVar31 = *(float *)(param_1 + 0x1e30);
              fStack_a4 = fStack_a4 + fVar31 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fStack_a4)
              ;
              fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
            }
            fStack_a0 = fStack_a0 + fVar28 * fVar31;
            local_a8._1_1_ = '\0';
            local_a8._2_1_ = 0;
            local_a8._3_1_ = 0;
            local_88 = (ulong)(*(int *)(lVar1 + 0x18b0) != 1);
            local_90 = (ulong)*(uint *)(lVar1 + 0x18d0);
            FUN_013065d0(lVar18,iVar4 + 0x39,&local_a8);
            if (*(code **)(param_1 + 0xad0) != (code *)0x0) {
              local_e8 = CONCAT71(local_e8._1_7_,(char)iVar4);
              local_64 = CONCAT31(local_64._1_3_,*(undefined1 *)(param_1 + 0x1e08));
              local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar1 + 0x18b0));
              (**(code **)(param_1 + 0xad0))
                        (param_1 + 0xaf0,&local_e8,(ulong)&local_a8 | 4,&local_64,
                         param_1 + 0x18d0 + lVar20,&local_d0);
            }
          }
          lVar20 = lVar20 + 0x40;
          iVar4 = iVar4 + 1;
          lVar21 = lVar21 + 0xd0;
          lVar27 = lVar27 + 0xd0;
          lVar24 = lVar24 + 0xd0;
        } while (lVar20 != 0x500);
      }
    }
    else {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      fStack_94 = 0.0;
      local_90 = 0;
      local_a8._0_1_ = 0x27;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      uStack_9c = 0;
      if (*(int *)(lVar9 + 0x84) < 7) {
        lVar9 = (long)*(int *)(lVar9 + 0x84) * 0x10;
        fVar31 = *(float *)(&DAT_03a7ac58 + lVar9);
        fVar29 = *(float *)(&DAT_03a7ac50 + lVar9);
        fVar32 = *(float *)(&DAT_03a7ac5c + lVar9);
        fVar28 = *(float *)(&DAT_03a7ac54 + lVar9);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x1880);
        pfVar14 = (float *)(&DAT_03a7ac58 + lVar9);
        if (fVar30 <= fVar31) {
          pfVar14 = (float *)&local_d0;
        }
        local_d0 = CONCAT44(local_d0._4_4_,fVar30);
        pfVar13 = (float *)(&DAT_03a7ac50 + lVar9);
        if (fVar29 <= fVar30) {
          pfVar13 = pfVar14;
        }
        fVar30 = (float)*(undefined8 *)(param_1 + 0x1888);
        local_d0 = CONCAT44(local_d0._4_4_,fVar30);
        pfVar14 = (float *)(&DAT_03a7ac5c + lVar9);
        if (fVar30 <= fVar32) {
          pfVar14 = (float *)&local_d0;
        }
        pfVar12 = (float *)(&DAT_03a7ac54 + lVar9);
        if (fVar28 <= fVar30) {
          pfVar12 = pfVar14;
        }
        fVar30 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
        fVar31 = 1027.0 - ((*pfVar12 - fVar28) / (fVar32 - fVar28)) * 2000.0;
        fVar28 = fVar30;
        fVar29 = fVar31;
        if (*(char *)(param_1 + 0x1e08) == '\0') goto LAB_01313ed8;
LAB_013170a4:
        fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
        fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
        fVar32 = *(float *)(param_1 + 0x1e30);
        fStack_a4 = fStack_a4 + fVar32 * ((fVar28 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
        fVar28 = (fVar29 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
      }
      else {
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar28 = 0.0;
        fVar30 = 0.0;
        if (*(char *)(param_1 + 0x1e08) != '\0') goto LAB_013170a4;
LAB_01313ed8:
        fVar32 = *(float *)(param_1 + 0x1e30);
        fStack_a0 = *(float *)(param_1 + 0xd64);
        fVar28 = (((fVar31 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
        fStack_a4 = *(float *)(param_1 + 0xd60) +
                    ((((fVar30 + 1000.0) / 2000.0) * 936.0 + -468.0) - *(float *)(param_1 + 0xd60))
                    * fVar32;
      }
      fStack_a0 = fStack_a0 + fVar28 * fVar32;
      local_a8._1_1_ = 0;
      local_a8._2_1_ = 0;
      local_a8._3_1_ = 0;
      local_90 = (ulong)*(uint *)(param_1 + 0x1890);
      local_88 = (ulong)*(byte *)(param_1 + 0x18a8);
      FUN_013065d0(lVar18,0x38,&local_a8);
      if (*(code **)(param_1 + 0x9d0) != (code *)0x0) {
        local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(param_1 + 0x1e08));
        local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0x18a8));
        (**(code **)(param_1 + 0x9d0))
                  (param_1 + 0x9f0,(ulong)&local_a8 | 4,&local_d0,param_1 + 0x1890,&local_e8);
      }
    }
    iVar4 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
    uVar5 = (ulong)iVar4;
    if (iVar4 < 7) {
      if (1 < uVar5 - 5) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        fStack_94 = 0.0;
        local_90 = 0;
        local_a8._0_1_ = 0;
        local_a8._1_1_ = 0;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        uStack_9c = 0;
        uVar7 = FUN_013175d0(param_1,iVar4,*(undefined4 *)(&DAT_03a7aa5c + uVar5 * 0x10),&local_a8);
        if ((uVar7 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x3f40) = 0;
          lVar18 = *(long *)(lVar9 + 0x3eb0);
          *(undefined8 *)(lVar9 + 0x3f70) = 0;
          *(undefined8 *)(lVar9 + 0x3f68) = 0;
          *(undefined8 *)(lVar9 + 0x3f60) = 0;
          *(undefined8 *)(lVar9 + 0x3f58) = 0;
          *(undefined8 *)(lVar9 + 0x3f50) = 0;
          *(undefined8 *)(lVar9 + 0x3f48) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x3eb0);
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x3eb0) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x3eb0) + 0x58) & 0xfe;
          lVar18 = *(long *)(lVar9 + 0x3eb8);
          if (lVar18 != 0) {
            *(undefined8 *)(lVar18 + 0x30) = 0;
            *(undefined4 *)(lVar18 + 0x38) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            lVar18 = *(long *)(lVar9 + 0x3eb8);
            *(undefined4 *)(lVar18 + 0x44) = 0;
            *(undefined8 *)(lVar18 + 0x3c) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            *(byte *)(*(long *)(lVar9 + 0x3eb8) + 0x58) =
                 *(byte *)(*(long *)(lVar9 + 0x3eb8) + 0x58) & 0xfe;
            pcVar11 = *(code **)(lVar9 + 0x3ec8);
            *(undefined8 *)(lVar9 + 0x3eb8) = 0;
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)(lVar9 + 0x3ed8) = 0;
              *(undefined8 *)(lVar9 + 0x3ed0) = 0;
              *(undefined8 *)(lVar9 + 0x3ec8) = 0;
              *(undefined8 *)(lVar9 + 0x3ec0) = 0;
              (*pcVar11)(lVar9 + 0x3ee0);
            }
          }
        }
        else {
          FUN_013065d0(lVar9,0x4d,&local_a8);
        }
        if (uVar5 - 2 < 3) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          fStack_94 = 0.0;
          local_90 = 0;
          local_a8._0_1_ = 0;
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 0;
          local_a8._3_1_ = 0;
          fStack_a4 = 0.0;
          fStack_a0 = 0.0;
          uStack_9c = 0;
          uVar7 = FUN_013175d0(param_1,iVar4,*(undefined4 *)(&DAT_03a7aa60 + uVar5 * 0x10),&local_a8
                              );
          if ((uVar7 & 1) == 0) {
            *(undefined1 *)(lVar9 + 0x4010) = 0;
            lVar18 = *(long *)(lVar9 + 0x3f80);
            *(undefined8 *)(lVar9 + 0x4040) = 0;
            *(undefined8 *)(lVar9 + 0x4038) = 0;
            *(undefined8 *)(lVar9 + 0x4030) = 0;
            *(undefined8 *)(lVar9 + 0x4028) = 0;
            *(undefined8 *)(lVar9 + 0x4020) = 0;
            *(undefined8 *)(lVar9 + 0x4018) = 0;
            *(undefined8 *)(lVar18 + 0x30) = 0;
            *(undefined4 *)(lVar18 + 0x38) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            lVar18 = *(long *)(lVar9 + 0x3f80);
            *(undefined8 *)(lVar18 + 0x3c) = 0;
            *(undefined4 *)(lVar18 + 0x44) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            *(byte *)(*(long *)(lVar9 + 0x3f80) + 0x58) =
                 *(byte *)(*(long *)(lVar9 + 0x3f80) + 0x58) & 0xfe;
            lVar18 = *(long *)(lVar9 + 0x3f88);
            if (lVar18 != 0) {
              *(undefined8 *)(lVar18 + 0x30) = 0;
              *(undefined4 *)(lVar18 + 0x38) = 0;
              *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
              lVar18 = *(long *)(lVar9 + 0x3f88);
              *(undefined4 *)(lVar18 + 0x44) = 0;
              *(undefined8 *)(lVar18 + 0x3c) = 0;
              *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
              *(byte *)(*(long *)(lVar9 + 0x3f88) + 0x58) =
                   *(byte *)(*(long *)(lVar9 + 0x3f88) + 0x58) & 0xfe;
              pcVar11 = *(code **)(lVar9 + 0x3f98);
              *(undefined8 *)(lVar9 + 0x3f88) = 0;
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)(lVar9 + 0x3fa8) = 0;
                *(undefined8 *)(lVar9 + 0x3fa0) = 0;
                *(undefined8 *)(lVar9 + 0x3f98) = 0;
                *(undefined8 *)(lVar9 + 0x3f90) = 0;
                (*pcVar11)(lVar9 + 0x3fb0);
              }
            }
          }
          else {
            FUN_013065d0(lVar9,0x4e,&local_a8);
          }
          lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          fStack_94 = 0.0;
          local_90 = 0;
          local_a8._0_1_ = 0;
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 0;
          local_a8._3_1_ = 0;
          fStack_a4 = 0.0;
          fStack_a0 = 0.0;
          uStack_9c = 0;
          uVar7 = FUN_013175d0(param_1,iVar4,*(undefined4 *)(&DAT_03a7aa64 + uVar5 * 0x10),&local_a8
                              );
          if ((uVar7 & 1) == 0) {
            *(undefined1 *)(lVar9 + 0x40e0) = 0;
            lVar18 = *(long *)(lVar9 + 0x4050);
            *(undefined8 *)(lVar9 + 0x4110) = 0;
            *(undefined8 *)(lVar9 + 0x4108) = 0;
            *(undefined8 *)(lVar9 + 0x4100) = 0;
            *(undefined8 *)(lVar9 + 0x40f8) = 0;
            *(undefined8 *)(lVar9 + 0x40f0) = 0;
            *(undefined8 *)(lVar9 + 0x40e8) = 0;
            *(undefined8 *)(lVar18 + 0x30) = 0;
            *(undefined4 *)(lVar18 + 0x38) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            lVar18 = *(long *)(lVar9 + 0x4050);
            *(undefined8 *)(lVar18 + 0x3c) = 0;
            *(undefined4 *)(lVar18 + 0x44) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            *(byte *)(*(long *)(lVar9 + 0x4050) + 0x58) =
                 *(byte *)(*(long *)(lVar9 + 0x4050) + 0x58) & 0xfe;
            lVar18 = *(long *)(lVar9 + 0x4058);
            if (lVar18 != 0) {
              *(undefined8 *)(lVar18 + 0x30) = 0;
              *(undefined4 *)(lVar18 + 0x38) = 0;
              *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
              lVar18 = *(long *)(lVar9 + 0x4058);
              *(undefined4 *)(lVar18 + 0x44) = 0;
              *(undefined8 *)(lVar18 + 0x3c) = 0;
              *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
              *(byte *)(*(long *)(lVar9 + 0x4058) + 0x58) =
                   *(byte *)(*(long *)(lVar9 + 0x4058) + 0x58) & 0xfe;
              pcVar11 = *(code **)(lVar9 + 0x4068);
              *(undefined8 *)(lVar9 + 0x4058) = 0;
              if (pcVar11 != (code *)0x0) {
                *(undefined8 *)(lVar9 + 0x4078) = 0;
                *(undefined8 *)(lVar9 + 0x4070) = 0;
                *(undefined8 *)(lVar9 + 0x4068) = 0;
                *(undefined8 *)(lVar9 + 0x4060) = 0;
                (*pcVar11)(lVar9 + 0x4080);
              }
            }
          }
          else {
            FUN_013065d0(lVar9,0x4f,&local_a8);
          }
        }
      }
      if ((0x68UL >> (uVar5 & 0x3f) & 1) != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        fStack_94 = 0.0;
        local_90 = 0;
        local_a8._0_1_ = 0;
        local_a8._1_1_ = 0;
        local_a8._2_1_ = 0;
        local_a8._3_1_ = 0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        uStack_9c = 0;
        uVar5 = FUN_013175d0(param_1,iVar4,*(undefined4 *)(&DAT_03a7aa68 + uVar5 * 0x10),&local_a8);
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x41b0) = 0;
          lVar18 = *(long *)(lVar9 + 0x4120);
          *(undefined8 *)(lVar9 + 0x41e0) = 0;
          *(undefined8 *)(lVar9 + 0x41d8) = 0;
          *(undefined8 *)(lVar9 + 0x41d0) = 0;
          *(undefined8 *)(lVar9 + 0x41c8) = 0;
          *(undefined8 *)(lVar9 + 0x41c0) = 0;
          *(undefined8 *)(lVar9 + 0x41b8) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined4 *)(lVar18 + 0x38) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          lVar18 = *(long *)(lVar9 + 0x4120);
          *(undefined8 *)(lVar18 + 0x3c) = 0;
          *(undefined4 *)(lVar18 + 0x44) = 0;
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar9 + 0x4120) + 0x58) =
               *(byte *)(*(long *)(lVar9 + 0x4120) + 0x58) & 0xfe;
          lVar18 = *(long *)(lVar9 + 0x4128);
          if (lVar18 != 0) {
            *(undefined8 *)(lVar18 + 0x30) = 0;
            *(undefined4 *)(lVar18 + 0x38) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            lVar18 = *(long *)(lVar9 + 0x4128);
            *(undefined4 *)(lVar18 + 0x44) = 0;
            *(undefined8 *)(lVar18 + 0x3c) = 0;
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            *(byte *)(*(long *)(lVar9 + 0x4128) + 0x58) =
                 *(byte *)(*(long *)(lVar9 + 0x4128) + 0x58) & 0xfe;
            pcVar11 = *(code **)(lVar9 + 0x4138);
            *(undefined8 *)(lVar9 + 0x4128) = 0;
            if (pcVar11 != (code *)0x0) {
              *(undefined8 *)(lVar9 + 0x4148) = 0;
              *(undefined8 *)(lVar9 + 0x4140) = 0;
              *(undefined8 *)(lVar9 + 0x4138) = 0;
              *(undefined8 *)(lVar9 + 0x4130) = 0;
              (*pcVar11)(lVar9 + 0x4150);
            }
          }
        }
        else {
          FUN_013065d0(lVar9,0x50,&local_a8);
        }
      }
    }
    iVar4 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
    lVar9 = (long)iVar4;
    if ((6 < iVar4) || (lVar9 - 5U < 2)) goto LAB_013145cc;
    lVar18 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x198);
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    fStack_94 = 0.0;
    local_90 = 0;
    local_a8._0_1_ = 0;
    local_a8._1_1_ = 0;
    local_a8._2_1_ = 0;
    local_a8._3_1_ = 0;
    fStack_a4 = 0.0;
    fStack_a0 = 0.0;
    uStack_9c = 0;
    uVar5 = FUN_013175d0(param_1,lVar9,*(undefined4 *)(&DAT_03a7aacc + lVar9 * 4),&local_a8);
    if ((uVar5 & 1) != 0) {
      FUN_013065d0(lVar18,0x51,&local_a8);
      goto LAB_013145cc;
    }
    *(undefined1 *)(lVar18 + 0x4280) = 0;
    lVar9 = *(long *)(lVar18 + 0x41f0);
    *(undefined8 *)(lVar18 + 0x42b0) = 0;
    *(undefined8 *)(lVar18 + 0x42a8) = 0;
    *(undefined8 *)(lVar18 + 0x42a0) = 0;
    *(undefined8 *)(lVar18 + 0x4298) = 0;
    *(undefined8 *)(lVar18 + 0x4290) = 0;
    *(undefined8 *)(lVar18 + 0x4288) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined4 *)(lVar9 + 0x38) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    lVar9 = *(long *)(lVar18 + 0x41f0);
    *(undefined8 *)(lVar9 + 0x3c) = 0;
    *(undefined4 *)(lVar9 + 0x44) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    *(byte *)(*(long *)(lVar18 + 0x41f0) + 0x58) =
         *(byte *)(*(long *)(lVar18 + 0x41f0) + 0x58) & 0xfe;
    lVar9 = *(long *)(lVar18 + 0x41f8);
    if (lVar9 == 0) goto LAB_013145cc;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined4 *)(lVar9 + 0x38) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    lVar9 = *(long *)(lVar18 + 0x41f8);
    *(undefined4 *)(lVar9 + 0x44) = 0;
    *(undefined8 *)(lVar9 + 0x3c) = 0;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    *(byte *)(*(long *)(lVar18 + 0x41f8) + 0x58) =
         *(byte *)(*(long *)(lVar18 + 0x41f8) + 0x58) & 0xfe;
    pcVar11 = *(code **)(lVar18 + 0x4208);
    *(undefined8 *)(lVar18 + 0x41f8) = 0;
    if (pcVar11 == (code *)0x0) goto LAB_013145cc;
    lVar9 = lVar18 + 0x4220;
    *(undefined8 *)(lVar18 + 0x4218) = 0;
    *(undefined8 *)(lVar18 + 0x4210) = 0;
    *(undefined8 *)(lVar18 + 0x4208) = 0;
    *(undefined8 *)(lVar18 + 0x4200) = 0;
  }
  (*pcVar11)(lVar9);
LAB_013145cc:
  iVar4 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
  uVar15 = 2;
  if (*(int *)(param_1 + 0x16b0) != 1) {
    uVar15 = 3;
  }
  if (iVar4 < 7) {
    uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x198);
    uVar25 = *(uint *)(param_1 + 0x16a8);
    uVar5 = (ulong)*(uint *)(param_1 + 0x16b8);
    if (*(uint *)(param_1 + 0x16b8) != 0) {
      uVar8 = *(uint *)(param_1 + 0x16a0);
      lVar9 = (long)iVar4 * 0x10;
      uVar7 = 0;
      do {
        if (uVar8 <= *(uint *)(param_1 + 0x16a4)) {
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 0;
          local_a8._3_1_ = 0;
          fStack_a4 = 0.0;
          fStack_a0 = 0.0;
          uStack_9c = 0;
          local_a8._0_1_ = uVar15;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          fStack_94 = 0.0;
          local_90 = 0;
          if (2 < uVar7) goto LAB_0131716c;
          fVar31 = *(float *)(&DAT_03a7ac58 + lVar9);
          puVar2 = (undefined8 *)(param_1 + 0x16c0 + uVar7 * 0x10);
          fVar29 = *(float *)(&DAT_03a7ac50 + lVar9);
          fVar32 = (float)*puVar2;
          fVar30 = *(float *)(&DAT_03a7ac5c + lVar9);
          fVar28 = *(float *)(&DAT_03a7ac54 + lVar9);
          local_d0 = CONCAT44(local_d0._4_4_,fVar32);
          pfVar14 = (float *)(&DAT_03a7ac58 + lVar9);
          if (fVar32 <= fVar31) {
            pfVar14 = (float *)&local_d0;
          }
          pfVar13 = (float *)(&DAT_03a7ac50 + lVar9);
          if (fVar29 <= fVar32) {
            pfVar13 = pfVar14;
          }
          fVar32 = (float)puVar2[1];
          local_d0 = CONCAT44(local_d0._4_4_,fVar32);
          pfVar14 = (float *)(&DAT_03a7ac5c + lVar9);
          if (fVar32 <= fVar30) {
            pfVar14 = (float *)&local_d0;
          }
          pfVar12 = (float *)(&DAT_03a7ac54 + lVar9);
          if (fVar28 <= fVar32) {
            pfVar12 = pfVar14;
          }
          fVar29 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
          fVar28 = 1027.0 - ((*pfVar12 - fVar28) / (fVar30 - fVar28)) * 2000.0;
          if (*(char *)(param_1 + 0x1e08) == '\0') {
            fVar31 = *(float *)(param_1 + 0x1e30);
            fStack_a0 = *(float *)(param_1 + 0xd64);
            fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
            fStack_a4 = *(float *)(param_1 + 0xd60) +
                        ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) -
                        *(float *)(param_1 + 0xd60)) * fVar31;
          }
          else {
            fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
            fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
            fVar31 = *(float *)(param_1 + 0x1e30);
            fStack_a4 = fStack_a4 + fVar31 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
            fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
          }
          fStack_a0 = fStack_a0 + fVar28 * fVar31;
          fVar28 = fVar28 * fVar31;
          fStack_a4 = (float)FUN_01306a5c(uVar22,(ulong)&local_a8 | 4,0);
          fStack_a0 = fVar28;
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 3;
          local_a8._3_1_ = 0;
          FUN_013065d0(uVar22,uVar8,&local_a8);
          uVar5 = (ulong)*(uint *)(param_1 + 0x16b8);
          uVar8 = uVar8 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    uVar8 = *(uint *)(param_1 + 0x16f0);
    if (uVar8 != 0) {
      lVar9 = (long)iVar4 * 0x10;
      uVar5 = 0;
      do {
        if (uVar25 <= *(uint *)(param_1 + 0x16ac)) {
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          fStack_94 = 0.0;
          local_90 = 0;
          local_a8._0_1_ = 4;
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 0;
          local_a8._3_1_ = 0;
          fStack_a4 = 0.0;
          fStack_a0 = 0.0;
          uStack_9c = 0;
          if (0x13 < uVar5) {
LAB_0131716c:
            uStack_80 = 0;
            local_88 = 0;
            local_90 = 0;
            fStack_94 = 0.0;
            local_98 = 0;
            uStack_9c = 0;
            fStack_a0 = 0.0;
            fStack_a4 = 0.0;
            local_a8._3_1_ = 0;
            local_a8._2_1_ = 0;
            local_a8._1_1_ = 0;
                    /* WARNING: Subroutine does not return */
            FUN_01318f20();
          }
          puVar2 = (undefined8 *)(param_1 + 0x1700 + uVar5 * 0x10);
          fVar31 = *(float *)(&DAT_03a7ac58 + lVar9);
          fVar29 = *(float *)(&DAT_03a7ac50 + lVar9);
          fVar30 = *(float *)(&DAT_03a7ac5c + lVar9);
          fVar32 = (float)*puVar2;
          fVar28 = *(float *)(&DAT_03a7ac54 + lVar9);
          pfVar14 = (float *)(&DAT_03a7ac58 + lVar9);
          if (fVar32 <= fVar31) {
            pfVar14 = (float *)&local_d0;
          }
          local_d0 = CONCAT44(local_d0._4_4_,fVar32);
          pfVar13 = (float *)(&DAT_03a7ac50 + lVar9);
          if (fVar29 <= fVar32) {
            pfVar13 = pfVar14;
          }
          fVar32 = (float)puVar2[1];
          local_d0 = CONCAT44(local_d0._4_4_,fVar32);
          pfVar14 = (float *)(&DAT_03a7ac5c + lVar9);
          if (fVar32 <= fVar30) {
            pfVar14 = (float *)&local_d0;
          }
          pfVar12 = (float *)(&DAT_03a7ac54 + lVar9);
          if (fVar28 <= fVar32) {
            pfVar12 = pfVar14;
          }
          fVar29 = ((*pfVar13 - fVar29) / (fVar31 - fVar29)) * 2000.0 + -1000.0;
          fVar28 = 1027.0 - ((*pfVar12 - fVar28) / (fVar30 - fVar28)) * 2000.0;
          if (*(char *)(param_1 + 0x1e08) == '\0') {
            fVar31 = *(float *)(param_1 + 0x1e30);
            fStack_a0 = *(float *)(param_1 + 0xd64);
            fVar28 = (((fVar28 + -1027.0) / 2000.0) * 936.0 + 495.0) - fStack_a0;
            fStack_a4 = *(float *)(param_1 + 0xd60) +
                        ((((fVar29 + 1000.0) / 2000.0) * 936.0 + -468.0) -
                        *(float *)(param_1 + 0xd60)) * fVar31;
          }
          else {
            fStack_a4 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
            fStack_a0 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
            fVar31 = *(float *)(param_1 + 0x1e30);
            fStack_a4 = fStack_a4 + fVar31 * ((fVar29 + *(float *)(param_1 + 0x1e28)) - fStack_a4);
            fVar28 = (fVar28 + *(float *)(param_1 + 0x1e2c)) - fStack_a0;
          }
          fStack_a0 = fStack_a0 + fVar28 * fVar31;
          fVar28 = fVar28 * fVar31;
          fStack_a4 = (float)FUN_01306a5c(uVar22,(ulong)&local_a8 | 4,0);
          fStack_a0 = fVar28;
          local_a8._1_1_ = 0;
          local_a8._2_1_ = 3;
          local_a8._3_1_ = 0;
          FUN_013065d0(uVar22,uVar25,&local_a8);
          uVar8 = *(uint *)(param_1 + 0x16f0);
          uVar25 = uVar25 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
  }
  return;
}


