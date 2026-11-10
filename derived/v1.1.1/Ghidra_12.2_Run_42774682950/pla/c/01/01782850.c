/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01782850; name: FUN_01782850
 */


void FUN_01782850(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_q3 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_78;
  long *local_70;
  long *local_68;
  
  FUN_00be5694(&local_68,param_1 + 0x70);
  FUN_00be5694(&local_70,param_1 + 0xa0);
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_00ac64cc(&local_90);
  }
  plVar13 = local_90;
  FUN_01786b8c(&local_78,param_1 + 0xc0);
  if ((((local_68 != (long *)0x0) && (plVar13 != (long *)0x0)) && (local_70 != (long *)0x0)) &&
     (local_78 != (long *)0x0)) {
    FUN_0181b198(plVar13);
    FUN_009c69bc(&local_90,local_68);
    (**(code **)(*local_90 + 0x40))();
    auVar31 = in_q3;
    if (local_90 != (long *)0x0) {
      lVar16 = local_90[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    FUN_009c69bc(&local_90,local_70);
    (**(code **)(*local_90 + 0x40))();
    if (local_90 != (long *)0x0) {
      lVar16 = local_90[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    fVar22 = in_q3._0_4_ - auVar31._0_4_;
    fVar23 = in_q3._8_4_ - auVar31._8_4_;
    fVar24 = in_q3._12_4_ - auVar31._12_4_;
    fVar21 = fVar22 * fVar22;
    fVar6 = fVar23 * fVar23;
    uVar25 = (undefined1)((uint)fVar6 >> 8);
    uVar26 = (undefined1)((uint)fVar6 >> 0x10);
    uVar27 = (undefined1)((uint)fVar6 >> 0x18);
    fVar20 = fVar24 * fVar24;
    uVar28 = (undefined1)((uint)fVar20 >> 8);
    uVar29 = (undefined1)((uint)fVar20 >> 0x10);
    uVar30 = (undefined1)((uint)fVar20 >> 0x18);
    auVar31._4_4_ = 0;
    auVar31._0_4_ = fVar21;
    auVar31[8] = SUB41(fVar6,0);
    auVar31[9] = uVar25;
    auVar31[10] = uVar26;
    auVar31[0xb] = uVar27;
    auVar31[0xc] = SUB41(fVar20,0);
    auVar31[0xd] = uVar28;
    auVar31[0xe] = uVar29;
    auVar31[0xf] = uVar30;
    auVar34._4_4_ = 0;
    auVar34._0_4_ = fVar21;
    auVar34[8] = SUB41(fVar6,0);
    auVar34[9] = uVar25;
    auVar34[10] = uVar26;
    auVar34[0xb] = uVar27;
    auVar34[0xc] = SUB41(fVar20,0);
    auVar34[0xd] = uVar28;
    auVar34[0xe] = uVar29;
    auVar34[0xf] = uVar30;
    auVar31 = NEON_ext(auVar31,auVar34,8,1);
    fVar21 = auVar31._0_4_ + fVar21;
    fVar6 = auVar31._4_4_ + 0.0;
    fVar20 = fVar21 + fVar6;
    fVar21 = fVar21 + fVar6;
    uVar25 = SUB41(fVar21,0);
    uVar26 = (undefined1)((uint)fVar21 >> 8);
    uVar27 = (undefined1)((uint)fVar21 >> 0x10);
    uVar28 = (undefined1)((uint)fVar21 >> 0x18);
    auVar4[4] = uVar25;
    auVar4._0_4_ = fVar20;
    auVar4[5] = uVar26;
    auVar4[6] = uVar27;
    auVar4[7] = uVar28;
    auVar4[8] = SUB41(fVar20,0);
    auVar4[9] = (char)((uint)fVar20 >> 8);
    auVar4[10] = (char)((uint)fVar20 >> 0x10);
    auVar4[0xb] = (char)((uint)fVar20 >> 0x18);
    auVar4[0xc] = uVar25;
    auVar4[0xd] = uVar26;
    auVar4[0xe] = uVar27;
    auVar4[0xf] = uVar28;
    auVar31 = NEON_frsqrte(auVar4,4);
    auVar33._0_4_ = auVar31._0_4_ * fVar20;
    auVar33._4_4_ = auVar31._4_4_ * fVar21;
    auVar33._8_4_ = auVar31._8_4_ * fVar20;
    uVar5 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar20)) >> 0x20);
    auVar33._12_4_ = auVar31._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar5));
    auVar34 = NEON_frsqrts(auVar31,auVar33,4);
    auVar32._0_4_ = auVar31._0_4_ * auVar34._0_4_;
    auVar32._4_4_ = auVar31._4_4_ * auVar34._4_4_;
    auVar32._8_4_ = auVar31._8_4_ * auVar34._8_4_;
    auVar32._12_4_ = auVar31._12_4_ * auVar34._12_4_;
    auVar35._0_4_ = fVar20 * auVar32._0_4_;
    auVar35._4_4_ = fVar21 * auVar32._4_4_;
    auVar35._8_4_ = fVar20 * auVar32._8_4_;
    auVar35._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar5)) * auVar32._12_4_;
    iVar18 = -(uint)(fVar20 == 0.0);
    iVar14 = -(uint)(fVar21 == 0.0);
    iVar7 = -(uint)(fVar20 == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar5)) == 0.0);
    auVar31 = NEON_frsqrts(auVar32,auVar35,4);
    fVar22 = fVar22 * auVar32._0_4_ * auVar31._0_4_;
    fVar21 = auVar32._4_4_ * auVar31._4_4_ * 0.0;
    fVar23 = fVar23 * auVar32._8_4_ * auVar31._8_4_;
    fVar24 = fVar24 * auVar32._12_4_ * auVar31._12_4_;
    local_90 = (long *)CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                         ~(byte)((uint)iVar14 >> 0x10),
                                         CONCAT15((byte)((uint)fVar21 >> 8) &
                                                  ~(byte)((uint)iVar14 >> 8),
                                                  CONCAT14(SUB41(fVar21,0) & ~(byte)iVar14,
                                                           CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                                    ~(byte)((uint)iVar18 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar22 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar18 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar22 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                                  SUB41(fVar22,0) & ~(byte)iVar18)))))));
    uStack_88 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                         CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                  CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                           CONCAT14(SUB41(fVar24,0) & ~(byte)iVar8,
                                                    CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                                             ~(byte)((uint)iVar7 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                                      ~(byte)((uint)iVar7 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar23
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar7
                                                                                      >> 8),
                                                                               SUB41(fVar23,0) &
                                                                               ~(byte)iVar7)))))));
    (**(code **)(*local_70 + 0x150))(local_70,&local_90);
    puVar12 = PTR_DAT_043796e8;
    puVar11 = PTR_DAT_043796e0;
    puVar10 = PTR_DAT_043794d8;
    puVar9 = PTR_DAT_043794d0;
    lVar16 = *(long *)(param_1 + 0x60);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
      piVar1 = (int *)(lVar16 + 0xc);
      iVar18 = *(int *)(lVar16 + 0xc);
      do {
        plVar19 = *(long **)(lVar16 + 0x10);
        if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
          if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar10 = uVar15;
            __cxa_guard_release(puVar9);
          }
          *(undefined **)puVar12 = puVar10;
          __cxa_guard_release(puVar11);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_017829c0;
          if (plVar19 == (long *)puVar12) break;
          plVar19 = (long *)*plVar19;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar18) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar16 = *(long *)(lVar16 + 0x18);
            plVar19 = (long *)(lVar16 + -0x50);
            if (lVar16 != 0) {
              FUN_0199c138(&local_98,plVar19);
              if ((local_98 != (long *)0x0) &&
                 ((**(code **)(*local_78 + 0x140))(local_78,0), local_98 != (long *)0x0)) {
                lVar17 = local_98[0xb];
                piVar1 = (int *)(lVar17 + 0xc);
                do {
                  iVar18 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar18 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar18 + -1 == 0) {
                  *(undefined8 *)(lVar17 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))();
                }
              }
              lVar16 = *(long *)(lVar16 + 8);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar18 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar18 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar18 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar19 + 0x20))(plVar19);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar18 = iVar14;
      } while (iVar14 != 0);
    }
LAB_017829c0:
    *(undefined1 *)(param_1 + 0x171) = 1;
  }
  if (local_78 != (long *)0x0) {
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar16 = local_70[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    lVar16 = local_68[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


