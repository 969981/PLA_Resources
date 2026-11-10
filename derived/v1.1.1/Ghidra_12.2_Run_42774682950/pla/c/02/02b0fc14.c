/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b0fc14; name: FUN_02b0fc14
 */


void FUN_02b0fc14(undefined1 *param_1,long param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  float fVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  float local_ac [3];
  
  if (*(long *)(param_2 + 0x58) == 0) {
LAB_02b0fd30:
    *param_1 = 0;
    return;
  }
  plVar8 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
  local_ac[0] = 0.0;
  local_d0 = (long *)&DAT_1e7bc05d43fbcf4;
  pcStack_c8 = "WaterCurrentTime";
  local_c0 = 0x1f;
  local_b8 = (long *)0x0;
  uVar9 = (**(code **)(*plVar8 + 0x38))(plVar8,&local_d0,local_ac);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if ((uVar9 & 1) == 0) goto LAB_02b0fd30;
  lVar10 = *(long *)(*(long *)(param_2 + 0x58) + 0x120);
  plVar8 = *(long **)(DAT_043ef5a0 + 0x60);
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar15) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e0 = 0;
  local_d8 = 0;
  local_f4 = 0.0;
  local_f0 = 0;
  local_e8 = 0;
  lVar14 = *(long *)(lVar10 + 0x98);
  lVar10 = *(long *)(lVar10 + 0xa0);
  if (lVar14 != lVar10) {
    bVar15 = false;
    do {
      FUN_02b3365c(&local_d0,plVar8,lVar14);
      if (local_d0 != (long *)0x0) {
        if (**(long **)(local_d0[0x1a] + 0xb0) == 0x51b8652aab57eb0) {
          lVar11 = *(long *)(local_d0[0x1a] + 0x120);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,(long)&local_d8 + 4,"WaveDirectionX0");
            if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
              plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
              (**(code **)(*plVar12 + 0x10))(plVar12,&local_d8,"WaveDirectionY0");
            }
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,(long)&local_e0 + 4,"WaveLength0");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_e0,"WaveLength1");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,(long)&local_e8 + 4,"WaveSpeed0");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_e8,"WaveSpeed1");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,(long)&local_f0 + 4,"WaveAmplitude0");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_f0,"WaveAmplitude1");
          }
          if (*(long *)(local_d0[0x1a] + 0x120) != 0) {
            plVar12 = (long *)(*(long *)(local_d0[0x1a] + 0x120) + 0x58);
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_f4,"WaveSteepness0");
          }
          if (local_d0 == (long *)0x0) goto LAB_02b0ff34;
          bVar15 = true;
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        plVar12 = local_d0 + 10;
        do {
          iVar43 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar43;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar43 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        if (bVar5) break;
      }
      lVar14 = lVar14 + 0x28;
    } while (lVar14 != lVar10);
    if (bVar15) {
LAB_02b0ff34:
      fVar20 = local_ac[0];
      fVar7 = local_f4;
      fVar48 = *param_3;
      fVar49 = param_3[2];
      fVar32 = local_e8._4_4_;
      fVar17 = local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8;
      fVar18 = local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8;
      uVar33 = NEON_frsqrte(CONCAT44(fVar18,fVar17),4);
      fVar34 = (float)((ulong)uVar33 >> 0x20);
      uVar41 = NEON_frsqrts(uVar33,CONCAT44(fVar18 * fVar34,fVar17 * (float)uVar33),4);
      fVar29 = (float)uVar33 * (float)uVar41;
      fVar34 = fVar34 * (float)((ulong)uVar41 >> 0x20);
      iVar43 = -(uint)(fVar17 == 0.0);
      iVar44 = -(uint)(fVar18 == 0.0);
      uVar33 = NEON_frsqrts(CONCAT44(fVar34,fVar29),CONCAT44(fVar18 * fVar34,fVar17 * fVar29),4);
      uVar9 = CONCAT44((float)local_d8 * fVar34 * (float)((ulong)uVar33 >> 0x20),
                       local_d8._4_4_ * fVar29 * (float)uVar33) &
              CONCAT17(~(byte)((uint)iVar44 >> 0x18),
                       CONCAT16(~(byte)((uint)iVar44 >> 0x10),
                                CONCAT15(~(byte)((uint)iVar44 >> 8),
                                         CONCAT14(~(byte)iVar44,
                                                  CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                                                           CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                                                                    CONCAT11(~(byte)((uint)iVar43 >>
                                                                                    8),~(byte)iVar43
                                                                            )))))));
      fVar18 = SQRT(2.0 / local_e0._4_4_);
      fVar17 = local_f0._4_4_;
      if (NAN(fVar18)) {
        fVar18 = sqrtf(2.0 / local_e0._4_4_);
      }
      fVar29 = local_ac[0];
      puVar6 = PTR_SinCosSampleTable_04372ce8;
      fVar46 = (float)uVar9;
      fVar47 = (float)(uVar9 >> 0x20);
      fVar36 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
      fVar34 = *(float *)PTR_FloatPi_04372cf0;
      uVar9 = (ulong)((fVar36 / fVar34) *
                     (fVar18 * (fVar48 * fVar46 + fVar49 * fVar47) - fVar20 * fVar32 * fVar18));
      pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar9 >> 0x18 & 0xff) * 0x10);
      fVar45 = pfVar1[3];
      fVar20 = fVar17 * (fVar7 / (fVar17 * fVar18 + 1e-06));
      fVar48 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
      fVar37 = pfVar1[1];
      fVar49 = *pfVar1 + pfVar1[2] * fVar48;
      uVar41 = *(undefined8 *)(param_3 + 2);
      uVar33 = *(undefined8 *)param_3;
      fVar7 = (float)local_f0;
      fVar18 = SQRT(2.0 / (float)local_e0);
      fVar32 = (float)local_e8;
      if (NAN(fVar18)) {
        fVar18 = sqrtf(2.0 / (float)local_e0);
      }
      fVar21 = fmodf((float)uVar33,1.0);
      fVar22 = fmodf((float)uVar41,1.0);
      uVar16 = (uint)(float)uVar41;
      iVar44 = (int)(float)uVar33;
      iVar43 = iVar44 % 0x121;
      iVar43 = (int)((iVar43 * 0x22 | 1U) * iVar43) % 0x121;
      uVar2 = uVar16 & 0x121;
      fVar23 = (float)(int)(iVar43 + uVar2);
      fVar23 = fmodf(((fVar23 * 34.0 + 1.0) * (float)((int)fVar23 % 0x121)) / 41.0,1.0);
      uVar16 = uVar16 + 1 & 0x121;
      fVar24 = fVar23 + fVar23 + -1.0;
      fVar30 = ABS(fVar24) + -0.5;
      fVar24 = fVar24 - (float)(int)(fVar24 + 0.5);
      fVar23 = fVar24 * fVar24 + fVar30 * fVar30;
      fVar19 = fVar24 * fVar24 + fVar30 * fVar30;
      uVar33 = NEON_frsqrte(CONCAT44(fVar19,fVar23),4);
      fVar35 = (float)((ulong)uVar33 >> 0x20);
      uVar41 = NEON_frsqrts(uVar33,CONCAT44(fVar19 * fVar35,fVar23 * (float)uVar33),4);
      fVar31 = (float)uVar33 * (float)uVar41;
      fVar35 = fVar35 * (float)((ulong)uVar41 >> 0x20);
      iVar38 = -(uint)(fVar23 == 0.0);
      iVar42 = -(uint)(fVar19 == 0.0);
      uVar33 = NEON_frsqrts(CONCAT44(fVar35,fVar31),CONCAT44(fVar19 * fVar35,fVar23 * fVar31),4);
      uVar25 = CONCAT44(fVar35 * (float)((ulong)uVar33 >> 0x20) * fVar30,
                        fVar31 * (float)uVar33 * fVar24) &
               CONCAT17(~(byte)((uint)iVar42 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar42 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar42 >> 8),
                                          CONCAT14(~(byte)iVar42,
                                                   CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar38
                                                                                     >> 8),
                                                                              ~(byte)iVar38)))))));
      fVar23 = (float)(int)(iVar43 + uVar16);
      fVar23 = fmodf(((fVar23 * 34.0 + 1.0) * (float)((int)fVar23 % 0x121)) / 41.0,1.0);
      fVar24 = fVar23 + fVar23 + -1.0;
      fVar30 = ABS(fVar24) + -0.5;
      fVar24 = fVar24 - (float)(int)(fVar24 + 0.5);
      fVar23 = fVar24 * fVar24 + fVar30 * fVar30;
      fVar19 = fVar24 * fVar24 + fVar30 * fVar30;
      uVar33 = NEON_frsqrte(CONCAT44(fVar19,fVar23),4);
      fVar35 = (float)((ulong)uVar33 >> 0x20);
      uVar41 = NEON_frsqrts(uVar33,CONCAT44(fVar19 * fVar35,fVar23 * (float)uVar33),4);
      fVar31 = (float)uVar33 * (float)uVar41;
      fVar35 = fVar35 * (float)((ulong)uVar41 >> 0x20);
      iVar43 = (iVar44 + 1) % 0x121;
      iVar43 = (int)((iVar43 * 0x22 | 1U) * iVar43) % 0x121;
      iVar44 = -(uint)(fVar23 == 0.0);
      iVar38 = -(uint)(fVar19 == 0.0);
      uVar33 = NEON_frsqrts(CONCAT44(fVar35,fVar31),CONCAT44(fVar19 * fVar35,fVar23 * fVar31),4);
      fVar39 = (float)DAT_0388a778;
      uVar9 = (ulong)DAT_0388a778 >> 0x20;
      uVar26 = CONCAT44(fVar35 * (float)((ulong)uVar33 >> 0x20) * fVar30,
                        fVar31 * (float)uVar33 * fVar24) &
               CONCAT17(~(byte)((uint)iVar38 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar38 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar38 >> 8),
                                          CONCAT14(~(byte)iVar38,
                                                   CONCAT13(~(byte)((uint)iVar44 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar44 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar44
                                                                                     >> 8),
                                                                              ~(byte)iVar44)))))));
      fVar23 = (float)(int)(iVar43 + uVar2);
      fVar23 = fmodf(((fVar23 * 34.0 + 1.0) * (float)((int)fVar23 % 0x121)) / 41.0,1.0);
      fVar24 = fVar23 + fVar23 + -1.0;
      fVar30 = ABS(fVar24) + -0.5;
      fVar24 = fVar24 - (float)(int)(fVar24 + 0.5);
      fVar23 = fVar24 * fVar24 + fVar30 * fVar30;
      fVar19 = fVar24 * fVar24 + fVar30 * fVar30;
      uVar33 = NEON_frsqrte(CONCAT44(fVar19,fVar23),4);
      fVar35 = (float)((ulong)uVar33 >> 0x20);
      uVar41 = NEON_frsqrts(uVar33,CONCAT44(fVar19 * fVar35,fVar23 * (float)uVar33),4);
      fVar31 = (float)uVar33 * (float)uVar41;
      fVar35 = fVar35 * (float)((ulong)uVar41 >> 0x20);
      iVar44 = -(uint)(fVar23 == 0.0);
      iVar38 = -(uint)(fVar19 == 0.0);
      uVar33 = NEON_frsqrts(CONCAT44(fVar35,fVar31),CONCAT44(fVar19 * fVar35,fVar23 * fVar31),4);
      fVar40 = (float)DAT_0388a808;
      uVar13 = (ulong)DAT_0388a808 >> 0x20;
      uVar27 = CONCAT44(fVar35 * (float)((ulong)uVar33 >> 0x20) * fVar30,
                        fVar31 * (float)uVar33 * fVar24) &
               CONCAT17(~(byte)((uint)iVar38 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar38 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar38 >> 8),
                                          CONCAT14(~(byte)iVar38,
                                                   CONCAT13(~(byte)((uint)iVar44 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar44 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar44
                                                                                     >> 8),
                                                                              ~(byte)iVar44)))))));
      fVar23 = (float)(int)(iVar43 + uVar16);
      fVar23 = fmodf(((fVar23 * 34.0 + 1.0) * (float)((int)fVar23 % 0x121)) / 41.0,1.0);
      fVar24 = fVar23 + fVar23 + -1.0;
      fVar30 = ABS(fVar24) + -0.5;
      fVar24 = fVar24 - (float)(int)(fVar24 + 0.5);
      uVar33 = NEON_fmov(0xbf800000,4);
      fVar31 = fVar22 * fVar22 * fVar22 * (fVar22 * (fVar22 * 6.0 + -15.0) + 10.0);
      fVar35 = fVar21 * fVar21 * fVar21 * (fVar21 * (fVar21 * 6.0 + -15.0) + 10.0);
      fVar23 = fVar24 * fVar24 + fVar30 * fVar30;
      fVar19 = fVar24 * fVar24 + fVar30 * fVar30;
      *param_1 = 1;
      uVar41 = NEON_frsqrte(CONCAT44(fVar19,fVar23),4);
      fVar51 = (float)((ulong)uVar41 >> 0x20);
      uVar52 = NEON_frsqrts(uVar41,CONCAT44(fVar19 * fVar51,fVar23 * (float)uVar41),4);
      fVar50 = (float)uVar41 * (float)uVar52;
      fVar51 = fVar51 * (float)((ulong)uVar52 >> 0x20);
      iVar43 = -(uint)(fVar23 == 0.0);
      iVar44 = -(uint)(fVar19 == 0.0);
      uVar41 = NEON_frsqrts(CONCAT44(fVar51,fVar50),CONCAT44(fVar19 * fVar51,fVar23 * fVar50),4);
      uVar28 = CONCAT44(fVar51 * (float)((ulong)uVar41 >> 0x20) * fVar30,
                        fVar50 * (float)uVar41 * fVar24) &
               CONCAT17(~(byte)((uint)iVar44 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar44 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar44 >> 8),
                                          CONCAT14(~(byte)iVar44,
                                                   CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar43
                                                                                     >> 8),
                                                                              ~(byte)iVar43)))))));
      uVar13 = (ulong)((fVar36 / fVar34) *
                      (fVar18 * ((1.0 - fVar35) *
                                 ((1.0 - fVar31) *
                                  (fVar21 * (float)uVar25 + fVar22 * (float)(uVar25 >> 0x20)) +
                                 fVar31 * ((fVar21 + fVar39) * (float)uVar26 +
                                          (fVar22 + (float)uVar9) * (float)(uVar26 >> 0x20))) +
                                 fVar35 * ((1.0 - fVar31) *
                                           ((fVar21 + fVar40) * (float)uVar27 +
                                           (fVar22 + (float)uVar13) * (float)(uVar27 >> 0x20)) +
                                          fVar31 * ((fVar21 + (float)uVar33) * (float)uVar28 +
                                                   (fVar22 + (float)((ulong)uVar33 >> 0x20)) *
                                                   (float)(uVar28 >> 0x20))) + 0.5) -
                      fVar29 * fVar32 * fVar18));
      uVar9 = uVar13 >> 0x18 & 0xff;
      fVar18 = *(float *)(puVar6 + uVar9 * 0x10 + 0xc);
      fVar32 = *(float *)(puVar6 + uVar9 * 0x10 + 4);
      *(ulong *)(param_1 + 0x18) = (ulong)(uint)(fVar47 * fVar20 * fVar49);
      *(ulong *)(param_1 + 0x10) =
           CONCAT44(fVar17 * (fVar37 + fVar45 * fVar48) +
                    fVar7 * (fVar32 + fVar18 * (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08),
                    fVar46 * fVar20 * fVar49);
      goto joined_r0x02b1051c;
    }
  }
  *param_1 = 0;
joined_r0x02b1051c:
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar12 = plVar8 + 10;
  do {
    iVar43 = (int)*plVar12 + -1;
    cVar3 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar15) {
      *(int *)plVar12 = iVar43;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar43 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  return;
}


