/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b49ff0; name: FUN_01b49ff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b49ff0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  double *pdVar24;
  long lVar25;
  float *pfVar26;
  float *pfVar27;
  long *plVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float extraout_s0;
  undefined4 uVar32;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 uStack_88;
  
  puVar20 = PTR_DAT_043794d8;
  puVar19 = PTR_DAT_043794d0;
  puVar18 = PTR_DAT_043794c8;
  puVar17 = PTR_DAT_043794b8;
  puVar16 = PTR_DAT_043794b0;
  lVar23 = *(long *)PTR_DAT_0437b4f0;
  iVar2 = *(int *)(lVar23 + 0x54);
  fVar45 = *(float *)(lVar23 + 0x78);
  pfVar26 = (float *)PTR_FloatPi_04372cf0;
  pfVar27 = (float *)PTR_FloatDegree180_04372ce0;
  if (iVar2 == 0) {
    uVar44 = *(undefined4 *)(lVar23 + 0x7c);
    lVar23 = *(long *)(param_1 + 0x300);
    uStack_b8 = _UNK_0388a138;
    local_c0 = _DAT_0388a130;
    if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
      piVar1 = (int *)(lVar23 + 0xc);
      iVar29 = *(int *)(lVar23 + 0xc);
      do {
        plVar28 = *(long **)(lVar23 + 0x10);
        if (((*puVar16 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar16), iVar21 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar21 != 0)) {
            if (((*puVar19 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar19), iVar21 != 0)) {
              uVar22 = FUN_0087f8f0();
              *(undefined8 *)puVar20 = uVar22;
              __cxa_guard_release(puVar19);
            }
            *(undefined **)puVar18 = puVar20;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar17 = puVar18;
          __cxa_guard_release(puVar16);
        }
        while( true ) {
          if (plVar28 == (long *)0x0) goto LAB_01b4a19c;
          if (plVar28 == (long *)puVar17) break;
          plVar28 = (long *)*plVar28;
        }
        iVar21 = *piVar1;
        if (iVar21 == iVar29) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = *(long *)(lVar23 + 0x18);
            if (lVar23 != 0) {
              uStack_b8 = *(undefined8 *)(lVar23 + 0x78);
              local_c0 = *(undefined8 *)(lVar23 + 0x70);
              lVar25 = *(long *)(lVar23 + 8);
              piVar1 = (int *)(lVar25 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar29 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar25 + 0x18) = 0;
                (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))();
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar29 = iVar21;
      } while (iVar21 != 0);
    }
