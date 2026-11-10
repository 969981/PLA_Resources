/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f89a74; name: FUN_01f89a74
 */


void FUN_01f89a74(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  uint *puVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 in_q3 [16];
  float fVar35;
  float fVar36;
  long *local_b8;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_68;
  
  fVar35 = in_q3._12_4_;
  fVar34 = in_q3._8_4_;
  fVar33 = in_q3._4_4_;
  fVar32 = in_q3._0_4_;
  *param_1 = 0;
  param_1[1] = 0;
  puVar24 = (uint *)PTR_DAT_0437a0f0;
  puVar11 = PTR_DAT_0437a0e8;
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  plVar21 = *(long **)(param_2 + 0x78);
  if (plVar21 == (long *)0x0) {
    return;
  }
  if (*(uint *)((long)plVar21 + 0xc) == 0) {
    return;
  }
  puVar15 = (uint *)((long)plVar21 + 0xc);
  uVar2 = *(uint *)((long)plVar21 + 0xc);
  do {
    plVar22 = (long *)(ulong)uVar2;
    plVar25 = (long *)plVar21[2];
    if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)puVar10 = uVar14;
        __cxa_guard_release(puVar9);
      }
      *(undefined **)puVar24 = puVar10;
      __cxa_guard_release(puVar11);
    }
    while( true ) {
      if (plVar25 == (long *)0x0) {
        return;
      }
      if ((uint *)plVar25 == puVar24) break;
      plVar25 = (long *)*plVar25;
    }
    uVar3 = *puVar15;
    if (uVar3 == uVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar15,0x10);
      if (bVar5) {
        *puVar15 = uVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar26 = plVar21[3];
        if (lVar26 == 0) {
          return;
        }
        plVar25 = (long *)(lVar26 + -0x50);
        FUN_01847290(&local_88,plVar25);
        if (local_88 == (long *)0x0) goto LAB_01f8a2b8;
        uVar16 = local_88[0x28];
        if (uVar16 == 0) goto LAB_01f8a444;
        uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = (ulong)((uint)uVar16 - 1) & 0x28;
        }
        else {
          uVar19 = 0x28;
          if (uVar16 < 0x29) {
            uVar2 = (uint)uVar16 & 0xff;
            uVar3 = 0;
            if ((uVar16 & 0xff) != 0) {
              uVar3 = 0x28 / uVar2;
            }
            uVar19 = (ulong)(0x28 - uVar3 * uVar2);
          }
        }
        plVar20 = *(long **)(local_88[0x27] + uVar19 * 8);
        if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
        goto LAB_01f8a444;
        if (1 < uVar18) break;
        goto LAB_01f8a368;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar2 = uVar3;
    if (uVar3 == 0) {
      return;
    }
  } while( true );
  do {
    uVar18 = plVar20[1];
    if (uVar18 == 0x28) {
      if ((int)plVar20[2] == 0x28) goto LAB_01f89bf0;
    }
    else {
      if (uVar16 <= uVar18) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar18 / uVar16;
        }
        uVar18 = uVar18 - uVar6 * uVar16;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01f8a444;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01f8a368:
    if (plVar20[1] == 0x28) {
      if ((int)plVar20[2] == 0x28) goto LAB_01f89bf0;
    }
    else if ((plVar20[1] & uVar16 - 1) != uVar19) break;
  }
LAB_01f8a444:
  FUN_01f8abc0();
LAB_01f8a448:
  iVar13 = __cxa_guard_acquire(PTR_DAT_0437eef8);
  if (iVar13 != 0) {
    if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
      uVar14 = FUN_0087f8f0();
      *(undefined8 *)puVar10 = uVar14;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)PTR_DAT_0437ef00 = puVar10;
    __cxa_guard_release(PTR_DAT_0437eef8);
  }
LAB_01f8a3a4:
  *(undefined **)puVar24 = PTR_DAT_0437ef00;
  __cxa_guard_release(PTR_DAT_043807b0);
  if (puVar15 != puVar24) {
LAB_01f8a3c4:
    do {
      puVar15 = *(uint **)puVar15;
    } while (puVar15 != puVar24);
  }
