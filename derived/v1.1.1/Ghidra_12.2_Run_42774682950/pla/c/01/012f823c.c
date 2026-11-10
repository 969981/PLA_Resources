/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f823c; name: FUN_012f823c
 */


void FUN_012f823c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_68;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(short *)((long)param_2 + 4) == 0) {
    FUN_012f925c(param_1);
    return;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar18 != (long *)0x0) {
    lVar20 = plVar18[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_012f8c30;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_02c3865c(plVar18,0,*(undefined2 *)((long)param_2 + 4),1);
    lVar20 = plVar18[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar18 != (long *)0x0) {
    plVar16 = plVar18 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar20 != 0) {
    plVar16 = *(long **)(lVar20 + 0x270);
    if (plVar16 != *(long **)(lVar20 + 0x278)) {
      iVar13 = 0;
      do {
        plVar19 = (long *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          plVar19 = (long *)(*plVar16 + 0x58);
        }
        if (*plVar19 == 0x687838aa663c0fa9) goto LAB_012f836c;
        plVar16 = plVar16 + 1;
        iVar13 = iVar13 + 1;
      } while (*(long **)(lVar20 + 0x278) != plVar16);
    }
  }
  iVar13 = 0;
LAB_012f836c:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar13,plVar18);
  local_a8 = *(long **)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x40);
  local_98 = *(undefined8 *)(param_1 + 0x48);
  lVar21 = *(long *)(param_1 + 8);
  local_90 = (long *)0x0;
  lVar23 = *(long *)(lVar21 + 0x1b8);
  uVar14 = *(undefined8 *)(lVar21 + 0x1c0);
  lVar20 = *(long *)(lVar21 + 0x1c8);
  *(undefined4 *)(lVar23 + 0x124) = 0;
  *(undefined2 *)(lVar23 + 0x128) = 0;
  *(undefined4 *)(lVar23 + 300) = 0;
  *(undefined4 *)(lVar23 + 0x134) = 0;
  FUN_02c33414(lVar23,uVar14);
  if (*(char *)(lVar20 + 0x7c) != '\0') {
    **(undefined2 **)(lVar20 + 0x58) = 0;
    *(undefined2 *)(lVar20 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar23,lVar20,uVar14,0,0);
  FUN_0283ce7c(lVar21,&local_a8,*(undefined8 *)(lVar21 + 0x1c8),10);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar18 == (long *)0x0) {
LAB_012f841c:
    lVar20 = *(long *)(param_1 + 8);
  }
  else {
    plVar16 = plVar18 + 10;
    do {
      iVar13 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 != 0) goto LAB_012f841c;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    lVar20 = *(long *)(param_1 + 8);
  }
  if (lVar20 != 0) {
    plVar18 = *(long **)(lVar20 + 0x1c0);
    if (plVar18 != (long *)0x0) {
      plVar16 = plVar18 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar22 = &DAT_cbf29ce484222645;
    snprintf((char *)&local_a8,0x40,"ITEMINFO_%03d",(uint)*(ushort *)((long)param_2 + 4));
    if ((byte)local_a8 != 0) {
      pbVar17 = (byte *)((ulong)&local_a8 | 1);
      bVar11 = (byte)local_a8;
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar11) * 0x100000001b3);
        bVar11 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar11 != 0);
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0xb0);
    if (lVar20 != 0) {
      plVar16 = *(long **)(lVar20 + 0x270);
      if (plVar16 != *(long **)(lVar20 + 0x278)) {
        iVar13 = 0;
        do {
          puVar15 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar16 != 0) {
            puVar15 = (undefined8 *)(*plVar16 + 0x58);
          }
          if ((undefined1 *)*puVar15 == puVar22) goto LAB_012f84ec;
          plVar16 = plVar16 + 1;
          iVar13 = iVar13 + 1;
        } while (*(long **)(lVar20 + 0x278) != plVar16);
      }
    }
    iVar13 = 0;
