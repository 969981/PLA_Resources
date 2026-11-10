/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad4d90; name: FUN_01ad4d90
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01ad4d90(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  long *local_2700;
  long *local_26f8;
  long *local_26f0;
  long *plStack_26e8;
  long *local_26e0;
  long *plStack_26d8;
  long *local_26d0;
  long *local_26c8;
  ulong local_26c0 [2];
  undefined8 local_26b0;
  undefined8 uStack_26a8;
  undefined8 local_26a0;
  undefined8 uStack_2698;
  undefined8 local_2690;
  undefined8 uStack_2688;
  undefined8 local_2680;
  undefined8 uStack_2678;
  undefined8 local_2670;
  undefined8 local_2668;
  undefined8 local_2660;
  undefined8 uStack_2658;
  undefined8 local_2650;
  undefined8 local_2648;
  undefined8 local_2640;
  undefined8 local_2638;
  undefined **local_2630 [2];
  undefined8 local_2620;
  undefined8 uStack_2618;
  float local_2610;
  long *local_2600 [6];
  undefined8 local_25d0 [6];
  undefined8 local_25a0 [2];
  undefined4 local_2590 [3];
  undefined1 local_2584 [4];
  undefined2 local_2580 [2];
  undefined4 uStack_257c;
  undefined8 local_2578 [2];
  undefined4 local_2568 [3];
  undefined1 auStack_255c [4];
  undefined2 local_2558 [2];
  undefined4 local_2554;
  undefined8 local_2550 [1178];
  undefined1 auStack_80 [16];
  
  puVar7 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar22 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar22;
  uVar16 = *(ulong *)(lVar22 + 0x60);
  fVar27 = 0.0;
  if (uVar16 != 0) {
    uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar16 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar21 = 0x4e9fd5f8e749f8e3;
      if (uVar16 < 0x4e9fd5f8e749f8e4) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0x4e9fd5f8e749f8e3 / uVar16;
        }
        uVar21 = 0x4e9fd5f8e749f8e3 - uVar21 * uVar16;
      }
    }
    plVar23 = *(long **)(*(long *)(lVar22 + 0x58) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar23[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad4e88;
          }
          else if ((plVar23[1] & uVar16 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == 0x4e9fd5f8e749f8e3) {
            if (plVar23[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad4e88;
          }
          else {
            if (uVar16 <= uVar20) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar20 / uVar16;
              }
              uVar20 = uVar20 - uVar6 * uVar16;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
LAB_01ad4fe4:
  bVar2 = *puVar7;
joined_r0x01ad5220:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar22 = *(long *)puVar8;
  *(long *)puVar9 = lVar22;
  uVar16 = *(ulong *)(lVar22 + 0x60);
  fVar28 = 0.0;
  if (uVar16 != 0) {
    uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar16 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar21 = 0x4e9fd5f8e749f8e3;
      if (uVar16 < 0x4e9fd5f8e749f8e4) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0x4e9fd5f8e749f8e3 / uVar16;
        }
        uVar21 = 0x4e9fd5f8e749f8e3 - uVar21 * uVar16;
      }
    }
    plVar23 = *(long **)(*(long *)(lVar22 + 0x58) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar23[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad5080;
          }
          else if ((plVar23[1] & uVar16 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == 0x4e9fd5f8e749f8e3) {
            if (plVar23[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad5080;
          }
          else {
            if (uVar16 <= uVar20) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar20 / uVar16;
              }
              uVar20 = uVar20 - uVar6 * uVar16;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
LAB_01ad51dc:
  lVar22 = *(long *)(param_1 + 0x800);
  if (lVar22 != 0) {
LAB_01ad5274:
    puVar9 = PTR_DAT_0437a110;
    puVar8 = PTR_DAT_0437a108;
    puVar7 = PTR_DAT_043794d0;
    if (*(int *)(lVar22 + 0xc) != 0) {
      piVar13 = (int *)(lVar22 + 0xc);
      iVar10 = *(int *)(lVar22 + 0xc);
      do {
        plVar23 = *(long **)(lVar22 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar15;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) {
            return 0;
          }
          if (plVar23 == (long *)puVar8) break;
          plVar23 = (long *)*plVar23;
        }
        iVar12 = *piVar13;
        if (iVar12 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar22 = *(long *)(lVar22 + 0x18);
            if (lVar22 == 0) {
              return 0;
            }
            plVar23 = (long *)(lVar22 + -0x50);
            FUN_017e63cc(local_2600,plVar23);
            if (local_2600[0] != (long *)0x0) {
              lVar17 = local_2600[0][0xb];
              piVar13 = (int *)(lVar17 + 0xc);
              do {
                iVar10 = *piVar13;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar4) {
                  *piVar13 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_2600[0] + 0x20))(local_2600[0]);
                lVar17 = *(long *)(param_1 + 0x2c0);
              }
              else {
                lVar17 = *(long *)(param_1 + 0x2c0);
              }
              if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
                piVar13 = (int *)(lVar17 + 0xc);
                iVar10 = *(int *)(lVar17 + 0xc);
                do {
                  plVar26 = *(long **)(lVar17 + 0x10);
                  if (((*PTR_DAT_0437a668 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar12 != 0)) {
                    if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0))
                    {
                      uVar15 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                      __cxa_guard_release(puVar7);
                    }
                    *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_0437a668);
                  }
                  while( true ) {
                    if (plVar26 == (long *)0x0) goto LAB_01ad53f0;
                    if (plVar26 == (long *)PTR_DAT_0437a660) break;
                    plVar26 = (long *)*plVar26;
                  }
                  iVar12 = *piVar13;
                  if (iVar12 == iVar10) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                    if (bVar4) {
                      *piVar13 = iVar10 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') {
                      lVar17 = *(long *)(lVar17 + 0x18);
                      if (lVar17 == 0) break;
                      plVar26 = (long *)(lVar17 + -0x50);
                      memset(local_2600,0,0x2580);
                      lVar18 = 0;
                      do {
                        lVar14 = lVar18 + 0xc0;
                        *(undefined8 *)((long)local_25d0 + lVar18) = 0;
                        *(undefined8 *)((long)local_25d0 + lVar18 + 0x10) = 0;
                        *(undefined8 *)((long)local_25d0 + lVar18 + 0x18) = 0;
                        *(undefined4 *)((long)local_25a0 + lVar18) = 0x7f7fffee;
                        *(undefined8 *)((long)local_25a0 + lVar18 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)((long)local_25a0 + lVar18 + 0x10) = 0xffffff;
                        *(undefined4 *)((long)local_2578 + lVar18 + -0x10) = 0xffffffff;
                        *(undefined1 *)((long)local_2578 + lVar18 + -0xc) = 0xf;
                        *(undefined2 *)((long)local_2578 + lVar18 + -8) = 0xffff;
                        *(undefined4 *)((long)local_2578 + lVar18 + -4) = 0;
                        *(undefined4 *)((long)local_2578 + lVar18 + 0x10) = 0xffffff;
                        *(undefined4 *)((long)local_2550 + lVar18 + -0x10) = 0xffffffff;
                        *(undefined1 *)((long)local_2550 + lVar18 + -0xc) = 0xf;
                        *(undefined2 *)((long)local_2550 + lVar18 + -8) = 0xffff;
                        *(undefined4 *)((long)local_2550 + lVar18 + -4) = 0;
                        *(undefined8 *)((long)local_25d0 + lVar18 + 0x20) = 0;
                        *(undefined8 *)((long)local_25d0 + lVar18 + 0x28) = 0;
                        *(undefined8 *)((long)local_2550 + lVar18) = 0;
                        *(undefined8 *)((long)local_2550 + lVar18 + 8) = 0;
                        *(undefined8 *)((long)local_2578 + lVar18) = 0;
                        *(undefined8 *)((long)local_2578 + lVar18 + 8) = 0xffffffffffffffff;
                        lVar18 = lVar14;
                      } while (lVar14 != 0x2580);
                      local_2630[0] = &PTR_FUN_04287c08;
                      local_2620 = 0;
                      uStack_2618 = 0;
                      local_2610 = fVar28;
                      uVar11 = FUN_01e44070(0,plVar26,local_2630,param_2,0x800,local_2600,0x32);
                      if (0x31 < uVar11) {
                        uVar11 = 0x32;
                      }
                      if (uVar11 == 0) {
                        bVar4 = false;
                      }
                      else {
                        uVar16 = 0;
                        lVar18 = tpidr_el0;
                        do {
                          local_26d0 = local_2600[uVar16 * 0x18 + 4];
                          local_26c8 = local_2600[uVar16 * 0x18 + 5];
                          local_26e0 = local_2600[uVar16 * 0x18 + 2];
                          plStack_26d8 = local_2600[uVar16 * 0x18 + 3];
                          local_26f0 = local_2600[uVar16 * 0x18];
                          plStack_26e8 = local_2600[uVar16 * 0x18 + 1];
                          FUN_032c7b0c(local_26c0,local_25d0 + uVar16 * 0x18);
                          local_2650 = local_2550[uVar16 * 0x18 + -2];
                          local_2648 = local_2550[uVar16 * 0x18 + -1];
                          local_2640 = local_2550[uVar16 * 0x18];
                          local_2638 = local_2550[uVar16 * 0x18 + 1];
                          local_2670 = local_2578[uVar16 * 0x18 + -1];
                          local_2668 = local_2578[uVar16 * 0x18];
                          local_2660 = local_2578[uVar16 * 0x18 + 1];
                          uStack_2658 = local_2578[uVar16 * 0x18 + 2];
                          local_2690 = local_25a0[uVar16 * 0x18];
                          uStack_2688 = local_25a0[uVar16 * 0x18 + 1];
                          local_2680 = local_25a0[uVar16 * 0x18 + 2];
                          uStack_2678 = local_2578[uVar16 * 0x18 + -2];
                          local_26b0 = local_25d0[uVar16 * 0x18 + 2];
                          uStack_26a8 = local_25d0[uVar16 * 0x18 + 3];
                          local_26a0 = local_25d0[uVar16 * 0x18 + 4];
                          uStack_2698 = local_25d0[uVar16 * 0x18 + 5];
                          piVar13 = (int *)FUN_01e4b408(local_26c8);
                          if (((piVar13 != (int *)0x0) && (*piVar13 == 8)) &&
                             (FUN_00cf6d78(&local_26f8,piVar13 + 2), local_26f8 != (long *)0x0)) {
                            FUN_009c69bc(&local_2700);
                            lVar14 = FUN_009b421c(local_2700 + 0x1e,auStack_80);
                            if (local_2700 == (long *)0x0) {
LAB_01ad5718:
                              if (lVar14 == 0) goto LAB_01ad5720;
LAB_01ad582c:
                              uVar20 = FUN_018de07c(lVar14);
                              if ((((uVar20 & 1) == 0) ||
                                  (uVar20 = FUN_018e0d5c(lVar14), (uVar20 & 1) != 0)) ||
                                 ((uVar20 = FUN_018e1ab8(lVar14), (uVar20 & 1) != 0 ||
                                  ((fVar27 - fVar28 < local_26d0._0_4_ &&
                                   (uVar20 = FUN_017d691c(local_2600[0],lVar14), (uVar20 & 1) == 0))
                                  )))) goto LAB_01ad5720;
                              param_3[1] = 0;
                              *(int *)(param_3 + 8) = *piVar13;
                              FUN_00b63974(param_3 + 0x10,piVar13 + 2);
                              FUN_00cfa028(param_3 + 0x20,piVar13 + 6);
                              FUN_0095aa3c(param_3 + 0x30,piVar13 + 10);
                              *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(piVar13 + 0xe);
                              FUN_00bd10a0(param_3 + 0x48,piVar13 + 0x10);
                              iVar10 = piVar13[0x14];
                              bVar4 = true;
                              *param_3 = 1;
                              param_3[0x58] = (char)iVar10;
                            }
                            else {
                              lVar19 = local_2700[0xb];
                              piVar1 = (int *)(lVar19 + 0xc);
                              do {
                                iVar10 = *piVar1;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                if (bVar4) {
                                  *piVar1 = iVar10 + -1;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar10 + -1 != 0) goto LAB_01ad5718;
                              *(undefined8 *)(lVar19 + 0x18) = 0;
                              (**(code **)(*local_2700 + 0x20))();
                              if (lVar14 != 0) goto LAB_01ad582c;
LAB_01ad5720:
                              bVar4 = false;
                            }
                            if (local_26f8 != (long *)0x0) {
                              lVar14 = local_26f8[0xb];
                              piVar13 = (int *)(lVar14 + 0xc);
                              do {
                                iVar10 = *piVar13;
                                cVar3 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                                if (bVar5) {
                                  *piVar13 = iVar10 + -1;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar10 + -1 == 0) {
                                *(undefined8 *)(lVar14 + 0x18) = 0;
                                (**(code **)(*local_26f8 + 0x20))();
                              }
                            }
                            if (bVar4) {
                              if ((local_26c0[0] & 1) != 0) {
                                lVar14 = *(long *)(lVar18 + 0x38d490);
                                if (lVar14 == 0) {
                                  lVar14 = FUN_0333d16c(0,1);
                                  *(long *)(lVar18 + 0x38d490) = lVar14;
                                }
                                plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
                                *(undefined8 *)(local_26c0[0] - 0x11) = 0;
                                (**(code **)(*plVar24 + 0x18))
                                          (plVar24,(undefined8 *)(local_26c0[0] - 0x11),
                                           (long)*(int *)(local_26c0[0] - 9) + 0x10);
                              }
                              bVar4 = true;
                              break;
                            }
                          }
                          uVar20 = local_26c0[0];
                          if ((local_26c0[0] & 1) != 0) {
                            lVar14 = *(long *)(lVar18 + 0x38d490);
                            if (lVar14 == 0) {
                              lVar14 = FUN_0333d16c(0,1);
                              *(long *)(lVar18 + 0x38d490) = lVar14;
                            }
                            plVar24 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
                            puVar25 = (undefined8 *)(uVar20 - 0x11);
                            *puVar25 = 0;
                            (**(code **)(*plVar24 + 0x18))
                                      (plVar24,puVar25,(long)*(int *)(uVar20 - 9) + 0x10);
                          }
                          uVar16 = uVar16 + 1;
                          bVar4 = false;
                        } while (uVar16 < uVar11);
                      }
                      FUN_018dee74(local_2600);
                      lVar17 = *(long *)(lVar17 + 8);
                      piVar13 = (int *)(lVar17 + 0xc);
                      do {
                        iVar10 = *piVar13;
                        cVar3 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                        if (bVar5) {
                          *piVar13 = iVar10 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar10 + -1 == 0) {
                        *(undefined8 *)(lVar17 + 0x18) = 0;
                        (**(code **)(*plVar26 + 0x20))(plVar26);
                      }
                      if (bVar4) {
                        bVar4 = true;
                        goto LAB_01ad53f4;
                      }
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar10 = iVar12;
                } while (iVar12 != 0);
              }
            }
LAB_01ad53f0:
            bVar4 = false;
LAB_01ad53f4:
            lVar22 = *(long *)(lVar22 + 8);
            piVar13 = (int *)(lVar22 + 0xc);
            do {
              iVar10 = *piVar13;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar22 + 0x18) = 0;
              (**(code **)(*plVar23 + 0x20))(plVar23);
            }
            if (bVar4) {
              return 1;
            }
            return 0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar12;
      } while (iVar12 != 0);
    }
  }
  return 0;
LAB_01ad4e88:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar23[0x21];
    fVar27 = 0.0;
    if (uVar16 != 0) {
      uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar16 - 1 & 0x3fc11d6af232ed3e;
      }
      else if (uVar16 < 0x3fc11d6af232ed3f) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0x3fc11d6af232ed3e / uVar16;
        }
        uVar21 = 0x3fc11d6af232ed3e - uVar21 * uVar16;
      }
      else {
        uVar21 = 0x3fc11d6af232ed3e;
      }
      plVar24 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar24[1] == 0x3fc11d6af232ed3e) {
              if (plVar24[2] == 0x3fc11d6af232ed3e) goto LAB_01ad4fcc;
            }
            else if ((plVar24[1] & uVar16 - 1) != uVar21) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar24[1];
            if (uVar20 == 0x3fc11d6af232ed3e) {
              if (plVar24[2] == 0x3fc11d6af232ed3e) goto LAB_01ad4fcc;
            }
            else {
              if (uVar16 <= uVar20) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar20 / uVar16;
                }
                uVar20 = uVar20 - uVar6 * uVar16;
              }
              if (uVar20 != uVar21) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad4fd0;
  }
  goto LAB_01ad4fe4;
