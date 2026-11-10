/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01907950; name: FUN_01907950
 */


/* WARNING: Removing unreachable block (ram,0x01907c1c) */
/* WARNING: Removing unreachable block (ram,0x01907c20) */
/* WARNING: Removing unreachable block (ram,0x01907c28) */
/* WARNING: Removing unreachable block (ram,0x01907c30) */
/* WARNING: Removing unreachable block (ram,0x01907da4) */

void FUN_01907950(long *param_1,int *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *local_120;
  long *local_118;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined6 local_f0;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  lVar18 = param_1[5];
  if (lVar18 == 0) {
LAB_01907a50:
    lVar18 = param_1[4];
  }
  else {
    plVar28 = (long *)*param_1;
    if (plVar28 != (long *)0x0) {
      plVar29 = plVar28 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *(int *)plVar29 = (int)*plVar29 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    bVar2 = *(byte *)((long)param_1 + 0x5f);
    piVar22 = (int *)(lVar18 + 0x84);
    uVar21 = 1;
    bVar3 = *(byte *)(param_1 + 0xc);
    bVar4 = *(byte *)((long)param_1 + 0x61);
    do {
      if (piVar22[-7] == 0) {
        uVar21 = uVar21 - 1;
LAB_019079d8:
        FUN_01090b20(lVar18 + 0x68 + uVar21 * 0x1c,plVar28);
        uVar13 = FUN_02c5fb2c(plVar28);
        lVar18 = lVar18 + 0x68 + (uVar21 & 0xffffffff) * 0x1c;
        *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) & 0xffffff80 | uVar13 & 0x7f;
        uVar13 = FUN_02c6d5b0(plVar28[0x13]);
        *(uint *)(lVar18 + 0x18) =
             (uint)bVar3 << 9 | (uint)bVar2 << 8 | (uint)bVar4 << 10 | (uVar13 & 1) << 7 |
             *(uint *)(lVar18 + 0x18) & 0xfffff87f;
        break;
      }
      if (*piVar22 == 0) goto LAB_019079d8;
      uVar21 = uVar21 + 2;
      piVar22 = piVar22 + 0xe;
    } while (uVar21 != 0x3e9);
    if (plVar28 == (long *)0x0) goto LAB_01907a50;
    plVar29 = plVar28 + 10;
    do {
      iVar15 = (int)*plVar29 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar6) {
        *(int *)plVar29 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 != 0) goto LAB_01907a50;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    lVar18 = param_1[4];
  }
  if (lVar18 != 0) {
    FUN_011325a0(lVar18,*param_1,param_1 + 0xb);
  }
  if (param_1[8] != 0) {
    local_88 = -0x470d7832aca1789f;
    pcStack_80 = "PLAY_SE_HA_SYS_GET_POKE";
    local_78 = 0x17;
    local_70 = (long *)0x0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    uStack_e9 = 0;
    uStack_e8 = 0;
    uStack_e1 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    FUN_02913338(param_1[8],&local_88,&local_110,0,0,0);
    pcVar12 = local_108;
    if (local_108 == (code *)0x0) {
      local_108 = (code *)0x0;
    }
    else {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      (*pcVar12)(&local_f0);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (((param_1[7] == 0) || (*(char *)((long)param_1 + 0x5e) != '\0')) ||
     (plVar28 = (long *)param_1[2], plVar28 == (long *)0x0)) {
LAB_01907af8:
    lVar18 = param_1[6];
  }
  else {
    bVar2 = *(byte *)(plVar28 + 0x11);
    if ((param_2 == (int *)0x0) || (*param_2 != 0)) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = (ulong)(uint)param_2[1];
    }
    plVar29 = plVar28 + 10;
    local_c8 = local_c8 & 0xffffffff00000000;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar6) {
        *(int *)plVar29 = (int)*plVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    uStack_e8 = 0;
    uStack_e9 = 0;
    local_f0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_108 = (code *)0x0;
    uStack_ea = 1;
    local_110 = plVar28;
    if (bVar2 != 0) {
      uVar19 = 0;
      if (uVar21 != 0) goto LAB_01907c68;
      while (uVar19 = uVar19 + 1, uVar19 != bVar2) {
        if (uVar19 != uVar21) {
LAB_01907c68:
          local_120 = (long *)(**(code **)(*(long *)param_1[2] + 0x50))
                                        ((long *)param_1[2],uVar19 & 0xffffffff);
          local_118 = (long *)*param_1;
          if (local_118 != (long *)0x0) {
            plVar28 = local_118 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = (int)*plVar28 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (local_120 != (long *)0x0) {
            plVar28 = local_120 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = (int)*plVar28 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar14 = FUN_0109c760(&local_118,&local_120,*(undefined1 *)((long)param_1 + 0x5d));
          *(undefined4 *)((long)&local_108 + uVar19 * 4) = uVar14;
          if (local_120 != (long *)0x0) {
            plVar28 = local_120 + 10;
            do {
              iVar15 = (int)*plVar28 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*local_120 + 0x10))();
            }
          }
          if (local_118 != (long *)0x0) {
            plVar28 = local_118 + 10;
            do {
              iVar15 = (int)*plVar28 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*local_118 + 0x10))();
            }
          }
        }
      }
    }
    FUN_01469c2c(param_1[7],&local_110);
    if (local_110 == (long *)0x0) goto LAB_01907af8;
    plVar28 = local_110 + 10;
    do {
      iVar15 = (int)*plVar28 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar6) {
        *(int *)plVar28 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 != 0) goto LAB_01907af8;
    (**(code **)(*local_110 + 0x10))();
    lVar18 = param_1[6];
  }
  if (lVar18 == 0) goto LAB_01908028;
  if ((char)param_1[0xd] != '\0') {
    uVar21 = (*(long **)(lVar18 + 0x1b8))[1];
    if (uVar21 != 0) {
      uVar19 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar20 = param_1[0xe];
      uVar23 = 0;
      if (uVar21 != 0) {
        uVar23 = uVar20 / uVar21;
      }
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar26 = uVar21 - 1 & uVar20;
      }
      else {
        uVar26 = uVar20;
        if (uVar21 <= uVar20) {
          uVar26 = uVar20 - uVar23 * uVar21;
        }
      }
      lVar25 = **(long **)(lVar18 + 0x1b8);
      plVar28 = *(long **)(lVar25 + uVar26 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        uVar24 = uVar21 - 1;
        if (uVar19 < 2) {
          do {
            if (plVar28[1] == uVar20) {
              if (plVar28[2] == uVar20) goto LAB_01907e08;
            }
            else if ((plVar28[1] & uVar24) != uVar26) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar27 = plVar28[1];
            if (uVar27 == uVar20) {
              if (plVar28[2] == uVar20) goto LAB_01907e08;
            }
            else {
              if (uVar21 <= uVar27) {
                uVar7 = 0;
                if (uVar21 != 0) {
                  uVar7 = uVar27 / uVar21;
                }
                uVar27 = uVar27 - uVar7 * uVar21;
              }
              if (uVar27 != uVar26) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
    goto LAB_01907ec0;
  }
  goto LAB_01907fc4;
LAB_01907eb4:
  *(undefined1 *)(plVar28 + 3) = 1;
  lVar18 = param_1[6];
  goto LAB_01907ec0;
LAB_01907fbc:
  FUN_010f54d8(lVar18,param_1 + 0xf,1);
  goto LAB_01907fc4;
LAB_01907e08:
  if (uVar19 < 2) {
    uVar26 = uVar24 & uVar20;
    plVar28 = *(long **)(lVar25 + uVar26 * 8);
  }
  else {
    uVar26 = uVar20;
    if (uVar21 <= uVar20) {
      uVar26 = uVar20 - uVar23 * uVar21;
    }
    plVar28 = *(long **)(lVar25 + uVar26 * 8);
  }
  if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
    if (uVar19 < 2) {
      do {
        if (plVar28[1] == uVar20) {
          if (plVar28[2] == uVar20) goto LAB_01907eb4;
        }
        else if ((plVar28[1] & uVar24) != uVar26) break;
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
    else {
      do {
        uVar19 = plVar28[1];
        if (uVar19 == uVar20) {
          if (plVar28[2] == uVar20) goto LAB_01907eb4;
        }
        else {
          if (uVar21 <= uVar19) {
            uVar23 = 0;
            if (uVar21 != 0) {
              uVar23 = uVar19 / uVar21;
            }
            uVar19 = uVar19 - uVar23 * uVar21;
          }
          if (uVar19 != uVar26) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
  }
LAB_01907ec0:
  uVar21 = param_1[0xf];
  uVar19 = (*(long **)(lVar18 + 0x1d8))[1];
  if (uVar19 != 0) {
    uVar23 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar20 = uVar19 - 1 & uVar21;
    }
    else if (uVar21 < uVar19) {
      uVar20 = uVar21;
    }
    else {
      uVar20 = 0;
      if (uVar19 != 0) {
        uVar20 = uVar21 / uVar19;
      }
      uVar20 = uVar21 - uVar20 * uVar19;
    }
    plVar28 = *(long **)(**(long **)(lVar18 + 0x1d8) + uVar20 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar28[1] == uVar21) {
            if (plVar28[2] == uVar21) goto LAB_01907fbc;
          }
          else if ((plVar28[1] & uVar19 - 1) != uVar20) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar28[1];
          if (uVar23 == uVar21) {
            if (plVar28[2] == uVar21) goto LAB_01907fbc;
          }
          else {
            if (uVar19 <= uVar23) {
              uVar26 = 0;
              if (uVar19 != 0) {
                uVar26 = uVar23 / uVar19;
              }
              uVar23 = uVar23 - uVar26 * uVar19;
            }
            if (uVar23 != uVar20) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
LAB_01907fc4:
  iVar15 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
  if ((iVar15 - 0x1e3U < 2) && ((int)param_1[10] != 0)) {
    local_110 = (long *)0x1f08cb736eb3e8a0;
    FUN_010f520c(param_1[6],&local_110);
    local_110 = (long *)&DAT_4cfbf76dd11c1f59;
    FUN_010f520c(param_1[6],&local_110,*(undefined4 *)((long)param_1 + 0x54));
  }
LAB_01908028:
  if (((param_1[9] != 0) && ((char)param_1[0x10] != '\0')) &&
     (FUN_019a0268(&local_110), plVar28 = local_110, puVar11 = PTR_DAT_0437af00,
     puVar10 = PTR_DAT_0437aef8, puVar9 = PTR_DAT_043794d8, puVar8 = PTR_DAT_043794d0,
     local_110 != (long *)0x0)) {
    if (*(int *)((long)local_110 + 0xc) != 0) {
      piVar22 = (int *)((long)local_110 + 0xc);
      iVar15 = *(int *)((long)local_110 + 0xc);
      do {
        plVar29 = (long *)plVar28[2];
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar8), iVar16 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar17;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar29 == (long *)0x0) goto LAB_0190823c;
          if (plVar29 == (long *)puVar11) break;
          plVar29 = (long *)*plVar29;
        }
        iVar16 = *piVar22;
        if (iVar16 == iVar15) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = iVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar18 = plVar28[3];
            plVar28 = (long *)0x0;
            plVar29 = local_110;
            if (lVar18 != 0) {
              plVar28 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x01908194;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar16;
      } while (iVar16 != 0);
    }
LAB_0190823c:
    plVar28 = (long *)0x0;
    plVar29 = local_110;
joined_r0x01908194:
    local_110 = plVar29;
    if (plVar29 != (long *)0x0) {
      plVar30 = plVar29 + 1;
      do {
        iVar15 = (int)*plVar30 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar6) {
          *(int *)plVar30 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        plVar29[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_88 = *plVar29;
        FUN_02a44274(lVar18 + 0xd8,&local_88);
      }
    }
    if (plVar28 != (long *)0x0) {
      FUN_019a034c(&local_110,param_1[9]);
      plVar29 = local_110;
      puVar11 = PTR_DAT_04379c48;
      puVar10 = PTR_DAT_04379c40;
      puVar9 = PTR_DAT_043794d8;
      puVar8 = PTR_DAT_043794d0;
      if (local_110 != (long *)0x0) {
        if (*(int *)((long)local_110 + 0xc) != 0) {
          piVar22 = (int *)((long)local_110 + 0xc);
          iVar15 = *(int *)((long)local_110 + 0xc);
          do {
            plVar30 = (long *)plVar29[2];
            if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
              if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar8), iVar16 != 0)) {
                uVar17 = FUN_0087f8f0();
                *(undefined8 *)puVar9 = uVar17;
                __cxa_guard_release(puVar8);
              }
              *(undefined **)puVar11 = puVar9;
              __cxa_guard_release(puVar10);
            }
            while( true ) {
              if (plVar30 == (long *)0x0) goto LAB_01908344;
              if (plVar30 == (long *)puVar11) break;
              plVar30 = (long *)*plVar30;
            }
            iVar16 = *piVar22;
            if (iVar16 == iVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar6) {
                *piVar22 = iVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar18 = plVar29[3];
                plVar29 = (long *)0x0;
                plVar30 = local_110;
                if (lVar18 != 0) {
                  plVar29 = (long *)(lVar18 + -0x50);
                }
                goto joined_r0x01908368;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar15 = iVar16;
          } while (iVar16 != 0);
        }
LAB_01908344:
        plVar29 = (long *)0x0;
        plVar30 = local_110;
joined_r0x01908368:
        local_110 = plVar30;
        if (plVar30 != (long *)0x0) {
          plVar1 = plVar30 + 1;
          do {
            iVar15 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 == 0) {
            plVar30[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_88 = *plVar30;
            FUN_02a44274(lVar18 + 0xd8,&local_88);
          }
        }
        if (plVar29 != (long *)0x0) {
          FUN_01e80640(*(undefined8 *)(param_1[9] + 0x260));
          iVar15 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
          if ((((iVar15 - 0x1e5U < 7) && ((1 << (ulong)(iVar15 - 0x1e5U & 0x1f) & 0x49U) != 0)) ||
              ((iVar15 - 0x281U < 5 && ((1 << (ulong)(iVar15 - 0x281U & 0x1f) & 0x13U) != 0)))) ||
             ((iVar15 == 0x389 || (iVar15 - 0x1e0U < 3)))) {
            FUN_018d1340(plVar29);
          }
          else if ((*(char *)((long)param_1 + 0x81) != '\0') &&
                  (uVar21 = FUN_018d0dc0(plVar29), (uVar21 & 1) != 0)) {
            uVar21 = FUN_02c6d5b0(*(undefined8 *)(*param_1 + 0x98));
            uVar14 = 5;
            if ((uVar21 & 1) != 0) {
              uVar14 = 6;
            }
            FUN_018d0e7c(plVar29,uVar14);
          }
          lVar18 = plVar29[0xb];
          piVar22 = (int *)(lVar18 + 0xc);
          do {
            iVar15 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar29 + 0x20))(plVar29);
          }
        }
      }
      lVar18 = plVar28[0xb];
      piVar22 = (int *)(lVar18 + 0xc);
      do {
        iVar15 = *piVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar28 + 0x20))(plVar28);
      }
    }
  }
  FUN_00db0d34("get_poke",1);
  FUN_00db0d34((&PTR_s_capture_wild_field_041edae0)[(ulong)*(byte *)((long)param_1 + 0x5e) * 2],1);
  uVar21 = FUN_02c6d5b0(*(undefined8 *)(*param_1 + 0x98));
  if ((uVar21 & 1) != 0) {
    FUN_00db0d34(PTR_s_capture_oyabun_041edb10,1);
  }
  return;
}


