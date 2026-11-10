/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ffe7c; name: FUN_013ffe7c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ffe7c(long param_1,int param_2,ulong param_3,int param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  long *local_b0;
  long *local_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  undefined1 auStack_58 [8];
  
  local_78 = 0;
  local_70 = 0;
  local_7c = 0;
  FUN_013dae20(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),
               *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70),(long)&local_70 + 4,&local_70,
               (long)&local_78 + 4,&local_78,&local_7c);
  *(int *)(param_1 + 0x794) = param_2;
  FUN_013e16b0(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0x80));
  uVar12 = FUN_013db59c();
  uVar10 = FUN_013e1c28(*(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70));
  lVar17 = *(long *)(param_1 + 0x730);
  FUN_013dd1ac(uVar12,uVar10,*(undefined4 *)(param_1 + 0x794),
               *(undefined1 *)(*(long *)(lVar17 + 0xa0) + 8),*(undefined8 *)(lVar17 + 0xc0),
               lVar17 + 200);
  FUN_013dd128(uVar12,*(undefined8 *)(param_1 + 0x740));
  lVar17 = param_1 + 0x180;
  lVar13 = FUN_01306260(lVar17,"pane_N_detail_00");
  *(byte *)(lVar13 + 0x58) =
       *(byte *)(lVar13 + 0x58) & 0xfe | *(int *)(*(long *)(param_1 + 0x740) + 0x3390) != 0;
  if (*(code **)(param_1 + 0x6b0) != (code *)0x0) {
    local_a0 = (undefined1 *)
               CONCAT44(local_a0._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x740) + 0x3390));
    (**(code **)(param_1 + 0x6b0))(param_1 + 0x6d0,&local_a0);
  }
  lVar24 = *(long *)(param_1 + 0x738);
  lVar13 = *(long *)(lVar24 + 0xb0);
  if (lVar13 != 0) {
    *(long *)(lVar24 + 0xb0) = lVar13 - ((lVar13 << 3) >> 3);
    lVar24 = *(long *)(param_1 + 0x738);
  }
  piVar18 = *(int **)(param_1 + 0x740);
  if (piVar18[0xce4] == 0) {
    uVar19 = 0;
    iVar11 = *(int *)(lVar24 + 0xb0);
    uVar12 = local_70;
  }
  else {
    uVar25 = 0;
    do {
      local_64 = 0;
      uVar21 = *(ulong *)(lVar24 + 0xb0);
      local_68 = uVar25;
      if (uVar21 < *(ulong *)(lVar24 + 0xb8)) {
        FUN_011d216c(lVar24 + 0x88,*(long *)(lVar24 + 0xa8) + uVar21 * 8,&local_68);
        *(long *)(lVar24 + 0xb0) = *(long *)(lVar24 + 0xb0) + 1;
      }
      else {
        local_a0 = (undefined1 *)(*(long *)(lVar24 + 0xa8) + uVar21 * 8);
        FUN_011d20a4(auStack_58,lVar24 + 0x88,&local_a0,1,&local_68);
      }
      piVar18 = *(int **)(param_1 + 0x740);
      uVar25 = uVar25 + 1;
      lVar24 = *(long *)(param_1 + 0x738);
      uVar19 = piVar18[0xce4];
    } while (uVar25 < uVar19);
    iVar11 = *(int *)(lVar24 + 0xb0);
    uVar12 = local_70;
  }
  local_70 = uVar12;
  if ((param_3 & 1) == 0) {
    if (param_4 != 0) {
      if (uVar19 != 0) {
        uVar21 = 0;
        do {
          if (1099 < uVar21) goto LAB_0140062c;
          if (*piVar18 == param_4) {
            iVar16 = param_4;
            goto LAB_0140056c;
          }
          uVar21 = uVar21 + 1;
          piVar18 = piVar18 + 3;
        } while (uVar19 != uVar21);
      }
      uVar21 = 0;
      iVar16 = 0;
LAB_0140056c:
      bVar9 = iVar16 == param_4;
      uVar22 = 0;
      uVar10 = 0;
      uVar19 = (uint)uVar21;
      if (!bVar9) {
        uVar19 = 0;
      }
      uVar21 = (ulong)uVar19;
      goto LAB_01400064;
    }
    local_70._4_4_ = (int)((ulong)uVar12 >> 0x20);
    if (local_70._4_4_ == param_2) {
      if (uVar19 != 0) {
        uVar21 = 0;
        do {
          if (1099 < uVar21) {
LAB_0140062c:
                    /* WARNING: Subroutine does not return */
            FUN_013dd720();
          }
          if (*piVar18 == local_7c) goto LAB_0140004c;
          uVar21 = uVar21 + 1;
          piVar18 = piVar18 + 3;
        } while (uVar19 != uVar21);
      }
      if (local_7c == 0) {
        uVar21 = 0;
LAB_0140004c:
        local_70._0_4_ = (int)uVar12;
        if ((int)local_70 == iVar11) {
          uVar22 = local_78 & 0xffffffff;
          local_78._4_4_ = (undefined4)(local_78 >> 0x20);
          bVar9 = false;
          uVar10 = local_78._4_4_;
        }
        else {
          uVar22 = 0;
          bVar9 = true;
          uVar10 = 0;
        }
        goto LAB_01400064;
      }
    }
  }
  bVar9 = false;
  uVar21 = 0;
  uVar22 = 0;
  uVar10 = 0;
