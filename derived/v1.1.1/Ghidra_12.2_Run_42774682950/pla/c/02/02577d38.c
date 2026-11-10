/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02577d38; name: FUN_02577d38
 */


void FUN_02577d38(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  ushort uVar10;
  undefined8 uVar11;
  short *psVar12;
  code *pcVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  long *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (*(long *)(param_1 + 0x5c0) == *(long *)(param_1 + 0x5c8)) {
    plVar21 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    if (*(long *)(*(long *)(param_1 + 0x2c8) + 0x150) != 0) {
      lVar19 = *plVar21;
      while (lVar19 != 0x10035ac521675e66) {
        plVar21 = plVar21 + 6;
        lVar19 = *plVar21;
      }
    }
    *(byte *)(plVar21[4] + 0x58) = *(byte *)(plVar21[4] + 0x58) & 0xfe;
    plVar21 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    if (*(long *)(*(long *)(param_1 + 0x2c8) + 0x150) != 0) {
      lVar19 = *plVar21;
      while (lVar19 != 0x6fde0d306ea08902) {
        plVar21 = plVar21 + 6;
        lVar19 = *plVar21;
      }
    }
    *(byte *)(plVar21[4] + 0x58) = *(byte *)(plVar21[4] + 0x58) & 0xfe;
    return;
  }
  plVar21 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar21 != (long *)0x0) {
    lVar19 = plVar21[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar20 = (long *)plVar21[0xd];
  if (plVar20 != (long *)0x0) {
    plVar15 = plVar20 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar9) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar19 = plVar21[0xb];
  piVar2 = (int *)(lVar19 + 0xc);
  do {
    iVar4 = *piVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar9) {
      *piVar2 = iVar4 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar21 != (long *)0x0) {
    plVar15 = plVar21 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar9) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      iVar4 = (int)*plVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar9) {
        *(int *)plVar15 = iVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  FUN_0283d6dc(plVar21);
  FUN_0283d878(plVar21,"T_item_name_00");
  psVar12 = (short *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6);
  sVar6 = *psVar12;
  if (sVar6 == 0) {
    plVar21 = *(long **)(param_1 + 0x2c8);
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar15 = (long *)plVar21[0x29];
    lVar19 = plVar21[0x2a];
    if ((lVar19 != 0) && (*plVar15 != 0x55e9408dd2c19f5)) {
      plVar16 = plVar15 + lVar19 * 6;
      lVar19 = lVar19 * 0x30;
      do {
        lVar19 = lVar19 + -0x30;
        if (lVar19 == 0) {
          plVar15 = plVar16;
          break;
        }
        plVar3 = plVar15 + 6;
        plVar1 = plVar15 + 6;
        plVar15 = plVar3;
      } while (*plVar1 != 0x55e9408dd2c19f5);
    }
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
    if (plVar21 == (long *)0x0) {
LAB_025784c4:
      plVar21 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar15 = plVar21 + 10;
      do {
        iVar4 = (int)*plVar15 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = iVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar4 != 0) goto LAB_025784c4;
      (**(code **)(*plVar21 + 0x10))();
      plVar21 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar15 = (long *)plVar21[0x29];
    lVar19 = plVar21[0x2a];
    if ((lVar19 != 0) && (*plVar15 != 0x6fde0d306ea08902)) {
      plVar16 = plVar15 + lVar19 * 6;
      lVar19 = lVar19 * 0x30;
      do {
        lVar19 = lVar19 + -0x30;
        if (lVar19 == 0) {
          plVar15 = plVar16;
          break;
        }
        plVar3 = plVar15 + 6;
        plVar1 = plVar15 + 6;
        plVar15 = plVar3;
      } while (*plVar1 != 0x6fde0d306ea08902);
    }
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
    if (plVar21 == (long *)0x0) {
LAB_02578560:
      plVar21 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar15 = plVar21 + 10;
      do {
        iVar4 = (int)*plVar15 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = iVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar4 != 0) goto LAB_02578560;
      (**(code **)(*plVar21 + 0x10))();
      plVar21 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar15 = (long *)plVar21[0x29];
    lVar19 = plVar21[0x2a];
    if ((lVar19 != 0) && (*plVar15 != 0x10035ac521675e66)) {
      plVar16 = plVar15 + lVar19 * 6;
      lVar19 = lVar19 * 0x30;
      do {
        lVar19 = lVar19 + -0x30;
        if (lVar19 == 0) {
          plVar15 = plVar16;
          break;
        }
        plVar3 = plVar15 + 6;
        plVar1 = plVar15 + 6;
        plVar15 = plVar3;
      } while (*plVar1 != 0x10035ac521675e66);
    }
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        iVar4 = (int)*plVar15 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = iVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar4 == 0) {
        pcVar13 = *(code **)(*plVar21 + 0x10);
        goto LAB_02578114;
      }
    }
  }
  else {
    sVar7 = psVar12[1];
    local_70 = 0x55e9408dd2c19f5;
    pcStack_68 = "pane_T_item_name_00";
    local_60 = 0x13;
    local_58 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar9) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    local_90 = 0x43d53ebf807460ef;
    local_88 = "field_info_item_change_01";
    uStack_80 = 0x19;
    local_78 = plVar20;
    FUN_01381200(param_1 + 0x180,&local_70,&local_78,&local_90,0,sVar6,sVar7);
    if (local_78 != (long *)0x0) {
      plVar21 = local_78 + 10;
      do {
        iVar4 = (int)*plVar21 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar9) {
          *(int *)plVar21 = iVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar21 = *(long **)(param_1 + 0x2c8);
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar15 = (long *)plVar21[0x29];
    lVar19 = plVar21[0x2a];
    if ((lVar19 != 0) && (*plVar15 != 0x55e9408dd2c19f5)) {
      plVar16 = plVar15 + lVar19 * 6;
      lVar19 = lVar19 * 0x30;
      do {
        lVar19 = lVar19 + -0x30;
        if (lVar19 == 0) {
          plVar15 = plVar16;
          break;
        }
        plVar3 = plVar15 + 6;
        plVar1 = plVar15 + 6;
        plVar15 = plVar3;
      } while (*plVar1 != 0x55e9408dd2c19f5);
    }
    *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 10;
      do {
        iVar4 = (int)*plVar15 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar9) {
          *(int *)plVar15 = iVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar19 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar19 == 0) || (*plVar21 == 0x10035ac521675e66)) {
      plVar15 = plVar21;
    }
    else {
      lVar18 = lVar19 * 0x30;
      plVar16 = plVar21;
      do {
        lVar18 = lVar18 + -0x30;
        if (lVar18 == 0) goto LAB_025781d8;
        plVar1 = plVar16 + 6;
        plVar15 = plVar16 + 6;
        plVar16 = plVar16 + 6;
      } while (*plVar1 != 0x10035ac521675e66);
    }
    if (plVar15 == plVar21 + lVar19 * 6) {
LAB_025781d8:
      lVar19 = 0;
      bVar5 = DAT_00000058;
    }
    else {
      lVar19 = plVar15[4];
      bVar5 = *(byte *)(lVar19 + 0x58);
    }
    if (*(char *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6 + 5) == '\0') {
      *(byte *)(lVar19 + 0x58) = bVar5 & 0xfe;
      plVar21 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      if (*(long *)(*(long *)(param_1 + 0x2c8) + 0x150) != 0) {
        lVar19 = *plVar21;
        while (lVar19 != 0x6fde0d306ea08902) {
          plVar21 = plVar21 + 6;
          lVar19 = *plVar21;
        }
      }
      *(byte *)(plVar21[4] + 0x58) = *(byte *)(plVar21[4] + 0x58) | 1;
      uStack_a0 = 3;
      local_60 = 0x12;
      local_58 = (long *)0x0;
      local_98 = 1;
      local_70 = 0x6fde0d306ea08902;
      pcStack_68 = "pane_T_item_num_00";
      if (plVar20 != (long *)0x0) {
        plVar21 = plVar20 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *(int *)plVar21 = (int)*plVar21 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_90 = 0x43d53fbf807462a2;
      local_88 = "field_info_item_change_02";
      uStack_80 = 0x19;
      local_a8 = plVar20;
      FUN_0148ce60(param_1 + 0x180,&local_70,&local_a8,&local_90,&uStack_a0,0,sVar7);
      if (local_a8 != (long *)0x0) {
        plVar21 = local_a8 + 10;
        do {
          iVar4 = (int)*plVar21 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *(int *)plVar21 = iVar4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
      }
      if (local_58 != (long *)0x0) {
        pcVar13 = *(code **)(*local_58 + 0x20);
LAB_02578114:
        (*pcVar13)();
      }
    }
    else {
      *(byte *)(lVar19 + 0x58) = bVar5 | 1;
      plVar21 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      if (*(long *)(*(long *)(param_1 + 0x2c8) + 0x150) != 0) {
        lVar19 = *plVar21;
        while (lVar19 != 0x6fde0d306ea08902) {
          plVar21 = plVar21 + 6;
          lVar19 = *plVar21;
        }
      }
      *(byte *)(plVar21[4] + 0x58) = *(byte *)(plVar21[4] + 0x58) & 0xfe;
    }
  }
  local_70 = 0x28bfa0ce8cfe91a;
  pcStack_68 = "anime_active_passive_item_07";
  uVar11 = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6 + 4) &
      (*(ulong *)(param_1 + 0x708) & 3) == 0) == 0) {
    uVar11 = 0x3f800000;
  }
  local_60 = 0x1c;
  local_58 = (long *)0x0;
  lVar19 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
    lVar19 = *(long *)(param_1 + 0x2c8);
  }
  local_70 = 0x28bfa0ce8cfe91a;
  pcStack_68 = "anime_active_passive_item_07";
  local_60 = 0x1c;
  local_58 = (long *)0x0;
  if (lVar19 == 0) goto LAB_0257830c;
  plVar21 = *(long **)(lVar19 + 0x1a0);
  lVar18 = *(long *)(lVar19 + 0x1a8);
  if ((lVar18 == 0) || (*plVar21 == 0x28bfa0ce8cfe91a)) {
    plVar15 = plVar21;
  }
  else {
    lVar17 = lVar18 * 0x30;
    plVar16 = plVar21;
    do {
      lVar17 = lVar17 + -0x30;
      if (lVar17 == 0) goto LAB_025782f0;
      plVar1 = plVar16 + 6;
      plVar15 = plVar16 + 6;
      plVar16 = plVar16 + 6;
    } while (*plVar1 != 0x28bfa0ce8cfe91a);
  }
  plVar21 = plVar21 + lVar18 * 6;
  if (plVar15 == plVar21) {
    plVar16 = (long *)0x0;
    if (plVar15 != plVar21) goto LAB_02578270;
LAB_025782f0:
    if (lVar19 == 0) goto LAB_0257830c;
    FUN_0283b1e8(lVar19,&local_70);
  }
  else {
    plVar16 = plVar15 + 4;
    if (plVar15 == plVar21) goto LAB_025782f0;
LAB_02578270:
    uVar14 = (ulong)*(uint *)(plVar16 + 1);
    if (((*(uint *)(*plVar16 + 0x278) <= *(uint *)(plVar16 + 1)) ||
        (lVar18 = *(long *)(*plVar16 + 600), *(char *)(lVar18 + uVar14 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar18 + uVar14 * 0x48 + 0xb) == '\0')) goto LAB_025782f0;
    plVar21 = (long *)(lVar18 + uVar14 * 0x48 + 0x10);
    lVar19 = *plVar21;
    if ((lVar19 != 0) && (*(char *)(lVar18 + uVar14 * 0x48 + 9) == '\0')) {
      fVar22 = *(float *)(lVar19 + 0x20);
      uVar10 = FUN_00227728();
      uVar14 = FUN_00227744(*plVar21);
      if (((float)uVar10 <= fVar22) && ((uVar14 & 1) == 0)) {
        lVar19 = *(long *)(param_1 + 0x2c8);
        goto LAB_025782f0;
      }
    }
  }
  FUN_0283b748(uVar11,*(undefined8 *)(param_1 + 0x2c8),&local_70);
LAB_0257830c:
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar4 = (int)*plVar21 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *(int *)plVar21 = iVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  return;
}