LAB_012f84ec:
    FUN_02c2e33c(*(long *)(param_1 + 0x18),iVar13,plVar18);
    local_c8 = *(long *)(param_1 + 0x50);
    uStack_c0 = *(undefined8 *)(param_1 + 0x58);
    local_b8 = *(undefined8 *)(param_1 + 0x60);
    lVar21 = *(long *)(param_1 + 8);
    local_b0 = (long *)0x0;
    lVar23 = *(long *)(lVar21 + 0x1b8);
    uVar14 = *(undefined8 *)(lVar21 + 0x1c0);
    lVar20 = *(long *)(lVar21 + 0x1c8);
    *(undefined4 *)(lVar23 + 0x124) = 0;
    *(undefined2 *)(lVar23 + 0x128) = 0;
    *(undefined4 *)(lVar23 + 300) = 0;
    *(undefined4 *)(lVar23 + 0x134) = 0;
    FUN_02c33414(lVar23,uVar14);
    if (*(char *)(lVar20 + 0x7c) != '\0') {
      **(undefined2 **)(lVar20 + 0x58) = 0;
      *(undefined2 *)(lVar20 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar23,lVar20,uVar14,0,0);
    FUN_0283ce7c(lVar21,&local_c8,*(undefined8 *)(lVar21 + 0x1c8),10);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (plVar18 != (long *)0x0) {
      plVar16 = plVar18 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_012f8ddc(param_1,param_2);
  FUN_012f901c(param_1,param_2);
  if (*(short *)((long)param_2 + 4) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_012f0eb8(*(undefined2 *)param_2);
  }
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  if ((lVar20 != 0) && (*plVar18 != *(long *)(param_1 + 0x128))) {
    plVar16 = plVar18 + lVar20 * 6;
    lVar20 = lVar20 * 0x30;
    do {
      lVar20 = lVar20 + -0x30;
      if (lVar20 == 0) {
        plVar18 = plVar16;
        break;
      }
      plVar2 = plVar18 + 6;
      plVar19 = plVar18 + 6;
      plVar18 = plVar2;
    } while (*plVar19 != *(long *)(param_1 + 0x128));
  }
  *(byte *)(plVar18[4] + 0x58) = *(byte *)(plVar18[4] + 0x58) & 0xfe | bVar11 & 1;
  if (*(short *)((long)param_2 + 4) != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar20 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar20;
    plVar18 = *(long **)(lVar20 + 0xc0);
    if (plVar18 != (long *)0x0) {
      lVar20 = plVar18[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_012f8c30;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_c8 = plVar18[0x18];
    local_68 = (long *)(local_c8 + plVar18[0x19] * 8);
    FUN_012fa4d0(&local_a8,&local_c8,&local_68);
    if (local_a8 != (long *)(plVar18[0x18] + plVar18[0x19] * 8)) {
      plVar16 = (long *)*local_a8;
      puVar15 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar13 != 0)) {
        uVar14 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar14;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar15 != (undefined8 *)0x0) {
LAB_012f86f8:
        if (puVar15 != (undefined8 *)PTR_DAT_0437c680) goto LAB_012f89e8;
        lVar20 = plVar16[0xb];
        if (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar14;
          }
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            plVar19 = plVar16;
          } while (cVar6 != '\0');
          goto joined_r0x012f873c;
        }
        goto LAB_012f8c30;
      }
    }
    plVar19 = (long *)0x0;
joined_r0x012f873c:
    if (plVar18 != (long *)0x0) {
      lVar20 = plVar18[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    if (plVar19 != (long *)0x0) {
      if (plVar19[0x1a] == 0) {
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
LAB_012f8780:
        bVar11 = 0;
      }
      else {
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_019d08dc(&local_a8,plVar19[0x1a] + 0x1c0);
        plVar18 = local_a8;
        puVar10 = PTR_DAT_0437c670;
        puVar9 = PTR_DAT_0437c668;
        puVar8 = PTR_DAT_043794d0;
        if (local_a8 == (long *)0x0) goto LAB_012f8780;
        if (*(int *)((long)local_a8 + 0xc) != 0) {
          piVar1 = (int *)((long)local_a8 + 0xc);
          iVar13 = *(int *)((long)local_a8 + 0xc);
          do {
            plVar16 = (long *)plVar18[2];
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                __cxa_guard_release(puVar8);
              }
              *(undefined **)puVar10 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar9);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_012f8cac;
              if (plVar16 == (long *)puVar10) break;
              plVar16 = (long *)*plVar16;
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar13) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar13 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                lVar20 = plVar18[3];
                plVar18 = (long *)0x0;
                plVar16 = local_a8;
                if (lVar20 != 0) {
                  plVar18 = (long *)(lVar20 + -0x50);
                }
                goto joined_r0x012f8af0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = iVar12;
          } while (iVar12 != 0);
        }
LAB_012f8cac:
        plVar18 = (long *)0x0;
        plVar16 = local_a8;
joined_r0x012f8af0:
        local_a8 = plVar16;
        if (plVar16 != (long *)0x0) {
          plVar2 = plVar16 + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 == 0) {
            plVar16[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_c8 = *plVar16;
            FUN_02a44274(lVar20 + 0xd8,&local_c8);
          }
        }
        if (plVar18 == (long *)0x0) goto LAB_012f8780;
        plVar16 = (long *)plVar18[0xe];
        if (plVar16 == (long *)0x0) {
          bVar11 = 0;
        }
        else {
          lVar20 = plVar16[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_012f8c30:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar14;
          }
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          FUN_0199d60c(&local_a8,plVar16);
          if (local_a8 == (long *)0x0) {
            local_68 = (long *)0x0;
LAB_012f8ba8:
            if (local_68 == (long *)0x0) goto LAB_012f8d68;
LAB_012f8bb0:
            bVar11 = FUN_01918550(local_68,*(undefined2 *)((long)param_2 + 4));
            if (local_68 != (long *)0x0) {
              lVar20 = local_68[0xb];
              piVar1 = (int *)(lVar20 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar20 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          else {
            FUN_011a5e18(&local_68);
            plVar2 = local_a8;
            if (local_a8 == (long *)0x0) goto LAB_012f8ba8;
            plVar3 = local_a8 + 1;
            do {
              iVar13 = (int)*plVar3 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 != 0) goto LAB_012f8ba8;
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_c8 = *plVar2;
            FUN_02a44274(lVar20 + 0xd8,&local_c8);
            if (local_68 != (long *)0x0) goto LAB_012f8bb0;
LAB_012f8d68:
            bVar11 = 0;
          }
          lVar20 = plVar16[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
        lVar20 = plVar18[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
      }
      lVar20 = plVar19[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      goto LAB_012f87a0;
    }
  }
  bVar11 = 0;
LAB_012f87a0:
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  if ((lVar20 != 0) && (*plVar18 != *(long *)(param_1 + 0x140))) {
    plVar16 = plVar18 + lVar20 * 6;
    lVar20 = lVar20 * 0x30;
    do {
      lVar20 = lVar20 + -0x30;
      if (lVar20 == 0) {
        plVar18 = plVar16;
        break;
      }
      plVar2 = plVar18 + 6;
      plVar19 = plVar18 + 6;
      plVar18 = plVar2;
    } while (*plVar19 != *(long *)(param_1 + 0x140));
  }
  *(byte *)(plVar18[4] + 0x58) = *(byte *)(plVar18[4] + 0x58) & 0xfe | bVar11 & 1;
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  if ((lVar20 != 0) && (*plVar18 != *(long *)(param_1 + 0x20))) {
    plVar16 = plVar18 + lVar20 * 6;
    lVar20 = lVar20 * 0x30;
    do {
      lVar20 = lVar20 + -0x30;
      if (lVar20 == 0) {
        plVar18 = plVar16;
        break;
      }
      plVar2 = plVar18 + 6;
      plVar19 = plVar18 + 6;
      plVar18 = plVar2;
    } while (*plVar19 != *(long *)(param_1 + 0x20));
  }
  *(byte *)(plVar18[4] + 0x58) = *(byte *)(plVar18[4] + 0x58) | 1;
  uVar14 = param_2[1];
  *(undefined8 *)(param_1 + 0x1f0) = *param_2;
  *(undefined8 *)(param_1 + 0x1f8) = uVar14;
  uVar4 = param_2[3];
  uVar14 = param_2[4];
  uVar5 = param_2[5];
  *(undefined8 *)(param_1 + 0x200) = param_2[2];
  *(undefined8 *)(param_1 + 0x218) = uVar5;
  *(undefined8 *)(param_1 + 0x210) = uVar14;
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    local_a8 = *(long **)(param_1 + 0x1d0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1d8);
    local_98 = *(undefined8 *)(param_1 + 0x1e0);
    local_90 = (long *)0x0;
    FUN_0283b430(*(undefined8 *)(param_1 + 8),&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    local_a8 = *(long **)(param_1 + 0x1b8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1c0);
    local_98 = *(undefined8 *)(param_1 + 0x1c8);
    local_90 = (long *)0x0;
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  return;
LAB_012f89e8:
  puVar15 = (undefined8 *)*puVar15;
  plVar19 = (long *)0x0;
  if (puVar15 == (undefined8 *)0x0) goto joined_r0x012f873c;
  goto LAB_012f86f8;
}


