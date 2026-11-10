/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02676544; name: FUN_02676544
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02676544(long param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined **appuStack_cc0 [2];
  long lStack_cb0;
  long lStack_ca8;
  long lStack_ca0;
  long lStack_c98;
  long lStack_c90;
  long *plStack_c80;
  undefined8 uStack_c78;
  ulong auStack_c70 [4];
  ulong auStack_c50 [6];
  undefined4 auStack_c20 [2];
  undefined8 uStack_c18;
  undefined4 auStack_c10 [3];
  undefined1 auStack_c04 [4];
  undefined2 auStack_c00 [2];
  undefined4 uStack_bfc;
  undefined8 auStack_bf8 [2];
  undefined4 auStack_be8 [3];
  undefined1 auStack_bdc [4];
  undefined2 auStack_bd8 [2];
  undefined4 uStack_bd4;
  undefined8 auStack_bd0 [8];
  ulong uStack_b90;
  ulong uStack_ad0;
  ulong uStack_a10;
  ulong uStack_950;
  ulong uStack_890;
  ulong uStack_7d0;
  ulong uStack_710;
  ulong uStack_650;
  ulong uStack_590;
  ulong uStack_4d0;
  ulong uStack_410;
  ulong uStack_350;
  ulong uStack_290;
  ulong uStack_1d0;
  ulong uStack_110;
  long lStack_80;
  long lStack_78;
  
  plVar25 = (long *)(param_1 + -0x48);
  uVar17 = (**(code **)(*plVar25 + 0xf0))(plVar25);
  if ((uVar17 & 1) != 0) {
    (**(code **)(*plVar25 + 0x2a0))(plVar25);
    if ((*(long *)(param_1 + 0x5e0) == 0) || (*(int *)(*(long *)(param_1 + 0x5e0) + 0xc) == 0)) {
      lVar18 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      (**(code **)(*plVar25 + 0x278))((float)((double)*(long *)(lVar18 + 8) / 1000000000.0),plVar25)
      ;
    }
    if (*(char *)(*(long *)(param_1 + 0x578) + 0xa8) != '\0') {
      FUN_01a81438(plVar25);
    }
  }
  uVar17 = (**(code **)(*plVar25 + 0xf0))(plVar25);
  if ((uVar17 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xc18) = 0;
  uVar17 = (**(code **)(*plVar25 + 0x1b0))();
  if ((uVar17 & 1) == 0) {
    return;
  }
  plStack_c80 = (long *)0x0;
  uStack_c78 = 0;
  FUN_00cf98c8(&plStack_c80,param_1 + 0x218);
  plVar26 = plStack_c80;
  puVar12 = PTR_DAT_0437a668;
  puVar11 = PTR_DAT_0437a660;
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  plVar24 = (long *)0x0;
  if (plStack_c80 != (long *)0x0) {
    if (*(int *)((long)plStack_c80 + 0xc) != 0) {
      piVar1 = (int *)((long)plStack_c80 + 0xc);
      iVar14 = *(int *)((long)plStack_c80 + 0xc);
      do {
        plVar24 = (long *)plVar26[2];
        if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
          if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar10 = uVar16;
            __cxa_guard_release(puVar9);
          }
          *(undefined **)puVar11 = puVar10;
          __cxa_guard_release(puVar12);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_026764ac;
          if (plVar24 == (long *)puVar11) break;
          plVar24 = (long *)*plVar24;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar14) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar18 = plVar26[3];
            plVar24 = (long *)0x0;
            plVar26 = plStack_c80;
            if (lVar18 != 0) {
              plVar24 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x0267604c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
LAB_026764ac:
    plVar24 = (long *)0x0;
    plVar26 = plStack_c80;
joined_r0x0267604c:
    if (plVar26 != (long *)0x0) {
      plVar3 = plVar26 + 1;
      do {
        iVar14 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar14;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar14 == 0) {
        plVar26[2] = 0;
        plStack_c80 = plVar26;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        appuStack_cc0[0] = (undefined **)*plVar26;
        FUN_02a44274(lVar18 + 0xd8,appuStack_cc0);
      }
    }
  }
  plStack_c80 = (long *)0x0;
  uStack_c78 = 0;
  FUN_01a0703c(&plStack_c80,param_1 + 0xa88);
  plVar3 = plStack_c80;
  puVar12 = PTR_DAT_0437a590;
  puVar11 = PTR_DAT_0437a588;
  puVar10 = PTR_DAT_0437a580;
  puVar9 = PTR_DAT_043794d0;
  plVar26 = (long *)0x0;
  if (plStack_c80 != (long *)0x0) {
    if (*(int *)((long)plStack_c80 + 0xc) != 0) {
      piVar1 = (int *)((long)plStack_c80 + 0xc);
      iVar14 = *(int *)((long)plStack_c80 + 0xc);
      do {
        plVar26 = (long *)plVar3[2];
        if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar15 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar11 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)puVar12 = puVar11;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar26 == (long *)0x0) goto LAB_026764f8;
          if (plVar26 == (long *)puVar12) break;
          plVar26 = (long *)*plVar26;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar14) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar18 = plVar3[3];
            plVar26 = (long *)0x0;
            plVar3 = plStack_c80;
            if (lVar18 != 0) {
              plVar26 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x026761c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
LAB_026764f8:
    plVar26 = (long *)0x0;
    plVar3 = plStack_c80;
joined_r0x026761c8:
    plStack_c80 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3 + 1;
      do {
        iVar14 = (int)*plVar4 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = iVar14;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar14 == 0) {
        plVar3[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        appuStack_cc0[0] = (undefined **)*plVar3;
        FUN_02a44274(lVar18 + 0xd8,appuStack_cc0);
      }
    }
  }
  if (plVar24 != (long *)0x0) {
    if (plVar26 == (long *)0x0) goto LAB_026759cc;
    FUN_009c69bc(&plStack_c80,plVar25);
    lStack_78 = plStack_c80[0x1b];
    lStack_80 = plStack_c80[0x1a];
    if (plStack_c80 != (long *)0x0) {
      lVar18 = plStack_c80[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plStack_c80 + 0x20))();
      }
    }
    uVar13 = *(uint *)(param_1 + 0xc08);
    memset(&plStack_c80,0,0xc00);
    lVar18 = 0;
    do {
      lVar19 = lVar18 + 0xc0;
      *(undefined8 *)((long)auStack_c70 + lVar18 + 0x20) = 0;
      *(undefined8 *)((long)auStack_c70 + lVar18 + 0x30) = 0;
      *(undefined8 *)((long)auStack_c70 + lVar18 + 0x38) = 0;
      *(undefined4 *)((long)auStack_c20 + lVar18) = 0x7f7fffee;
      *(undefined8 *)((long)auStack_c20 + lVar18 + 8) = 0xffffffffffffffff;
      *(undefined4 *)((long)auStack_c10 + lVar18) = 0xffffff;
      *(undefined4 *)((long)auStack_c10 + lVar18 + 8) = 0xffffffff;
      auStack_c04[lVar18] = 0xf;
      *(undefined2 *)((long)auStack_c00 + lVar18) = 0xffff;
      *(undefined4 *)((long)auStack_c00 + lVar18 + 4) = 0;
      *(undefined4 *)((long)auStack_be8 + lVar18) = 0xffffff;
      *(undefined4 *)((long)auStack_be8 + lVar18 + 8) = 0xffffffff;
      auStack_bdc[lVar18] = 0xf;
      *(undefined2 *)((long)auStack_bd8 + lVar18) = 0xffff;
      *(undefined4 *)((long)auStack_bd8 + lVar18 + 4) = 0;
      *(undefined8 *)((long)auStack_c70 + lVar18 + 0x40) = 0;
      *(undefined8 *)((long)auStack_c70 + lVar18 + 0x48) = 0;
      *(undefined8 *)((long)auStack_bd0 + lVar18) = 0;
      *(undefined8 *)((long)auStack_bd0 + lVar18 + 8) = 0;
      *(undefined8 *)((long)auStack_bf8 + lVar18) = 0;
      *(undefined8 *)((long)auStack_bf8 + lVar18 + 8) = 0xffffffffffffffff;
      lVar18 = lVar19;
    } while (lVar19 != 0xc00);
    if ((uVar13 | 1) == 3) {
      uVar5 = 0x130ef010;
    }
    else {
      uVar5 = 0x120ee010;
    }
    if (*(int *)((long)plVar26 + 0x280) == 3) {
      appuStack_cc0[0] = &PTR_FUN_04287c30;
      lStack_c98 = *(long *)((long)plVar26 + 0x2e8);
      lStack_ca8 = *(long *)((long)plVar26 + 0x2d8);
      lStack_cb0 = *(long *)((long)plVar26 + 0x2d0);
      lStack_ca0 = *(long *)((long)plVar26 + 0x2e0);
      lStack_c90 = *(long *)((long)plVar26 + 0x2f0);
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar5);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar18 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar18;
      uVar13 = FUN_02bf7af8(0,*(undefined8 *)(lVar18 + 0x230),appuStack_cc0,&lStack_80,uVar5,
                            &plStack_c80,0x10);
LAB_02675888:
      if (0xf < uVar13) {
        uVar13 = 0x10;
      }
      if (0 < (int)(uVar13 - 1)) {
        puVar20 = auStack_bd0 + 4;
        uVar17 = 1;
        uVar21 = 0;
        do {
          uVar2 = uVar21 + 1;
          if (uVar2 < uVar13) {
            puVar22 = puVar20;
            uVar23 = uVar17;
            do {
              fVar27 = (float)auStack_c70[uVar21 * 0x18] * (float)*puVar22;
              fVar28 = (float)(auStack_c70[uVar21 * 0x18] >> 0x20) *
                       (float)((ulong)*puVar22 >> 0x20);
              fVar29 = (float)auStack_c70[uVar21 * 0x18 + 1] * (float)puVar22[1];
              fVar30 = (float)(auStack_c70[uVar21 * 0x18 + 1] >> 0x20) *
                       (float)((ulong)puVar22[1] >> 0x20);
              auVar31._4_4_ = fVar28;
              auVar31._0_4_ = fVar27;
              auVar31._8_4_ = fVar29;
              auVar31._12_4_ = fVar30;
              auVar8._4_4_ = fVar28;
              auVar8._0_4_ = fVar27;
              auVar8._8_4_ = fVar29;
              auVar8._12_4_ = fVar30;
              auVar31 = NEON_ext(auVar31,auVar8,8,1);
              if (auVar31._0_4_ + fVar27 + auVar31._4_4_ + fVar28 <= 0.0) {
                *(undefined1 *)(param_1 + 0xc18) = 1;
                goto LAB_02675928;
              }
              uVar23 = uVar23 + 1;
              puVar22 = puVar22 + 0x18;
            } while (uVar23 < uVar13);
          }
          uVar17 = uVar17 + 1;
          puVar20 = puVar20 + 0x18;
          uVar21 = uVar2;
        } while ((long)uVar2 < (long)(int)(uVar13 - 1));
      }
    }
    else if (*(int *)((long)plVar26 + 0x280) == 1) {
      appuStack_cc0[0] = &PTR_FUN_04287c08;
      lStack_ca8 = *(long *)((long)plVar26 + 0x2a8);
      lStack_cb0 = *(long *)((long)plVar26 + 0x2a0);
      lStack_ca0 = CONCAT44(lStack_ca0._4_4_,*(undefined4 *)((long)plVar26 + 0x2b0));
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar5);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar18 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar18;
      uVar13 = FUN_02bf7384(0,*(undefined8 *)(lVar18 + 0x230),appuStack_cc0,&lStack_80,uVar5,
                            &plStack_c80,0x10);
      goto LAB_02675888;
    }
