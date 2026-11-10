/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018dc318; name: FUN_018dc318
 */


void FUN_018dc318(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 in_d3;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [104];
  long *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined4 local_90;
  undefined1 local_8c [4];
  long *local_88;
  undefined8 local_80 [2];
  long *local_70;
  long *local_68;
  
  if (*(char *)(param_1 + 0x75c) == '\0') goto LAB_018dc358;
  if ((*(long *)(param_1 + 0x648) != 0) && (FUN_018e4ba0(&local_68), local_68 != (long *)0x0)) {
    local_70 = (long *)0x0;
    uVar16 = *(undefined8 *)(param_1 + 8);
    FUN_009c69bc(&local_88,param_1);
    (**(code **)(*local_88 + 0x40))();
    puVar7 = PTR_DAT_04379660;
    local_8c[0] = 0;
    local_b0 = 0x591a357c2212208f;
    pcStack_a8 = "hearing_return_player_continue_second";
    local_a0 = 0x25;
    local_98 = (long *)0x0;
    local_80[0] = in_d3;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar9 = PTR_DAT_04379670;
    puVar8 = PTR_DAT_04379668;
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    local_90 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x4e9fd5f8e749f8e3;
      }
      else {
        uVar13 = 0x4e9fd5f8e749f8e3;
        if (uVar11 < 0x4e9fd5f8e749f8e4) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = 0x4e9fd5f8e749f8e3 / uVar11;
          }
          uVar13 = 0x4e9fd5f8e749f8e3 - uVar13 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x4e9fd5f8e749f8e3) {
              if (plVar15[2] == 0x4e9fd5f8e749f8e3) goto LAB_018dc4a8;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x4e9fd5f8e749f8e3) {
              if (plVar15[2] == 0x4e9fd5f8e749f8e3) goto LAB_018dc4a8;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_018dc4e8;
  }
  goto LAB_018dc354;
LAB_018dc4a8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_90 = FUN_00d7905c(plVar15,&local_b0);
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_018dc4e8:
  local_d8 = 0xe6d1af818d946be4;
  pcStack_d0 = "hearing_return_player_reach_range";
  local_c8 = 0x21;
  local_c0 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar8;
  *(long *)puVar9 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  local_b4 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar13 = 0x4e9fd5f8e749f8e3;
      if (uVar11 < 0x4e9fd5f8e749f8e4) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x4e9fd5f8e749f8e3 / uVar11;
        }
        uVar13 = 0x4e9fd5f8e749f8e3 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar15[2] == 0x4e9fd5f8e749f8e3) goto LAB_018dc5ac;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x4e9fd5f8e749f8e3) {
            if (plVar15[2] == 0x4e9fd5f8e749f8e3) goto LAB_018dc5ac;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_018dc5ec;
LAB_018dc5ac:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_b4 = FUN_00d7905c(plVar15,&local_d8);
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_018dc5ec:
  local_e0 = 0xc;
  uStack_dc = 0;
  plVar15 = (long *)FUN_018e4d58(uVar16,local_80,local_8c,&local_90,&local_b4,&uStack_dc,&local_e0);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar16;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = local_70;
  local_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    lVar14 = plVar1[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  local_70 = plVar15;
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    lVar14 = local_88[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  FUN_00bcd1e0(&local_e8,local_68,0x10,&local_70,&local_170,0);
  pcVar6 = local_168;
  if (local_e8 != (long *)0x0) {
    lVar14 = local_e8[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_e8 + 0x20))();
      pcVar6 = local_168;
      local_168 = (code *)0x0;
    }
  }
  if (pcVar6 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar6)(auStack_150);
  }
  if (local_70 != (long *)0x0) {
    lVar14 = local_70[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_018dc354:
  *(undefined1 *)(param_1 + 0x75c) = 0;
LAB_018dc358:
  *(undefined1 *)(param_1 + 0x75e) = 1;
  return;
}


