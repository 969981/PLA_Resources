/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de1688; name: FUN_02de1688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02de1688(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar22;
  undefined1 auVar20 [16];
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long *local_48;
  undefined1 auStack_38 [8];
  
  fVar28 = param_3._12_4_;
  fVar26 = param_3._8_4_;
  fVar25 = param_3._4_4_;
  fVar23 = param_3._0_4_;
  uVar27 = param_2._8_8_;
  uVar24 = param_2._0_8_;
  if (*(int *)(param_5 + 0x90) == 3) {
    if ((*(long *)(param_5 + 0xc0) != 0) &&
       (puVar14 = *(undefined8 **)(*(long *)(param_5 + 0xc0) + 0x18), puVar14 != (undefined8 *)0x0))
    {
      puVar11 = (undefined8 *)(**(code **)*puVar14)(puVar14);
      puVar7 = PTR_DAT_043794b8;
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar8 = PTR_DAT_043794c8, iVar10 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar9 = PTR_DAT_043794d8, iVar10 != 0))
        {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = puVar9;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar7 = puVar8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (puVar11 != (undefined8 *)0x0) {
        while (puVar11 != (undefined8 *)puVar7) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_02de1960;
        }
        plVar16 = puVar14 + -10;
        auVar19 = param_4;
        if (((*(int *)(param_5 + 0xd0) < 0) ||
            (lVar13 = FUN_00ab4364(puVar14 + 0x14,auStack_38), auVar19 = param_4, lVar13 == 0)) ||
           (plVar15 = *(long **)(*(long *)(lVar13 + 0x208) + 0x88), plVar15 == (long *)0x0)) {
          (**(code **)(*plVar16 + 0x40))(plVar16);
          uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xa0) >> 0x20) + auVar19._4_4_,
                            (float)*(undefined8 *)(param_5 + 0xa0) + auVar19._0_4_);
          uVar21 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xa8) >> 0x20) + auVar19._12_4_
                            ,(float)*(undefined8 *)(param_5 + 0xa8) + auVar19._8_4_);
          goto LAB_02de17f8;
        }
        plVar1 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        auVar18 = (**(code **)(*plVar16 + 0x40))(plVar16);
        auVar19 = param_4;
        lVar13 = FUN_02b6962c(plVar15,*(undefined4 *)(param_5 + 0xd0));
        uVar21 = *(undefined8 *)(lVar13 + 0x38);
        uVar12 = *(undefined8 *)(lVar13 + 0x30);
        fVar29 = (float)CONCAT13((byte)((ulong)uVar12 >> 0x18) &
                                 (byte)((ulong)_DAT_038897c0 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar12 >> 0x10) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar12 >> 8) &
                                                   (byte)((ulong)_DAT_038897c0 >> 8),
                                                   (byte)uVar12 & (byte)_DAT_038897c0)));
        fVar34 = (float)CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                 (byte)((ulong)_UNK_038897c8 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                          (byte)((ulong)_UNK_038897c8 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar21 >> 8) &
                                                   (byte)((ulong)_UNK_038897c8 >> 8),
                                                   (byte)uVar21 & (byte)_UNK_038897c8)));
        fVar32 = (float)uVar27;
        uVar6 = (ulong)uVar27 >> 0x20;
        fVar31 = (float)uVar24;
        uVar5 = (ulong)uVar24 >> 0x20;
        fVar30 = (float)(CONCAT17((byte)((ulong)uVar12 >> 0x38) &
                                  (byte)((ulong)_DAT_038897c0 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar12 >> 0x30) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                             (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                             fVar29)))) >> 0x20);
        uVar27 = *(undefined8 *)(param_5 + 0xa8);
        uVar24 = *(undefined8 *)(param_5 + 0xa0);
        uVar12 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                          param_4._4_4_ +
                          auVar18._4_4_ * fVar29 + (float)uVar5 * fVar30 + fVar25 * fVar34,
                          (float)uVar24 +
                          param_4._0_4_ + auVar18._0_4_ * fVar29 + fVar31 * fVar30 + fVar23 * fVar34
                         );
        uVar21 = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                          param_4._12_4_ +
                          auVar18._12_4_ * fVar29 + (float)uVar6 * fVar30 + fVar28 * fVar34,
                          (float)uVar27 +
                          param_4._8_4_ + auVar18._8_4_ * fVar29 + fVar32 * fVar30 + fVar26 * fVar34
                         );
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 != 0) {
LAB_02de17f8:
          cVar3 = *(char *)(param_5 + 0xe0);
          param_4 = auVar19;
          goto joined_r0x02de1968;
        }
        (**(code **)(*plVar15 + 0x10))(plVar15);
        cVar3 = *(char *)(param_5 + 0xe0);
        param_4 = auVar19;
        goto joined_r0x02de1968;
      }
    }