LAB_01400064:
  local_a0 = &DAT_ec034b23cfd86628;
  pcStack_98 = "list_panel";
  local_90 = 10;
  local_88 = (long *)0x0;
  uVar12 = FUN_00d2ee28(lVar17,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a8 = *(long **)(param_1 + 0x738);
  if (local_a8 != (long *)0x0) {
    lVar13 = local_a8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01400630:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar14;
    }
    piVar18 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = *piVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0281e3a4(uVar12,&local_a8);
  if (local_a8 != (long *)0x0) {
    lVar13 = local_a8[0xb];
    piVar18 = (int *)(lVar13 + 0xc);
    do {
      iVar16 = *piVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  FUN_0281e390(uVar12,uVar10);
  FUN_0281e380(uVar12,uVar22,0);
  FUN_0281857c(uVar12);
  if (bVar9) {
    FUN_0281a3b8(uVar12,uVar21 & 0xffffffff,1);
  }
  FUN_01400648(param_1,iVar11 != 0);
  lVar13 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar19 = *(uint *)(lVar13 + 400);
  if (uVar19 != 0) {
    uVar21 = 0;
    piVar18 = (int *)(lVar13 + 0x20);
LAB_01400198:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar18 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar18 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_304928236d5bcabe) || (*piVar18 != 10)) goto LAB_0140049c;
    if (0xf < (uint)uVar21) {
      plVar23 = (long *)0x0;
      goto LAB_014001cc;
    }
    plVar23 = *(long **)(piVar18 + -2);
    if (plVar23 == (long *)0x0) goto LAB_014001cc;
    lVar13 = plVar23[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar18 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar9) {
          *piVar18 = *piVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_014001cc:
      plVar6 = (long *)plVar23[0xd];
      goto joined_r0x014001d0;
    }
    goto LAB_01400630;
  }
LAB_014004ac:
  plVar23 = (long *)0x0;
  plVar6 = _DAT_00000068;
joined_r0x014001d0:
  if (plVar6 != (long *)0x0) {
    plVar15 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar9) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar23 != (long *)0x0) {
    lVar13 = plVar23[0xb];
    piVar18 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar18;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar9) {
        *piVar18 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  local_a0 = (undefined1 *)0x160f1e7c502d76e9;
  pcStack_98 = "pane_T_h_sort_00";
  local_90 = 0x10;
  local_88 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar23 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b0 = plVar6;
  FUN_011845f4(lVar17,&local_a0,&local_b0,&UNK_03a7b820 + (long)*(int *)(param_1 + 0x794) * 8,10);
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 10;
    do {
      iVar11 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *(int *)plVar23 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  puVar8 = PTR_DAT_043729f0;
  puVar7 = PTR_DAT_043729e8;
  plVar23 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar17 == 0) || (*plVar23 == 0x160f1e7c502d76e9)) {
    plVar15 = plVar23;
  }
  else {
    lVar13 = lVar17 * 0x30;
    plVar20 = plVar23;
    do {
      lVar13 = lVar13 + -0x30;
      if (lVar13 == 0) goto LAB_01400454;
      plVar1 = plVar20 + 6;
      plVar15 = plVar20 + 6;
      plVar20 = plVar20 + 6;
    } while (*plVar1 != 0x160f1e7c502d76e9);
  }
  if (plVar15 == plVar23 + lVar17 * 6) {
LAB_01400454:
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = (long *)plVar15[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar11 != 0)) {
    *(undefined8 *)puVar8 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar23 != (long *)0x0) {
    for (plVar15 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23); plVar15 != (long *)0x0;
        plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar8) {
        *(byte *)(plVar23 + 0xb) =
             *(byte *)(plVar23 + 0xb) & 0xfe | *(int *)(*(long *)(param_1 + 0x740) + 0x3390) != 0;
        break;
      }
    }
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar17 == 0) || (*plVar23 == -0x50d3a075482bffdf)) {
    plVar15 = plVar23;
  }
  else {
    lVar13 = lVar17 * 0x30;
    plVar20 = plVar23;
    do {
      lVar13 = lVar13 + -0x30;
      if (lVar13 == 0) goto LAB_0140045c;
      plVar1 = plVar20 + 6;
      plVar15 = plVar20 + 6;
      plVar20 = plVar20 + 6;
    } while (*plVar1 != -0x50d3a075482bffdf);
  }
  if (plVar15 == plVar23 + lVar17 * 6) {
LAB_0140045c:
    plVar23 = (long *)0x0;
    bVar3 = *puVar7;
  }
  else {
    plVar23 = (long *)plVar15[4];
    bVar3 = *puVar7;
  }
  if (((bVar3 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar11 != 0)) {
    *(undefined8 *)puVar8 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar23 != (long *)0x0) {
    for (plVar15 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23); plVar15 != (long *)0x0;
        plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar8) {
        *(byte *)(plVar23 + 0xb) =
             *(byte *)(plVar23 + 0xb) & 0xfe | *(int *)(*(long *)(param_1 + 0x740) + 0x3390) != 0;
        break;
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar23 = plVar6 + 10;
    do {
      iVar11 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *(int *)plVar23 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
LAB_0140049c:
  uVar21 = uVar21 + 1;
  piVar18 = piVar18 + 6;
  if (uVar19 == uVar21) goto LAB_014004ac;
  goto LAB_01400198;
}