LAB_01b4a19c:
    pfVar26 = (float *)PTR_FloatPi_04372cf0;
    pfVar27 = (float *)PTR_FloatDegree180_04372ce0;
    FUN_009a7ff4((*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * 180.0,0,
                 0);
    auVar14._8_8_ = uStack_b8;
    auVar14._0_8_ = local_c0;
    auVar13._8_8_ = uStack_b8;
    auVar13._0_8_ = local_c0;
    auVar12._8_8_ = uStack_b8;
    auVar12._0_8_ = local_c0;
    fVar46 = (float)((ulong)local_c0 >> 0x20);
    uVar35 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a580);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_4_ = extraout_var_05;
    auVar5._12_4_ = extraout_var_09;
    uVar39 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6c8);
    uVar38 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a680);
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_4_ = extraout_var_05;
    auVar6._12_4_ = extraout_var_09;
    uVar33 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
    fVar36 = (float)((ulong)uVar38 >> 0x20);
    fVar30 = (float)((ulong)uVar35 >> 0x20);
    fVar40 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar41 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    uVar42 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
    auVar7._4_4_ = extraout_var;
    auVar7._0_4_ = extraout_s0;
    auVar7._8_4_ = extraout_var_05;
    auVar7._12_4_ = extraout_var_09;
    uVar37 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    auVar8._4_4_ = extraout_var;
    auVar8._0_4_ = extraout_s0;
    auVar8._8_4_ = extraout_var_05;
    auVar8._12_4_ = extraout_var_09;
    uVar34 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
    auVar9._4_4_ = extraout_var;
    auVar9._0_4_ = extraout_s0;
    auVar9._8_4_ = extraout_var_05;
    auVar9._12_4_ = extraout_var_09;
    uVar43 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a790);
    fVar31 = (float)((ulong)uVar42 >> 0x20);
    auVar10._4_4_ = extraout_var;
    auVar10._0_4_ = extraout_s0;
    auVar10._8_4_ = extraout_s0;
    auVar10._12_4_ = extraout_var;
    uVar22 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a648);
    local_90 = (double)CONCAT44((extraout_var * fVar30 +
                                 fVar40 * fVar46 * (float)((ulong)uVar33 >> 0x20) +
                                fVar40 * fVar31 * (float)((ulong)uVar37 >> 0x20)) -
                                fVar36 * (float)((ulong)uVar34 >> 0x20),
                                (extraout_s0 * (float)uVar35 +
                                 (float)_DAT_03889ad0 * (float)local_c0 * (float)uVar33 +
                                (float)_DAT_03889ad0 * (float)uVar42 * (float)uVar37) -
                                (float)uVar38 * (float)uVar34);
    uStack_88 = CONCAT44((extraout_var_09 * fVar30 +
                          fVar41 * fVar36 * (float)((ulong)uVar39 >> 0x20) +
                         fVar41 * fVar46 * (float)((ulong)uVar22 >> 0x20)) -
                         fVar31 * (float)((ulong)uVar43 >> 0x20),
                         (extraout_var_05 * (float)uVar35 +
                          (float)_UNK_03889ad8 * (float)uVar38 * (float)uVar39 +
                         (float)_UNK_03889ad8 * (float)local_c0 * (float)uVar22) -
                         (float)uVar42 * (float)uVar43);
    FUN_0098fad4(&local_90);
    fVar30 = (float)FUN_01a4bcc8(param_1);
    if (fVar30 != extraout_var_00) {
      uVar32 = FUN_01a4bcc8(param_1);
      FUN_009a7ff4(uVar32,0,0);
      uStack_98 = CONCAT44(extraout_var_10,extraout_var_06);
      local_a0 = (double)CONCAT44(extraout_var_01,extraout_s0_00);
      FUN_009a7ff4(extraout_var_00,0,0);
      uStack_a8 = CONCAT44(extraout_var_11,extraout_var_07);
      local_b0 = CONCAT44(extraout_var_02,extraout_s0_01);
      FUN_009c6b1c(uVar44,&local_a0,&local_b0);
      uStack_98 = CONCAT44(extraout_var_12,extraout_var_08);
      local_a0 = (double)CONCAT44(extraout_var_03,extraout_s0_02);
      FUN_0098fad4(&local_a0);
      FUN_01a4bcb8(extraout_var_04,param_1);
      bVar15 = 1;
      goto LAB_01b4a04c;
    }
  }
  bVar15 = 0;
LAB_01b4a04c:
  if (*(char *)(param_1 + 0x380) == '\0') {
    fVar36 = 0.0;
    fVar30 = 0.0;
  }
  else {
    fVar30 = *(float *)(param_1 + 0x38c);
    fVar36 = *(float *)(param_1 + 0x390);
  }
  if (!(bool)(fVar30 * fVar30 + 0.0 + fVar36 * fVar36 + 0.0 <= 0.010000001 & (bVar15 ^ 1))) {
    fVar40 = 1.0;
    if (*(char *)(param_1 + 1000) != '\0') {
      fVar40 = -1.0;
    }
    *(float *)(param_1 + 0x420) = fVar45;
    if (iVar2 != 0) {
      fVar41 = 1.0;
      if (*(char *)(param_1 + 0x3e9) != '\0') {
        fVar41 = -1.0;
      }
      fVar31 = (float)FUN_01a4bcc8(param_1);
      FUN_01a4bcb8(fVar31 - fVar45 * fVar30 * fVar41,param_1);
    }
    dVar11 = *(double *)(param_1 + 0x700) - (double)(fVar36 * fVar40 * *(float *)(param_1 + 0x708));
    *(double *)(param_1 + 0x700) = dVar11;
    pdVar24 = &local_a0;
    if (dVar11 <= (double)*(float *)(param_1 + 0xecec)) {
      pdVar24 = (double *)(param_1 + 0x700);
    }
    local_90 = (double)*(float *)(param_1 + 0xecf0);
    local_a0 = (double)*(float *)(param_1 + 0xecec);
    if (dVar11 < (double)*(float *)(param_1 + 0xecf0)) {
      pdVar24 = &local_90;
    }
    *(double *)(param_1 + 0x700) = *pdVar24;
    FUN_01a4bcc8(param_1);
    FUN_01a3a4e4(param_1);
  }
  FUN_01a4bcf4(*(float *)(param_1 + 0xecf4) * (*pfVar26 / *pfVar27),param_1);
  return;
}


