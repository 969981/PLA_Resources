/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013762d8; name: FUN_013762d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013762d8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  local_98 = param_2;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar19 = *(long **)(lVar11 + 0x100);
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = (long *)plVar19[0x20];
  if (plVar20 != (long *)0x0) {
    plVar9 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)plVar20[0xe];
  if (plVar9 != (long *)0x0) {
    plVar18 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar18 = (long *)plVar9[0xb];
  if (plVar18 != (long *)0x0) {
    plVar3 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar3 = plVar9 + 10;
  do {
    iVar8 = (int)*plVar3 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *(int *)plVar3 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  plVar9 = plVar20 + 10;
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *(int *)plVar9 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  plVar20 = plVar19 + 10;
  do {
    iVar8 = (int)*plVar20 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *(int *)plVar20 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  FUN_016a50f0(&local_a0,plVar18,&local_98,*(undefined8 *)(param_1 + 8));
  if (local_a0 == (long *)0x0) {
    local_90 = 0x71a74e4f5eb1df05;
    pcStack_88 = "anime_switch_list";
    local_80 = 0x11;
    local_78 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x2c8);
    if (lVar11 == 0) goto joined_r0x01376c0c;
    plVar19 = *(long **)(lVar11 + 0x1a0);
    lVar15 = *(long *)(lVar11 + 0x1a8);
    if ((lVar15 == 0) || (*plVar19 == 0x71a74e4f5eb1df05)) {
      plVar20 = plVar19;
    }
    else {
      lVar16 = lVar15 * 0x30;
      plVar9 = plVar19;
      do {
        lVar16 = lVar16 + -0x30;
        if (lVar16 == 0) goto LAB_01376bec;
        plVar3 = plVar9 + 6;
        plVar20 = plVar9 + 6;
        plVar9 = plVar9 + 6;
      } while (*plVar3 != 0x71a74e4f5eb1df05);
    }
    plVar19 = plVar19 + lVar15 * 6;
    if (plVar20 == plVar19) {
      plVar9 = (long *)0x0;
      if (plVar20 != plVar19) goto LAB_01376b6c;
LAB_01376bec:
      if (lVar11 == 0) goto joined_r0x01376c0c;
      FUN_0283b1e8(lVar11,&local_90);
    }
    else {
      plVar9 = plVar20 + 4;
      if (plVar20 == plVar19) goto LAB_01376bec;
LAB_01376b6c:
      uVar17 = (ulong)*(uint *)(plVar9 + 1);
      if (((*(uint *)(*plVar9 + 0x278) <= *(uint *)(plVar9 + 1)) ||
          (lVar15 = *(long *)(*plVar9 + 600), *(char *)(lVar15 + uVar17 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar15 + uVar17 * 0x48 + 0xb) == '\0')) goto LAB_01376bec;
      plVar19 = (long *)(lVar15 + uVar17 * 0x48 + 0x10);
      lVar11 = *plVar19;
      if ((lVar11 != 0) && (*(char *)(lVar15 + uVar17 * 0x48 + 9) == '\0')) {
        fVar23 = *(float *)(lVar11 + 0x20);
        uVar7 = FUN_00227728();
        uVar17 = FUN_00227744(*plVar19);
        if (((float)uVar7 <= fVar23) && ((uVar17 & 1) == 0)) {
          lVar11 = *(long *)(param_1 + 0x2c8);
          goto LAB_01376bec;
        }
      }
    }
    FUN_0283b748(0x3f800000,*(undefined8 *)(param_1 + 0x2c8),&local_90);
    goto joined_r0x01376c0c;
  }
  local_90 = 0x71a74e4f5eb1df05;
  pcStack_88 = "anime_switch_list";
  local_80 = 0x11;
  local_78 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x2c8);
  if (lVar11 != 0) {
    plVar19 = *(long **)(lVar11 + 0x1a0);
    lVar15 = *(long *)(lVar11 + 0x1a8);
    if ((lVar15 == 0) || (*plVar19 == 0x71a74e4f5eb1df05)) {
      plVar20 = plVar19;
    }
    else {
      lVar16 = lVar15 * 0x30;
      plVar9 = plVar19;
      do {
        lVar16 = lVar16 + -0x30;
        if (lVar16 == 0) goto LAB_0137654c;
        plVar3 = plVar9 + 6;
        plVar20 = plVar9 + 6;
        plVar9 = plVar9 + 6;
      } while (*plVar3 != 0x71a74e4f5eb1df05);
    }
    plVar19 = plVar19 + lVar15 * 6;
    if (plVar20 == plVar19) {
      plVar9 = (long *)0x0;
      if (plVar20 != plVar19) goto LAB_013764cc;
LAB_0137654c:
      if (lVar11 == 0) goto LAB_01376568;
      FUN_0283b1e8(lVar11,&local_90);
    }
    else {
      plVar9 = plVar20 + 4;
      if (plVar20 == plVar19) goto LAB_0137654c;
LAB_013764cc:
      uVar17 = (ulong)*(uint *)(plVar9 + 1);
      if (((*(uint *)(*plVar9 + 0x278) <= *(uint *)(plVar9 + 1)) ||
          (lVar15 = *(long *)(*plVar9 + 600), *(char *)(lVar15 + uVar17 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar15 + uVar17 * 0x48 + 0xb) == '\0')) goto LAB_0137654c;
      plVar19 = (long *)(lVar15 + uVar17 * 0x48 + 0x10);
      lVar11 = *plVar19;
      if ((lVar11 != 0) && (*(char *)(lVar15 + uVar17 * 0x48 + 9) == '\0')) {
        fVar23 = *(float *)(lVar11 + 0x20);
        uVar7 = FUN_00227728();
        uVar17 = FUN_00227744(*plVar19);
        if (((float)uVar7 <= fVar23) && ((uVar17 & 1) == 0)) {
          lVar11 = *(long *)(param_1 + 0x2c8);
          goto LAB_0137654c;
        }
      }
    }
    FUN_0283b748(0,*(undefined8 *)(param_1 + 0x2c8),&local_90);
  }
LAB_01376568:
  lVar16 = local_a0[0xc];
  lVar21 = local_a0[0x2b];
  lVar11 = local_a0[0xd];
  lVar15 = local_a0[0xe];
  lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar12 + 400);
  if (uVar4 != 0) {
    uVar17 = 0;
    piVar13 = (int *)(lVar12 + 0x20);
LAB_013765a8:
    puVar1 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar13 + -4) != 0) {
      puVar1 = (undefined8 *)(*(long *)(piVar13 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar1 != &DAT_61030071dde8d2bb) || (*piVar13 != 10)) goto LAB_013769d4;
    if (0xf < (uint)uVar17) {
      plVar19 = (long *)0x0;
      goto LAB_013765dc;
    }
    plVar19 = *(long **)(piVar13 + -2);
    if (plVar19 == (long *)0x0) goto LAB_013765dc;
    lVar12 = plVar19[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar13 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = *piVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_013765dc:
      plVar20 = (long *)plVar19[0xd];
      goto joined_r0x013765e0;
    }
    goto LAB_01376d2c;
  }
LAB_013769e4:
  plVar19 = (long *)0x0;
  plVar20 = _DAT_00000068;
joined_r0x013765e0:
  if (plVar20 != (long *)0x0) {
    plVar9 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar19 == (long *)0x0) {
LAB_01376618:
    plVar19 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar12 = plVar19[0xb];
    piVar13 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01376618;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
    plVar19 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar19 != (long *)0x0) {
    plVar9 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_90 = 0x80b5839dd1aafe55;
  pcStack_88 = "pane_T_number_00";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    local_a8 = (long *)0x0;
    plVar9 = (long *)plVar19[0x38];
    if (plVar9 == (long *)0x0) goto LAB_01376c64;
LAB_0137668c:
    plVar3 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar20[0x16];
    if (lVar12 != 0) {
      plVar14 = *(long **)(lVar12 + 0x270);
      if (plVar14 != *(long **)(lVar12 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar2 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar2 == -0x4480b37e72af45e9) goto LAB_01376704;
          plVar14 = plVar14 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar14);
      }
    }
    iVar8 = 0;
LAB_01376704:
    FUN_02c2e33c(plVar20,iVar8,plVar9);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != 0) {
      plVar9 = (long *)plVar19[0x37];
      goto joined_r0x01376cd8;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = (long *)plVar19[0x37];
    if (plVar9 == (long *)0x0) goto LAB_01376a38;
LAB_0137672c:
    lVar12 = plVar9[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01376d2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar13 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c395d0(plVar9,0,(int)lVar16,3,0,1);
    lVar16 = plVar9[0xb];
    piVar13 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  else {
    plVar9 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar9 = (long *)plVar19[0x38];
    local_a8 = plVar20;
    if (plVar9 != (long *)0x0) goto LAB_0137668c;
LAB_01376c64:
    lVar12 = plVar20[0x16];
    if (lVar12 != 0) {
      plVar9 = *(long **)(lVar12 + 0x270);
      if (plVar9 != *(long **)(lVar12 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar3 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar3 == -0x4480b37e72af45e9) goto LAB_01376cc8;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_01376cc8:
    FUN_02c2e33c(plVar20,iVar8,0);
    plVar9 = (long *)plVar19[0x37];
joined_r0x01376cd8:
    if (plVar9 != (long *)0x0) goto LAB_0137672c;
LAB_01376a38:
    FUN_02c395d0(0,0,(int)lVar16,3,0,1);
  }
  lVar16 = plVar19[0x38];
  lVar12 = plVar19[0x39];
  lVar22 = plVar19[0x37];
  *(undefined4 *)(lVar22 + 0x124) = 0;
  *(undefined2 *)(lVar22 + 0x128) = 0;
  *(undefined4 *)(lVar22 + 300) = 0;
  *(undefined4 *)(lVar22 + 0x134) = 0;
  FUN_02c33414(lVar22,lVar16);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar22,lVar12,lVar16,0,0);
  FUN_0283ce7c(plVar19,&local_90,plVar19[0x39],10);
  if (plVar20 != (long *)0x0) {
    plVar9 = plVar20 + 10;
    do {
      iVar8 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar20 + 0x10))(local_a8);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar9 = plVar19 + 10;
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *(int *)plVar9 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  local_90 = 0x73129179107f4232;
  pcStack_88 = "pane_T_title_00";
  local_80 = 0xf;
  local_78 = (long *)0x0;
  FUN_0283ce7c(plVar19,&local_90,lVar11,10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = 0x39093ede01049d2b;
  pcStack_88 = "pane_T_npc_name_00";
  local_80 = 0x12;
  local_78 = (long *)0x0;
  FUN_0283ce7c(plVar19,&local_90,lVar21,10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = 0xc63a9601e281d939;
  pcStack_88 = "pane_T_detail_00";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  FUN_0283ce7c(plVar19,&local_90,lVar15,10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  FUN_0137fc60(*(undefined8 *)(param_1 + 0x5b8),local_98);
  FUN_013816d0(*(undefined8 *)(param_1 + 0x5d8),local_98);
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *(int *)plVar9 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 10;
    do {
      iVar8 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
joined_r0x01376c0c:
  if (local_a0 != (long *)0x0) {
    plVar19 = local_a0 + 10;
    do {
      iVar8 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 10;
    do {
      iVar8 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  return;
LAB_013769d4:
  uVar17 = uVar17 + 1;
  piVar13 = piVar13 + 6;
  if (uVar4 == uVar17) goto LAB_013769e4;
  goto LAB_013765a8;
}


