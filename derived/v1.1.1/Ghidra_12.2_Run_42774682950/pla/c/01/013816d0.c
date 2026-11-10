/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013816d0; name: FUN_013816d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013816d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  byte *pbVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  long *local_540;
  int local_508;
  int local_504;
  ulong local_500;
  undefined8 uStack_4f8;
  uint uStack_4f0;
  undefined2 uStack_4ec;
  ulong local_4e8;
  undefined6 uStack_4e0;
  undefined2 local_4da;
  undefined4 uStack_4d8;
  undefined2 uStack_4d4;
  ulong local_4d0;
  long local_4c8;
  long *local_4c0;
  undefined8 local_4b8;
  long *local_4b0;
  ulong local_4a8;
  long *local_4a0;
  byte local_498 [1024];
  long *local_98;
  byte *pbStack_90;
  undefined1 *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  
  local_4b8 = param_2;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar18 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar18;
  plVar26 = *(long **)(lVar18 + 0x100);
  if (plVar26 != (long *)0x0) {
    plVar27 = plVar26 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar9) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar27 = (long *)plVar26[0x20];
  if (plVar27 != (long *)0x0) {
    plVar13 = plVar27 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar13 = (long *)plVar27[0xe];
  if (plVar13 != (long *)0x0) {
    plVar25 = plVar13 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar9) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar25 = (long *)plVar13[0xb];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar1 = plVar13 + 10;
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *(int *)plVar1 = iVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  plVar13 = plVar27 + 10;
  do {
    iVar12 = (int)*plVar13 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *(int *)plVar13 = iVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
  }
  plVar27 = plVar26 + 10;
  do {
    iVar12 = (int)*plVar27 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar9) {
      *(int *)plVar27 = iVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  FUN_016a50f0(&local_4c0,plVar25,&local_4b8,*(undefined8 *)(param_1 + 8));
  if (local_4c0 != (long *)0x0) {
    local_4c8 = *(long *)(param_1 + 0x30);
    local_504._0_2_ = 0;
    local_500 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4f8._0_6_ = (undefined6)local_4c8;
    uStack_4e0 = (undefined6)uStack_4f8;
    uStack_4f8._6_2_ = (undefined2)((ulong)local_4c8 >> 0x30);
    local_4da = uStack_4f8._6_2_;
    local_4d0 = 0;
    local_4e8 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    uVar5 = *(uint *)(local_4c0 + 0x21);
    if (uVar5 != 0) {
      if ((int)local_4c0[0x22] == 0) {
        local_504._0_2_ = (undefined2)*(undefined4 *)((long)local_4c0 + 0x114);
        local_500 = (ulong)*(uint *)(local_4c0 + 0x23);
      }
      else {
        uStack_4f8._0_6_ = (undefined6)local_4c0[0x24];
        uStack_4f8._6_2_ = (undefined2)((ulong)local_4c0[0x24] >> 0x30);
      }
      if (1 < uVar5) {
        bVar9 = (int)local_4c0[0x25] != 0;
        if (bVar9) {
          uStack_4e0 = (undefined6)local_4c0[0x27];
          local_4da = (undefined2)((ulong)local_4c0[0x27] >> 0x30);
        }
        else {
          uStack_4ec = (undefined2)*(undefined4 *)((long)local_4c0 + 300);
          local_4e8 = (ulong)*(uint *)(local_4c0 + 0x26);
        }
        uStack_4f0 = (uint)bVar9;
        if (2 < uVar5) {
          if ((int)local_4c0[0x28] == 0) {
            uStack_4d8 = 0;
            uStack_4d4 = (undefined2)*(undefined4 *)((long)local_4c0 + 0x144);
            local_4d0 = (ulong)*(uint *)(local_4c0 + 0x29);
          }
          else {
            uStack_4d8 = 1;
            local_4c8 = local_4c0[0x2a];
          }
        }
      }
    }
    uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + 400);
    if (uVar6 != 0) {
      uVar23 = 0;
      piVar19 = (int *)(*(long *)(param_1 + 0x18) + 0x20);
LAB_01381854:
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar19 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar19 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 != &DAT_61030071dde8d2bb) || (*piVar19 != 10)) goto LAB_013820f0;
      if ((uint)uVar23 < 0x10) {
        plVar26 = *(long **)(piVar19 + -2);
        if (plVar26 == (long *)0x0) goto LAB_01382278;
        lVar18 = plVar26[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar30 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar30;
          }
          piVar19 = (int *)(lVar18 + 0xc);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar9) {
              *piVar19 = *piVar19 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_01382278:
          plVar27 = (long *)plVar26[0xd];
          goto joined_r0x01382280;
        }
        goto LAB_01382340;
      }
    }
