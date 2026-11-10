/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302f5b4; name: FUN_0302f5b4
 */


/* WARNING: Removing unreachable block (ram,0x0302fdd4) */
/* WARNING: Removing unreachable block (ram,0x030301ec) */
/* WARNING: Removing unreachable block (ram,0x0302fde8) */
/* WARNING: Removing unreachable block (ram,0x0302fdec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0302f5b4(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4,
                 int param_5)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [14];
  byte bVar7;
  undefined *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  MutexType *pMVar24;
  float fVar25;
  double dVar26;
  float fVar31;
  float fVar32;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  byte bVar38;
  int iVar35;
  double dVar36;
  int iVar39;
  undefined1 auVar37 [16];
  float fVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  float local_2a0;
  float fStack_29c;
  ulong local_280;
  undefined8 local_278;
  ulong local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined2 local_25f;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [224];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  uint local_90 [4];
  
  *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x80;
  puVar8 = PTR_PTR_0434a080;
  local_90[0] = *(uint *)param_2[5];
  uVar12 = *(uint *)param_2[8];
  local_b0 = *(undefined8 *)param_2[6];
  uStack_a8 = *(ulong *)(param_2[6] + 8);
  local_a0 = *(undefined8 *)param_2[7];
  local_1a0 = local_190;
  local_198 = 0x8000000800000000;
  if ((0 < *(int *)(*(long *)(param_1 + 0x498) + 0x28)) &&
     (uVar13 = *(uint *)(param_2[8] + 4), uVar13 != local_90[0])) {
    uVar21 = local_90[0];
    do {
      uVar18 = (ulong)(uVar13 & 0xffffff);
      lVar20 = *(long *)(param_1 + 0x38);
      if ((*(byte *)(lVar20 + uVar18 * 0xc0 + 0x88) & 1) != 0) {
        lVar15 = lVar20 + uVar18 * 0xc0;
        iVar35 = (int)local_198 + 1;
        local_230 = *(uint **)(lVar15 + 0x60);
        uStack_228 = *(undefined8 *)(lVar15 + 0x68);
        local_220 = *(undefined8 *)(lVar15 + 0x70);
        if ((int)(local_198._4_4_ & 0x3fffffff) <= (int)local_198) {
          local_1a0 = (undefined1 *)
                      FUN_0303e454(puVar8,iVar35,local_1a0,local_198 & 0xffffffff,
                                   (long)&local_198 + 4);
        }
        puVar14 = (undefined8 *)(local_1a0 + (long)(int)local_198 * 0x1c);
        *puVar14 = local_230;
        puVar14[1] = uStack_228;
        puVar14[2] = local_220;
        *(uint *)(puVar14 + 3) = uVar13;
        local_198 = CONCAT44(local_198._4_4_,iVar35);
        uVar21 = local_90[0];
      }
      uVar13 = *(uint *)(lVar20 + uVar18 * 0xc0 + 0x84);
    } while (uVar13 != uVar21);
  }
  if (uVar12 == 0) {
    auVar28 = *param_2;
    auVar37 = param_2[1];
    auVar53 = NEON_ext(auVar37,auVar37,8,1);
    auVar43 = param_2[2];
    auVar56 = NEON_ext(auVar43,auVar43,8,1);
    auVar46 = NEON_ext(auVar28,auVar28,8,1);
    local_210 = CONCAT44(auVar53._0_4_,auVar46._0_4_);
    local_230 = (uint *)CONCAT44(auVar37._0_4_,auVar28._0_4_);
    local_220._0_4_ = auVar28._4_4_;
    local_220._4_4_ = auVar37._4_4_;
    uStack_208 = auVar56._0_8_;
    fVar31 = auVar43._4_4_;
    auVar57._4_12_ = auVar56._4_12_;
    auVar57._0_4_ = fVar31;
    uStack_228 = auVar43._0_8_;
    uStack_218 = auVar57._0_8_;
    fVar25 = -*(float *)param_2[3];
    fVar34 = -*(float *)(param_2[3] + 4);
    fVar40 = -*(float *)(param_2[3] + 8);
    auVar28._0_8_ =
         CONCAT44(auVar53._0_4_ * fVar40 + auVar37._0_4_ * fVar25 + local_220._4_4_ * fVar34,
                  auVar46._0_4_ * fVar40 + auVar28._0_4_ * fVar25 + (float)local_220 * fVar34);
    auVar28._8_4_ = auVar56._0_4_ * fVar40 + auVar43._0_4_ * fVar25 + fVar31 * fVar34;
    auVar28._12_4_ = auVar56._4_4_ * fVar40 + fVar31 * fVar25 + auVar56._4_4_ * fVar34;
    uStack_1f8 = auVar28._8_8_;
    local_200 = auVar28._0_8_;
    FUN_032cb060(param_2 + 10,&local_230);
    *(int *)(*param_2 + 0xc) = (int)local_200;
    *(int *)(param_2[1] + 0xc) = (int)((ulong)local_200 >> 0x20);
    *(int *)(param_2[2] + 0xc) = (int)uStack_1f8;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2[7] + 8) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_2[7] + 8),param_2,&local_230);
    uVar12 = local_90[0];
    fVar25 = (float)*(undefined8 *)(param_1 + 0x588) * 0.5;
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x588) >> 0x20) * 0.5;
    local_220._0_4_ = (float)local_220 + fVar25;
    local_220._4_4_ = local_220._4_4_ + fVar34;
    uStack_218._0_4_ = (float)uStack_218 + fVar25;
    auVar43._0_8_ = CONCAT44(local_230._4_4_ - fVar34,(float)local_230 - fVar25);
    auVar43._8_4_ = (float)uStack_228 - fVar25;
    auVar43._12_4_ = uStack_228._4_4_ - fVar34;
    auVar46._8_8_ = _UNK_0388a1f8;
    auVar46._0_8_ = _DAT_0388a1f0;
    auVar28 = a64_TBL(ZEXT816(0),auVar43,auVar46);
    uStack_218 = CONCAT44(uStack_218._4_4_ + fVar34,(float)uStack_218);
    *(undefined8 *)param_2[7] = auVar43._0_8_;
    bVar38 = param_2[8][8];
    *(float *)(param_2[6] + 8) = (float)uStack_218;
    *(int *)(param_2[6] + 0xc) = auVar28._12_4_;
    *(float *)param_2[6] = (float)local_220;
    *(float *)(param_2[6] + 4) = local_220._4_4_;
    auVar37._0_8_ =
         CONCAT44((int)(fVar34 * (float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20)),
                  (int)(fVar25 * (float)*(undefined8 *)(param_1 + 0x578)));
    auVar37._8_8_ = auVar37._0_8_;
    uVar49 = NEON_sqxtun(auVar37._0_8_,auVar37,4);
    *(short *)param_2[9] = (short)uVar49;
    *(short *)(param_2[9] + 2) = (short)uVar49;
    if ((bVar38 & 1) == 0) goto LAB_0302fa20;
    puVar14 = (undefined8 *)(param_1 + 0x138);
    piVar23 = *(int **)(param_1 + 0x138);
    piVar10 = piVar23 + 1;
    do {
      iVar35 = *piVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar35 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (0xff < iVar35) {
      lVar20 = tpidr_el0;
      do {
        lVar15 = *(long *)(lVar20 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar20 + 0x38d490) = lVar15;
        }
        plVar9 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
        piVar10 = (int *)(**(code **)(*plVar9 + 0x10))(plVar9,0x410,0);
        lVar15 = 0;
        do {
          lVar11 = lVar15 + 0x20;
          *(undefined8 *)((long)piVar10 + lVar15 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar15 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar15 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar15 + 0x28) = 0xffffff00ffffff;
          lVar15 = lVar11;
        } while (lVar11 != 0x400);
        if (piVar23 == (int *)0x0) {
          iVar35 = 0;
        }
        else {
          iVar35 = *piVar23 + 1;
        }
        *piVar10 = iVar35;
        piVar10[1] = 0;
        piVar10[2] = 0;
        piVar10[3] = 0;
        do {
          if ((int *)*puVar14 != piVar23) {
            ClearExclusiveLocal();
            lVar15 = *(long *)(lVar20 + 0x38d490);
            if (lVar15 == 0) {
              lVar15 = FUN_0333d16c(0,1);
              *(long *)(lVar20 + 0x38d490) = lVar15;
            }
            plVar9 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
            (**(code **)(*plVar9 + 0x18))(plVar9,piVar10,0x410);
            goto LAB_030302c4;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar5) {
            *puVar14 = piVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (piVar23 != (int *)0x0) {
          *(int **)(piVar23 + 2) = piVar10;
        }
LAB_030302c4:
        piVar23 = (int *)*puVar14;
        piVar10 = piVar23 + 1;
        do {
          iVar35 = *piVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar35 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while (0xff < iVar35);
    }
    piVar23[(long)iVar35 + 4] = uVar12;
    *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x10;
    if (((byte)param_2[8][8] >> 2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))(*(long **)(param_1 + 0x4c0),local_90,1,4);
    }
    lVar20 = *(long *)(param_1 + 0x698);
    if ((param_5 == 0) && (lVar20 != 0)) {
      *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x800;
      lVar20 = *(long *)(param_1 + 0x698);
    }
    if (lVar20 == 0) goto LAB_0302fa20;
    uStack_248 = uStack_a8 >> 0x20;
    local_280 = 0;
    local_278 = 0;
    local_230 = (uint *)&local_220;
    uStack_228 = -0x7fffffe000000000;
    local_270 = CONCAT62(local_270._2_6_,0xffff);
    local_260 = 1;
    local_25f = 0x208;
    local_270 = local_270 & 0xffffffff;
    local_268 = 0;
    local_250 = local_a0;
    uStack_238 = uStack_a8;
    uStack_240 = local_b0;
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
              (*(long **)(param_1 + 0x4c0),&local_280,&local_230);
    if (0 < (int)(float)uStack_228) {
      if (param_5 == 0) {
        lVar20 = 0;
        do {
          lVar15 = *(long *)(param_1 + 0x38);
          uVar18 = (ulong)local_230[lVar20] & 0xffffff;
          if ((*(byte *)(lVar15 + uVar18 * 0xc0 + 0x54) & 9) == 0) {
            if ((((param_2[8][8] & 1) == 0) || ((*(byte *)(lVar15 + uVar18 * 0xc0 + 0x88) & 1) == 0)
                ) || (lVar11 = *(long *)(*(long *)(param_1 + 0x898) + 0x48),
                     *(char *)(lVar11 + (ulong)*(ushort *)(param_2[8] + 10) * 0x50 + 0x18) != '\0'))
            {
              uVar49 = 0;
              plVar9 = *(long **)(param_1 + 0x698);
            }
            else {
              plVar9 = *(long **)(param_1 + 0x698);
              if (*(char *)(lVar11 + (ulong)*(ushort *)(lVar15 + uVar18 * 0xc0 + 0x8a) * 0x50 + 0x18
                           ) == '\0') {
                lVar15 = *plVar9;
                if (*(int *)(plVar9[0x71] +
                             (long)*(int *)(*(long *)(lVar15 + 0x38) + uVar18 * 0xc0 + 0x80) * 0x20
                            + 0x10) == -1) {
                  uVar18 = *(ulong *)(*(long *)(lVar15 + 0x38) + uVar18 * 0xc0 + 0xb0);
                  if ((long)uVar18 < 0) {
                    uVar18 = uVar18 & 0xffffffff;
                  }
                  else {
                    uVar18 = FUN_032c0fa4(lVar15 + 0x948,uVar18,&local_280);
                    if ((uVar18 & 1) == 0) {
                      uVar18 = 0xffffff;
                    }
                    else {
                      uVar18 = local_280 & 0xffffffff;
                    }
                  }
                  FUN_03030748(lVar15,uVar18,0);
                  goto LAB_030300ac;
                }
                uVar49 = 1;
              }
              else {
                uVar49 = 0;
              }
            }
            FUN_03051388(plVar9,(ulong)local_230[lVar20],uVar49);
          }
LAB_030300ac:
          lVar20 = lVar20 + 1;
        } while (lVar20 < (int)(float)uStack_228);
      }
      else {
        if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)*local_230 & 0xffffff) * 0xc0 + 0x54) & 9
            ) == 0) {
          FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)*local_230,0);
        }
        if (1 < (int)(float)uStack_228) {
          iVar35 = (int)(float)uStack_228;
          if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)local_230[1] & 0xffffff) * 0xc0 + 0x54)
              & 9) == 0) {
            FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)local_230[1],0);
            iVar35 = (int)(float)uStack_228;
          }
          if (2 < iVar35) {
            if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)local_230[2] & 0xffffff) * 0xc0 +
                          0x54) & 9) == 0) {
              FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)local_230[2],0);
              iVar35 = (int)(float)uStack_228;
            }
            if (3 < iVar35) {
              if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)local_230[3] & 0xffffff) * 0xc0 +
                            0x54) & 9) == 0) {
                FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)local_230[3],0);
                iVar35 = (int)(float)uStack_228;
              }
              if (4 < iVar35) {
                lVar20 = 4;
                do {
                  if ((*(byte *)(*(long *)(param_1 + 0x38) +
                                 ((ulong)local_230[lVar20] & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                    FUN_03051388(*(undefined8 *)(param_1 + 0x698),(ulong)local_230[lVar20],0);
                    iVar35 = (int)(float)uStack_228;
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 < iVar35);
              }
            }
          }
        }
      }
    }
    lVar20 = uStack_228;
    uVar12 = (uint)uStack_228._4_4_;
    uStack_228 = (ulong)(uint)uStack_228._4_4_ << 0x20;
    if ((lVar20 < 0) || (local_230 == (uint *)0x0)) goto LAB_0302fa20;
    lVar20 = *(long *)PTR_PTR_0434a080;
    puVar8 = PTR_PTR_0434a080;
  }
  else {
    fVar25 = 0.0;
    local_2a0 = 0.0;
    fStack_29c = 0.0;
    pauVar2 = (undefined1 (*) [16])(*(long *)(param_1 + 0x150) + (ulong)uVar12 * 0x80);
    if (param_4 == 0) {
      fVar25 = *(float *)(*param_2 + 0xc);
      fVar34 = *(float *)(param_2[1] + 0xc);
      fVar40 = *(float *)(param_2[2] + 0xc);
      dVar58 = (double)*(float *)param_2[3] + (double)*(float *)param_2[4] +
               (double)(*(float *)param_2[2] * fVar40 +
                       *(float *)*param_2 * fVar25 + *(float *)param_2[1] * fVar34);
      dVar60 = (double)*(float *)(param_2[3] + 8) + (double)*(float *)(param_2[4] + 8) +
               (double)(*(float *)(param_2[2] + 8) * fVar40 +
                       *(float *)(*param_2 + 8) * fVar25 + *(float *)(param_2[1] + 8) * fVar34);
      dVar59 = (double)*(float *)(param_2[3] + 4) + (double)*(float *)(param_2[4] + 4) +
               (double)(*(float *)(param_2[2] + 4) * fVar40 +
                       *(float *)(*param_2 + 4) * fVar25 + *(float *)(param_2[1] + 4) * fVar34);
      dVar26 = dVar58 - *(double *)pauVar2[1];
      dVar41 = dVar60 - *(double *)pauVar2[2];
      dVar36 = dVar59 - *(double *)(pauVar2[1] + 8);
      dVar36 = dVar26 * dVar26 + dVar36 * dVar36 + dVar41 * dVar41;
      dVar26 = SQRT(dVar36);
      if (NAN(dVar26)) {
        dVar26 = sqrt(dVar36);
      }
      fVar25 = (float)dVar26;
      *(double *)pauVar2[2] = dVar60;
      *(double *)pauVar2[1] = dVar58;
      *(double *)(pauVar2[1] + 8) = dVar59;
    }
    if (param_3 != (undefined1 (*) [16])0x0) {
      auVar53._8_8_ = _UNK_038890f8;
      auVar53._0_8_ = _DAT_038890f0;
      auVar42._8_8_ = _UNK_03888e28;
      auVar42._0_8_ = _DAT_03888e20;
      auVar37 = a64_TBL(ZEXT816(0),*param_3,auVar53);
      auVar45._8_8_ = _UNK_03888d78;
      auVar45._0_8_ = _DAT_03888d70;
      auVar51._8_8_ = _UNK_03889108;
      auVar51._0_8_ = _DAT_03889100;
      auVar28 = a64_TBL(ZEXT816(0),*param_3,auVar42);
      auVar46 = a64_TBL(ZEXT816(0),param_2[10],auVar45);
      auVar43 = a64_TBL(ZEXT816(0),param_2[10],auVar51);
      auVar52._0_4_ = auVar28._0_4_ * auVar43._0_4_ - auVar37._0_4_ * auVar46._0_4_;
      auVar52._4_4_ = auVar28._4_4_ * auVar43._4_4_ - auVar37._4_4_ * auVar46._4_4_;
      auVar52._8_4_ = auVar28._8_4_ * auVar43._8_4_ - auVar37._8_4_ * auVar46._8_4_;
      auVar52._12_4_ = auVar28._12_4_ * auVar43._12_4_ - auVar37._12_4_ * auVar46._12_4_;
      auVar55._8_8_ = _UNK_038895d8;
      auVar55._0_8_ = _DAT_038895d0;
      auVar53 = a64_TBL(ZEXT816(0),auVar52,auVar55);
      fVar33 = auVar53._12_4_ - (auVar28._12_4_ * auVar46._12_4_ + auVar37._12_4_ * auVar43._12_4_);
      auVar44._0_4_ =
           -(auVar53._0_4_ - (auVar28._0_4_ * auVar46._0_4_ + auVar37._0_4_ * auVar43._0_4_));
      auVar44._4_4_ =
           -(auVar53._4_4_ - (auVar28._4_4_ * auVar46._4_4_ + auVar37._4_4_ * auVar43._4_4_));
      auVar44._8_4_ =
           -(auVar53._8_4_ - (auVar28._8_4_ * auVar46._8_4_ + auVar37._8_4_ * auVar43._8_4_));
      auVar44._12_4_ = -fVar33;
      auVar37 = NEON_ext(auVar44,auVar44,4,1);
      auVar28 = *pauVar2;
      auVar43 = NEON_ext(auVar28,auVar28,8,1);
      uVar49 = NEON_ext(auVar28._0_8_,auVar43._0_8_,4,1);
      fVar34 = auVar28._0_4_;
      fVar31 = auVar28._4_4_;
      fVar32 = auVar28._8_4_;
      fVar54 = auVar28._12_4_;
      auVar47._0_4_ = fVar34 * auVar37._0_4_ - (float)uVar49 * auVar44._0_4_;
      auVar47._4_4_ = fVar31 * auVar37._4_4_ - (float)((ulong)uVar49 >> 0x20) * auVar44._4_4_;
      auVar47._8_4_ = fVar32 * auVar44._0_4_ - fVar34 * auVar44._8_4_;
      auVar47._12_4_ = fVar54 * auVar44._4_4_ - fVar31 * fVar33;
      auVar28 = NEON_ext(auVar47,auVar47,4,1);
      auVar56._0_4_ = fVar34 * auVar44._0_4_;
      auVar56._4_4_ = fVar31 * auVar44._4_4_;
      auVar56._8_4_ = fVar32 * auVar44._8_4_;
      auVar56._12_4_ = fVar54 * fVar33;
      fVar40 = auVar44._0_4_ * fVar54 + (auVar28._0_4_ - fVar34 * fVar33);
      fVar31 = auVar44._4_4_ * fVar54 + (auVar28._4_4_ - fVar31 * fVar33);
      fVar32 = auVar44._8_4_ * fVar54 + (auVar47._0_4_ - fVar32 * fVar33);
      auVar28 = NEON_ext(auVar56,auVar56,8,1);
      fVar34 = auVar28._0_4_ + auVar28._4_4_;
      fVar40 = fVar40 + fVar40;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      bVar38 = (byte)((uint)(auVar56._0_4_ + auVar56._4_4_ + fVar34) >> 0x18);
      uVar18 = CONCAT17((char)((uint)(auVar56._0_4_ + auVar56._4_4_ + fVar34) >> 0x18),
                        (uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
      auVar48._0_4_ = auVar44._0_4_ * auVar44._0_4_;
      auVar48._4_4_ = auVar44._4_4_ * auVar44._4_4_;
      auVar48._8_4_ = auVar44._8_4_ * auVar44._8_4_;
      auVar48._12_4_ = fVar33 * fVar33;
      fVar40 = (float)CONCAT13((byte)(uVar18 >> 0x18) ^ (byte)((uint)fVar40 >> 0x18),SUB43(fVar40,0)
                              );
      auVar27._0_8_ =
           CONCAT17((byte)(uVar18 >> 0x38) ^ (byte)((uint)fVar31 >> 0x18),
                    CONCAT16((char)((uint)fVar31 >> 0x10),
                             CONCAT15((char)((uint)fVar31 >> 8),CONCAT14(SUB41(fVar31,0),fVar40))));
      auVar27[8] = SUB41(fVar32,0);
      auVar27[9] = (undefined1)((uint)fVar32 >> 8);
      auVar27[10] = (undefined1)((uint)fVar32 >> 0x10);
      auVar27[0xb] = bVar38 & 0x80 ^ (byte)((uint)fVar32 >> 0x18);
      auVar28 = NEON_ext(auVar48,auVar48,8,1);
      fVar31 = (float)((ulong)auVar27._0_8_ >> 0x20);
      fVar31 = fVar31 * fVar31;
      fVar32 = auVar27._8_4_ * auVar27._8_4_;
      fVar34 = auVar28._0_4_ + auVar28._4_4_;
      uVar49 = CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar34,
                        auVar48._0_4_ + auVar48._4_4_ + fVar34);
      uVar50 = NEON_frsqrte(uVar49,4);
      fVar34 = (float)uVar50;
      fVar54 = (float)((ulong)uVar50 >> 0x20);
      uVar50 = NEON_frsqrts(uVar49,CONCAT44(fVar54 * fVar54,fVar34 * fVar34),4);
      fVar34 = fVar34 * (float)uVar50;
      fVar54 = fVar54 * (float)((ulong)uVar50 >> 0x20);
      uVar49 = NEON_frsqrts(uVar49,CONCAT44(fVar54 * fVar54,fVar34 * fVar34),4);
      fVar34 = (float)uVar49 * fVar34;
      fVar54 = (float)((ulong)uVar49 >> 0x20) * fVar54;
      *(float *)(*pauVar2 + 8) = auVar44._8_4_ * fVar34;
      *(float *)(*pauVar2 + 0xc) = fVar33 * fVar54;
      *(float *)*pauVar2 = auVar44._0_4_ * fVar34;
      *(float *)(*pauVar2 + 4) = auVar44._4_4_ * fVar54;
      fVar34 = fVar40 * fVar40 + fVar31 + fVar32;
      fVar32 = fVar40 * fVar40 + fVar31 + fVar32;
      uVar49 = CONCAT44(fVar32,fVar34);
      uVar50 = NEON_frsqrte(uVar49,4);
      fVar40 = (float)uVar50;
      fVar31 = (float)((ulong)uVar50 >> 0x20);
      uVar50 = NEON_frsqrts(uVar49,CONCAT44(fVar31 * fVar31,fVar40 * fVar40),4);
      fVar40 = fVar40 * (float)uVar50;
      fVar31 = fVar31 * (float)((ulong)uVar50 >> 0x20);
      uVar49 = NEON_frsqrts(uVar49,CONCAT44(fVar31 * fVar31,fVar40 * fVar40),4);
      iVar35 = -(uint)(fVar34 <= 0.0);
      iVar39 = -(uint)(fVar32 <= 0.0);
      fVar34 = (float)uVar49 * fVar40 * fVar34;
      fVar32 = (float)((ulong)uVar49 >> 0x20) * fVar31 * fVar32;
      local_2a0 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                  CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                           ~(byte)((uint)iVar35 >> 0x10),
                                           CONCAT11((byte)((uint)fVar34 >> 8) &
                                                    ~(byte)((uint)iVar35 >> 8),
                                                    SUB41(fVar34,0) & ~(byte)iVar35)));
      fStack_29c = (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                    CONCAT16((byte)((uint)fVar32 >> 0x10) &
                                             ~(byte)((uint)iVar39 >> 0x10),
                                             CONCAT15((byte)((uint)fVar32 >> 8) &
                                                      ~(byte)((uint)iVar39 >> 8),
                                                      CONCAT14(SUB41(fVar32,0) & ~(byte)iVar39,
                                                               local_2a0)))) >> 0x20);
    }
    local_230 = (uint *)CONCAT44((float)*(double *)(pauVar2[1] + 8),(float)*(double *)pauVar2[1]);
    uStack_228 = (ulong)(uint)(float)*(double *)pauVar2[2];
    bVar7 = (**(code **)(**(long **)(param_1 + 0x4b0) + 0x20))
                      (*(long **)(param_1 + 0x4b0),&local_230);
    pbVar19 = pauVar2[5] + 0xe;
    bVar38 = *pbVar19;
    if (bVar38 != bVar7) {
      puVar17 = (uint *)(pauVar2[4] + 0xc);
      if ((*puVar17 == 0) || (*puVar17 == 0x7fffffff)) {
        *pbVar19 = bVar7;
      }
      else {
        pMVar24 = *(MutexType **)(param_1 + 0x480);
        nn::os::LockMutex(pMVar24);
        uVar13 = *puVar17;
        piVar10 = (int *)(param_1 + (ulong)bVar38 * 0x18 + 0x188);
        if (uVar13 < (uint)((long)*piVar10 + -1)) {
          lVar20 = param_1 + (ulong)bVar38 * 0x18;
          iVar35 = *(int *)(*(long *)(lVar20 + 0x180) + ((long)*piVar10 + -1) * 4);
          *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar35 * 0x80 + 0x4c) = uVar13;
          *(int *)(*(long *)(lVar20 + 0x180) + (long)(int)uVar13 * 4) = iVar35;
        }
        *pbVar19 = 0xff;
        *puVar17 = 0x7fffffff;
        *piVar10 = *piVar10 + -1;
        nn::os::UnlockMutex(pMVar24);
        *pbVar19 = bVar7;
        FUN_030157ec((long *)(param_1 + 0x140),pauVar2,(ulong)uVar12);
      }
      uVar12 = *(uint *)(pauVar2[4] + 8);
      lVar20 = *(long *)(param_1 + 0x140);
      uVar13 = uVar12;
      do {
        lVar15 = *(long *)(lVar20 + 0x10);
        uVar18 = (ulong)uVar13 & 0xffffff;
        if ((*(byte *)(lVar15 + uVar18 * 0xc0 + 0x54) >> 3 & 1) != 0) {
          *(byte *)(*(long *)(lVar20 + 0xd0) + uVar18) = bVar7;
        }
        lVar15 = lVar15 + uVar18 * 0xc0;
        *(ushort *)(lVar15 + 0x58) = *(ushort *)(lVar15 + 0x58) | 0x20;
        uVar13 = *(uint *)(lVar15 + 0x84);
      } while (uVar13 != uVar12);
    }
    uVar13 = local_90[0];
    auVar29._0_8_ =
         CONCAT44((int)(fVar25 * (float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20)),
                  (int)(fVar25 * (float)*(undefined8 *)(param_1 + 0x578)));
    auVar29._8_8_ = auVar29._0_8_;
    uVar49 = NEON_sqxtun(auVar29._0_8_,auVar29,4);
    uVar12 = (uint)(local_2a0 * 41720.875 + 0.9999);
    if (0xfffe < (int)uVar12) {
      uVar12 = 0xffff;
    }
    uVar21 = local_90[0];
    do {
      lVar20 = *(long *)(param_1 + 0x38) + (ulong)(uVar21 & 0xffffff) * 0xc0;
      auVar28 = FUN_030192b0(param_1 + 0x530,
                             *(long *)(param_1 + 0x8a8) + (ulong)*(byte *)(lVar20 + 0x89) * 0x40 +
                             0x20,param_1 + 0x4e0,lVar20,
                             *(long *)(param_1 + 0x150) + (ulong)*(uint *)(lVar20 + 0x80) * 0x80);
      uVar3 = local_90[0];
      auVar6._2_12_ = auVar28._4_12_;
      auVar6._0_2_ = *(ushort *)(lVar20 + 0x94);
      auVar30._0_8_ =
           CONCAT44((int)((float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20) *
                         fStack_29c * (float)((uint)*(ushort *)(lVar20 + 0x94) << 0x10)),
                    (int)((float)*(undefined8 *)(param_1 + 0x578) *
                         local_2a0 * (float)(auVar6._0_4_ << 0x10)));
      auVar30._8_8_ = auVar30._0_8_;
      uVar50 = NEON_sqxtun(auVar30._0_8_,auVar30,4);
      uVar21 = (uint)*(ushort *)(lVar20 + 0x5c) + (uint)(ushort)uVar49 + (uint)(ushort)uVar50;
      uVar22 = (uint)*(ushort *)(lVar20 + 0x5e) + (uint)(ushort)uVar50;
      if (0xfffe < uVar21) {
        uVar21 = 0xffff;
      }
      if (0xfffe < uVar22) {
        uVar22 = 0xffff;
      }
      *(short *)(lVar20 + 0x5e) = (short)uVar22;
      *(short *)(lVar20 + 0x5c) = (short)uVar21;
      uVar22 = (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU) & 0xffff) +
               (uint)*(ushort *)(lVar20 + 0x5a);
      *(ushort *)(lVar20 + 0x58) = *(ushort *)(lVar20 + 0x58) | 4;
      uVar21 = *(uint *)(lVar20 + 0x84);
      if (0xfffe < uVar22) {
        uVar22 = 0xffff;
      }
      *(short *)(lVar20 + 0x5a) = (short)uVar22;
    } while (uVar21 != uVar13);
    lVar20 = *(long *)(param_1 + 0x698);
    if (lVar20 == 0) goto LAB_0302fa20;
    if (param_5 == 0) {
      FUN_03030748(param_1,local_90[0],0);
      goto LAB_0302fa20;
    }
    if ((*(int *)(pauVar2[4] + 0xc) != 0x7fffffff) && (*(int *)(pauVar2[4] + 0xc) != 0))
    goto LAB_0302fa20;
    lVar15 = tpidr_el0;
    uVar12 = local_90[0];
    do {
      lVar11 = *(long *)(param_1 + 0x38);
      puVar14 = (undefined8 *)(lVar20 + 0x318);
      piVar23 = *(int **)(lVar20 + 0x318);
      piVar10 = piVar23 + 1;
      do {
        iVar35 = *piVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar35 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      while (0xff < iVar35) {
        lVar20 = *(long *)(lVar15 + 0x38d490);
        if (lVar20 == 0) {
          lVar20 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar20;
        }
        plVar9 = *(long **)(*(long *)(lVar20 + 8) + 0x58);
        piVar10 = (int *)(**(code **)(*plVar9 + 0x10))(plVar9,0x410,0);
        lVar20 = 0;
        do {
          lVar1 = lVar20 + 0x20;
          *(undefined8 *)((long)piVar10 + lVar20 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar20 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar20 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar10 + lVar20 + 0x28) = 0xffffff00ffffff;
          lVar20 = lVar1;
        } while (lVar1 != 0x400);
        if (piVar23 == (int *)0x0) {
          iVar35 = 0;
        }
        else {
          iVar35 = *piVar23 + 1;
        }
        *piVar10 = iVar35;
        piVar10[1] = 0;
        piVar10[2] = 0;
        piVar10[3] = 0;
        do {
          if ((int *)*puVar14 != piVar23) {
            ClearExclusiveLocal();
            lVar20 = *(long *)(lVar15 + 0x38d490);
            if (lVar20 == 0) {
              lVar20 = FUN_0333d16c(0,1);
              *(long *)(lVar15 + 0x38d490) = lVar20;
            }
            plVar9 = *(long **)(*(long *)(lVar20 + 8) + 0x58);
            (**(code **)(*plVar9 + 0x18))(plVar9,piVar10,0x410);
            goto LAB_03030190;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
          if (bVar5) {
            *puVar14 = piVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (piVar23 != (int *)0x0) {
          *(int **)(piVar23 + 2) = piVar10;
        }
LAB_03030190:
        piVar23 = (int *)*puVar14;
        piVar10 = piVar23 + 1;
        do {
          iVar35 = *piVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar35 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      piVar23[(long)iVar35 + 4] = uVar12;
      lVar20 = *(long *)(param_1 + 0x698);
      uVar12 = *(uint *)(lVar11 + (ulong)(uVar12 & 0xffffff) * 0xc0 + 0x84);
    } while (uVar12 != uVar3);
    FUN_03051388(lVar20,local_90[0],0);
    uVar12 = local_90[0];
    puVar8 = PTR_PTR_0434a090;
    local_230 = (uint *)&local_220;
    uStack_228 = -0x7ffffff000000000;
    lVar20 = *(long *)(param_1 + 0x38);
    bVar5 = (*(byte *)(lVar20 + ((ulong)local_90[0] & 0xffffff) * 0xc0 + 0x88) >> 2 & 1) != 0;
    if (bVar5) {
      uStack_228 = -0x7fffffefffffffff;
      lVar20 = *(long *)(param_1 + 0x38);
    }
    uVar21 = (uint)bVar5;
    uVar13 = *(uint *)(lVar20 + ((ulong)local_90[0] & 0xffffff) * 0xc0 + 0x84);
    if (uVar13 != local_90[0]) {
      do {
        puVar17 = local_230;
        uVar18 = (ulong)(uVar13 & 0xffffff);
        if ((*(byte *)(lVar20 + uVar18 * 0xc0 + 0x88) >> 2 & 1) != 0) {
          uVar13 = uVar21 + 1;
          if ((int)uVar21 < (int)((uint)uStack_228._4_4_ & 0x3fffffff)) {
          }
          else {
            if (0x3ffffffe < (int)uVar21) {
              FUN_032bd0a8(uVar13);
            }
            uVar22 = ((uint)uStack_228._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar22) {
              uVar22 = 0x3fffffff;
            }
            uVar3 = uVar13;
            if ((int)uVar13 <= (int)uVar22) {
              uVar3 = uVar22;
            }
            local_230 = (uint *)FUN_032bd1d4(puVar8,uVar3,4,puVar17,uVar21,(long)&uStack_228 + 4);
            uVar21 = (uint)(float)uStack_228;
          }
          local_230[(int)uVar21] = *(uint *)(lVar20 + uVar18 * 0xc0 + 0x50);
          uStack_228 = CONCAT44(uStack_228._4_4_,uVar13);
          lVar20 = *(long *)(param_1 + 0x38);
          uVar21 = uVar13;
        }
        uVar13 = *(uint *)(lVar20 + uVar18 * 0xc0 + 0x84);
      } while (uVar13 != uVar12);
    }
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
              (*(long **)(param_1 + 0x4c0),local_230,uVar21,4);
    lVar20 = uStack_228;
    uVar12 = (uint)uStack_228._4_4_;
    uStack_228 = (ulong)(uint)uStack_228._4_4_ << 0x20;
    if ((lVar20 < 0) || (local_230 == (uint *)0x0)) goto LAB_0302fa20;
    lVar20 = *(long *)puVar8;
  }
  (**(code **)(lVar20 + 0x18))(puVar8,local_230,uVar12 << 2);
LAB_0302fa20:
  if (0 < *(int *)(*(long *)(param_1 + 0x498) + 0x28)) {
    FUN_03103fe8(*(undefined8 *)(param_1 + 0x498),param_2,&local_b0,param_2 + 6);
    if (0 < (int)local_198) {
      lVar15 = 0;
      lVar20 = 0;
      do {
        puVar14 = (undefined8 *)(local_1a0 + lVar15);
        local_230 = (uint *)*puVar14;
        uStack_228 = puVar14[1];
        local_220 = puVar14[2];
        lVar11 = *(long *)(param_1 + 0x38) + ((ulong)*(uint *)(puVar14 + 3) & 0xffffff) * 0xc0;
        local_280 = *(ulong *)(lVar11 + 0x60);
        local_278 = *(undefined8 *)(lVar11 + 0x68);
        local_270 = *(ulong *)(lVar11 + 0x70);
        FUN_03103fe8(*(undefined8 *)(param_1 + 0x498),lVar11,&local_230,&local_280);
        lVar20 = lVar20 + 1;
        lVar15 = lVar15 + 0x1c;
      } while (lVar20 < (int)local_198);
    }
  }
  uVar18 = local_198;
  uVar12 = local_90[0];
  do {
    uVar16 = (ulong)(uVar12 & 0xffffff);
    lVar20 = *(long *)(param_1 + 0x38);
    if ((*(byte *)(lVar20 + uVar16 * 0xc0 + 0x88) & 1) != 0) {
      lVar15 = lVar20 + uVar16 * 0xc0;
      *(undefined2 *)(lVar15 + 0x5e) = 0xffff;
      *(undefined4 *)(lVar15 + 0x5a) = 0xffffffff;
    }
    uVar12 = *(uint *)(lVar20 + uVar16 * 0xc0 + 0x84);
  } while (uVar12 != local_90[0]);
  uVar16 = (ulong)local_198._4_4_;
  local_198 = (ulong)local_198._4_4_ << 0x20;
  if ((-1 < (long)uVar18) && (local_1a0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_1a0,(uVar16 & 0x3fffffff) * 0x1c);
  }
  return;
}


