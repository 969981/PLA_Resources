/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134b5a0; name: FUN_0134b5a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0134b5a0(long param_1,uint *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *local_220;
  undefined8 uStack_218;
  long *local_210 [2];
  undefined8 local_200;
  undefined8 local_1e0;
  undefined8 local_1c0;
  long *local_1b0 [2];
  undefined8 local_1a0;
  undefined8 local_180;
  undefined8 local_160;
  char local_150;
  undefined7 uStack_14f;
  undefined8 *local_140;
  char local_118;
  undefined8 *local_110;
  char local_e8;
  undefined8 *local_e0;
  char local_b8;
  char local_b0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  if (param_2 != (uint *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[2] = 7;
    param_2[4] = 7;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[6] = 7;
  }
  puVar5 = PTR_DAT_04379678;
  if (param_3 < 7) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar7 = PTR_DAT_04379688;
    puVar6 = PTR_DAT_04379680;
    *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
    FUN_00d8c950(local_210);
    FUN_016b6208(local_1b0,local_210[0]);
    FUN_0165dc5c(&local_150,local_1b0[0]);
    FUN_016afe80(&local_88,CONCAT71(uStack_14f,local_150));
    plVar18 = (long *)CONCAT71(uStack_14f,local_150);
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 10;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    if (local_1b0[0] != (long *)0x0) {
      plVar18 = local_1b0[0] + 10;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_1b0[0] + 0x10))();
      }
    }
    if (local_210[0] != (long *)0x0) {
      plVar18 = local_210[0] + 10;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_210[0] + 0x10))();
      }
    }
    local_90 = FUN_016a7b0c(local_88);
    if ((local_90 != -0x3f15b8ab654a0c27) &&
       (FUN_016a50f0(&local_98,local_88,&local_90,*(undefined8 *)(param_1 + 8)),
       local_98 != (long *)0x0)) {
      if (param_2 != (uint *)0x0) {
        *param_2 = (uint)(*(int *)((long)local_98 + 100) != 0);
      }
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar16 = *(long *)puVar6;
      *(long *)puVar7 = lVar16;
      plVar18 = *(long **)(lVar16 + 0xc0);
      if (plVar18 != (long *)0x0) {
        lVar16 = plVar18[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0134c130:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_1b0[0] = (long *)plVar18[0x18];
      local_210[0] = local_1b0[0] + plVar18[0x19];
      FUN_0134cf40(&local_150,local_1b0,local_210);
      if ((undefined8 *)CONCAT71(uStack_14f,local_150) !=
          (undefined8 *)(plVar18[0x18] + plVar18[0x19] * 8)) {
        plVar20 = *(long **)CONCAT71(uStack_14f,local_150);
        puVar12 = (undefined8 *)(**(code **)plVar20[10])(plVar20 + 10);
        if (((*PTR_DAT_0437c678 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
          uVar11 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_0437c680 = uVar11;
          __cxa_guard_release(PTR_DAT_0437c678);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_0134b7b4:
          if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0134b950;
          lVar16 = plVar20[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134c130;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plVar19 = plVar20;
          } while (cVar3 != '\0');
LAB_0134b7f8:
          if (plVar19 != (long *)0x0) {
            FUN_01e564f8(&local_150,plVar19);
            puVar6 = PTR_DAT_0437c670;
            puVar5 = PTR_DAT_0437c668;
            lVar16 = CONCAT71(uStack_14f,local_150);
            if (lVar16 != 0) {
              if (*(int *)(lVar16 + 0xc) == 0) {
LAB_0134c298:
                plVar20 = (long *)0x0;
                plVar21 = (long *)CONCAT71(uStack_14f,local_150);
              }
              else {
                piVar1 = (int *)(lVar16 + 0xc);
                iVar10 = *(int *)(lVar16 + 0xc);
                while( true ) {
                  plVar20 = *(long **)(lVar16 + 0x10);
                  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                      uVar11 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)puVar6 = PTR_DAT_043794d8;
                    __cxa_guard_release(puVar5);
                  }
                  while( true ) {
                    if (plVar20 == (long *)0x0) goto LAB_0134c298;
                    if (plVar20 == (long *)puVar6) break;
                    plVar20 = (long *)*plVar20;
                  }
                  iVar9 = *piVar1;
                  if (iVar9 == iVar10) break;
                  ClearExclusiveLocal();
LAB_0134ba40:
                  iVar10 = iVar9;
                  if (iVar9 == 0) goto LAB_0134c298;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_0134ba40;
                plVar20 = (long *)0x0;
                if (*(long *)(lVar16 + 0x18) != 0) {
                  plVar20 = (long *)(*(long *)(lVar16 + 0x18) + -0x50);
                }
                plVar21 = (long *)CONCAT71(uStack_14f,local_150);
              }
              if (plVar21 != (long *)0x0) {
                plVar2 = plVar21 + 1;
                do {
                  iVar10 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar21[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_1b0[0] = (long *)*plVar21;
                  FUN_02a44274(lVar16 + 0xd8,local_1b0);
                }
              }
              if (plVar20 != (long *)0x0) {
                plVar21 = (long *)plVar20[0xe];
                if (plVar21 != (long *)0x0) {
                  lVar16 = plVar21[0xb];
                  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134c130;
                  uVar11 = *(undefined8 *)(PTR_DAT_0437ee60 + (long)param_3 * 0x18);
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                    *(undefined8 *)(lVar16 + 0x10) = uVar13;
                  }
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  lVar16 = plVar21[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*plVar21 + 0x20))(plVar21);
                  }
                  FUN_016aa648(&local_150,local_88);
                  lVar16 = local_90;
                  if (local_150 != '\0') {
                    local_1a0 = 0;
                    local_160 = 0;
                    local_180 = 0;
                    local_200 = 0;
                    local_1c0 = 0;
                    local_1e0 = 0;
                    uVar13 = *(undefined8 *)(param_1 + 8);
                    local_80 = (undefined8 *)0x0;
                    uStack_78 = 0;
                    FUN_008802f0(&local_80,plVar21[0x15] + 0x58);
                    local_220 = (undefined8 *)0x0;
                    uStack_218 = 0;
                    FUN_00ca524c(&local_220,&local_80);
                    puVar12 = local_80;
                    if (local_80 != (undefined8 *)0x0) {
                      piVar1 = (int *)(local_80 + 1);
                      do {
                        iVar10 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar10 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar10 + -1 == 0) {
                        local_80[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar17 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar17;
                        local_70[0] = *puVar12;
                        FUN_02a44274(lVar17 + 0xd8,local_70);
                      }
                    }
                    uVar14 = FUN_019c13d0(uVar13,lVar16,&local_150,&local_220,uVar11,local_1b0,
                                          local_210,1);
                    puVar12 = local_220;
                    if (local_220 != (undefined8 *)0x0) {
                      piVar1 = (int *)(local_220 + 1);
                      do {
                        iVar10 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar10 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar10 + -1 == 0) {
                        local_220[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar16 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar16;
                        local_80 = (undefined8 *)*puVar12;
                        FUN_02a44274(lVar16 + 0xd8,&local_80);
                      }
                    }
                    puVar12 = local_80;
                    if (((uVar14 & 1) != 0) && (local_b0 == '\0')) {
                      if (param_2 == (uint *)0x0) {
                        puVar8 = local_110;
                        if ((local_118 == '\0') &&
                           (local_80 = local_140, puVar8 = local_110, puVar12 = local_140,
                           local_140 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          FUN_01e65c40(uVar11,&local_80);
                          puVar8 = local_110;
                          puVar12 = local_80;
                        }
                        local_80 = puVar8;
                        puVar8 = local_e0;
                        if ((local_e8 == '\0') &&
                           (puVar8 = local_e0, puVar12 = local_80,
                           local_80 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          FUN_01e65c40(uVar11,&local_80);
                          puVar8 = local_e0;
                          puVar12 = local_80;
                        }
                        local_80 = puVar8;
                        if ((local_b8 == '\0') &&
                           (puVar12 = local_80, local_80 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          FUN_01e65c40(uVar11,&local_80);
                          puVar12 = local_80;
                        }
                      }
                      else {
                        puVar8 = local_110;
                        if ((local_118 == '\0') &&
                           (local_80 = local_140, puVar8 = local_110, puVar12 = local_140,
                           local_140 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          lVar16 = FUN_01e65c40(uVar11,&local_80);
                          if (*(long *)(lVar16 + 8) == 0) {
                            plVar21 = (long *)PTR_DAT_04379c88;
                          }
                          else {
                            plVar21 = (long *)(*(long *)(lVar16 + 8) + 0x58);
                          }
                          lVar16 = *plVar21;
                          uVar15 = 0;
                          puVar12 = local_80;
                          if ((((((lVar16 == -0x1c4410fb859ba5e3) ||
                                 (local_80 == (undefined8 *)0xe3bbef047a645a1d)) ||
                                (uVar15 = 1, lVar16 == -0x1c4413fb859baafc)) ||
                               ((local_80 == (undefined8 *)0xe3bbec047a645504 ||
                                (uVar15 = 2, lVar16 == -0x1c4412fb859ba949)))) ||
                              (local_80 == (undefined8 *)0xe3bbed047a6456b7)) ||
                             ((((uVar15 = 3, lVar16 == -0x1c4415fb859bae62 ||
                                (local_80 == (undefined8 *)0xe3bbea047a64519e)) ||
                               ((uVar15 = 4, lVar16 == -0x1c4414fb859bacaf ||
                                (((local_80 == (undefined8 *)0xe3bbeb047a645351 ||
                                  (uVar15 = 5, lVar16 == -0x1c4411fb859ba796)) ||
                                 (local_80 == (undefined8 *)0xe3bbee047a64586a)))))) ||
                              ((uVar15 = 6, lVar16 == -0x1c4417fb859bb1c8 ||
                               (puVar8 = local_110, local_80 == (undefined8 *)0xe3bbe8047a644e38))))
                             )) {
                            *(undefined1 *)(param_2 + 1) = 1;
                            param_2[2] = uVar15;
                            puVar8 = local_110;
                          }
                        }
                        local_80 = puVar8;
                        puVar8 = local_e0;
                        if ((local_e8 == '\0') &&
                           (puVar8 = local_e0, puVar12 = local_80,
                           local_80 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          lVar16 = FUN_01e65c40(uVar11,&local_80);
                          if (*(long *)(lVar16 + 8) == 0) {
                            plVar21 = (long *)PTR_DAT_04379c88;
                          }
                          else {
                            plVar21 = (long *)(*(long *)(lVar16 + 8) + 0x58);
                          }
                          lVar16 = *plVar21;
                          uVar15 = 0;
                          puVar12 = local_80;
                          if (((((lVar16 == -0x1c4410fb859ba5e3) ||
                                (local_80 == (undefined8 *)0xe3bbef047a645a1d)) ||
                               (uVar15 = 1, lVar16 == -0x1c4413fb859baafc)) ||
                              (((local_80 == (undefined8 *)0xe3bbec047a645504 ||
                                (uVar15 = 2, lVar16 == -0x1c4412fb859ba949)) ||
                               ((local_80 == (undefined8 *)0xe3bbed047a6456b7 ||
                                ((uVar15 = 3, lVar16 == -0x1c4415fb859bae62 ||
                                 (local_80 == (undefined8 *)0xe3bbea047a64519e)))))))) ||
                             ((uVar15 = 4, lVar16 == -0x1c4414fb859bacaf ||
                              ((((local_80 == (undefined8 *)0xe3bbeb047a645351 ||
                                 (uVar15 = 5, lVar16 == -0x1c4411fb859ba796)) ||
                                (local_80 == (undefined8 *)0xe3bbee047a64586a)) ||
                               ((uVar15 = 6, lVar16 == -0x1c4417fb859bb1c8 ||
                                (puVar8 = local_e0, local_80 == (undefined8 *)0xe3bbe8047a644e38))))
                              )))) {
                            *(undefined1 *)(param_2 + 3) = 1;
                            param_2[4] = uVar15;
                            puVar8 = local_e0;
                          }
                        }
                        local_80 = puVar8;
                        if ((local_b8 == '\0') &&
                           (puVar12 = local_80, local_80 != (undefined8 *)&DAT_cbf29ce484222645)) {
                          if (((*PTR_DAT_0437a780 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_0437a780);
                          }
                          uVar11 = *(undefined8 *)PTR_DAT_0437a788;
                          *(undefined8 *)PTR_DAT_0437a790 = uVar11;
                          lVar16 = FUN_01e65c40(uVar11,&local_80);
                          if (*(long *)(lVar16 + 8) == 0) {
                            plVar21 = (long *)PTR_DAT_04379c88;
                          }
                          else {
                            plVar21 = (long *)(*(long *)(lVar16 + 8) + 0x58);
                          }
                          lVar16 = *plVar21;
                          uVar15 = 0;
                          puVar12 = local_80;
                          if (((((lVar16 == -0x1c4410fb859ba5e3) ||
                                (local_80 == (undefined8 *)0xe3bbef047a645a1d)) ||
                               (uVar15 = 1, lVar16 == -0x1c4413fb859baafc)) ||
                              (((local_80 == (undefined8 *)0xe3bbec047a645504 ||
                                (uVar15 = 2, lVar16 == -0x1c4412fb859ba949)) ||
                               ((local_80 == (undefined8 *)0xe3bbed047a6456b7 ||
                                ((uVar15 = 3, lVar16 == -0x1c4415fb859bae62 ||
                                 (local_80 == (undefined8 *)0xe3bbea047a64519e)))))))) ||
                             ((uVar15 = 4, lVar16 == -0x1c4414fb859bacaf ||
                              ((((local_80 == (undefined8 *)0xe3bbeb047a645351 ||
                                 (uVar15 = 5, lVar16 == -0x1c4411fb859ba796)) ||
                                (local_80 == (undefined8 *)0xe3bbee047a64586a)) ||
                               ((uVar15 = 6, lVar16 == -0x1c4417fb859bb1c8 ||
                                (local_80 == (undefined8 *)0xe3bbe8047a644e38)))))))) {
                            *(undefined1 *)(param_2 + 5) = 1;
                            param_2[6] = uVar15;
                          }
                        }
                      }
                    }
                    local_80 = puVar12;
                    if (local_150 != '\0') {
                      local_150 = '\0';
                    }
                  }
                }
                lVar16 = plVar20[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar20 + 0x20))(plVar20);
                }
              }
            }
            lVar16 = plVar19[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
          }
        }
      }
      if (plVar18 != (long *)0x0) {
        lVar16 = plVar18[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
      }
      if (local_98 != (long *)0x0) {
        plVar18 = local_98 + 10;
        do {
          iVar10 = (int)*plVar18 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
    }
    if (local_88 != (long *)0x0) {
      plVar18 = local_88 + 10;
      do {
        iVar10 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  return;
LAB_0134b950:
  puVar12 = (undefined8 *)*puVar12;
  plVar19 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_0134b7f8;
  goto LAB_0134b7b4;
}