LAB_01f89c68:
  plVar22 = (long *)plVar22[9];
  if (plVar22 == (long *)0x0) {
LAB_01f8a274:
    if (plVar21 != (long *)0x0) {
      lVar23 = plVar21[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    if (local_88 != (long *)0x0) {
      lVar23 = local_88[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
LAB_01f8a2b8:
    lVar26 = *(long *)(lVar26 + 8);
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
    return;
  }
  fVar36 = 0.0;
  plVar20 = (long *)plVar22[3];
  do {
    if (plVar20 != (long *)0x0) {
      lVar23 = plVar20[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01f8a3f8;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar23 = plVar20[0xb];
      if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01f8a3f8;
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
        *(undefined8 *)(lVar23 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar16 = FUN_01f86594(plVar20);
    if (((uVar16 & 1) != 0) &&
       (FUN_01f865a4(local_80,plVar20), puVar8 = local_80[0], local_80[0] != (undefined8 *)0x0)) {
      if (*(int *)((long)local_80[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_80[0] + 0xc);
        iVar13 = *(int *)((long)local_80[0] + 0xc);
        do {
          plVar17 = (long *)puVar8[2];
          if (((*PTR_DAT_043795c8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043795c8), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar10 = uVar14;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)PTR_DAT_043795e0 = puVar10;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_043795d0 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_043795c8);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01f89edc;
            if (plVar17 == (long *)PTR_DAT_043795d0) break;
            plVar17 = (long *)*plVar17;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar23 = puVar8[3];
              local_b8 = (long *)0x0;
              puVar8 = local_80[0];
              if (lVar23 != 0) {
                local_b8 = (long *)(lVar23 + -0x50);
              }
              goto joined_r0x01f89e40;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar12;
        } while (iVar12 != 0);
      }
LAB_01f89edc:
      local_b8 = (long *)0x0;
      puVar8 = local_80[0];
joined_r0x01f89e40:
      local_80[0] = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_68 = *puVar8;
          FUN_02a44274(lVar23 + 0xd8,&local_68);
        }
      }
      if (local_b8 != (long *)0x0) {
        lVar23 = local_b8[0x35];
        piVar1 = (int *)(lVar23 + 0xc);
        iVar13 = *(int *)(lVar23 + 0xc);
        do {
          while( true ) {
            plVar17 = *(long **)(lVar23 + 0x10);
            if (((*PTR_DAT_043794b0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar12 != 0)) {
              if (((*PTR_DAT_043794c0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
                if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)puVar10 = uVar14;
                  __cxa_guard_release(puVar9);
                }
                *(undefined **)PTR_DAT_043794c8 = puVar10;
                __cxa_guard_release(PTR_DAT_043794c0);
              }
              *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
              __cxa_guard_release(PTR_DAT_043794b0);
            }
            for (; plVar17 != (long *)PTR_DAT_043794b8; plVar17 = (long *)*plVar17) {
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar13) break;
            ClearExclusiveLocal();
            iVar13 = iVar12;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          iVar13 = iVar12;
        } while (cVar4 != '\0');
        lVar23 = *(long *)(lVar23 + 0x18);
        plVar17 = (long *)0x0;
        if (lVar23 != 0) {
          plVar17 = (long *)(lVar23 + -0x50);
        }
        (**(code **)(*plVar17 + 0x40))();
        fVar27 = (float)*param_3 - fVar32;
        fVar28 = (float)((ulong)*param_3 >> 0x20) - fVar33;
        fVar29 = (float)param_3[1] - fVar34;
        fVar30 = (float)((ulong)param_3[1] >> 0x20) - fVar35;
        fVar27 = fVar27 * fVar27;
        fVar28 = fVar28 * fVar28;
        fVar29 = fVar29 * fVar29;
        fVar30 = fVar30 * fVar30;
        auVar31._4_4_ = fVar28;
        auVar31._0_4_ = fVar27;
        auVar31._8_4_ = fVar29;
        auVar31._12_4_ = fVar30;
        auVar7._4_4_ = fVar28;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar29;
        auVar7._12_4_ = fVar30;
        auVar31 = NEON_ext(auVar31,auVar7,8,1);
        fVar27 = auVar31._0_4_ + fVar27 + auVar31._4_4_ + fVar28;
        if (lVar23 == 0) {
LAB_01f8a05c:
          if (*param_1 == 0) goto LAB_01f8a064;
LAB_01f8a1ec:
          uVar16 = FUN_02a43a8c();
          if ((uVar16 & 1) != 0) goto LAB_01f8a064;
          if (fVar27 < fVar36) {
            FUN_01f865a4(local_80,plVar20);
            FUN_00b6021c(param_1,local_80);
            if (local_80[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80[0] + 1);
              do {
                iVar13 = *piVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_01f8a098;
            }
            goto LAB_01f8a0dc;
          }
        }
        else {
          lVar23 = plVar17[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 != 0) goto LAB_01f8a05c;
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
          if (*param_1 != 0) goto LAB_01f8a1ec;
LAB_01f8a064:
          FUN_01f865a4(local_80,plVar20);
          FUN_00b6021c(param_1,local_80);
          if (local_80[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_80[0] + 1);
            do {
              iVar13 = *piVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_01f8a098:
            puVar8 = local_80[0];
            if (iVar13 == 0) {
              local_80[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_68 = *puVar8;
              FUN_02a44274(lVar23 + 0xd8,&local_68);
            }
          }
LAB_01f8a0dc:
          fVar36 = fVar27;
        }
        lVar23 = local_b8[0xb];
        piVar1 = (int *)(lVar23 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_b8 + 0x20))();
        }
      }
    }
    if (plVar20 != (long *)0x0) {
      lVar23 = plVar20[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
      lVar23 = plVar20[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 == (long *)0x0) goto LAB_01f8a274;
    plVar20 = (long *)plVar22[3];
  } while( true );
LAB_01f89bf0:
  plVar21 = (long *)plVar20[3];
  if (plVar21 != (long *)0x0) {
    lVar23 = plVar21[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_01f8a3f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar22 = plVar21 + 10;
  puVar15 = (uint *)(**(code **)*plVar22)(plVar22);
  puVar24 = (uint *)PTR_DAT_043807b8;
  if (((*PTR_DAT_043807b0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_043807b0), iVar13 != 0)) {
    if ((*PTR_DAT_0437eef8 & 1) == 0) goto LAB_01f8a448;
    goto LAB_01f8a3a4;
  }
  if (puVar15 == puVar24) goto LAB_01f89c68;
  goto LAB_01f8a3c4;
}


