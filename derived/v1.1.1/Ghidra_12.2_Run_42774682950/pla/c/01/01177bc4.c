/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01177bc4; name: FUN_01177bc4
 */


void FUN_01177bc4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar13 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)plVar15[0x37];
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0117841c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = plVar15 + 10;
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  local_90 = (long *)0x2cc87c418d31a52b;
  pcStack_88 = "pane_T_h_title_00";
  local_80 = 0x11;
  local_78 = (long *)0x0;
  FUN_011797ec(param_1,0,0xb2cbf39eb7e43167,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0xe946998928bb5438;
  pcStack_88 = "pane_L_list_bonus_00_T_h_total_bonus_00";
  local_80 = 0x27;
  local_78 = (long *)0x0;
  FUN_011797ec(param_1,0,0x6d5f0c694a34823b,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)&DAT_6487c5ea9870f42d;
  pcStack_88 = "pane_L_btn_next_00_T_h_complete_00";
  local_80 = 0x22;
  local_78 = (long *)0x0;
  FUN_011797ec(param_1,0,0xeeedbbd27b44ba3,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_90);
  FUN_010c6160(plVar13,0,local_90);
  if (local_90 != (long *)0x0) {
    lVar14 = local_90[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  local_90 = (long *)0x95f5c5c1f98b45b4;
  pcStack_88 = "pane_T_p_pname_00";
  local_80 = 0x11;
  local_78 = (long *)0x0;
  FUN_011797ec(param_1,0,0x68e7cc5276e2b148,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  FUN_01148a98(&local_68);
  local_90 = (long *)0x52daf76250fe632a;
  pcStack_88 = "WSYS_U_RANK";
  local_80 = 0xb;
  local_78 = (long *)0x0;
  uVar8 = FUN_010f5878(local_68,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (9 < uVar8) {
    uVar8 = 10;
  }
  local_90 = (long *)&DAT_a7478092530a1943;
  pcStack_88 = "pane_T_h_rank_00";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  FUN_011797ec(param_1,1,*(undefined8 *)(&DAT_03a79270 + (ulong)uVar8 * 8),&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_98 = (long *)0x0;
  plVar15 = (long *)FUN_00938550();
  if (plVar15 == (long *)0x0) {
  }
  else {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if (local_98 != (long *)0x0) {
      lVar14 = *local_98;
      local_98 = plVar15;
      (**(code **)(lVar14 + 0x20))();
      plVar15 = local_98;
    }
  }
  local_98 = plVar15;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_0117841c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_68 = (long *)plVar15[0x18];
  local_70 = local_68 + plVar15[0x19];
  FUN_0117e1c0(&local_90,&local_68,&local_70);
  if (local_90 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar17 = (long *)*local_90;
    puVar12 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
      uVar11 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar11;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar12 != (undefined8 *)0x0) {
      while (puVar12 != (undefined8 *)PTR_DAT_0437c680) {
        puVar12 = (undefined8 *)*puVar12;
        plVar16 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01178030;
      }
      lVar14 = plVar17[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0117841c;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar16 = plVar17;
      } while (cVar2 != '\0');
LAB_01178030:
      if (plVar16 == (long *)0x0) goto LAB_01178064;
      FUN_01e564f8(&local_90,plVar16);
      plVar17 = local_90;
      puVar5 = PTR_DAT_0437c670;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) == 0) {
LAB_011785a8:
          plVar18 = (long *)0x0;
          plVar4 = local_90;
        }
        else {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar9 = *(int *)((long)local_90 + 0xc);
          while ((plVar18 = (long *)plVar17[2], (*PTR_DAT_0437c668 & 1) != 0 ||
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar10 == 0))) {
            plVar4 = local_90;
            if (plVar18 == (long *)0x0) goto joined_r0x0117848c;
LAB_01178458:
            while (plVar4 = local_90, plVar18 != (long *)puVar5) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) {
                plVar18 = (long *)0x0;
                goto joined_r0x0117848c;
              }
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar9) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar14 = plVar17[3];
                plVar18 = (long *)0x0;
                if (lVar14 != 0) {
                  plVar18 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x0117848c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar10;
            if (iVar10 == 0) goto LAB_011785a8;
          }
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar5 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437c668);
          plVar4 = local_90;
          if (plVar18 != (long *)0x0) goto LAB_01178458;
        }
joined_r0x0117848c:
        local_90 = plVar4;
        if (plVar4 != (long *)0x0) {
          plVar17 = plVar4 + 1;
          do {
            iVar9 = (int)*plVar17 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *(int *)plVar17 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            plVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = (long *)*plVar4;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        if (plVar18 != (long *)0x0) {
          puVar12 = (undefined8 *)FUN_0196bd2c(plVar18);
          plVar17 = (long *)*puVar12;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
          if (local_98 != (long *)0x0) {
            lVar14 = *local_98;
            local_98 = plVar17;
            (**(code **)(lVar14 + 0x20))();
            plVar17 = local_98;
          }
          local_98 = plVar17;
          lVar14 = plVar18[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
      }
      lVar14 = plVar16[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
LAB_01178064:
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar9 != 0))
  {
    local_90 = (long *)FUN_00938550();
    puVar5 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_90);
    FUN_00100250(PTR_LAB_0437a8d8,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar17 = (long *)PTR_DAT_04379c88;
  if (local_98 != (long *)0x0) {
    plVar17 = local_98 + 0xb;
  }
  plVar16 = (long *)PTR_DAT_04379c88;
  if (*(long *)PTR_DAT_0437a7d0 != 0) {
    plVar16 = (long *)(*(long *)PTR_DAT_0437a7d0 + 0x58);
  }
  if (*plVar17 != *plVar16) {
    FUN_010c7318(plVar13,0,&local_98);
    local_90 = (long *)0xe1c333f92092c652;
    pcStack_88 = "pane_T_p_area_name_00";
    local_80 = 0x15;
    local_78 = (long *)0x0;
    FUN_011797ec(param_1,0,0xb2cbf59eb7e434cd,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_90 = (long *)0x53cbe28e1065bfe8;
  pcStack_88 = "pane_A_alignment_header_00";
  local_80 = 0x1a;
  local_78 = (long *)0x0;
  FUN_01179adc(param_1 + 0x180,&local_90);
  local_90 = (long *)0x915508c6db2a31f0;
  pcStack_88 = "pane_A_alignment_player_00";
  local_80 = 0x1a;
  local_78 = (long *)0x0;
  FUN_01179adc(param_1 + 0x180,&local_90);
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


