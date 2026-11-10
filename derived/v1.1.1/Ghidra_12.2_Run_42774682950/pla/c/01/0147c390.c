/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147c390; name: FUN_0147c390
 */


void FUN_0147c390(long param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 *puVar24;
  long *local_118;
  long *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  plVar20 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar20 != (long *)0x0) {
    lVar18 = plVar20[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0147ca68;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar19 = (long *)plVar20[0xd];
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar18 = plVar20[0xb];
  piVar2 = (int *)(lVar18 + 0xc);
  do {
    iVar9 = *piVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = iVar9 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
    plVar20 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar20 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  puVar24 = &DAT_cbf29ce484222645;
  iVar9 = FUN_0147d634(param_1);
  *(int *)(param_2 + 0x18) = iVar9;
  *(undefined4 *)(param_2 + 0x1c) = 1;
  snprintf((char *)&local_e8,0x80,"pane_L_window_%02d",iVar9);
  local_108 = &DAT_cbf29ce484222645;
  if ((byte)local_e8 != 0) {
    uVar14 = (ulong)(uint)(byte)local_e8;
    local_108 = &DAT_cbf29ce484222645;
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    do {
      local_108 = (undefined1 *)(((ulong)local_108 ^ uVar14) * 0x100000001b3);
      bVar6 = *pbVar13;
      uVar14 = (ulong)bVar6;
      pbVar13 = pbVar13 + 1;
    } while (bVar6 != 0);
  }
  local_f8 = 0x7f;
  local_f0 = (long *)0x0;
  local_100 = &local_e8;
  if ((byte)local_e8 != 0) {
    lVar18 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_108);
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0xe8) != 0)) {
      FUN_00235780();
    }
  }
  snprintf((char *)&local_e8,0x80,"pane_L_window_%02d",*(int *)(param_2 + 0x18));
  puVar11 = &DAT_cbf29ce484222645;
  if ((byte)local_e8 != 0) {
    puVar11 = &DAT_cbf29ce484222645;
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    bVar6 = (byte)local_e8;
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar6 != 0);
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar18 == 0) || ((undefined1 *)*puVar5 == puVar11)) {
    puVar16 = puVar5;
  }
  else {
    lVar15 = lVar18 * 0x30;
    puVar17 = puVar5;
    do {
      lVar15 = lVar15 + -0x30;
      if (lVar15 == 0) goto LAB_0147c820;
      puVar1 = puVar17 + 6;
      puVar16 = puVar17 + 6;
      puVar17 = puVar17 + 6;
    } while ((undefined1 *)*puVar1 != puVar11);
  }
  if (puVar16 == puVar5 + lVar18 * 6) {
LAB_0147c820:
    lVar18 = 0;
  }
  else {
    lVar18 = puVar16[4];
  }
  *(long *)(param_2 + 0x40) = lVar18;
  *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
  plVar22 = (long *)plVar20[0x38];
  plVar21 = (long *)(param_2 + 8);
  if (plVar22 == (long *)0x0) {
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x270);
      if (plVar22 != *(long **)(lVar18 + 0x278)) {
        iVar9 = 0;
        do {
          plVar4 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar4 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar4 == *plVar21) goto LAB_0147ca58;
          plVar22 = plVar22 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar22);
      }
    }
    iVar9 = 0;
LAB_0147ca58:
    FUN_02c2e33c(plVar19,iVar9,0);
  }
  else {
    plVar4 = plVar22 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar12 = *(long **)(lVar18 + 0x270);
      if (plVar12 != *(long **)(lVar18 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar3 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar3 == *plVar21) goto LAB_0147c664;
          plVar12 = plVar12 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar12);
      }
    }
    iVar9 = 0;