LAB_02675928:
    if ((uStack_110 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_110 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_110 - 0x11),(long)*(int *)(uStack_110 - 9) + 0x10);
    }
    if ((uStack_1d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_1d0 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_1d0 - 0x11),(long)*(int *)(uStack_1d0 - 9) + 0x10);
    }
    if ((uStack_290 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_290 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_290 - 0x11),(long)*(int *)(uStack_290 - 9) + 0x10);
    }
    if ((uStack_350 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_350 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_350 - 0x11),(long)*(int *)(uStack_350 - 9) + 0x10);
    }
    if ((uStack_410 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_410 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_410 - 0x11),(long)*(int *)(uStack_410 - 9) + 0x10);
    }
    if ((uStack_4d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_4d0 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_4d0 - 0x11),(long)*(int *)(uStack_4d0 - 9) + 0x10);
    }
    if ((uStack_590 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_590 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_590 - 0x11),(long)*(int *)(uStack_590 - 9) + 0x10);
    }
    if ((uStack_650 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_650 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_650 - 0x11),(long)*(int *)(uStack_650 - 9) + 0x10);
    }
    if ((uStack_710 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_710 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_710 - 0x11),(long)*(int *)(uStack_710 - 9) + 0x10);
    }
    if ((uStack_7d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_7d0 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_7d0 - 0x11),(long)*(int *)(uStack_7d0 - 9) + 0x10);
    }
    if ((uStack_890 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_890 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_890 - 0x11),(long)*(int *)(uStack_890 - 9) + 0x10);
    }
    if ((uStack_950 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_950 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_950 - 0x11),(long)*(int *)(uStack_950 - 9) + 0x10);
    }
    if ((uStack_a10 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_a10 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_a10 - 0x11),(long)*(int *)(uStack_a10 - 9) + 0x10);
    }
    if ((uStack_ad0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_ad0 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_ad0 - 0x11),(long)*(int *)(uStack_ad0 - 9) + 0x10);
    }
    if ((uStack_b90 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(uStack_b90 - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(uStack_b90 - 0x11),(long)*(int *)(uStack_b90 - 9) + 0x10);
    }
    if ((auStack_c50[0] & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(auStack_c50[0] - 0x11) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,(undefined8 *)(auStack_c50[0] - 0x11),
                 (long)*(int *)(auStack_c50[0] - 9) + 0x10);
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar18 = *(long *)((long)plVar26 + 0x58);
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (plVar24 == (long *)0x0) {
    return;
  }
LAB_026759cc:
  lVar18 = plVar24[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  return;
}