LAB_01381884:
    plVar26 = (long *)0x0;
    plVar27 = _DAT_00000068;
joined_r0x01382280:
    if (plVar27 != (long *)0x0) {
      plVar13 = plVar27 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (plVar26 != (long *)0x0) {
      lVar18 = plVar26[0xb];
      piVar19 = (int *)(lVar18 + 0xc);
      do {
        iVar12 = *piVar19;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar9) {
          *piVar19 = iVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
    }
    lVar18 = *(long *)(param_1 + 0x10);
    plVar26 = *(long **)(lVar18 + 0x148);
    if (plVar26 != (long *)0x0) {
      plVar13 = plVar26 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar18 = *(long *)(param_1 + 0x10);
    }
    lVar18 = *(long *)(lVar18 + 0x328);
    memset(local_498,0,0x400);
    uVar23 = 0;
    plVar13 = plVar27 + 10;
    plVar1 = plVar26 + 10;
    pbVar20 = (byte *)((ulong)local_498 | 1);
    do {
      plVar21 = (long *)&DAT_cbf29ce484222645;
      iVar12 = (int)uVar23;
      snprintf((char *)local_498,0x400,"pane_%s_N_reward_%02d",*(char **)(param_1 + 0x20),iVar12);
      lVar14 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_498);
      snprintf((char *)local_498,0x400,"pane_%s_N_reward_text_%02d",*(char **)(param_1 + 0x20),
               iVar12);
      lVar15 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_498);
      if (uVar23 < uVar5) {
        if ((&local_504)[uVar23 * 6 + -1] == 1) {
          *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
          *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
          snprintf((char *)local_498,0x400,"pane_%s_T_reward_text_%02d",*(char **)(param_1 + 0x20),
                   iVar12);
          local_88 = (undefined1 *)strlen((char *)local_498);
          if (local_498[0] != 0) {
            pbVar24 = pbVar20;
            bVar7 = local_498[0];
            do {
              plVar21 = (long *)(((ulong)plVar21 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar7 != 0);
          }
          local_98 = plVar21;
          pbStack_90 = local_498;
          local_80 = (long *)0x0;
          FUN_0283ce7c(plVar26,&local_98,*(undefined8 *)(&local_504 + uVar23 * 6 + 3),10);
          plVar21 = local_80;
        }
        else {
          *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
          *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
          snprintf((char *)local_498,0x400,"pane_%s_T_reward_%02d",*(char **)(param_1 + 0x20),iVar12
                  );
          uVar30 = *(undefined8 *)(param_1 + 0x10);
          local_88 = (undefined1 *)strlen((char *)local_498);
          local_98 = plVar21;
          if (local_498[0] != 0) {
            pbVar24 = pbVar20;
            bVar7 = local_498[0];
            do {
              local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar7 != 0);
          }
          pbStack_90 = local_498;
          local_4a0 = plVar27;
          local_80 = (long *)0x0;
          if (plVar27 != (long *)0x0) {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_4a8 = 0x7a46ecd7a0f8fe20;
          FUN_01381200(uVar30,&local_98,&local_4a0,&local_4a8,0,(short)(&local_504)[uVar23 * 6],1);
          if (local_4a0 != (long *)0x0) {
            plVar4 = local_4a0 + 10;
            do {
              iVar10 = (int)*plVar4 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *(int *)plVar4 = iVar10;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_4a0 + 0x10))();
            }
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          snprintf((char *)local_498,0x400,"pane_%s_T_reward_count_a_%02d",
                   *(char **)(param_1 + 0x20),iVar12);
          uVar30 = *(undefined8 *)(param_1 + 0x10);
          local_88 = (undefined1 *)strlen((char *)local_498);
          local_98 = plVar21;
          if (local_498[0] != 0) {
            pbVar24 = pbVar20;
            bVar7 = local_498[0];
            do {
              local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar7 != 0);
          }
          local_80 = (long *)0x0;
          if (plVar27 != (long *)0x0) {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_4a8 = 0x7a4387d7a0f61caa;
          local_4b0 = plVar27;
          pbStack_90 = local_498;
          FUN_011845f4(uVar30,&local_98,&local_4b0,&local_4a8,10);
          if (local_4b0 != (long *)0x0) {
            plVar4 = local_4b0 + 10;
            do {
              iVar10 = (int)*plVar4 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *(int *)plVar4 = iVar10;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*local_4b0 + 0x10))();
            }
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          snprintf((char *)local_498,0x400,"pane_%s_T_reward_count_b_%02d",
                   *(char **)(param_1 + 0x20),iVar12);
          if (plVar26 != (long *)0x0) {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_88 = (undefined1 *)strlen((char *)local_498);
          puVar11 = PTR_DAT_04379c88;
          if (local_498[0] != 0) {
            pbVar24 = pbVar20;
            bVar7 = local_498[0];
            do {
              plVar21 = (long *)(((ulong)plVar21 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar7 != 0);
          }
          local_98 = plVar21;
          pbStack_90 = local_498;
          local_80 = (long *)0x0;
          if (plVar27 == (long *)0x0) {
            local_540 = (long *)0x0;
          }
          else {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            local_540 = plVar27;
          }
          iVar10 = (&local_504)[uVar23 * 6 + 1];
          plVar21 = (long *)plVar26[0x38];
          if (plVar21 == (long *)0x0) {
            lVar14 = plVar27[0x16];
            if (lVar14 != 0) {
              plVar21 = *(long **)(lVar14 + 0x270);
              if (plVar21 != *(long **)(lVar14 + 0x278)) {
                iVar17 = 0;
                do {
                  plVar4 = (long *)PTR_DAT_04379c88;
                  if (*plVar21 != 0) {
                    plVar4 = (long *)(*plVar21 + 0x58);
                  }
                  if (*plVar4 == 0x7a4388d7a0f61e5d) goto LAB_01382328;
                  plVar21 = plVar21 + 1;
                  iVar17 = iVar17 + 1;
                } while (*(long **)(lVar14 + 0x278) != plVar21);
              }
            }
            iVar17 = 0;
LAB_01382328:
            FUN_02c2e33c(plVar27,iVar17,0);
            plVar21 = (long *)plVar26[0x37];
joined_r0x01382338:
            if (plVar21 == (long *)0x0) goto LAB_013820d0;
LAB_01381cec:
            lVar14 = plVar21[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01382340:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar30 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar30;
            }
            piVar19 = (int *)(lVar14 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar9) {
                *piVar19 = *piVar19 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            FUN_02c395d0(plVar21,0,iVar10,3,1,1);
            lVar14 = plVar21[0xb];
            piVar19 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar19;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar9) {
                *piVar19 = iVar10 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))(plVar21);
            }
          }
          else {
            plVar4 = plVar21 + 10;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *(int *)plVar4 = (int)*plVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            lVar14 = plVar27[0x16];
            if (lVar14 != 0) {
              plVar22 = *(long **)(lVar14 + 0x270);
              if (plVar22 != *(long **)(lVar14 + 0x278)) {
                iVar17 = 0;
                do {
                  plVar3 = (long *)puVar11;
                  if (*plVar22 != 0) {
                    plVar3 = (long *)(*plVar22 + 0x58);
                  }
                  if (*plVar3 == 0x7a4388d7a0f61e5d) goto LAB_01381cc4;
                  plVar22 = plVar22 + 1;
                  iVar17 = iVar17 + 1;
                } while (*(long **)(lVar14 + 0x278) != plVar22);
              }
            }
            iVar17 = 0;
LAB_01381cc4:
            FUN_02c2e33c(plVar27,iVar17,plVar21);
            do {
              iVar17 = (int)*plVar4 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *(int *)plVar4 = iVar17;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar17 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              plVar21 = (long *)plVar26[0x37];
              goto joined_r0x01382338;
            }
            plVar21 = (long *)plVar26[0x37];
            if (plVar21 != (long *)0x0) goto LAB_01381cec;
LAB_013820d0:
            FUN_02c395d0(0,0,iVar10,3,1,1);
          }
          lVar14 = plVar26[0x38];
          lVar15 = plVar26[0x39];
          lVar28 = plVar26[0x37];
          *(undefined4 *)(lVar28 + 0x124) = 0;
          *(undefined2 *)(lVar28 + 0x128) = 0;
          *(undefined4 *)(lVar28 + 300) = 0;
          *(undefined4 *)(lVar28 + 0x134) = 0;
          FUN_02c33414(lVar28,lVar14);
          if (*(char *)(lVar15 + 0x7c) != '\0') {
            **(undefined2 **)(lVar15 + 0x58) = 0;
            *(undefined2 *)(lVar15 + 0x7a) = 0;
          }
          FUN_02c338a4(lVar28,lVar15,lVar14,0,0);
          FUN_0283ce7c(plVar26,&local_98,plVar26[0x39],10);
          if (plVar27 != (long *)0x0) {
            do {
              iVar10 = (int)*plVar13 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *(int *)plVar13 = iVar10;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar27 + 0x10))(local_540);
            }
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = iVar10;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
          local_98 = (long *)0x0;
          pbStack_90 = &DAT_cbf29ce484222645;
          local_88 = &DAT_03996322;
          local_70 = 0;
          uVar29 = (ulong)(uint)(*(int *)(param_1 + 0x28) + iVar12);
          local_80 = (long *)0x0;
          local_78 = (long *)0x0;
          local_4a8 = local_4a8 & 0xffffffff00000000;
          FUN_0284eb30(&local_98,&local_4a8,(short)(&local_504)[uVar23 * 6]);
          uVar16 = FUN_02c4d8d4(*(undefined8 *)(lVar18 + uVar29 * 0xc0 + 8),&local_98,
                                local_4a8 & 0xffffffff,0);
          if ((uVar16 & 1) != 0) {
            lVar14 = lVar18 + uVar29 * 0xc0;
            *(undefined1 *)(lVar14 + 0x30) = 0;
            *(undefined4 *)(lVar14 + 0x34) = 0;
          }
          plVar21 = local_98;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
            plVar21 = local_98;
          }
        }
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))();
        }
      }
      else {
        *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != 3);
    if (plVar26 != (long *)0x0) {
      do {
        iVar12 = (int)*plVar1 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
    if (plVar27 != (long *)0x0) {
      do {
        iVar12 = (int)*plVar13 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
    if (local_4c0 != (long *)0x0) {
      plVar26 = local_4c0 + 10;
      do {
        iVar12 = (int)*plVar26 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar9) {
          *(int *)plVar26 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_4c0 + 0x10))();
      }
    }
  }
  if (plVar25 != (long *)0x0) {
    plVar26 = plVar25 + 10;
    do {
      iVar12 = (int)*plVar26 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar9) {
        *(int *)plVar26 = iVar12;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  return;
LAB_013820f0:
  uVar23 = uVar23 + 1;
  piVar19 = piVar19 + 6;
  if (uVar6 == uVar23) goto LAB_01381884;
  goto LAB_01381854;
}