LAB_02de1960:
    uVar21 = *(undefined8 *)(param_5 + 0xb8);
    uVar12 = *(undefined8 *)(param_5 + 0xb0);
    cVar3 = *(char *)(param_5 + 0xe0);
  }
  else {
    uVar21 = *(undefined8 *)(param_5 + 0xa8);
    uVar12 = *(undefined8 *)(param_5 + 0xa0);
    cVar3 = *(char *)(param_5 + 0xe0);
  }
joined_r0x02de1968:
  if ((cVar3 != '\0') && (-1 < *(int *)(param_5 + 0x108))) {
    FUN_028a5cd4(&local_48,*(undefined8 *)(param_5 + 0x80));
    auVar19 = (**(code **)(*local_48 + 0x40))(local_48);
    if (local_48 != (long *)0x0) {
      lVar13 = local_48[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))(local_48);
      }
    }
    lVar13 = FUN_02b6962c(*(undefined8 *)(param_5 + 0x148),*(undefined4 *)(param_5 + 0x108));
    uVar22 = *(undefined8 *)(lVar13 + 0x38);
    uVar17 = *(undefined8 *)(lVar13 + 0x30);
    fVar29 = (float)CONCAT13((byte)((ulong)uVar17 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11((byte)((ulong)uVar17 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               (byte)uVar17 & (byte)_DAT_038897c0)));
    fVar34 = (float)CONCAT13((byte)((ulong)uVar22 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18),
                             CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x10),
                                      CONCAT11((byte)((ulong)uVar22 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 8),
                                               (byte)uVar22 & (byte)_UNK_038897c8)));
    fVar30 = (float)(CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) &
                                       (byte)((ulong)_DAT_038897c0 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                         (byte)((ulong)_DAT_038897c0 >> 0x20),fVar29
                                                        )))) >> 0x20);
    fVar31 = param_4._0_4_ + auVar19._0_4_ * fVar29 + (float)uVar24 * fVar30 + fVar23 * fVar34;
    fVar32 = param_4._4_4_ +
             auVar19._4_4_ * fVar29 + (float)((ulong)uVar24 >> 0x20) * fVar30 + fVar25 * fVar34;
    fVar33 = param_4._8_4_ + auVar19._8_4_ * fVar29 + (float)uVar27 * fVar30 + fVar26 * fVar34;
    fVar34 = param_4._12_4_ +
             auVar19._12_4_ * fVar29 + (float)((ulong)uVar27 >> 0x20) * fVar30 + fVar28 * fVar34;
    fVar23 = (float)uVar12 - fVar31;
    fVar25 = (float)((ulong)uVar12 >> 0x20) - fVar32;
    fVar26 = (float)uVar21 - fVar33;
    fVar28 = (float)((ulong)uVar21 >> 0x20) - fVar34;
    fVar29 = fVar23 * fVar23;
    fVar30 = fVar25 * fVar25;
    auVar19._4_4_ = fVar30;
    auVar19._0_4_ = fVar29;
    auVar19._8_4_ = fVar26 * fVar26;
    auVar19._12_4_ = fVar28 * fVar28;
    auVar18._4_4_ = fVar30;
    auVar18._0_4_ = fVar29;
    auVar18._8_4_ = fVar26 * fVar26;
    auVar18._12_4_ = fVar28 * fVar28;
    auVar19 = NEON_ext(auVar19,auVar18,8,1);
    fVar30 = SQRT(auVar19._0_4_ + fVar29 + auVar19._4_4_ + fVar30);
    fVar29 = *(float *)(param_5 + 0xe4);
    if (fVar30 < fVar29) {
      if (fVar30 <= 0.0) {
        uVar24 = _DAT_03888d10;
        uVar27 = _UNK_03888d18;
      }
      else {
        fVar30 = 1.0 / fVar30;
        uVar24 = CONCAT44(fVar25 * fVar30,fVar23 * fVar30);
        uVar27 = CONCAT44(fVar28 * fVar30,fVar26 * fVar30);
      }
      uVar12 = CONCAT44(fVar32 + (float)((ulong)uVar24 >> 0x20) * fVar29,
                        fVar31 + (float)uVar24 * fVar29);
      uVar21 = CONCAT44(fVar34 + (float)((ulong)uVar27 >> 0x20) * fVar29,
                        fVar33 + (float)uVar27 * fVar29);
    }
  }
  auVar20._8_8_ = uVar21;
  auVar20._0_8_ = uVar12;
  return auVar20;
}


