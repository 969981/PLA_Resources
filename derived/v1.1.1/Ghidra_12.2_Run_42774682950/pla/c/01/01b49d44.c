/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b49d44; name: FUN_01b49d44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b49d44(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  float fVar23;
  float extraout_s0;
  float fVar24;
  float extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  FUN_01903f88(param_2 + 0x5b0);
  puVar16 = PTR_DAT_043794d0;
  puVar15 = PTR_DAT_043794c8;
  puVar14 = PTR_DAT_043794b8;
  puVar13 = PTR_DAT_043794b0;
  lVar19 = *(long *)(param_2 + 0x300);
  uStack_88 = _UNK_0388a138;
  local_90 = _DAT_0388a130;
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
    piVar1 = (int *)(lVar19 + 0xc);
    iVar21 = *(int *)(lVar19 + 0xc);
    do {
      plVar22 = *(long **)(lVar19 + 0x10);
      if (((*puVar13 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar13), iVar17 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar17 != 0)) {
          if (((*puVar16 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar16), iVar17 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar18;
            __cxa_guard_release(puVar16);
          }
          *(undefined **)puVar15 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar14 = puVar15;
        __cxa_guard_release(puVar13);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto LAB_01b49d8c;
        if (plVar22 == (long *)puVar14) break;
        plVar22 = (long *)*plVar22;
      }
      iVar17 = *piVar1;
      if (iVar17 == iVar21) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            uStack_88 = *(undefined8 *)(lVar19 + 0x78);
            local_90 = *(undefined8 *)(lVar19 + 0x70);
            lVar20 = *(long *)(lVar19 + 8);
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar21 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar21 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar21 = iVar17;
    } while (iVar17 != 0);
  }
LAB_01b49d8c:
  fVar23 = *(float *)PTR_FloatPi_04372cf0;
  fVar25 = *(float *)PTR_FloatDegree180_04372ce0;
  FUN_009a7ff4((fVar23 / fVar25) * 180.0,0,0);
  auVar12._8_8_ = uStack_88;
  auVar12._0_8_ = local_90;
  auVar11._8_8_ = uStack_88;
  auVar11._0_8_ = local_90;
  auVar10._8_8_ = uStack_88;
  auVar10._0_8_ = local_90;
  fVar38 = (float)((ulong)local_90 >> 0x20);
  uVar28 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_4_ = extraout_var_01;
  auVar4._12_4_ = extraout_var_02;
  uVar32 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a6c8);
  uVar30 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_4_ = extraout_var_01;
  auVar5._12_4_ = extraout_var_02;
  uVar26 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a580);
  fVar31 = (float)((ulong)uVar30 >> 0x20);
  fVar24 = (float)((ulong)uVar28 >> 0x20);
  fVar33 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar34 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar35 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_4_ = extraout_var_01;
  auVar6._12_4_ = extraout_var_02;
  uVar29 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
  auVar7._4_4_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar7._8_4_ = extraout_var_01;
  auVar7._12_4_ = extraout_var_02;
  uVar27 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
  auVar8._4_4_ = extraout_var;
  auVar8._0_4_ = extraout_s0;
  auVar8._8_4_ = extraout_var_01;
  auVar8._12_4_ = extraout_var_02;
  uVar37 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
  fVar36 = (float)((ulong)uVar35 >> 0x20);
  auVar9._4_4_ = extraout_var;
  auVar9._0_4_ = extraout_s0;
  auVar9._8_4_ = extraout_s0;
  auVar9._12_4_ = extraout_var;
  uVar18 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a648);
  local_80 = CONCAT44((extraout_var * fVar24 + fVar33 * fVar38 * (float)((ulong)uVar26 >> 0x20) +
                      fVar33 * fVar36 * (float)((ulong)uVar29 >> 0x20)) -
                      fVar31 * (float)((ulong)uVar27 >> 0x20),
                      (extraout_s0 * (float)uVar28 +
                       (float)_DAT_03889ad0 * (float)local_90 * (float)uVar26 +
                      (float)_DAT_03889ad0 * (float)uVar35 * (float)uVar29) -
                      (float)uVar30 * (float)uVar27);
  uStack_78 = CONCAT44((extraout_var_02 * fVar24 + fVar34 * fVar31 * (float)((ulong)uVar32 >> 0x20)
                       + fVar34 * fVar38 * (float)((ulong)uVar18 >> 0x20)) -
                       fVar36 * (float)((ulong)uVar37 >> 0x20),
                       (extraout_var_01 * (float)uVar28 +
                        (float)_UNK_03889ad8 * (float)uVar30 * (float)uVar32 +
                       (float)_UNK_03889ad8 * (float)local_90 * (float)uVar18) -
                       (float)uVar35 * (float)uVar37);
  FUN_0098fad4(&local_80);
  *(undefined4 *)(param_1 + 0x20) = extraout_var_00;
  fVar24 = *(float *)(param_2 + 0xecf4);
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(float *)(param_1 + 0x2c) = (fVar23 / fVar25) * fVar24;
  return;
}


