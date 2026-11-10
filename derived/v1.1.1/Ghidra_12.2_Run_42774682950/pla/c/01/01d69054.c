/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d69054; name: FUN_01d69054
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d69054(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined **ppuVar3;
  uint *puVar4;
  long ******pppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  long ****pppplVar21;
  undefined8 uVar22;
  long *plVar23;
  long *******ppppppplVar24;
  long ******pppppplVar25;
  ulong uVar26;
  long *******ppppppplVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  long *****ppppplVar36;
  long lVar37;
  long *******unaff_x23;
  long *******ppppppplVar38;
  undefined8 *puVar39;
  undefined *puVar40;
  char *pcVar41;
  long *plVar42;
  byte *pbVar43;
  undefined4 uVar44;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 uStack_288;
  undefined8 *local_280;
  undefined8 uStack_278;
  undefined8 *local_270;
  undefined8 uStack_268;
  undefined8 *local_260;
  undefined8 uStack_258;
  undefined8 *local_250;
  undefined8 uStack_248;
  long *local_240;
  undefined8 uStack_238;
  long ******local_230;
  undefined8 uStack_228;
  long ******local_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  long ******local_208;
  undefined8 uStack_200;
  long ******local_1f8;
  long *local_1f0;
  long ******local_1e8;
  char *local_1e0;
  long *******local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  long ******local_190;
  long *local_188;
  long *******local_180;
  char *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined **local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  char local_110;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined2 local_e0;
  long ******local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long ******local_a8;
  long ******local_a0;
  undefined8 uStack_98;
  long *******local_90;
  undefined8 uStack_88;
  undefined8 *local_68;
  
  puVar15 = PTR_DAT_043796e8;
  puVar40 = PTR_DAT_043796e0;
  local_240 = (long *)0x0;
  uStack_238 = 0;
  local_250 = (undefined8 *)0x0;
  uStack_248 = 0;
  lVar37 = *(long *)(param_1 + 0x90);
  plVar23 = (long *)PTR_DAT_043794a0;
  plVar42 = (long *)PTR_DAT_043794a8;
  pbVar43 = PTR_DAT_04379498;
  if (lVar37 != 0) {
    uVar9 = *(uint *)(lVar37 + 0xc);
    unaff_x23 = (long *******)(ulong)uVar9;
    if (uVar9 != 0) {
      puVar4 = (uint *)(lVar37 + 0xc);
      ppppppplVar24 = (long *******)(ulong)uVar9;
      do {
        plVar23 = *(long **)(lVar37 + 0x10);
        if (((*puVar40 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar40), iVar19 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)) {
            uVar22 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar22;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar15 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar40);
        }
        while( true ) {
          unaff_x23 = ppppppplVar24;
          if (plVar23 == (long *)0x0) goto LAB_01d6be30;
          if (plVar23 == (long *)puVar15) break;
          plVar23 = (long *)*plVar23;
        }
        uVar9 = *puVar4;
        unaff_x23 = (long *******)(ulong)uVar9;
        if (uVar9 == (uint)ppppppplVar24) {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar12) {
            *puVar4 = (uint)ppppppplVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') {
            lVar37 = *(long *)(lVar37 + 0x18);
            plVar23 = (long *)(lVar37 + -0x50);
            unaff_x23 = ppppppplVar24;
            if (lVar37 != 0) {
              FUN_0199c048(&local_180,plVar23);
              FUN_019b5004(&local_240,&local_180);
              unaff_x23 = local_180;
              if (local_180 != (long *******)0x0) {
                ppppppplVar24 = local_180 + 1;
                do {
                  iVar19 = *(int *)ppppppplVar24;
                  cVar10 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
                  if (bVar12) {
                    *(int *)ppppppplVar24 = iVar19 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar19 + -1 == 0) {
                  local_180[2] = (long ******)0x0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar32 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar32;
                  local_1e8 = *unaff_x23;
                  FUN_02a44274(lVar32 + 0xd8,&local_1e8);
                }
              }
              lVar37 = *(long *)(lVar37 + 8);
              piVar1 = (int *)(lVar37 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar10 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar12) {
                  *piVar1 = iVar19 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar37 + 0x18) = 0;
                (**(code **)(*plVar23 + 0x20))(plVar23);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        ppppppplVar24 = unaff_x23;
      } while (uVar9 != 0);
    }
LAB_01d6be30:
    lVar37 = *(long *)(param_1 + 0x90);
    plVar23 = (long *)PTR_DAT_043794a0;
    plVar42 = (long *)PTR_DAT_043794a8;
    pbVar43 = PTR_DAT_04379498;
    if ((lVar37 != 0) && (*(int *)(lVar37 + 0xc) != 0)) {
      unaff_x23 = (long *******)(lVar37 + 0xc);
      iVar19 = *(int *)(lVar37 + 0xc);
      do {
        puVar39 = *(undefined8 **)(lVar37 + 0x10);
        if (((*puVar40 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar40), iVar20 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
            uVar22 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar22;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar15 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar40);
        }
        while( true ) {
          plVar23 = (long *)PTR_DAT_043794a0;
          plVar42 = (long *)PTR_DAT_043794a8;
          pbVar43 = PTR_DAT_04379498;
          if (puVar39 == (undefined8 *)0x0) goto LAB_01d690a4;
          if (puVar39 == (undefined8 *)puVar15) break;
          puVar39 = (undefined8 *)*puVar39;
        }
        iVar20 = *(int *)unaff_x23;
        if (iVar20 == iVar19) {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
          if (bVar12) {
            *(int *)unaff_x23 = iVar19 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 != '\0') goto LAB_01d6bf2c;
          lVar37 = *(long *)(lVar37 + 0x18);
          plVar23 = (long *)PTR_DAT_043794a0;
          plVar42 = (long *)PTR_DAT_043794a8;
          pbVar43 = PTR_DAT_04379498;
          if (lVar37 != 0) {
            if (*(long **)(lVar37 + 0x38) == (long *)0x0) {
              local_1e8 = (long ******)0x0;
              local_1e0 = (char *)0x0;
            }
            else {
              (**(code **)(**(long **)(lVar37 + 0x38) + 0x10))(&local_180);
              local_1e8 = (long ******)0x0;
              local_1e0 = (char *)0x0;
              FUN_0198be48(&local_1e8,&local_180);
              ppppppplVar24 = local_180;
              if (local_180 != (long *******)0x0) {
                ppppppplVar38 = local_180 + 1;
                do {
                  iVar19 = *(int *)ppppppplVar38;
                  cVar10 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                  if (bVar12) {
                    *(int *)ppppppplVar38 = iVar19 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar19 + -1 == 0) {
                  local_180[2] = (long ******)0x0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar32 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar32;
                  local_c8 = *ppppppplVar24;
                  FUN_02a44274(lVar32 + 0xd8,&local_c8);
                }
              }
              pppppplVar25 = local_1e8;
              puVar15 = PTR_DAT_04379fd0;
              puVar40 = PTR_DAT_04379fc8;
              if (local_1e8 != (long ******)0x0) {
                if (*(int *)((long)local_1e8 + 0xc) == 0) {
LAB_01d6c334:
                  ppppplVar36 = (long *****)0x0;
                  pppppplVar25 = local_1e8;
                }
                else {
                  unaff_x23 = (long *******)((long)local_1e8 + 0xc);
                  iVar19 = *(int *)((long)local_1e8 + 0xc);
                  while( true ) {
                    ppppplVar36 = pppppplVar25[2];
                    if (((*puVar40 & 1) == 0) &&
                       (iVar20 = __cxa_guard_acquire(puVar40), iVar20 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
                        uVar22 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)puVar15 = PTR_DAT_043794d8;
                      __cxa_guard_release(puVar40);
                      if (ppppplVar36 != (long *****)0x0) goto LAB_01d6c188;
                      goto LAB_01d6c334;
                    }
                    while( true ) {
                      if (ppppplVar36 == (long *****)0x0) goto LAB_01d6c334;
LAB_01d6c188:
                      if (ppppplVar36 == (long *****)puVar15) break;
                      ppppplVar36 = (long *****)*ppppplVar36;
                    }
                    iVar20 = *(int *)unaff_x23;
                    if (iVar20 == iVar19) break;
                    ClearExclusiveLocal();
LAB_01d6c170:
                    iVar19 = iVar20;
                    if (iVar20 == 0) goto LAB_01d6c334;
                  }
                  cVar10 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
                  if (bVar12) {
                    *(int *)unaff_x23 = iVar19 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 != '\0') goto LAB_01d6c170;
                  ppppplVar29 = pppppplVar25[3];
                  ppppplVar36 = (long *****)0x0;
                  pppppplVar25 = local_1e8;
                  if (ppppplVar29 != (long *****)0x0) {
                    ppppplVar36 = ppppplVar29 + -10;
                  }
                }
                local_1e8 = pppppplVar25;
                if (pppppplVar25 != (long ******)0x0) {
                  pppppplVar28 = pppppplVar25 + 1;
                  do {
                    iVar19 = *(int *)pppppplVar28;
                    cVar10 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
                    if (bVar12) {
                      *(int *)pppppplVar28 = iVar19 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (iVar19 + -1 == 0) {
                    pppppplVar25[2] = (long *****)0x0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar32 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar32;
                    local_180 = (long *******)*pppppplVar25;
                    FUN_02a44274(lVar32 + 0xd8,&local_180);
                  }
                }
                if (ppppplVar36 != (long *****)0x0) {
                  FUN_018f98bc(&local_180,ppppplVar36);
                  FUN_018ffff0(&local_250,&local_180);
                  ppppppplVar24 = local_180;
                  if (local_180 != (long *******)0x0) {
                    ppppppplVar38 = local_180 + 1;
                    do {
                      iVar19 = *(int *)ppppppplVar38;
                      cVar10 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar12) {
                        *(int *)ppppppplVar38 = iVar19 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar19 + -1 == 0) {
                      local_180[2] = (long ******)0x0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar32 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar32;
                      local_1e8 = *ppppppplVar24;
                      FUN_02a44274(lVar32 + 0xd8,&local_1e8);
                    }
                  }
                  pppplVar21 = ppppplVar36[0xb];
                  piVar1 = (int *)((long)pppplVar21 + 0xc);
                  do {
                    iVar19 = *piVar1;
                    cVar10 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar12) {
                      *piVar1 = iVar19 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (iVar19 + -1 == 0) {
                    pppplVar21[3] = (long ***)0x0;
                    (*(code *)(*ppppplVar36)[4])(ppppplVar36);
                  }
                }
              }
            }
            lVar32 = *(long *)(lVar37 + 8);
            piVar1 = (int *)(lVar32 + 0xc);
            do {
              iVar19 = *piVar1;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar19 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
              plVar42 = (long *)PTR_DAT_043794a8;
              plVar23 = (long *)PTR_DAT_043794a0;
              pbVar43 = PTR_DAT_04379498;
            } while (cVar10 != '\0');
            if (iVar19 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*(long *)(lVar37 + -0x50) + 0x20))((long *)(lVar37 + -0x50));
            }
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01d6bf2c:
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        pbVar43 = PTR_DAT_04379498;
        iVar19 = iVar20;
      } while (iVar20 != 0);
    }
  }
LAB_01d690a4:
  ppppppplVar24 = (long *******)&local_180;
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x10))(&local_180);
  local_260 = (undefined8 *)0x0;
  uStack_258 = 0;
  FUN_00d07698(&local_260,&local_180);
  ppppppplVar38 = local_180;
  if (local_180 != (long *******)0x0) {
    ppppppplVar7 = local_180 + 1;
    do {
      iVar19 = *(int *)ppppppplVar7;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar7,0x10);
      if (bVar12) {
        *(int *)ppppppplVar7 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_180[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = *ppppppplVar38;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  local_c8 = (long ******)0x18255554c7d12183;
  local_c0 = "PlayerTalkCandidacyComponent";
  local_b8 = 0x1c;
  uStack_b0 = 0;
  FUN_01d806e8(&local_a8,param_1,&local_c8);
  puVar40 = PTR_DAT_04382858;
  local_180 = (long *******)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = (undefined8 *)(PTR_DAT_04382858 + 0x10);
  local_130 = 0;
  uStack_128 = 0;
  local_160 = &PTR_FUN_04287c08;
  local_168 = CONCAT44(local_168._4_4_,1);
  local_110 = '\0';
  local_120 = 0;
  local_f0 = 1;
  local_ec = 0x3f000000bf800000;
  local_e4 = 0x3f000000;
  local_e0 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  puVar15 = PTR_DAT_0437a658;
  lVar37 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar37;
  local_180 = *(long ********)(lVar37 + 0x230);
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0x3f800000;
  local_e0 = CONCAT11(local_e0._1_1_,1);
  local_f0 = 1;
  local_130 = CONCAT44(local_130._4_4_,2);
  local_190 = local_a8;
  if (local_a8 != (long ******)0x0) {
    ppppplVar36 = local_a8[0xb];
    if (ppppplVar36[3] == (long ****)0x0) goto LAB_01d6ea54;
    if (ppppplVar36[2] == (long ****)0x0) {
      pppplVar21 = (long ****)(*(code *)**ppppplVar36[3])();
      ppppplVar36[2] = pppplVar21;
    }
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01c6ba38(&local_188,param_1,&local_190,&local_180);
  if (local_190 != (long ******)0x0) {
    ppppplVar36 = local_190[0xb];
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_190)[4])();
    }
  }
  local_198 = 0;
  local_1e0 = (char *)0x0;
  local_1e8 = (long ******)CONCAT44(local_1e8._4_4_,2);
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1d8 = (long *******)0x0;
  local_1d0 = (undefined8 *)0x0;
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x18))(&local_90);
  local_a0 = (long ******)0x0;
  uStack_98 = 0;
  FUN_00d07698(&local_a0,&local_90);
  ppppppplVar38 = local_90;
  if (local_90 != (long *******)0x0) {
    ppppppplVar7 = local_90 + 1;
    do {
      iVar19 = *(int *)ppppppplVar7;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar7,0x10);
      if (bVar12) {
        *(int *)ppppppplVar7 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_208 = *ppppppplVar38;
      FUN_02a44274(lVar37 + 0xd8,&local_208);
    }
  }
  FUN_01d87dc8(&local_1d0,&local_a0);
  pppppplVar25 = local_a0;
  if (local_a0 != (long ******)0x0) {
    pppppplVar28 = local_a0 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_a0[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  local_1f0 = local_188;
  if (local_188 != (long *)0x0) {
    lVar37 = local_188[0xb];
    if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) goto LAB_01d6ea54;
    if (*(long *)(lVar37 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
      *(undefined8 *)(lVar37 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01e4b6a0(&local_1f0,&local_1e8);
  puVar39 = local_1a8;
  if (local_1f0 != (long *)0x0) {
    lVar37 = local_1f0[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_1f0 + 0x20))();
      puVar39 = local_1a8;
    }
  }
  local_1a8 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1c0;
  if (local_1c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1c0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1c0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pcVar41 = local_1e0;
  if (local_1e0 != (char *)0x0) {
    piVar1 = (int *)(local_1e0 + 8);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e0[0x10] = '\0';
      local_1e0[0x11] = '\0';
      local_1e0[0x12] = '\0';
      local_1e0[0x13] = '\0';
      local_1e0[0x14] = '\0';
      local_1e0[0x15] = '\0';
      local_1e0[0x16] = '\0';
      local_1e0[0x17] = '\0';
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = *(long ********)pcVar41;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  lVar37 = *(long *)(param_1 + 0x90);
  if (lVar37 != 0) {
    uVar9 = *(uint *)(lVar37 + 0xc);
    unaff_x23 = (long *******)(ulong)uVar9;
    if (uVar9 == 0) {
LAB_01d6c4e0:
      ppppppplVar38 = (long *******)0x0;
      goto LAB_01d6c46c;
    }
    puVar4 = (uint *)(lVar37 + 0xc);
    do {
      local_68 = *(undefined8 **)(lVar37 + 0x10);
      pbVar43 = PTR_DAT_04379498;
      plVar23 = (long *)PTR_DAT_043794a0;
      plVar42 = (long *)PTR_DAT_043794a8;
      puVar40 = PTR_DAT_04382858;
      if ((*PTR_DAT_043796e0 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(PTR_DAT_043796e0);
        pbVar43 = PTR_DAT_04379498;
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        puVar40 = PTR_DAT_04382858;
        if (iVar19 != 0) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)) {
            uVar22 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar22;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043796e0);
          pbVar43 = PTR_DAT_04379498;
          plVar23 = (long *)PTR_DAT_043794a0;
          plVar42 = (long *)PTR_DAT_043794a8;
          puVar40 = PTR_DAT_04382858;
        }
      }
      PTR_DAT_04379498 = pbVar43;
      PTR_DAT_043794a0 = (undefined *)plVar23;
      PTR_DAT_043794a8 = (undefined *)plVar42;
      PTR_DAT_04382858 = puVar40;
      if (local_68 == (undefined8 *)0x0) goto LAB_01d6c4e0;
      while (local_68 != (undefined8 *)PTR_DAT_043796e8) {
        local_68 = (undefined8 *)*local_68;
        if (local_68 == (undefined8 *)0x0) goto LAB_01d694f0;
      }
      uVar9 = *puVar4;
      if (uVar9 == (uint)unaff_x23) {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar12) {
          *puVar4 = (uint)unaff_x23 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
        if (cVar10 == '\0') {
          ppppppplVar38 = (long *******)(*(long *)(lVar37 + 0x18) + -0x50);
          unaff_x23 = ppppppplVar38;
          if (*(long *)(lVar37 + 0x18) == 0) goto LAB_01d6c4e0;
          FUN_0199ce28(&local_1e8,ppppppplVar38);
          pppppplVar25 = local_1e8;
          puVar16 = PTR_DAT_0437a668;
          puVar40 = PTR_DAT_0437a660;
          if (local_1e8 == (long ******)0x0) goto LAB_01d6c46c;
          if (*(int *)((long)local_1e8 + 0xc) == 0) goto LAB_01d6cdb8;
          unaff_x23 = (long *******)((long)local_1e8 + 0xc);
          iVar19 = *(int *)((long)local_1e8 + 0xc);
          goto LAB_01d6c57c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      unaff_x23 = (long *******)(ulong)uVar9;
      puVar40 = PTR_DAT_04382858;
      plVar23 = (long *)PTR_DAT_043794a0;
      plVar42 = (long *)PTR_DAT_043794a8;
      pbVar43 = PTR_DAT_04379498;
    } while (uVar9 != 0);
  }
LAB_01d694f0:
  bVar12 = false;
  goto LAB_01d69514;
LAB_01d6d388:
  do {
    ppppplVar36 = pppppplVar25[2];
    if (((*puVar16 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar16), iVar20 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
        uVar22 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar22;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar40 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar16);
    }
    while( true ) {
      unaff_x23 = (long *******)puVar16;
      if (ppppplVar36 == (long *****)0x0) goto LAB_01d6dc9c;
      if (ppppplVar36 == (long *****)puVar40) break;
      ppppplVar36 = (long *****)*ppppplVar36;
    }
    iVar20 = *piVar1;
    if (iVar20 == iVar19) {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      if (cVar10 == '\0') {
        ppppplVar29 = pppppplVar25[3];
        ppppplVar36 = (long *****)0x0;
        pppppplVar25 = local_1e8;
        if (ppppplVar29 != (long *****)0x0) {
          ppppplVar36 = ppppplVar29 + -10;
        }
        goto joined_r0x01d6d3cc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar20;
  } while (iVar20 != 0);
LAB_01d6dc9c:
  ppppplVar36 = (long *****)0x0;
  pppppplVar25 = local_1e8;
joined_r0x01d6d3cc:
  local_1e8 = pppppplVar25;
  if (pppppplVar25 != (long ******)0x0) {
    pppppplVar28 = pppppplVar25 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[2] = (long *****)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  if (ppppplVar36 == (long *****)0x0) goto LAB_01d6d288;
  FUN_02be88ac(&local_1e8,local_190,0);
  FUN_00ab5ae0(&local_220,&local_1e8);
  pppppplVar25 = local_1e8;
  if (local_1e8 != (long ******)0x0) {
    pppppplVar28 = local_1e8 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e8[2] = (long *****)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  if (local_220 == (long ******)0x0) {
    bVar12 = false;
  }
  else {
    plVar23 = (long *)FUN_00b13c20(local_188 + 0x1e,&local_1e8);
    if (plVar23 == (long *)0x0) {
      bVar12 = false;
    }
    else {
      lVar37 = *(long *)(param_1 + 0x68);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_008802f0(&local_1e8,local_220 + 0xb);
      local_218 = (undefined8 *)0x0;
      uStack_210 = 0;
      FUN_018fea88(&local_218,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      (**(code **)(*plVar23 + 0x10))(&local_1e8,plVar23);
      local_230 = (long ******)0x0;
      uStack_228 = 0;
      FUN_00bd84b0(&local_230,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      pppppplVar25 = *(long *******)(lVar37 + 8);
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar40 = PTR_DAT_04379528;
        if (iVar19 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_01d6ec3c;
      *(long *******)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = pppppplVar25;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      unaff_x23 = (long *******)(*(code *)(*pppppplVar25)[2])(pppppplVar25,0x2c0,0x10);
      if (unaff_x23 == (long *******)0x0) {
        (*(code *)(*pppppplVar25)[0x17])(pppppplVar25);
      }
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_01900a28(&local_1e8,&local_218);
      local_90 = (long *******)0x0;
      uStack_88 = 0;
      FUN_00bd8d00(&local_90,&local_230);
      local_a0 = (long ******)0x0;
      uStack_98 = 0;
      FUN_019b5004(&local_a0,&local_270);
      local_208 = (long ******)0x0;
      uStack_200 = 0;
      FUN_00d07998(&local_208,&local_280);
      FUN_01bb0588(unaff_x23,&local_1e8,&local_90,&local_a0,&local_208);
      pppppplVar28 = local_208;
      if (local_208 != (long ******)0x0) {
        pppppplVar5 = local_208 + 1;
        do {
          iVar19 = *(int *)pppppplVar5;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
          if (bVar12) {
            *(int *)pppppplVar5 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_208[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_a8 = (long ******)*pppppplVar28;
          FUN_02a44274(lVar33 + 0xd8,&local_a8);
        }
      }
      pppppplVar28 = local_a0;
      if (local_a0 != (long ******)0x0) {
        pppppplVar5 = local_a0 + 1;
        do {
          iVar19 = *(int *)pppppplVar5;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
          if (bVar12) {
            *(int *)pppppplVar5 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_a0[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_a8 = (long ******)*pppppplVar28;
          FUN_02a44274(lVar33 + 0xd8,&local_a8);
        }
      }
      ppppppplVar7 = local_90;
      if (local_90 != (long *******)0x0) {
        ppppppplVar8 = local_90 + 1;
        do {
          iVar19 = *(int *)ppppppplVar8;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar8,0x10);
          if (bVar12) {
            *(int *)ppppppplVar8 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_90[2] = (long ******)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_a8 = *ppppppplVar7;
          FUN_02a44274(lVar33 + 0xd8,&local_a8);
        }
      }
      pppppplVar28 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        pppppplVar5 = local_1e8 + 1;
        do {
          iVar19 = *(int *)pppppplVar5;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
          if (bVar12) {
            *(int *)pppppplVar5 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_a8 = (long ******)*pppppplVar28;
          FUN_02a44274(lVar33 + 0xd8,&local_a8);
        }
      }
      unaff_x23[1] = pppppplVar25;
      unaff_x23[2] = (long ******)unaff_x23;
      unaff_x23[3] = (long ******)0x2c0;
      unaff_x23[4] = (long ******)0x10;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
      if (unaff_x23 != (long *******)0x0) {
        pppppplVar25 = unaff_x23[0xb];
        if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
        if (pppppplVar25[2] == (long *****)0x0) {
          ppppplVar29 = (long *****)(*(code *)**pppppplVar25[3])();
          pppppplVar25[2] = ppppplVar29;
        }
        piVar1 = (int *)((long)pppppplVar25 + 0xc);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      ppppppplVar7 = (long *******)0x0;
      if (unaff_x23 != (long *******)0x0) {
        ppppppplVar7 = unaff_x23 + 9;
      }
      (*(code *)(*ppppppplVar7)[0x17])(ppppppplVar7,lVar37);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_009ad580(&local_1e8,lVar37 + 0x318);
      (*(code *)(*ppppppplVar7)[0x18])(ppppppplVar7,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      (*(code *)(*ppppppplVar7)[0x19])(ppppppplVar7,*(undefined1 *)(lVar37 + 0x33b));
      (*(code *)(*ppppppplVar7)[0x12])(ppppppplVar7);
      local_90 = unaff_x23;
      FUN_02a4dad4(lVar37 + 0xf0,&local_90);
      pppppplVar25 = local_230;
      if (local_90 != (long *******)0x0) {
        pppppplVar28 = local_90[0xb];
        piVar1 = (int *)((long)pppppplVar28 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          pppppplVar28[3] = (long *****)0x0;
          (*(code *)(*local_90)[4])();
          pppppplVar25 = local_230;
        }
      }
      local_230 = pppppplVar25;
      if (pppppplVar25 != (long ******)0x0) {
        pppppplVar28 = pppppplVar25 + 1;
        do {
          iVar19 = *(int *)pppppplVar28;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
          if (bVar12) {
            *(int *)pppppplVar28 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          pppppplVar25[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_1e8 = (long ******)*pppppplVar25;
          FUN_02a44274(lVar37 + 0xd8,&local_1e8);
        }
      }
      puVar39 = local_218;
      if (local_218 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_218 + 1);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_218[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_1e8 = (long ******)*puVar39;
          FUN_02a44274(lVar37 + 0xd8,&local_1e8);
        }
      }
      ppppppplVar7 = unaff_x23 + 0x49;
      (*(code *)unaff_x23[0x49][4])(&local_90,ppppppplVar7);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_01800100(&local_1e8,&local_90);
      ppppppplVar8 = local_90;
      if (local_90 != (long *******)0x0) {
        ppppppplVar27 = local_90 + 1;
        do {
          iVar19 = *(int *)ppppppplVar27;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
          if (bVar12) {
            *(int *)ppppppplVar27 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_90[2] = (long ******)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_a0 = *ppppppplVar8;
          FUN_02a44274(lVar37 + 0xd8,&local_a0);
        }
      }
      local_a0 = local_220;
      local_1d8 = ppppppplVar7;
      if (local_220 != (long ******)0x0) {
        ppppplVar29 = local_220[0xb];
        if (ppppplVar29[3] == (long ****)0x0) goto LAB_01d6ea54;
        if (ppppplVar29[2] == (long ****)0x0) {
          pppplVar21 = (long ****)(*(code *)**ppppplVar29[3])();
          ppppplVar29[2] = pppplVar21;
        }
        piVar1 = (int *)((long)ppppplVar29 + 0xc);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_01e44b74(ppppplVar36,0,&local_a0,&local_1e8);
      if (local_a0 != (long ******)0x0) {
        ppppplVar29 = local_a0[0xb];
        piVar1 = (int *)((long)ppppplVar29 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          ppppplVar29[3] = (long ****)0x0;
          (*(code *)(*local_a0)[4])();
        }
      }
      pppppplVar25 = unaff_x23[0xb];
      if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
      if (pppppplVar25[2] == (long *****)0x0) {
        ppppplVar29 = (long *****)(*(code *)**pppppplVar25[3])();
        pppppplVar25[2] = ppppplVar29;
      }
      pppppplVar28 = local_1e8;
      piVar1 = (int *)((long)pppppplVar25 + 0xc);
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (local_1e8 != (long ******)0x0) {
        pppppplVar25 = local_1e8 + 1;
        do {
          iVar19 = *(int *)pppppplVar25;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
          if (bVar12) {
            *(int *)pppppplVar25 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_90 = (long *******)*pppppplVar28;
          FUN_02a44274(lVar37 + 0xd8,&local_90);
        }
      }
      bVar12 = true;
    }
    if (local_220 != (long ******)0x0) {
      ppppplVar29 = local_220[0xb];
      piVar1 = (int *)((long)ppppplVar29 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar10 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        ppppplVar29[3] = (long ****)0x0;
        (*(code *)(*local_220)[4])();
      }
    }
  }
  pppplVar21 = ppppplVar36[0xb];
  piVar1 = (int *)((long)pppplVar21 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar10 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar13) {
      *piVar1 = iVar19 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (iVar19 + -1 == 0) {
    pppplVar21[3] = (long ***)0x0;
    (*(code *)(*ppppplVar36)[4])(ppppplVar36);
    if (bVar12) goto LAB_01d6dc0c;
    goto LAB_01d6d288;
  }
  if (!bVar12) goto LAB_01d6d288;
LAB_01d6dc0c:
  bVar12 = true;
  pbVar43 = PTR_DAT_04379498;
  plVar23 = (long *)PTR_DAT_043794a0;
  plVar42 = (long *)PTR_DAT_043794a8;
  goto joined_r0x01d6dc28;
LAB_01d6e220:
  do {
    ppppplVar36 = pppppplVar25[2];
    if (((*puVar15 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar15), iVar20 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
        uVar22 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar22;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar40 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar15);
    }
    while( true ) {
      ppppppplVar24 = (long *******)puVar15;
      if (ppppplVar36 == (long *****)0x0) goto LAB_01d6ead8;
      if (ppppplVar36 == (long *****)puVar40) break;
      ppppplVar36 = (long *****)*ppppplVar36;
    }
    iVar20 = *piVar1;
    if (iVar20 == iVar19) {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      if (cVar10 == '\0') {
        ppppplVar29 = pppppplVar25[3];
        ppppplVar36 = (long *****)0x0;
        pppppplVar25 = local_1e8;
        if (ppppplVar29 != (long *****)0x0) {
          ppppplVar36 = ppppplVar29 + -10;
        }
        goto joined_r0x01d6e264;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar20;
  } while (iVar20 != 0);
LAB_01d6ead8:
  ppppplVar36 = (long *****)0x0;
  pppppplVar25 = local_1e8;
joined_r0x01d6e264:
  local_1e8 = pppppplVar25;
  if (pppppplVar25 != (long ******)0x0) {
    pppppplVar28 = pppppplVar25 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[2] = (long *****)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  if (ppppplVar36 == (long *****)0x0) goto LAB_01d6e12c;
  FUN_02be88ac(&local_1e8,local_188,0);
  FUN_00ab5ae0(&local_1f8,&local_1e8);
  pppppplVar25 = local_1e8;
  if (local_1e8 != (long ******)0x0) {
    pppppplVar28 = local_1e8 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e8[2] = (long *****)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  if (local_1f8 == (long ******)0x0) {
    bVar12 = false;
  }
  else {
    plVar23 = (long *)FUN_00b13c20(local_a8 + 0x1e,&local_1e8);
    if (plVar23 == (long *)0x0) {
      bVar12 = false;
    }
    else {
      lVar37 = *(long *)(param_1 + 0x68);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_008802f0(&local_1e8,local_1f8 + 0xb);
      local_208 = (long ******)0x0;
      uStack_200 = 0;
      FUN_018fea88(&local_208,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      (**(code **)(*plVar23 + 0x10))(&local_1e8,plVar23);
      local_218 = (undefined8 *)0x0;
      uStack_210 = 0;
      FUN_00bd84b0(&local_218,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      pppppplVar25 = *(long *******)(lVar37 + 8);
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar40 = PTR_DAT_04379528;
        if (iVar19 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar32 + 0x80)) {
LAB_01d6ec3c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *******)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = pppppplVar25;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      ppppppplVar24 = (long *******)(*(code *)(*pppppplVar25)[2])(pppppplVar25,0x2d0,0x10);
      if (ppppppplVar24 == (long *******)0x0) {
        (*(code *)(*pppppplVar25)[0x17])(pppppplVar25);
      }
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_01900a28(&local_1e8,&local_208);
      local_90 = (long *******)0x0;
      uStack_88 = 0;
      FUN_00bd8d00(&local_90,&local_218);
      local_a0 = (long ******)0x0;
      uStack_98 = 0;
      FUN_00d07998(&local_a0,&local_290);
      FUN_01be8f44(ppppppplVar24,&local_1e8,&local_90,&local_a0);
      pppppplVar28 = local_a0;
      if (local_a0 != (long ******)0x0) {
        pppppplVar5 = local_a0 + 1;
        do {
          iVar19 = *(int *)pppppplVar5;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
          if (bVar12) {
            *(int *)pppppplVar5 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_a0[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_230 = (long ******)*pppppplVar28;
          FUN_02a44274(lVar33 + 0xd8,&local_230);
        }
      }
      ppppppplVar8 = local_90;
      if (local_90 != (long *******)0x0) {
        ppppppplVar27 = local_90 + 1;
        do {
          iVar19 = *(int *)ppppppplVar27;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
          if (bVar12) {
            *(int *)ppppppplVar27 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_90[2] = (long ******)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_230 = *ppppppplVar8;
          FUN_02a44274(lVar33 + 0xd8,&local_230);
        }
      }
      pppppplVar28 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        pppppplVar5 = local_1e8 + 1;
        do {
          iVar19 = *(int *)pppppplVar5;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
          if (bVar12) {
            *(int *)pppppplVar5 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar33 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar33;
          local_230 = (long ******)*pppppplVar28;
          FUN_02a44274(lVar33 + 0xd8,&local_230);
        }
      }
      ppppppplVar24[1] = pppppplVar25;
      ppppppplVar24[2] = (long ******)ppppppplVar24;
      ppppppplVar24[3] = (long ******)0x2d0;
      ppppppplVar24[4] = (long ******)0x10;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
      if (ppppppplVar24 != (long *******)0x0) {
        pppppplVar25 = ppppppplVar24[0xb];
        if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
        if (pppppplVar25[2] == (long *****)0x0) {
          ppppplVar29 = (long *****)(*(code *)**pppppplVar25[3])();
          pppppplVar25[2] = ppppplVar29;
        }
        piVar1 = (int *)((long)pppppplVar25 + 0xc);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      ppppppplVar8 = (long *******)0x0;
      if (ppppppplVar24 != (long *******)0x0) {
        ppppppplVar8 = ppppppplVar24 + 9;
      }
      (*(code *)(*ppppppplVar8)[0x17])(ppppppplVar8,lVar37);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_009ad580(&local_1e8,lVar37 + 0x318);
      (*(code *)(*ppppppplVar8)[0x18])(ppppppplVar8,&local_1e8);
      pppppplVar25 = local_1e8;
      if (local_1e8 != (long ******)0x0) {
        ppppplVar29 = (long *****)(local_1e8 + 1);
        do {
          iVar19 = *(int *)ppppplVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
          if (bVar12) {
            *(int *)ppppplVar29 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar32;
          local_90 = (long *******)*pppppplVar25;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
      (*(code *)(*ppppppplVar8)[0x19])(ppppppplVar8,*(undefined1 *)(lVar37 + 0x33b));
      (*(code *)(*ppppppplVar8)[0x12])(ppppppplVar8);
      local_90 = ppppppplVar24;
      FUN_02a4dad4(lVar37 + 0xf0,&local_90);
      puVar39 = local_218;
      if (local_90 != (long *******)0x0) {
        pppppplVar25 = local_90[0xb];
        piVar1 = (int *)((long)pppppplVar25 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          pppppplVar25[3] = (long *****)0x0;
          (*(code *)(*local_90)[4])();
          puVar39 = local_218;
        }
      }
      local_218 = puVar39;
      if (puVar39 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar39 + 1);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          puVar39[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_1e8 = (long ******)*puVar39;
          FUN_02a44274(lVar37 + 0xd8,&local_1e8);
        }
      }
      pppppplVar25 = local_208;
      if (local_208 != (long ******)0x0) {
        pppppplVar28 = local_208 + 1;
        do {
          iVar19 = *(int *)pppppplVar28;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
          if (bVar12) {
            *(int *)pppppplVar28 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_208[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_1e8 = (long ******)*pppppplVar25;
          FUN_02a44274(lVar37 + 0xd8,&local_1e8);
        }
      }
      ppppppplVar8 = ppppppplVar24 + 0x49;
      (*(code *)ppppppplVar24[0x49][4])(&local_90,ppppppplVar8);
      local_1e8 = (long ******)0x0;
      local_1e0 = (char *)0x0;
      FUN_01800100(&local_1e8,&local_90);
      ppppppplVar27 = local_90;
      if (local_90 != (long *******)0x0) {
        ppppppplVar6 = local_90 + 1;
        do {
          iVar19 = *(int *)ppppppplVar6;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar6,0x10);
          if (bVar12) {
            *(int *)ppppppplVar6 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_90[2] = (long ******)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_a0 = *ppppppplVar27;
          FUN_02a44274(lVar37 + 0xd8,&local_a0);
        }
      }
      local_a0 = local_1f8;
      local_1d8 = ppppppplVar8;
      if (local_1f8 != (long ******)0x0) {
        ppppplVar29 = local_1f8[0xb];
        if (ppppplVar29[3] == (long ****)0x0) goto LAB_01d6ea54;
        if (ppppplVar29[2] == (long ****)0x0) {
          pppplVar21 = (long ****)(*(code *)**ppppplVar29[3])();
          ppppplVar29[2] = pppplVar21;
        }
        piVar1 = (int *)((long)ppppplVar29 + 0xc);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_01e44b74(ppppplVar36,0,&local_a0,&local_1e8);
      if (local_a0 != (long ******)0x0) {
        ppppplVar29 = local_a0[0xb];
        piVar1 = (int *)((long)ppppplVar29 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          ppppplVar29[3] = (long ****)0x0;
          (*(code *)(*local_a0)[4])();
        }
      }
      pppppplVar25 = ppppppplVar24[0xb];
      if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
      if (pppppplVar25[2] == (long *****)0x0) {
        ppppplVar29 = (long *****)(*(code *)**pppppplVar25[3])();
        pppppplVar25[2] = ppppplVar29;
      }
      pppppplVar28 = local_1e8;
      piVar1 = (int *)((long)pppppplVar25 + 0xc);
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (local_1e8 != (long ******)0x0) {
        pppppplVar25 = local_1e8 + 1;
        do {
          iVar19 = *(int *)pppppplVar25;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
          if (bVar12) {
            *(int *)pppppplVar25 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          local_1e8[2] = (long *****)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar37 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar37;
          local_90 = (long *******)*pppppplVar28;
          FUN_02a44274(lVar37 + 0xd8,&local_90);
        }
      }
      bVar12 = true;
    }
    if (local_1f8 != (long ******)0x0) {
      ppppplVar29 = local_1f8[0xb];
      piVar1 = (int *)((long)ppppplVar29 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar10 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        ppppplVar29[3] = (long ****)0x0;
        (*(code *)(*local_1f8)[4])();
      }
    }
  }
  pppplVar21 = ppppplVar36[0xb];
  piVar1 = (int *)((long)pppplVar21 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar10 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar13) {
      *piVar1 = iVar19 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (iVar19 + -1 == 0) {
    pppplVar21[3] = (long ***)0x0;
    (*(code *)(*ppppplVar36)[4])(ppppplVar36);
    if (bVar12) goto LAB_01d6ea30;
    goto LAB_01d6e12c;
  }
  if (!bVar12) goto LAB_01d6e12c;
LAB_01d6ea30:
  bVar12 = true;
  pbVar43 = PTR_DAT_04379498;
  plVar23 = (long *)PTR_DAT_043794a0;
  plVar42 = (long *)PTR_DAT_043794a8;
  goto joined_r0x01d6ea4c;
LAB_01d6a0dc:
  plVar34 = (long *)plVar34[3];
  if (plVar34 != (long *)0x0) {
    plVar2 = plVar34 + 10;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    uVar26 = plVar34[0x21];
    uVar44 = 0;
    if (uVar26 != 0) {
      uVar30 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
      uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar30 < 2) {
        uVar31 = uVar26 - 1 & 0x698000f53b96ea96;
      }
      else if (uVar26 < 0x698000f53b96ea97) {
        uVar31 = 0;
        if (uVar26 != 0) {
          uVar31 = 0x698000f53b96ea96 / uVar26;
        }
        uVar31 = 0x698000f53b96ea96 - uVar31 * uVar26;
      }
      else {
        uVar31 = 0x698000f53b96ea96;
      }
      plVar35 = *(long **)(plVar34[0x20] + uVar31 * 8);
      if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
        if (uVar30 < 2) {
          do {
            if (plVar35[1] == 0x698000f53b96ea96) {
              if (plVar35[2] == 0x698000f53b96ea96) goto LAB_01d6a220;
            }
            else if ((plVar35[1] & uVar26 - 1) != uVar31) break;
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
        else {
          do {
            uVar30 = plVar35[1];
            if (uVar30 == 0x698000f53b96ea96) {
              if (plVar35[2] == 0x698000f53b96ea96) goto LAB_01d6a220;
            }
            else {
              if (uVar26 <= uVar30) {
                uVar14 = 0;
                if (uVar26 != 0) {
                  uVar14 = uVar30 / uVar26;
                }
                uVar30 = uVar30 - uVar14 * uVar26;
              }
              if (uVar30 != uVar31) break;
            }
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
      }
    }
    goto LAB_01d6a224;
  }
  goto LAB_01d6a238;
LAB_01d6a220:
  uVar44 = (undefined4)plVar35[6];
LAB_01d6a224:
  do {
    iVar19 = (int)*plVar2 + -1;
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *(int *)plVar2 = iVar19;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar34 + 0x10))();
  }
  goto LAB_01d6a238;
LAB_01d6a428:
  uVar44 = (undefined4)plVar35[6];
  goto LAB_01d6a42c;
  while (iVar19 = iVar20, iVar20 != 0) {
LAB_01d6c57c:
    ppppplVar36 = pppppplVar25[2];
    if (((*puVar16 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar16), iVar20 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
        uVar22 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar22;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar40 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar16);
    }
    ppppplVar29 = (long *****)0x0;
    ppppppplVar24 = (long *******)puVar16;
    pppppplVar28 = local_1e8;
    if (ppppplVar36 == (long *****)0x0) goto joined_r0x01d6c5c0;
    while (ppppplVar36 != (long *****)puVar40) {
      ppppplVar36 = (long *****)*ppppplVar36;
      if (ppppplVar36 == (long *****)0x0) {
        ppppplVar29 = (long *****)0x0;
        goto joined_r0x01d6c5c0;
      }
    }
    iVar20 = *(int *)unaff_x23;
    if (iVar20 == iVar19) {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
      if (bVar12) {
        *(int *)unaff_x23 = iVar19 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      if (cVar10 == '\0') {
        ppppplVar36 = pppppplVar25[3];
        ppppplVar29 = (long *****)0x0;
        if (ppppplVar36 != (long *****)0x0) {
          ppppplVar29 = ppppplVar36 + -10;
        }
        goto joined_r0x01d6c5c0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01d6cdb8:
  ppppplVar29 = (long *****)0x0;
  pppppplVar28 = local_1e8;
joined_r0x01d6c5c0:
  local_1e8 = pppppplVar28;
  if (pppppplVar28 != (long ******)0x0) {
    pppppplVar25 = pppppplVar28 + 1;
    do {
      iVar19 = *(int *)pppppplVar25;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
      if (bVar12) {
        *(int *)pppppplVar25 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar28[2] = (long *****)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar37;
      local_90 = (long *******)*pppppplVar28;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  if (ppppplVar29 == (long *****)0x0) {
LAB_01d6c46c:
    bVar12 = false;
    pbVar43 = PTR_DAT_04379498;
    plVar23 = (long *)PTR_DAT_043794a0;
    plVar42 = (long *)PTR_DAT_043794a8;
    puVar40 = PTR_DAT_04382858;
  }
  else {
    FUN_02be88ac(&local_1e8,local_188,0);
    FUN_00ab5ae0(&local_1f8,&local_1e8);
    pppppplVar25 = local_1e8;
    if (local_1e8 != (long ******)0x0) {
      pppppplVar28 = local_1e8 + 1;
      do {
        iVar19 = *(int *)pppppplVar28;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
        if (bVar12) {
          *(int *)pppppplVar28 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        local_1e8[2] = (long *****)0x0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar37;
        local_90 = (long *******)*pppppplVar25;
        FUN_02a44274(lVar37 + 0xd8,&local_90);
      }
    }
    if (local_1f8 == (long ******)0x0) {
      bVar12 = false;
    }
    else {
      plVar23 = (long *)FUN_00b13c20(local_a8 + 0x1e,&local_1e8);
      if (plVar23 == (long *)0x0) {
        bVar12 = false;
      }
      else {
        lVar37 = *(long *)(param_1 + 0x68);
        local_1e8 = (long ******)0x0;
        local_1e0 = (char *)0x0;
        FUN_008802f0(&local_1e8,local_1f8 + 0xb);
        local_208 = (long ******)0x0;
        uStack_200 = 0;
        FUN_018fea88(&local_208,&local_1e8);
        pppppplVar25 = local_1e8;
        if (local_1e8 != (long ******)0x0) {
          ppppplVar36 = (long *****)(local_1e8 + 1);
          do {
            iVar19 = *(int *)ppppplVar36;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
            if (bVar12) {
              *(int *)ppppplVar36 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_1e8[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar32 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_90 = (long *******)*pppppplVar25;
            FUN_02a44274(lVar32 + 0xd8,&local_90);
          }
        }
        (**(code **)(*plVar23 + 0x10))(&local_1e8,plVar23);
        local_218 = (undefined8 *)0x0;
        uStack_210 = 0;
        FUN_00bd84b0(&local_218,&local_1e8);
        pppppplVar25 = local_1e8;
        if (local_1e8 != (long ******)0x0) {
          ppppplVar36 = (long *****)(local_1e8 + 1);
          do {
            iVar19 = *(int *)ppppplVar36;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
            if (bVar12) {
              *(int *)ppppplVar36 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_1e8[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar32 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_90 = (long *******)*pppppplVar25;
            FUN_02a44274(lVar32 + 0xd8,&local_90);
          }
        }
        pppppplVar25 = *(long *******)(lVar37 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar19 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar40 = PTR_DAT_04379528;
          if (iVar19 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar40,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_01d6ec3c;
        *(long *******)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = pppppplVar25;
        *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
        ppppppplVar24 = (long *******)(*(code *)(*pppppplVar25)[2])(pppppplVar25,0x2a0,0x10);
        if (ppppppplVar24 == (long *******)0x0) {
          (*(code *)(*pppppplVar25)[0x17])(pppppplVar25);
        }
        local_1e8 = (long ******)0x0;
        local_1e0 = (char *)0x0;
        FUN_01900a28(&local_1e8,&local_208);
        local_90 = (long *******)0x0;
        uStack_88 = 0;
        FUN_00bd8d00(&local_90,&local_218);
        local_a0 = (long ******)0x0;
        uStack_98 = 0;
        FUN_00d07998(&local_a0,&local_260);
        FUN_01c387e0(ppppppplVar24,&local_1e8,&local_90,&local_a0);
        pppppplVar28 = local_a0;
        if (local_a0 != (long ******)0x0) {
          pppppplVar5 = local_a0 + 1;
          do {
            iVar19 = *(int *)pppppplVar5;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
            if (bVar12) {
              *(int *)pppppplVar5 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_a0[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar33 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar33;
            local_230 = (long ******)*pppppplVar28;
            FUN_02a44274(lVar33 + 0xd8,&local_230);
          }
        }
        ppppppplVar7 = local_90;
        if (local_90 != (long *******)0x0) {
          ppppppplVar8 = local_90 + 1;
          do {
            iVar19 = *(int *)ppppppplVar8;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar8,0x10);
            if (bVar12) {
              *(int *)ppppppplVar8 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_90[2] = (long ******)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar33 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar33;
            local_230 = *ppppppplVar7;
            FUN_02a44274(lVar33 + 0xd8,&local_230);
          }
        }
        pppppplVar28 = local_1e8;
        if (local_1e8 != (long ******)0x0) {
          pppppplVar5 = local_1e8 + 1;
          do {
            iVar19 = *(int *)pppppplVar5;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
            if (bVar12) {
              *(int *)pppppplVar5 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_1e8[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar33 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar33;
            local_230 = (long ******)*pppppplVar28;
            FUN_02a44274(lVar33 + 0xd8,&local_230);
          }
        }
        ppppppplVar24[1] = pppppplVar25;
        ppppppplVar24[2] = (long ******)ppppppplVar24;
        ppppppplVar24[3] = (long ******)0x2a0;
        ppppppplVar24[4] = (long ******)0x10;
        *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
        if (ppppppplVar24 != (long *******)0x0) {
          pppppplVar25 = ppppppplVar24[0xb];
          if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
          if (pppppplVar25[2] == (long *****)0x0) {
            ppppplVar36 = (long *****)(*(code *)**pppppplVar25[3])();
            pppppplVar25[2] = ppppplVar36;
          }
          piVar1 = (int *)((long)pppppplVar25 + 0xc);
          do {
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        ppppppplVar7 = (long *******)0x0;
        if (ppppppplVar24 != (long *******)0x0) {
          ppppppplVar7 = ppppppplVar24 + 9;
        }
        (*(code *)(*ppppppplVar7)[0x17])(ppppppplVar7,lVar37);
        local_1e8 = (long ******)0x0;
        local_1e0 = (char *)0x0;
        FUN_009ad580(&local_1e8,lVar37 + 0x318);
        (*(code *)(*ppppppplVar7)[0x18])(ppppppplVar7,&local_1e8);
        pppppplVar25 = local_1e8;
        if (local_1e8 != (long ******)0x0) {
          ppppplVar36 = (long *****)(local_1e8 + 1);
          do {
            iVar19 = *(int *)ppppplVar36;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
            if (bVar12) {
              *(int *)ppppplVar36 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_1e8[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar32 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_90 = (long *******)*pppppplVar25;
            FUN_02a44274(lVar32 + 0xd8,&local_90);
          }
        }
        (*(code *)(*ppppppplVar7)[0x19])(ppppppplVar7,*(undefined1 *)(lVar37 + 0x33b));
        (*(code *)(*ppppppplVar7)[0x12])(ppppppplVar7);
        local_90 = ppppppplVar24;
        FUN_02a4dad4(lVar37 + 0xf0,&local_90);
        puVar39 = local_218;
        if (local_90 != (long *******)0x0) {
          pppppplVar25 = local_90[0xb];
          piVar1 = (int *)((long)pppppplVar25 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            pppppplVar25[3] = (long *****)0x0;
            (*(code *)(*local_90)[4])();
            puVar39 = local_218;
          }
        }
        local_218 = puVar39;
        if (puVar39 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar39 + 1);
          do {
            iVar19 = *piVar1;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            puVar39[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_1e8 = (long ******)*puVar39;
            FUN_02a44274(lVar37 + 0xd8,&local_1e8);
          }
        }
        pppppplVar25 = local_208;
        if (local_208 != (long ******)0x0) {
          pppppplVar28 = local_208 + 1;
          do {
            iVar19 = *(int *)pppppplVar28;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
            if (bVar12) {
              *(int *)pppppplVar28 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_208[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_1e8 = (long ******)*pppppplVar25;
            FUN_02a44274(lVar37 + 0xd8,&local_1e8);
          }
        }
        unaff_x23 = ppppppplVar24 + 0x49;
        (*(code *)ppppppplVar24[0x49][4])(&local_90,unaff_x23);
        local_1e8 = (long ******)0x0;
        local_1e0 = (char *)0x0;
        FUN_01800100(&local_1e8,&local_90);
        ppppppplVar7 = local_90;
        if (local_90 != (long *******)0x0) {
          ppppppplVar8 = local_90 + 1;
          do {
            iVar19 = *(int *)ppppppplVar8;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar8,0x10);
            if (bVar12) {
              *(int *)ppppppplVar8 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_90[2] = (long ******)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_a0 = *ppppppplVar7;
            FUN_02a44274(lVar37 + 0xd8,&local_a0);
          }
        }
        local_a0 = local_1f8;
        local_1d8 = unaff_x23;
        if (local_1f8 != (long ******)0x0) {
          ppppplVar36 = local_1f8[0xb];
          if (ppppplVar36[3] == (long ****)0x0) goto LAB_01d6ea54;
          if (ppppplVar36[2] == (long ****)0x0) {
            pppplVar21 = (long ****)(*(code *)**ppppplVar36[3])();
            ppppplVar36[2] = pppplVar21;
          }
          piVar1 = (int *)((long)ppppplVar36 + 0xc);
          do {
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        FUN_01e44b74(ppppplVar29,0,&local_a0,&local_1e8);
        if (local_a0 != (long ******)0x0) {
          ppppplVar36 = local_a0[0xb];
          piVar1 = (int *)((long)ppppplVar36 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            ppppplVar36[3] = (long ****)0x0;
            (*(code *)(*local_a0)[4])();
          }
        }
        pppppplVar25 = ppppppplVar24[0xb];
        if (pppppplVar25[3] == (long *****)0x0) goto LAB_01d6ea54;
        if (pppppplVar25[2] == (long *****)0x0) {
          ppppplVar36 = (long *****)(*(code *)**pppppplVar25[3])();
          pppppplVar25[2] = ppppplVar36;
        }
        pppppplVar28 = local_1e8;
        piVar1 = (int *)((long)pppppplVar25 + 0xc);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (local_1e8 != (long ******)0x0) {
          pppppplVar25 = local_1e8 + 1;
          do {
            iVar19 = *(int *)pppppplVar25;
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
            if (bVar12) {
              *(int *)pppppplVar25 = iVar19 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar19 + -1 == 0) {
            local_1e8[2] = (long *****)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar37 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar37;
            local_90 = (long *******)*pppppplVar28;
            FUN_02a44274(lVar37 + 0xd8,&local_90);
          }
        }
        bVar12 = true;
      }
      if (local_1f8 != (long ******)0x0) {
        ppppplVar36 = local_1f8[0xb];
        piVar1 = (int *)((long)ppppplVar36 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar19 + -1 == 0) {
          ppppplVar36[3] = (long ****)0x0;
          (*(code *)(*local_1f8)[4])();
        }
      }
    }
    pppplVar21 = ppppplVar29[0xb];
    piVar1 = (int *)((long)pppplVar21 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppplVar21[3] = (long ***)0x0;
      (*(code *)(*ppppplVar29)[4])(ppppplVar29);
    }
    if (!bVar12) goto LAB_01d6c46c;
    bVar12 = true;
    pbVar43 = PTR_DAT_04379498;
    plVar23 = (long *)PTR_DAT_043794a0;
    plVar42 = (long *)PTR_DAT_043794a8;
    puVar40 = PTR_DAT_04382858;
  }
  PTR_DAT_04379498 = pbVar43;
  PTR_DAT_043794a0 = (undefined *)plVar23;
  PTR_DAT_043794a8 = (undefined *)plVar42;
  PTR_DAT_04382858 = puVar40;
  if (ppppppplVar38 != (long *******)0x0) {
    pppppplVar25 = ppppppplVar38[0xb];
    piVar1 = (int *)((long)pppppplVar25 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[3] = (long *****)0x0;
      (*(code *)(*ppppppplVar38)[4])(ppppppplVar38);
    }
  }
LAB_01d69514:
  ppppppplVar38 = (long *******)0x0;
  if (bVar12) {
    ppppppplVar38 = ppppppplVar24;
  }
  cVar18 = local_110;
  cVar10 = local_110;
  if (local_188 != (long *)0x0) {
    lVar37 = local_188[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
      cVar18 = '\0';
      cVar10 = local_110;
    }
  }
  local_110 = cVar18;
  if (cVar10 != '\0') {
    local_110 = '\0';
  }
  puVar39 = local_260;
  if (local_a8 != (long ******)0x0) {
    ppppplVar36 = *(long ******)((long)local_a8 + 0x58);
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_a8)[4])();
      puVar39 = local_260;
    }
  }
  local_260 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  local_270 = (undefined8 *)0x0;
  uStack_268 = 0;
  FUN_0192ac94(&local_270,&local_240);
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x10))(&local_180);
  local_280 = (undefined8 *)0x0;
  uStack_278 = 0;
  FUN_00d07698(&local_280,&local_180);
  ppppppplVar24 = local_180;
  if (local_180 != (long *******)0x0) {
    pppppplVar25 = (long ******)(local_180 + 1);
    do {
      iVar19 = *(int *)pppppplVar25;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
      if (bVar12) {
        *(int *)pppppplVar25 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_180[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = *ppppppplVar24;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  local_c8 = (long ******)0x10b42e306c284297;
  local_c0 = "PlayerItemPickCandidacyComponent";
  local_b8 = 0x20;
  uStack_b0 = 0;
  FUN_01d806e8(&local_188,param_1,&local_c8);
  local_170 = (undefined8 *)(puVar40 + 0x10);
  local_160 = &PTR_FUN_04287c08;
  local_168 = CONCAT44(local_168._4_4_,1);
  local_180 = (long *******)0x0;
  local_110 = '\0';
  local_120 = 0;
  local_f0 = 1;
  local_150 = 0;
  uStack_148 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_ec = 0x3f000000bf800000;
  local_e4 = 0x3f000000;
  local_e0 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar37 = *(long *)PTR_DAT_0437a650;
  *(long *)puVar15 = lVar37;
  local_180 = *(long ********)(lVar37 + 0x230);
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0x3f800000;
  local_e0 = CONCAT11(local_e0._1_1_,1);
  local_f0 = 1;
  local_130 = CONCAT44(local_130._4_4_,2);
  local_1f0 = local_188;
  if (local_188 != (long *)0x0) {
    lVar37 = local_188[0xb];
    if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) goto LAB_01d6ea54;
    if (*(long *)(lVar37 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
      *(undefined8 *)(lVar37 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01c6ba38(&local_190,param_1,&local_1f0,&local_180);
  if (local_1f0 != (long *)0x0) {
    lVar37 = local_1f0[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_1f0 + 0x20))();
    }
  }
  local_198 = 0;
  local_1e0 = (char *)0x0;
  local_1e8 = (long ******)CONCAT44(local_1e8._4_4_,2);
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1d8 = (long *******)0x0;
  local_1d0 = (undefined8 *)0x0;
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x18))(&local_90);
  local_a0 = (long ******)0x0;
  uStack_98 = 0;
  FUN_00d07698(&local_a0,&local_90);
  ppppppplVar24 = local_90;
  if (local_90 != (long *******)0x0) {
    ppppppplVar7 = local_90 + 1;
    do {
      iVar19 = *(int *)ppppppplVar7;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar7,0x10);
      if (bVar12) {
        *(int *)ppppppplVar7 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_208 = *ppppppplVar24;
      FUN_02a44274(lVar37 + 0xd8,&local_208);
    }
  }
  FUN_01d87dc8(&local_1d0,&local_a0);
  pppppplVar25 = local_a0;
  if (local_a0 != (long ******)0x0) {
    pppppplVar28 = local_a0 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_a0[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  local_1f8 = local_190;
  if (local_190 != (long ******)0x0) {
    ppppplVar36 = local_190[0xb];
    if (ppppplVar36[3] == (long ****)0x0) goto LAB_01d6ea54;
    if (ppppplVar36[2] == (long ****)0x0) {
      pppplVar21 = (long ****)(*(code *)**ppppplVar36[3])();
      ppppplVar36[2] = pppplVar21;
    }
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01e4b6a0(&local_1f8,&local_1e8);
  puVar39 = local_1a8;
  if (local_1f8 != (long ******)0x0) {
    ppppplVar36 = local_1f8[0xb];
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_1f8)[4])();
      puVar39 = local_1a8;
    }
  }
  local_1a8 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1c0;
  if (local_1c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1c0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1c0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pcVar41 = local_1e0;
  if (local_1e0 != (char *)0x0) {
    piVar1 = (int *)(local_1e0 + 8);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e0[0x10] = '\0';
      local_1e0[0x11] = '\0';
      local_1e0[0x12] = '\0';
      local_1e0[0x13] = '\0';
      local_1e0[0x14] = '\0';
      local_1e0[0x15] = '\0';
      local_1e0[0x16] = '\0';
      local_1e0[0x17] = '\0';
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = *(long ********)pcVar41;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  lVar37 = *(long *)(param_1 + 0x90);
  ppppppplVar24 = (long *******)&local_180;
  if (lVar37 == 0) {
LAB_01d69a08:
    bVar12 = false;
  }
  else {
    if (*(int *)(lVar37 + 0xc) != 0) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar19 = *(int *)(lVar37 + 0xc);
      do {
        local_298 = *(undefined8 **)(lVar37 + 0x10);
        pbVar43 = PTR_DAT_04379498;
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        if ((*PTR_DAT_043796e0 & 1) == 0) {
          iVar20 = __cxa_guard_acquire(PTR_DAT_043796e0);
          pbVar43 = PTR_DAT_04379498;
          plVar23 = (long *)PTR_DAT_043794a0;
          plVar42 = (long *)PTR_DAT_043794a8;
          if (iVar20 != 0) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
              uVar22 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar22;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043796e0);
            pbVar43 = PTR_DAT_04379498;
            plVar23 = (long *)PTR_DAT_043794a0;
            plVar42 = (long *)PTR_DAT_043794a8;
          }
        }
        PTR_DAT_04379498 = pbVar43;
        PTR_DAT_043794a0 = (undefined *)plVar23;
        PTR_DAT_043794a8 = (undefined *)plVar42;
        if (local_298 == (undefined8 *)0x0) goto LAB_01d6d2f4;
        while (local_298 != (undefined8 *)PTR_DAT_043796e8) {
          local_298 = (undefined8 *)*local_298;
          if (local_298 == (undefined8 *)0x0) goto LAB_01d69a08;
        }
        iVar20 = *piVar1;
        if (iVar20 == iVar19) {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') {
            plVar34 = (long *)(*(long *)(lVar37 + 0x18) + -0x50);
            if (*(long *)(lVar37 + 0x18) == 0) goto LAB_01d6d2f4;
            FUN_0199ce28(&local_1e8,plVar34);
            pppppplVar25 = local_1e8;
            puVar16 = PTR_DAT_0437a668;
            puVar40 = PTR_DAT_0437a660;
            if (local_1e8 == (long ******)0x0) goto LAB_01d6d288;
            if (*(int *)((long)local_1e8 + 0xc) == 0) goto LAB_01d6dc9c;
            piVar1 = (int *)((long)local_1e8 + 0xc);
            iVar19 = *(int *)((long)local_1e8 + 0xc);
            goto LAB_01d6d388;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        pbVar43 = PTR_DAT_04379498;
        iVar19 = iVar20;
      } while (iVar20 != 0);
      goto LAB_01d69a08;
    }
LAB_01d6d2f4:
    plVar34 = (long *)0x0;
LAB_01d6d288:
    bVar12 = false;
    pbVar43 = PTR_DAT_04379498;
    plVar23 = (long *)PTR_DAT_043794a0;
    plVar42 = (long *)PTR_DAT_043794a8;
joined_r0x01d6dc28:
    PTR_DAT_04379498 = pbVar43;
    PTR_DAT_043794a0 = (undefined *)plVar23;
    PTR_DAT_043794a8 = (undefined *)plVar42;
    if (plVar34 != (long *)0x0) {
      lVar37 = plVar34[0xb];
      piVar1 = (int *)(lVar37 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar10 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar37 + 0x18) = 0;
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
    }
  }
  ppppppplVar7 = (long *******)0x0;
  if (bVar12) {
    ppppppplVar7 = unaff_x23;
  }
  cVar18 = local_110;
  cVar10 = local_110;
  if (local_190 != (long ******)0x0) {
    ppppplVar36 = local_190[0xb];
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_190)[4])();
      cVar18 = '\0';
      cVar10 = local_110;
    }
  }
  local_110 = cVar18;
  if (cVar10 != '\0') {
    local_110 = '\0';
  }
  puVar39 = local_280;
  if (local_188 != (long *)0x0) {
    lVar37 = *(long *)((long)local_188 + 0x58);
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
      puVar39 = local_280;
    }
  }
  local_280 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  puVar39 = local_270;
  if (local_270 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_270 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_270[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x10))(&local_180);
  local_290 = (undefined8 *)0x0;
  uStack_288 = 0;
  FUN_00d07698(&local_290,&local_180);
  ppppppplVar8 = local_180;
  if (local_180 != (long *******)0x0) {
    pppppplVar25 = (long ******)(local_180 + 1);
    do {
      iVar19 = *(int *)pppppplVar25;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
      if (bVar12) {
        *(int *)pppppplVar25 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_180[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = *ppppppplVar8;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  local_c8 = (long ******)0x60b2caa9125491f0;
  local_c0 = "PlayerOybnPokeCandidacyComponent";
  local_b8 = 0x20;
  uStack_b0 = 0;
  FUN_01d806e8(&local_a8,param_1,&local_c8);
  local_180 = (long *******)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = (undefined8 *)(PTR_DAT_04382858 + 0x10);
  local_130 = 0;
  uStack_128 = 0;
  local_160 = &PTR_FUN_04287c08;
  local_168 = CONCAT44(local_168._4_4_,1);
  local_110 = '\0';
  local_120 = 0;
  local_f0 = 1;
  local_ec = 0x3f000000bf800000;
  local_e4 = 0x3f000000;
  local_e0 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar37 = *(long *)PTR_DAT_0437a650;
  *(long *)puVar15 = lVar37;
  local_180 = *(long ********)(lVar37 + 0x230);
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0x42200000;
  local_e0 = CONCAT11(local_e0._1_1_,1);
  local_f0 = 1;
  local_130 = CONCAT44(local_130._4_4_,2);
  local_190 = local_a8;
  if (local_a8 != (long ******)0x0) {
    ppppplVar36 = local_a8[0xb];
    if (ppppplVar36[3] == (long ****)0x0) goto LAB_01d6ea54;
    if (ppppplVar36[2] == (long ****)0x0) {
      pppplVar21 = (long ****)(*(code *)**ppppplVar36[3])();
      ppppplVar36[2] = pppplVar21;
    }
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01c6ba38(&local_188,param_1,&local_190,&local_180);
  if (local_190 != (long ******)0x0) {
    ppppplVar36 = local_190[0xb];
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_190)[4])();
    }
  }
  local_198 = 0;
  local_1e0 = (char *)0x0;
  local_1e8 = (long ******)CONCAT44(local_1e8._4_4_,2);
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1d8 = (long *******)0x0;
  local_1d0 = (undefined8 *)0x0;
  (**(code **)(**(long **)(param_1 + 0x7e0) + 0x18))(&local_90);
  local_a0 = (long ******)0x0;
  uStack_98 = 0;
  FUN_00d07698(&local_a0,&local_90);
  ppppppplVar8 = local_90;
  if (local_90 != (long *******)0x0) {
    ppppppplVar27 = local_90 + 1;
    do {
      iVar19 = *(int *)ppppppplVar27;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
      if (bVar12) {
        *(int *)ppppppplVar27 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_208 = *ppppppplVar8;
      FUN_02a44274(lVar37 + 0xd8,&local_208);
    }
  }
  FUN_01d87dc8(&local_1d0,&local_a0);
  pppppplVar25 = local_a0;
  if (local_a0 != (long ******)0x0) {
    pppppplVar28 = local_a0 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_a0[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  local_1f0 = local_188;
  if (local_188 != (long *)0x0) {
    lVar37 = local_188[0xb];
    if (*(undefined8 **)(lVar37 + 0x18) == (undefined8 *)0x0) {
LAB_01d6ea54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar37 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar37 + 0x18))();
      *(undefined8 *)(lVar37 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  FUN_01e4b6a0(&local_1f0,&local_1e8);
  puVar39 = local_1a8;
  if (local_1f0 != (long *)0x0) {
    lVar37 = local_1f0[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_1f0 + 0x20))();
      puVar39 = local_1a8;
    }
  }
  local_1a8 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1c0;
  if (local_1c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1c0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1c0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  puVar39 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pcVar41 = local_1e0;
  if (local_1e0 != (char *)0x0) {
    piVar1 = (int *)(local_1e0 + 8);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e0[0x10] = '\0';
      local_1e0[0x11] = '\0';
      local_1e0[0x12] = '\0';
      local_1e0[0x13] = '\0';
      local_1e0[0x14] = '\0';
      local_1e0[0x15] = '\0';
      local_1e0[0x16] = '\0';
      local_1e0[0x17] = '\0';
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = *(long ********)pcVar41;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  lVar37 = *(long *)(param_1 + 0x90);
  if (lVar37 == 0) {
LAB_01d69f54:
    bVar12 = false;
  }
  else {
    if (*(int *)(lVar37 + 0xc) != 0) {
      piVar1 = (int *)(lVar37 + 0xc);
      iVar19 = *(int *)(lVar37 + 0xc);
      do {
        puVar39 = *(undefined8 **)(lVar37 + 0x10);
        pbVar43 = PTR_DAT_04379498;
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        if ((*PTR_DAT_043796e0 & 1) == 0) {
          iVar20 = __cxa_guard_acquire(PTR_DAT_043796e0);
          pbVar43 = PTR_DAT_04379498;
          plVar23 = (long *)PTR_DAT_043794a0;
          plVar42 = (long *)PTR_DAT_043794a8;
          if (iVar20 != 0) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
              uVar22 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar22;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043796e0);
            pbVar43 = PTR_DAT_04379498;
            plVar23 = (long *)PTR_DAT_043794a0;
            plVar42 = (long *)PTR_DAT_043794a8;
          }
        }
        PTR_DAT_04379498 = pbVar43;
        PTR_DAT_043794a0 = (undefined *)plVar23;
        PTR_DAT_043794a8 = (undefined *)plVar42;
        if (puVar39 == (undefined8 *)0x0) goto LAB_01d6e194;
        while (puVar39 != (undefined8 *)PTR_DAT_043796e8) {
          puVar39 = (undefined8 *)*puVar39;
          if (puVar39 == (undefined8 *)0x0) goto LAB_01d69f54;
        }
        iVar20 = *piVar1;
        if (iVar20 == iVar19) {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') {
            plVar34 = (long *)(*(long *)(lVar37 + 0x18) + -0x50);
            if (*(long *)(lVar37 + 0x18) == 0) goto LAB_01d6e194;
            FUN_0199ce28(&local_1e8,plVar34);
            pppppplVar25 = local_1e8;
            puVar15 = PTR_DAT_0437a668;
            puVar40 = PTR_DAT_0437a660;
            if (local_1e8 == (long ******)0x0) goto LAB_01d6e12c;
            if (*(int *)((long)local_1e8 + 0xc) == 0) goto LAB_01d6ead8;
            piVar1 = (int *)((long)local_1e8 + 0xc);
            iVar19 = *(int *)((long)local_1e8 + 0xc);
            goto LAB_01d6e220;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar23 = (long *)PTR_DAT_043794a0;
        plVar42 = (long *)PTR_DAT_043794a8;
        pbVar43 = PTR_DAT_04379498;
        iVar19 = iVar20;
      } while (iVar20 != 0);
      goto LAB_01d69f54;
    }
LAB_01d6e194:
    plVar34 = (long *)0x0;
LAB_01d6e12c:
    bVar12 = false;
    pbVar43 = PTR_DAT_04379498;
    plVar23 = (long *)PTR_DAT_043794a0;
    plVar42 = (long *)PTR_DAT_043794a8;
joined_r0x01d6ea4c:
    PTR_DAT_04379498 = pbVar43;
    PTR_DAT_043794a0 = (undefined *)plVar23;
    PTR_DAT_043794a8 = (undefined *)plVar42;
    if (plVar34 != (long *)0x0) {
      lVar37 = plVar34[0xb];
      piVar1 = (int *)(lVar37 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar10 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar37 + 0x18) = 0;
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
    }
  }
  ppppppplVar8 = (long *******)0x0;
  if (bVar12) {
    ppppppplVar8 = ppppppplVar24;
  }
  cVar18 = local_110;
  cVar10 = local_110;
  if (local_188 != (long *)0x0) {
    lVar37 = local_188[0xb];
    piVar1 = (int *)(lVar37 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
      cVar18 = '\0';
      cVar10 = local_110;
    }
  }
  local_110 = cVar18;
  if (cVar10 != '\0') {
    local_110 = '\0';
  }
  puVar39 = local_290;
  if (local_a8 != (long ******)0x0) {
    ppppplVar36 = *(long ******)((long)local_a8 + 0x58);
    piVar1 = (int *)((long)ppppplVar36 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      ppppplVar36[3] = (long ****)0x0;
      (*(code *)(*local_a8)[4])();
      puVar39 = local_290;
    }
  }
  local_290 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  puVar40 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar16 = PTR_DAT_04379670;
  puVar15 = PTR_DAT_04379668;
  lVar37 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar37;
  uVar26 = *(ulong *)(lVar37 + 0x60);
  uVar44 = 0;
  if (uVar26 != 0) {
    uVar30 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
    uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
    uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar30 < 2) {
      uVar31 = uVar26 - 1 & 0xcd6deab880d35977;
    }
    else {
      uVar31 = 0xcd6deab880d35977;
      if (uVar26 < 0xcd6deab880d35978) {
        uVar31 = 0;
        if (uVar26 != 0) {
          uVar31 = 0xcd6deab880d35977 / uVar26;
        }
        uVar31 = 0xcd6deab880d35977 - uVar31 * uVar26;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar37 + 0x58) + uVar31 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar30 < 2) {
        do {
          if (plVar34[1] == 0xcd6deab880d35977) {
            if (plVar34[2] == -0x329215477f2ca689) goto LAB_01d6a0dc;
          }
          else if ((plVar34[1] & uVar26 - 1) != uVar31) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar30 = plVar34[1];
          if (uVar30 == 0xcd6deab880d35977) {
            if (plVar34[2] == -0x329215477f2ca689) goto LAB_01d6a0dc;
          }
          else {
            if (uVar26 <= uVar30) {
              uVar14 = 0;
              if (uVar26 != 0) {
                uVar14 = uVar30 / uVar26;
              }
              uVar30 = uVar30 - uVar14 * uVar26;
            }
            if (uVar30 != uVar31) break;
          }
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_01d6a238:
  FUN_01c39c90(uVar44,ppppppplVar38);
  if (((*puVar40 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar37 = *(long *)puVar15;
  *(long *)puVar16 = lVar37;
  uVar26 = *(ulong *)(lVar37 + 0x60);
  uVar44 = 0;
  if (uVar26 != 0) {
    uVar30 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
    uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
    uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar30 < 2) {
      uVar31 = uVar26 - 1 & 0xcd6deab880d35977;
    }
    else {
      uVar31 = 0xcd6deab880d35977;
      if (uVar26 < 0xcd6deab880d35978) {
        uVar31 = 0;
        if (uVar26 != 0) {
          uVar31 = 0xcd6deab880d35977 / uVar26;
        }
        uVar31 = 0xcd6deab880d35977 - uVar31 * uVar26;
      }
    }
    plVar34 = *(long **)(*(long *)(lVar37 + 0x58) + uVar31 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar30 < 2) {
LAB_01d6b144:
        if (plVar34[1] == 0xcd6deab880d35977) {
          if (plVar34[2] == -0x329215477f2ca689) {
            plVar34 = (long *)plVar34[3];
joined_r0x01d6b164:
            if (plVar34 == (long *)0x0) goto LAB_01d6a440;
            plVar2 = plVar34 + 10;
            do {
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            uVar26 = plVar34[0x21];
            uVar44 = 0;
            if (uVar26 != 0) {
              uVar30 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
              uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
              uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar30 < 2) {
                uVar31 = uVar26 - 1 & 0x3a626f835b9bdfb1;
              }
              else if (uVar26 < 0x3a626f835b9bdfb2) {
                uVar31 = 0;
                if (uVar26 != 0) {
                  uVar31 = 0x3a626f835b9bdfb1 / uVar26;
                }
                uVar31 = 0x3a626f835b9bdfb1 - uVar31 * uVar26;
              }
              else {
                uVar31 = 0x3a626f835b9bdfb1;
              }
              plVar35 = *(long **)(plVar34[0x20] + uVar31 * 8);
              if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0))
              {
                if (uVar30 < 2) {
                  do {
                    if (plVar35[1] == 0x3a626f835b9bdfb1) {
                      if (plVar35[2] == 0x3a626f835b9bdfb1) goto LAB_01d6a428;
                    }
                    else if ((plVar35[1] & uVar26 - 1) != uVar31) break;
                    plVar35 = (long *)*plVar35;
                  } while (plVar35 != (long *)0x0);
                }
                else {
                  do {
                    uVar30 = plVar35[1];
                    if (uVar30 != 0x3a626f835b9bdfb1) {
                      if (uVar26 <= uVar30) {
                        uVar14 = 0;
                        if (uVar26 != 0) {
                          uVar14 = uVar30 / uVar26;
                        }
                        uVar30 = uVar30 - uVar14 * uVar26;
                      }
                      if (uVar30 == uVar31) goto LAB_01d6a3b4;
                      break;
                    }
                    if (plVar35[2] == 0x3a626f835b9bdfb1) goto LAB_01d6a428;
LAB_01d6a3b4:
                    plVar35 = (long *)*plVar35;
                  } while (plVar35 != (long *)0x0);
                }
              }
            }
LAB_01d6a42c:
            do {
              iVar19 = (int)*plVar2 + -1;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *(int *)plVar2 = iVar19;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar19 == 0) {
              (**(code **)(*plVar34 + 0x10))();
            }
            goto LAB_01d6a440;
          }
        }
        else if ((plVar34[1] & uVar26 - 1) != uVar31) goto LAB_01d6a440;
        plVar34 = (long *)*plVar34;
        if (plVar34 == (long *)0x0) goto LAB_01d6a440;
        goto LAB_01d6b144;
      }
      do {
        uVar30 = plVar34[1];
        if (uVar30 == 0xcd6deab880d35977) {
          if (plVar34[2] == -0x329215477f2ca689) {
            plVar34 = (long *)plVar34[3];
            goto joined_r0x01d6b164;
          }
        }
        else {
          if (uVar26 <= uVar30) {
            uVar14 = 0;
            if (uVar26 != 0) {
              uVar14 = uVar30 / uVar26;
            }
            uVar30 = uVar30 - uVar14 * uVar26;
          }
          if (uVar30 != uVar31) break;
        }
        plVar34 = (long *)*plVar34;
      } while (plVar34 != (long *)0x0);
    }
  }
LAB_01d6a440:
  FUN_01bb1904(uVar44,ppppppplVar7);
  local_160 = (undefined **)0x0;
  uStack_158 = 0;
  local_170 = (undefined8 *)0x0;
  local_168 = 0;
  local_180 = (long *******)0x0;
  local_178 = (char *)0x0;
  local_1e8 = (long ******)0x0;
  local_1e0 = (char *)0x0;
  FUN_008802f0(&local_1e8,ppppppplVar38 + 0xb);
  local_c8 = (long ******)0x0;
  local_c0 = (char *)0x0;
  do {
    pcVar41 = local_1e0;
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(&local_1e0,0x10);
    if (bVar12) {
      local_1e0 = (char *)0x0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar37 = *plVar23;
  *plVar42 = lVar37;
  FUN_02a44e0c(&local_a0,lVar37,pcVar41);
  pppppplVar25 = local_1e8;
  local_1e8 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    ppppplVar36 = (long *****)(pppppplVar25 + 1);
    do {
      iVar19 = *(int *)ppppplVar36;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
      if (bVar12) {
        *(int *)ppppplVar36 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pppppplVar25 = local_c8;
  local_c8 = (long ******)0x0;
  if (local_a0 == (long ******)0x0) {
    if (pppppplVar25 != (long ******)0x0) {
      ppppplVar36 = (long *****)(pppppplVar25 + 1);
      do {
        iVar19 = *(int *)ppppplVar36;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
        if (bVar12) {
          *(int *)ppppplVar36 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 == 1) {
        pppppplVar25[2] = (long *****)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_90 = (long *******)*pppppplVar25;
        FUN_02a44274(lVar37 + 0xd8,&local_90);
      }
    }
    pcVar41 = (char *)0x0;
  }
  else {
    pppppplVar28 = local_a0;
    if (pppppplVar25 != (long ******)0x0) {
      ppppplVar36 = (long *****)(pppppplVar25 + 1);
      do {
        iVar19 = *(int *)ppppplVar36;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
        if (bVar12) {
          *(int *)ppppplVar36 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        pppppplVar25[2] = (long *****)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_90 = (long *******)*pppppplVar25;
        FUN_02a44274(lVar37 + 0xd8,&local_90);
      }
      pppppplVar28 = local_a0;
    }
    local_a0 = (long ******)0x0;
    local_c8 = pppppplVar28;
  }
  pppppplVar25 = local_a0;
  local_c0 = pcVar41;
  if (local_a0 != (long ******)0x0) {
    pppppplVar28 = local_a0 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_a0[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pppppplVar25 = local_1e8;
  if (local_1e8 != (long ******)0x0) {
    pppppplVar28 = local_1e8 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  do {
    pcVar41 = local_c0;
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(&local_c0,0x10);
    if (bVar12) {
      local_c0 = (char *)0x0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar37 = *plVar23;
  *plVar42 = lVar37;
  FUN_02a44e0c(&local_90,lVar37,pcVar41);
  pppppplVar25 = local_c8;
  local_c8 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    pppppplVar28 = pppppplVar25 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  ppppppplVar24 = local_180;
  local_180 = (long *******)0x0;
  if (local_90 == (long *******)0x0) {
    if (ppppppplVar24 != (long *******)0x0) {
      pppppplVar25 = (long ******)(ppppppplVar24 + 1);
      do {
        iVar19 = *(int *)pppppplVar25;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
        if (bVar12) {
          *(int *)pppppplVar25 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 == 1) {
        ppppppplVar24[2] = (long ******)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_1e8 = *ppppppplVar24;
        FUN_02a44274(lVar37 + 0xd8,&local_1e8);
      }
    }
    pcVar41 = (char *)0x0;
  }
  else {
    ppppppplVar27 = local_90;
    if (ppppppplVar24 != (long *******)0x0) {
      pppppplVar25 = (long ******)(ppppppplVar24 + 1);
      do {
        iVar19 = *(int *)pppppplVar25;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pppppplVar25,0x10);
        if (bVar12) {
          *(int *)pppppplVar25 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        ppppppplVar24[2] = (long ******)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_1e8 = *ppppppplVar24;
        FUN_02a44274(lVar37 + 0xd8,&local_1e8);
      }
      ppppppplVar27 = local_90;
    }
    local_90 = (long *******)0x0;
    local_180 = ppppppplVar27;
  }
  ppppppplVar24 = local_90;
  local_178 = pcVar41;
  if (local_90 != (long *******)0x0) {
    ppppppplVar27 = local_90 + 1;
    do {
      iVar19 = *(int *)ppppppplVar27;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
      if (bVar12) {
        *(int *)ppppppplVar27 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = *ppppppplVar24;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  pppppplVar25 = local_c8;
  if (local_c8 != (long ******)0x0) {
    ppppplVar36 = (long *****)(local_c8 + 1);
    do {
      iVar19 = *(int *)ppppplVar36;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
      if (bVar12) {
        *(int *)ppppplVar36 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_c8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  local_1e8 = (long ******)0x0;
  local_1e0 = (char *)0x0;
  FUN_008802f0(&local_1e8,ppppppplVar7 + 0xb);
  local_c8 = (long ******)0x0;
  local_c0 = (char *)0x0;
  FUN_01d850e8(&local_c8,&local_1e8);
  pppppplVar25 = local_1e8;
  if (local_1e8 != (long ******)0x0) {
    ppppplVar36 = (long *****)(local_1e8 + 1);
    do {
      iVar19 = *(int *)ppppplVar36;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
      if (bVar12) {
        *(int *)ppppplVar36 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  FUN_019b5304(&local_170,&local_c8);
  pppppplVar25 = local_c8;
  if (local_c8 != (long ******)0x0) {
    ppppplVar36 = (long *****)(local_c8 + 1);
    do {
      iVar19 = *(int *)ppppplVar36;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
      if (bVar12) {
        *(int *)ppppplVar36 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_c8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  local_1e8 = (long ******)0x0;
  local_1e0 = (char *)0x0;
  FUN_008802f0(&local_1e8,ppppppplVar8 + 0xb);
  local_c8 = (long ******)0x0;
  local_c0 = (char *)0x0;
  do {
    pcVar41 = local_1e0;
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(&local_1e0,0x10);
    if (bVar12) {
      local_1e0 = (char *)0x0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar37 = *plVar23;
  *plVar42 = lVar37;
  FUN_02a44e0c(&local_a0,lVar37,pcVar41);
  pppppplVar25 = local_1e8;
  local_1e8 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    ppppplVar36 = (long *****)(pppppplVar25 + 1);
    do {
      iVar19 = *(int *)ppppplVar36;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
      if (bVar12) {
        *(int *)ppppplVar36 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pppppplVar25 = local_c8;
  local_c8 = (long ******)0x0;
  if (local_a0 == (long ******)0x0) {
    if (pppppplVar25 != (long ******)0x0) {
      ppppplVar36 = (long *****)(pppppplVar25 + 1);
      do {
        iVar19 = *(int *)ppppplVar36;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
        if (bVar12) {
          *(int *)ppppplVar36 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 == 1) {
        pppppplVar25[2] = (long *****)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_90 = (long *******)*pppppplVar25;
        FUN_02a44274(lVar37 + 0xd8,&local_90);
      }
    }
    pcVar41 = (char *)0x0;
  }
  else {
    pppppplVar28 = local_a0;
    if (pppppplVar25 != (long ******)0x0) {
      ppppplVar36 = (long *****)(pppppplVar25 + 1);
      do {
        iVar19 = *(int *)ppppplVar36;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
        if (bVar12) {
          *(int *)ppppplVar36 = iVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar19 + -1 == 0) {
        pppppplVar25[2] = (long *****)0x0;
        if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0))
        {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar37 = *plVar23;
        *plVar42 = lVar37;
        local_90 = (long *******)*pppppplVar25;
        FUN_02a44274(lVar37 + 0xd8,&local_90);
      }
      pppppplVar28 = local_a0;
    }
    local_a0 = (long ******)0x0;
    local_c8 = pppppplVar28;
  }
  pppppplVar25 = local_a0;
  local_c0 = pcVar41;
  if (local_a0 != (long ******)0x0) {
    pppppplVar28 = local_a0 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_a0[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  pppppplVar25 = local_1e8;
  if (local_1e8 != (long ******)0x0) {
    pppppplVar28 = local_1e8 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_1e8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_90 = (long *******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_90);
    }
  }
  FUN_018cf2f0(&local_160,&local_c8);
  pppppplVar25 = local_c8;
  if (local_c8 != (long ******)0x0) {
    pppppplVar28 = local_c8 + 1;
    do {
      iVar19 = *(int *)pppppplVar28;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
      if (bVar12) {
        *(int *)pppppplVar28 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_c8[2] = (long *****)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*pppppplVar25;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  lVar37 = *(long *)(param_1 + 0x7e0);
  FUN_01afedb4(lVar37 + 0x758,&local_180);
  FUN_01aff02c(lVar37 + 0x768,&local_170);
  FUN_01aff2a4(lVar37 + 0x778,&local_160);
  ppuVar17 = local_160;
  if (local_160 != (undefined **)0x0) {
    ppuVar3 = local_160 + 1;
    do {
      iVar19 = *(int *)ppuVar3;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
      if (bVar12) {
        *(int *)ppuVar3 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_160[2] = (undefined *)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*ppuVar17;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  puVar39 = local_170;
  if (local_170 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_170 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_170[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = (long ******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  ppppppplVar24 = local_180;
  if (local_180 != (long *******)0x0) {
    ppppppplVar27 = local_180 + 1;
    do {
      iVar19 = *(int *)ppppppplVar27;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
      if (bVar12) {
        *(int *)ppppppplVar27 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      local_180[2] = (long ******)0x0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_1e8 = *ppppppplVar24;
      FUN_02a44274(lVar37 + 0xd8,&local_1e8);
    }
  }
  if (ppppppplVar8 != (long *******)0x0) {
    pppppplVar25 = ppppppplVar8[0xb];
    piVar1 = (int *)((long)pppppplVar25 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[3] = (long *****)0x0;
      (*(code *)(*ppppppplVar8)[4])(ppppppplVar8);
    }
  }
  if (ppppppplVar7 != (long *******)0x0) {
    pppppplVar25 = ppppppplVar7[0xb];
    piVar1 = (int *)((long)pppppplVar25 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[3] = (long *****)0x0;
      (*(code *)(*ppppppplVar7)[4])(ppppppplVar7);
    }
  }
  puVar39 = local_250;
  if (ppppppplVar38 != (long *******)0x0) {
    pppppplVar25 = ppppppplVar38[0xb];
    piVar1 = (int *)((long)pppppplVar25 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      pppppplVar25[3] = (long *****)0x0;
      (*(code *)(*ppppppplVar38)[4])(ppppppplVar38);
      puVar39 = local_250;
    }
  }
  local_250 = puVar39;
  if (puVar39 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar39 + 1);
    do {
      iVar19 = *piVar1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 + -1 == 0) {
      puVar39[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*puVar39;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  plVar34 = local_240;
  if (local_240 != (long *)0x0) {
    plVar2 = local_240 + 1;
    do {
      iVar19 = (int)*plVar2 + -1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *(int *)plVar2 = iVar19;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar19 == 0) {
      local_240[2] = 0;
      if (((*pbVar43 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar37 = *plVar23;
      *plVar42 = lVar37;
      local_180 = (long *******)*plVar34;
      FUN_02a44274(lVar37 + 0xd8,&local_180);
    }
  }
  return;
}


