/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121edd0; name: FUN_0121edd0
 */


void FUN_0121edd0(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  long *local_f8;
  long *local_f0;
  long *local_e0;
  long *local_d8;
  char *local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0 [8];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar10 = *(long **)(lVar13 + 0xd0);
  if (plVar10 != (long *)0x0) {
    plVar19 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar19 = (long *)plVar10[0xb];
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar21 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar21 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *(int *)plVar21 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  uVar11 = (**(code **)(*plVar19 + 0x58))(plVar19,param_2);
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar21 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar21 = (long *)plVar10[0x37];
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  snprintf((char *)local_b0,0x40,"pane_L_list_temochi_base_%02d",param_2);
  local_b8 = local_b0;
  if (param_2 < *(byte *)(plVar19 + 0x11)) {
    FUN_009313e8(&local_d8,&local_b8);
    plVar20 = local_d8;
    if (local_d8 == (long *)0x0) {
      plVar15 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar15 = local_d8 + 0xb;
    }
    lVar13 = *plVar15;
    if (local_d8 == (long *)0x0) {
      plVar15 = (long *)plVar10[0x29];
      lVar14 = plVar10[0x2a];
      plVar22 = plVar15 + lVar14 * 6;
    }
    else {
      (**(code **)(*local_d8 + 0x18))(local_d8);
      plVar15 = (long *)plVar10[0x29];
      lVar14 = plVar10[0x2a];
      plVar22 = plVar15 + lVar14 * 6;
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if (lVar14 != 0) {
      lVar14 = *plVar15;
      while ((lVar14 != lVar13 && (plVar18 = plVar15 + 6, plVar15 = plVar22, plVar22 != plVar18))) {
        lVar14 = *plVar18;
        plVar15 = plVar18;
      }
    }
    if (plVar20 == (long *)0x0) {
      *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
    }
    else {
      (**(code **)(*plVar20 + 0x20))(plVar20);
      *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    local_f0 = plVar10 + 0x29;
    local_f8 = plVar10 + 0x2a;
    FUN_0121f8bc(param_1,param_2);
    uVar8 = FUN_02c5fb2c(uVar11);
    FUN_02c395d0(plVar21,0,uVar8,3,0,1);
    snprintf((char *)local_b0,0x40,"pane_L_list_temochi_base_%02d_T_lv_00",param_2);
    local_e0 = local_b0;
    FUN_009313e8(&local_b8,&local_e0);
    plVar20 = local_b8;
    if (local_b8 == (long *)0x0) {
      local_d8 = *(long **)PTR_DAT_04379c88;
LAB_0121f708:
      local_d0 = *(char **)PTR_PTR_04379d00;
      if (local_b8 != (long *)0x0) goto LAB_0121f068;
LAB_0121f718:
      local_c8 = 0;
    }
    else {
      local_d8 = (long *)local_b8[0xb];
      if (local_b8 == (long *)0x0) goto LAB_0121f708;
      local_d0 = (char *)local_b8[0xc];
      if (local_b8 == (long *)0x0) goto LAB_0121f718;
LAB_0121f068:
      local_c8 = local_b8[0xd];
    }
    local_c0 = (long *)0x0;
    if (local_b8 == (long *)0x0) {
      local_c0 = local_b8;
    }
    else {
      (**(code **)(*local_b8 + 0x18))(local_b8);
      plVar15 = local_c0;
      local_c0 = plVar20;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
    }
    FUN_0121ac84(param_1,0xc8f858d01388e617,&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    snprintf((char *)local_b0,0x40,"pane_L_list_temochi_base_%02d_L_icon_sick_00_P_sick_00",param_2)
    ;
    plVar20 = *(long **)(param_1 + 0x508);
    if (plVar20 != (long *)0x0) {
      plVar15 = plVar20 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e0 = local_b0;
    FUN_009313e8(&local_b8,&local_e0);
    plVar15 = local_b8;
    if (local_b8 == (long *)0x0) {
      local_d8 = *(long **)PTR_DAT_04379c88;
LAB_0121f730:
      local_d0 = *(char **)PTR_PTR_04379d00;
      if (local_b8 != (long *)0x0) goto LAB_0121f128;
LAB_0121f740:
      local_c8 = 0;
    }
    else {
      local_d8 = (long *)local_b8[0xb];
      if (local_b8 == (long *)0x0) goto LAB_0121f730;
      local_d0 = (char *)local_b8[0xc];
      if (local_b8 == (long *)0x0) goto LAB_0121f740;
LAB_0121f128:
      local_c8 = local_b8[0xd];
    }
    local_c0 = (long *)0x0;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x18))(local_b8);
    }
    local_c0 = plVar15;
    if (*local_d0 == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_d8);
    }
    bVar6 = FUN_0284c170(plVar20,uVar11,uVar12,1,0,0,0);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (plVar20 != (long *)0x0) {
      plVar15 = plVar20 + 10;
      do {
        iVar9 = (int)*plVar15 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    if ((bVar6 & 1) != 0) {
      snprintf((char *)local_b0,0x40,"anime_L_list_temochi_base_%02d_L_icon_sick_00_flashing",
               param_2);
      local_b8 = local_b0;
      FUN_009313e8(&local_d8,&local_b8);
      plVar20 = local_d8;
      if (local_d8 == (long *)0x0) {
        lVar13 = *(long *)PTR_DAT_04379c88;
      }
      else {
        lVar13 = local_d8[0xb];
        if (local_d8 != (long *)0x0) {
          (**(code **)(*local_d8 + 0x18))(local_d8);
        }
      }
      lVar14 = *(long *)(param_1 + 0x2c8);
      if (lVar14 == 0) {
        bVar5 = true;
        goto joined_r0x0121f75c;
      }
      plVar15 = *(long **)(lVar14 + 0x1a0);
      lVar3 = *(long *)(lVar14 + 0x1a8);
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      plVar22 = plVar15;
      if ((lVar3 != 0) && (*plVar15 != lVar13)) {
        lVar17 = lVar3 * 0x30;
        plVar18 = plVar15 + lVar3 * 6;
        do {
          lVar17 = lVar17 + -0x30;
          plVar22 = plVar18;
          if (lVar17 == 0) break;
          plVar1 = plVar15 + 6;
          plVar15 = plVar15 + 6;
          plVar22 = plVar15;
        } while (*plVar1 != lVar13);
      }
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
      plVar15 = (long *)(*(long *)(lVar14 + 0x1a0) + *(long *)(lVar14 + 0x1a8) * 0x30);
      if (plVar22 == plVar15) {
        plVar18 = (long *)0x0;
        if (plVar22 != plVar15) goto LAB_0121f498;
LAB_0121f790:
        bVar5 = true;
      }
      else {
        plVar18 = plVar22 + 4;
        if (plVar22 == plVar15) goto LAB_0121f790;
LAB_0121f498:
        uVar16 = (ulong)*(uint *)(plVar18 + 1);
        if (((*(uint *)(*plVar18 + 0x278) <= *(uint *)(plVar18 + 1)) ||
            (lVar13 = *(long *)(*plVar18 + 600), *(char *)(lVar13 + uVar16 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar13 + uVar16 * 0x48 + 0xb) == '\0')) goto LAB_0121f790;
        plVar15 = (long *)(lVar13 + uVar16 * 0x48 + 0x10);
        lVar14 = *plVar15;
        if ((lVar14 == 0) || (*(char *)(lVar13 + uVar16 * 0x48 + 9) != '\0')) {
          bVar5 = false;
        }
        else {
          fVar23 = *(float *)(lVar14 + 0x20);
          uVar7 = FUN_00227728();
          uVar16 = FUN_00227744(*plVar15);
          bVar5 = false;
          if (((float)uVar7 <= fVar23) && ((uVar16 & 1) == 0)) goto LAB_0121f790;
        }
      }
joined_r0x0121f75c:
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (bVar5) {
        local_e0 = local_b0;
        FUN_009313e8(&local_b8,&local_e0);
        plVar20 = local_b8;
        if (local_b8 == (long *)0x0) {
          local_d8 = *(long **)PTR_DAT_04379c88;
LAB_0121f868:
          local_d0 = *(char **)PTR_PTR_04379d00;
          if (local_b8 != (long *)0x0) goto LAB_0121f7f4;
LAB_0121f878:
          local_c8 = 0;
        }
        else {
          local_d8 = (long *)local_b8[0xb];
          if (local_b8 == (long *)0x0) goto LAB_0121f868;
          local_d0 = (char *)local_b8[0xc];
          if (local_b8 == (long *)0x0) goto LAB_0121f878;
LAB_0121f7f4:
          local_c8 = local_b8[0xd];
        }
        local_c0 = (long *)0x0;
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x18))(local_b8);
        }
        local_c0 = plVar20;
        if (*(long *)(param_1 + 0x2c8) != 0) {
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d8);
        }
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
      }
    }
    snprintf((char *)local_b0,0x40,"pane_L_list_temochi_base_%02d_L_icon_sick_00",param_2);
    local_b8 = local_b0;
    FUN_009313e8(&local_d8,&local_b8);
    plVar20 = local_d8;
    if (local_d8 == (long *)0x0) {
      plVar15 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar15 = local_d8 + 0xb;
    }
    lVar13 = *plVar15;
    if (local_d8 == (long *)0x0) {
      local_f0 = (long *)*local_f0;
      lVar14 = *local_f8;
      plVar15 = local_f0 + lVar14 * 6;
    }
    else {
      (**(code **)(*local_d8 + 0x18))(local_d8);
      local_f0 = (long *)*local_f0;
      lVar14 = *local_f8;
      plVar15 = local_f0 + lVar14 * 6;
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if (lVar14 != 0) {
      lVar14 = *local_f0;
      while ((lVar14 != lVar13 && (plVar22 = local_f0 + 6, local_f0 = plVar15, plVar15 != plVar22)))
      {
        lVar14 = *plVar22;
        local_f0 = plVar22;
      }
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
      lVar13 = local_f0[4];
      bVar6 = *(byte *)(lVar13 + 0x58) & 0xfe | bVar6 & 1;
LAB_0121f27c:
      *(byte *)(lVar13 + 0x58) = bVar6;
      (**(code **)(*plVar20 + 0x20))(plVar20);
      goto joined_r0x0121f294;
    }
    lVar13 = local_f0[4];
    bVar6 = *(byte *)(lVar13 + 0x58) & 0xfe | bVar6 & 1;
  }
  else {
    FUN_009313e8(&local_d8,&local_b8);
    plVar20 = local_d8;
    if (local_d8 == (long *)0x0) {
      lVar13 = *(long *)PTR_DAT_04379c88;
LAB_0121f8a8:
      plVar15 = (long *)plVar10[0x29];
      lVar14 = plVar10[0x2a];
      plVar22 = plVar15 + lVar14 * 6;
    }
    else {
      lVar13 = local_d8[0xb];
      if (local_d8 == (long *)0x0) goto LAB_0121f8a8;
      (**(code **)(*local_d8 + 0x18))(local_d8);
      plVar15 = (long *)plVar10[0x29];
      lVar14 = plVar10[0x2a];
      plVar22 = plVar15 + lVar14 * 6;
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if (lVar14 != 0) {
      lVar14 = *plVar15;
      while ((lVar14 != lVar13 && (plVar18 = plVar15 + 6, plVar15 = plVar22, plVar22 != plVar18))) {
        lVar14 = *plVar18;
        plVar15 = plVar18;
      }
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
      lVar13 = plVar15[4];
      bVar6 = *(byte *)(lVar13 + 0x58) & 0xfe;
      goto LAB_0121f27c;
    }
    lVar13 = plVar15[4];
    bVar6 = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  *(byte *)(lVar13 + 0x58) = bVar6;
joined_r0x0121f294:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  plVar21 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar21 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *(int *)plVar21 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  plVar10 = plVar19 + 10;
  do {
    iVar9 = (int)*plVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  return;
}


