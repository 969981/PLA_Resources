/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c4752c; name: FUN_00c4752c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c4752c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  uint uVar31;
  uint uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  undefined1 auVar32 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  long *local_80 [2];
  
  FUN_00b5f458(local_80,*(undefined8 *)(param_1 + 0xa0));
  FUN_00b8a9f8(local_80[0][0xb],&DAT_03a77b70);
  if (local_80[0] != (long *)0x0) {
    plVar1 = local_80[0] + 10;
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
  }
  FUN_00b5f644(local_80,*(undefined8 *)(param_1 + 0xa0));
  plVar1 = local_80[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_80[0] != (long *)0x0) {
    if (*(int *)((long)local_80[0] + 0xc) != 0) {
      piVar2 = (int *)((long)local_80[0] + 0xc);
      iVar14 = *(int *)((long)local_80[0] + 0xc);
      do {
        plVar15 = (long *)plVar1[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00c476fc;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar14) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = plVar1[3];
            plVar1 = (long *)0x0;
            if (lVar12 != 0) {
              plVar1 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x00c47690;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar9;
      } while (iVar9 != 0);
    }
LAB_00c476fc:
    plVar1 = (long *)0x0;
joined_r0x00c47690:
    if (local_80[0] != (long *)0x0) {
      FUN_02a43934();
    }
    if (plVar1 != (long *)0x0) {
      FUN_0199bf58(local_80,plVar1);
      plVar15 = local_80[0];
      puVar8 = PTR_DAT_04379fd0;
      puVar7 = PTR_DAT_04379fc8;
      puVar6 = PTR_DAT_043794d8;
      puVar5 = PTR_DAT_043794d0;
      if (local_80[0] != (long *)0x0) {
        if (*(int *)((long)local_80[0] + 0xc) != 0) {
          piVar2 = (int *)((long)local_80[0] + 0xc);
          iVar14 = *(int *)((long)local_80[0] + 0xc);
          do {
            plVar16 = (long *)plVar15[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar8 = puVar6;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_00c4784c;
              if (plVar16 == (long *)puVar8) break;
              plVar16 = (long *)*plVar16;
            }
            iVar9 = *piVar2;
            if (iVar9 == iVar14) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar12 = plVar15[3];
                plVar15 = (long *)0x0;
                if (lVar12 != 0) {
                  plVar15 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x00c477b8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = iVar9;
          } while (iVar9 != 0);
        }
LAB_00c4784c:
        plVar15 = (long *)0x0;
joined_r0x00c477b8:
        if (local_80[0] != (long *)0x0) {
          FUN_02a43934();
        }
        if (plVar15 != (long *)0x0) {
          FUN_018f8f5c(local_80,plVar15);
          plVar16 = local_80[0];
          puVar7 = PTR_DAT_04379fe0;
          puVar6 = PTR_DAT_04379fd8;
          puVar5 = PTR_DAT_043794d0;
          if (local_80[0] != (long *)0x0) {
            if (*(int *)((long)local_80[0] + 0xc) != 0) {
              piVar2 = (int *)((long)local_80[0] + 0xc);
              iVar14 = *(int *)((long)local_80[0] + 0xc);
              do {
                plVar13 = (long *)plVar16[2];
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  if (((*PTR_DAT_043795d8 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
                    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                      uVar11 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                      __cxa_guard_release(puVar5);
                    }
                    *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_043795d8);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043795e0;
                  __cxa_guard_release(puVar6);
                }
                while( true ) {
                  if (plVar13 == (long *)0x0) goto LAB_00c47958;
                  if (plVar13 == (long *)puVar7) break;
                  plVar13 = (long *)*plVar13;
                }
                iVar9 = *piVar2;
                if (iVar9 == iVar14) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar14 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar12 = plVar16[3];
                    plVar16 = (long *)0x0;
                    if (lVar12 != 0) {
                      plVar16 = (long *)(lVar12 + -0x50);
                    }
                    goto joined_r0x00c4797c;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar14 = iVar9;
              } while (iVar9 != 0);
            }
LAB_00c47958:
            plVar16 = (long *)0x0;
joined_r0x00c4797c:
            if (local_80[0] != (long *)0x0) {
              FUN_02a43934();
            }
            puVar6 = PTR_DAT_043794b8;
            puVar5 = PTR_DAT_043794b0;
            if (plVar16 != (long *)0x0) {
              lVar12 = plVar16[0x35];
              if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
                piVar2 = (int *)(lVar12 + 0xc);
                iVar14 = *(int *)(lVar12 + 0xc);
                do {
                  plVar13 = *(long **)(lVar12 + 0x10);
                  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                        uVar11 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)puVar6 = PTR_DAT_043794c8;
                    __cxa_guard_release(puVar5);
                  }
                  while( true ) {
                    if (plVar13 == (long *)0x0) goto LAB_00c47d28;
                    if (plVar13 == (long *)puVar6) break;
                    plVar13 = (long *)*plVar13;
                  }
                  iVar9 = *piVar2;
                  if (iVar9 == iVar14) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar14 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') {
                      lVar12 = *(long *)(lVar12 + 0x18);
                      if (lVar12 != 0) {
                        plVar13 = (long *)(lVar12 + -0x50);
                        (**(code **)(*(long *)(lVar12 + -0x50) + 0x40))(plVar13);
                        (**(code **)(*plVar16 + 0x138))(plVar16);
                        FUN_01a4bbac(plVar16);
                        fVar42 = *(float *)(param_1 + 0xcc);
                        fVar17 = (float)FUN_00c481b0();
                        fVar24 = *(float *)PTR_FloatPi_04372cf0;
                        fVar18 = (fVar17 + fVar42 * 0.5) *
                                 (fVar24 / *(float *)PTR_FloatDegree180_04372ce0);
                        fVar17 = *(float *)PTR_Float1Divided2Pi_04372d20;
                        fVar42 = fVar18 * fVar17;
                        fVar30 = *(float *)PTR_Float2Pi_04372d30;
                        auVar20._0_4_ =
                             (int)(fVar17 * 0.0 +
                                  (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
                        auVar20._4_4_ =
                             (int)(fVar42 + (float)(-(uint)(0.0 <= fVar42) & 0x80000000 ^ 0xbf000000
                                                   ));
                        auVar20._8_4_ =
                             (int)(fVar17 * 0.0 +
                                  (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
                        auVar20._12_4_ =
                             (int)(fVar17 * 0.0 +
                                  (float)(-(uint)(0.0 <= fVar17 * 0.0) & 0x80000000 ^ 0xbf000000));
                        auVar20 = NEON_scvtf(auVar20,4);
                        fVar27 = 0.0 - auVar20._0_4_ * fVar30;
                        fVar18 = fVar18 - auVar20._4_4_ * fVar30;
                        fVar29 = 0.0 - auVar20._8_4_ * fVar30;
                        fVar30 = 0.0 - auVar20._12_4_ * fVar30;
                        fVar17 = *(float *)PTR_FloatPiDivided2_04372d38;
                        fVar42 = -fVar17;
                        uVar31 = -(uint)(fVar17 < fVar27);
                        uVar33 = -(uint)(fVar17 < fVar18);
                        uVar34 = -(uint)(fVar17 < fVar29);
                        uVar36 = -(uint)(fVar17 < fVar30);
                        fVar25 = -fVar24;
                        fVar27 = (float)((uint)fVar27 ^
                                        ((uint)fVar27 ^ (uint)(fVar24 - fVar27)) & uVar31);
                        fVar18 = (float)((uint)fVar18 ^
                                        ((uint)fVar18 ^ (uint)(fVar24 - fVar18)) & uVar33);
                        fVar29 = (float)((uint)fVar29 ^
                                        ((uint)fVar29 ^ (uint)(fVar24 - fVar29)) & uVar34);
                        fVar30 = (float)((uint)fVar30 ^
                                        ((uint)fVar30 ^ (uint)(fVar24 - fVar30)) & uVar36);
                        uVar19 = -(uint)(fVar27 < fVar42);
                        uVar21 = -(uint)(fVar18 < fVar42);
                        uVar22 = -(uint)(fVar29 < fVar42);
                        uVar23 = -(uint)(fVar30 < fVar42);
                        fVar17 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
                        auVar28[0] = (byte)uVar19 | (byte)uVar31;
                        auVar28[1] = (byte)(uVar19 >> 8) | (byte)(uVar31 >> 8);
                        auVar28[2] = (byte)(uVar19 >> 0x10) | (byte)(uVar31 >> 0x10);
                        auVar28[3] = (byte)(uVar19 >> 0x18) | (byte)(uVar31 >> 0x18);
                        auVar28[4] = (byte)uVar21 | (byte)uVar33;
                        auVar28[5] = (byte)(uVar21 >> 8) | (byte)(uVar33 >> 8);
                        auVar28[6] = (byte)(uVar21 >> 0x10) | (byte)(uVar33 >> 0x10);
                        auVar28[7] = (byte)(uVar21 >> 0x18) | (byte)(uVar33 >> 0x18);
                        auVar28[8] = (byte)uVar22 | (byte)uVar34;
                        auVar28[9] = (byte)(uVar22 >> 8) | (byte)(uVar34 >> 8);
                        auVar28[10] = (byte)(uVar22 >> 0x10) | (byte)(uVar34 >> 0x10);
                        auVar28[0xb] = (byte)(uVar22 >> 0x18) | (byte)(uVar34 >> 0x18);
                        auVar28[0xc] = (byte)uVar23 | (byte)uVar36;
                        auVar28[0xd] = (byte)(uVar23 >> 8) | (byte)(uVar36 >> 8);
                        auVar28[0xe] = (byte)(uVar23 >> 0x10) | (byte)(uVar36 >> 0x10);
                        auVar28[0xf] = (byte)(uVar23 >> 0x18) | (byte)(uVar36 >> 0x18);
                        fVar27 = (float)((uint)fVar27 ^
                                        ((uint)fVar27 ^ (uint)(fVar25 - fVar27)) & uVar19);
                        fVar18 = (float)((uint)fVar18 ^
                                        ((uint)fVar18 ^ (uint)(fVar25 - fVar18)) & uVar21);
                        fVar29 = (float)((uint)fVar29 ^
                                        ((uint)fVar29 ^ (uint)(fVar25 - fVar29)) & uVar22);
                        fVar30 = (float)((uint)fVar30 ^
                                        ((uint)fVar30 ^ (uint)(fVar25 - fVar30)) & uVar23);
                        auVar20 = NEON_fmov(0x3f800000,4);
                        auVar32 = NEON_fmov(0xbf800000,4);
                        fVar38 = *(float *)PTR_SinCoefficients_04372d28;
                        auVar28 = auVar20 ^ (auVar20 ^ auVar32) & auVar28;
                        fVar24 = fVar27 * fVar27;
                        fVar25 = fVar18 * fVar18;
                        fVar35 = fVar29 * fVar29;
                        fVar37 = fVar30 * fVar30;
                        fVar39 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
                        fVar42 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
                        fVar40 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
                        fVar41 = *(float *)PTR_CosCoefficients_04372d40;
                        auVar32._0_4_ =
                             fVar27 * (auVar20._0_4_ +
                                      fVar24 * (fVar40 + fVar24 * (fVar42 + fVar24 * (fVar39 + 
                                                  fVar24 * (fVar17 - fVar24 * fVar38)))));
                        auVar32._4_4_ =
                             fVar18 * (auVar20._4_4_ +
                                      fVar25 * (fVar40 + fVar25 * (fVar42 + fVar25 * (fVar39 + 
                                                  fVar25 * (fVar17 - fVar25 * fVar38)))));
                        auVar32._8_4_ =
                             fVar29 * (auVar20._8_4_ +
                                      fVar35 * (fVar40 + fVar35 * (fVar42 + fVar35 * (fVar39 + 
                                                  fVar35 * (fVar17 - fVar35 * fVar38)))));
                        auVar32._12_4_ =
                             fVar30 * (auVar20._12_4_ +
                                      fVar37 * (fVar40 + fVar37 * (fVar42 + fVar37 * (fVar39 + 
                                                  fVar37 * (fVar17 - fVar37 * fVar38)))));
                        fVar17 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
                        fVar18 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
                        fVar42 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
                        fVar27 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
                        NEON_ext(auVar32,auVar32,8,1);
                        auVar26._0_4_ =
                             auVar28._0_4_ *
                             (auVar20._0_4_ +
                             fVar24 * (fVar27 + fVar24 * (fVar42 + fVar24 * (fVar18 + fVar24 * (
                                                  fVar17 - fVar24 * fVar41)))));
                        auVar26._4_4_ =
                             auVar28._4_4_ *
                             (auVar20._4_4_ +
                             fVar25 * (fVar27 + fVar25 * (fVar42 + fVar25 * (fVar18 + fVar25 * (
                                                  fVar17 - fVar25 * fVar41)))));
                        auVar26._8_4_ =
                             auVar28._8_4_ *
                             (auVar20._8_4_ +
                             fVar35 * (fVar27 + fVar35 * (fVar42 + fVar35 * (fVar18 + fVar35 * (
                                                  fVar17 - fVar35 * fVar41)))));
                        auVar26._12_4_ =
                             auVar28._12_4_ *
                             (auVar20._12_4_ +
                             fVar37 * (fVar27 + fVar37 * (fVar42 + fVar37 * (fVar18 + fVar37 * (
                                                  fVar17 - fVar37 * fVar41)))));
                        NEON_ext(auVar26,auVar26,8,1);
                        uVar10 = FUN_02a43a5c(*(undefined8 *)(lVar12 + 8));
                        if ((uVar10 & 1) != 0) {
                          (**(code **)(*plVar13 + 0x20))(plVar13);
                        }
                      }
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar14 = iVar9;
                } while (iVar9 != 0);
              }
LAB_00c47d28:
              uVar10 = FUN_02a43a5c(plVar16[0xb]);
              if ((uVar10 & 1) != 0) {
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
            }
          }
          uVar10 = FUN_02a43a5c(plVar15[0xb]);
          if ((uVar10 & 1) != 0) {
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
      }
      uVar10 = FUN_02a43a5c(plVar1[0xb]);
      if ((uVar10 & 1) != 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
    }
  }
  FUN_00c481b0();
  return;
}