LAB_01ad4fcc:
  fVar27 = *(float *)(plVar24 + 6);
LAB_01ad4fd0:
  do {
    iVar10 = (int)*plVar26 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar4) {
      *(int *)plVar26 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_01ad4fe4;
  (**(code **)(*plVar23 + 0x10))();
  bVar2 = *puVar7;
  goto joined_r0x01ad5220;
LAB_01ad5080:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar23[0x21];
    fVar28 = 0.0;
    if (uVar16 != 0) {
      uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar16 - 1 & 0x9ff7084885892c5;
      }
      else if (uVar16 < 0x9ff7084885892c6) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = 0x9ff7084885892c5 / uVar16;
        }
        uVar21 = 0x9ff7084885892c5 - uVar21 * uVar16;
      }
      else {
        uVar21 = 0x9ff7084885892c5;
      }
      plVar24 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar24[1] == 0x9ff7084885892c5) {
              if (plVar24[2] == 0x9ff7084885892c5) goto LAB_01ad51c4;
            }
            else if ((plVar24[1] & uVar16 - 1) != uVar21) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar24[1];
            if (uVar20 == 0x9ff7084885892c5) {
              if (plVar24[2] == 0x9ff7084885892c5) goto LAB_01ad51c4;
            }
            else {
              if (uVar16 <= uVar20) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar20 / uVar16;
                }
                uVar20 = uVar20 - uVar6 * uVar16;
              }
              if (uVar20 != uVar21) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad51c8;
  }
  goto LAB_01ad51dc;
LAB_01ad51c4:
  fVar28 = *(float *)(plVar24 + 6);
LAB_01ad51c8:
  do {
    iVar10 = (int)*plVar26 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar4) {
      *(int *)plVar26 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_01ad51dc;
  (**(code **)(*plVar23 + 0x10))();
  lVar22 = *(long *)(param_1 + 0x800);
  if (lVar22 == 0) {
    return 0;
  }
  goto LAB_01ad5274;
}