LAB_0147c664:
    FUN_02c2e33c(plVar19,iVar9,plVar22);
    do {
      iVar9 = (int)*plVar4 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  snprintf((char *)&local_e8,0x80,"pane_L_window_%02d_T_h_info_00",*(int *)(param_2 + 0x18));
  iVar9 = *(int *)(param_2 + 0x4c);
  if (iVar9 == 0) {
LAB_0147c6a4:
    lVar18 = *(long *)(param_2 + 0x50);
  }
  else {
    local_108 = &DAT_cbf29ce484222645;
    if ((byte)local_e8 != 0) {
      local_108 = &DAT_cbf29ce484222645;
      pbVar13 = (byte *)((ulong)&local_e8 | 1);
      bVar6 = (byte)local_e8;
      do {
        local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar6 != 0);
    }
    local_100 = &local_e8;
    local_f8 = 0x7f;
    local_f0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar22 = plVar19 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      iVar9 = *(int *)(param_2 + 0x4c);
    }
    local_110 = plVar19;
    FUN_01381200(param_1 + 0x180,&local_108,&local_110,plVar21,0,iVar9,1);
    if (local_110 != (long *)0x0) {
      plVar21 = local_110 + 10;
      do {
        iVar9 = (int)*plVar21 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar8) {
          *(int *)plVar21 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_110 + 0x10))();
      }
    }
    if (local_f0 == (long *)0x0) goto LAB_0147c6a4;
    (**(code **)(*local_f0 + 0x20))();
    lVar18 = *(long *)(param_2 + 0x50);
  }
  if (lVar18 != 0) {
    plVar21 = (long *)plVar20[0x37];
    if (plVar21 != (long *)0x0) {
      lVar18 = plVar21[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_0147ca68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar18 + 0xc);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar18 = *(long *)(param_2 + 0x50);
    }
    FUN_02c302d0(*(undefined8 *)(param_1 + 0x698),lVar18);
    FUN_010c6478(plVar21,0,*(undefined8 *)(param_1 + 0x698),
                 *(undefined1 *)(*(long *)(param_2 + 0x50) + 0x1a),
                 *(undefined1 *)(*(long *)(param_2 + 0x50) + 0x1b));
    if (plVar21 != (long *)0x0) {
      lVar18 = plVar21[0xb];
      piVar2 = (int *)(lVar18 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar9 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
        bVar6 = (byte)local_e8;
        goto joined_r0x0147c6b0;
      }
    }
  }
  bVar6 = (byte)local_e8;
joined_r0x0147c6b0:
  if (bVar6 != 0) {
    pbVar13 = (byte *)((ulong)&local_e8 | 1);
    do {
      puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar6 != 0);
  }
  local_100 = &local_e8;
  local_f8 = 0x7f;
  local_f0 = (long *)0x0;
  lVar23 = plVar20[0x37];
  lVar18 = plVar20[0x38];
  lVar15 = plVar20[0x39];
  *(undefined4 *)(lVar23 + 0x124) = 0;
  *(undefined2 *)(lVar23 + 0x128) = 0;
  *(undefined4 *)(lVar23 + 300) = 0;
  *(undefined4 *)(lVar23 + 0x134) = 0;
  local_108 = puVar24;
  FUN_02c33414(lVar23,lVar18);
  if (*(char *)(lVar15 + 0x7c) != '\0') {
    **(undefined2 **)(lVar15 + 0x58) = 0;
    *(undefined2 *)(lVar15 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar23,lVar15,lVar18,0,0);
  FUN_0283ce7c(plVar20,&local_108,plVar20[0x39],10);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  snprintf((char *)&local_e8,0x80,"anime_L_window_%02d_wake",*(int *)(param_2 + 0x18));
  FUN_0147d78c(&local_118,&local_e8);
  FUN_02a47560(&local_108,&local_118);
  *(undefined8 *)(param_2 + 0x20) = local_108;
  *(undefined8 **)(param_2 + 0x28) = local_100;
  plVar20 = *(long **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = local_f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  plVar20 = local_f0;
  local_f0 = (long *)0x0;
  *(long **)(param_2 + 0x38) = plVar20;
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  FUN_00d2df7c(param_1 + 0x180,(undefined8 *)(param_2 + 0x20));
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      iVar9 = (int)*plVar20 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  return;
}


