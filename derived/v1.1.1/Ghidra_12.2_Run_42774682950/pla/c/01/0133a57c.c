/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133a57c; name: FUN_0133a57c
 */


void FUN_0133a57c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 uint param_5,byte param_6,ulong param_7,undefined4 *param_8,undefined8 param_9,
                 int param_10,int param_11,byte param_12)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  byte local_878 [1024];
  undefined1 *local_478;
  byte *local_470;
  size_t local_468;
  long *local_460;
  
  if (0x13 < param_5) {
    return;
  }
  plVar18 = *(long **)(param_4 + 0x2c8);
  if (plVar18 != (long *)0x0) {
    plVar21 = plVar18 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar13 = *(long *)(*(long *)(param_4 + 0x68) + 0xb0);
  uVar22 = *(uint *)(lVar13 + 400);
  if (uVar22 != 0) {
    uVar17 = 0;
    piVar14 = (int *)(lVar13 + 0x20);
LAB_0133a614:
    puVar1 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar14 + -4) != 0) {
      puVar1 = (undefined8 *)(*(long *)(piVar14 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar1 != &DAT_72837ff1f1cec6a2) || (*piVar14 != 10)) goto LAB_0133aa8c;
    if ((uint)uVar17 < 0x10) {
      plVar21 = *(long **)(piVar14 + -2);
      if (plVar21 == (long *)0x0) goto LAB_0133a64c;
      lVar13 = plVar21[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
        }
        piVar14 = (int *)(lVar13 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar7) {
            *piVar14 = *piVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_0133a64c;
      }
      goto LAB_0133ae7c;
    }
  }
LAB_0133a644:
  plVar21 = (long *)0x0;
LAB_0133a64c:
  plVar19 = (long *)plVar21[0xd];
  if (plVar19 != (long *)0x0) {
    plVar3 = plVar19 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    piVar14 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar7) {
        *piVar14 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  puVar20 = &DAT_cbf29ce484222645;
  memset(local_878,0,0x400);
  snprintf((char *)local_878,0x400,"pane_L_icon_location_name_%02d",param_5);
  local_478 = &DAT_cbf29ce484222645;
  if (local_878[0] != 0) {
    uVar17 = (ulong)(uint)local_878[0];
    local_478 = &DAT_cbf29ce484222645;
    pbVar16 = (byte *)((ulong)local_878 | 1);
    do {
      local_478 = (undefined1 *)(((ulong)local_478 ^ uVar17) * 0x100000001b3);
      bVar5 = *pbVar16;
      uVar17 = (ulong)bVar5;
      pbVar16 = pbVar16 + 1;
    } while (bVar5 != 0);
  }
  local_460 = (long *)0x0;
  local_468 = 0x3ff;
  local_470 = local_878;
  if (local_878[0] == 0) {
    bVar7 = false;
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_011da5dc(*(undefined8 *)(param_4 + 0x2c8),&local_478);
    if (local_460 != (long *)0x0) {
      (**(code **)(*local_460 + 0x20))();
    }
    if (lVar13 == 0) {
      bVar7 = false;
    }
    else {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | param_6 & 1;
      bVar7 = true;
    }
  }
  lVar10 = param_4 + 0x180;
  snprintf((char *)local_878,0x400,"anime_L_icon_location_name_%02d_switch_icon",param_5);
  local_468 = strlen((char *)local_878);
  local_478 = &DAT_cbf29ce484222645;
  if (local_878[0] != 0) {
    local_478 = &DAT_cbf29ce484222645;
    pbVar16 = (byte *)((ulong)local_878 | 1);
    bVar5 = local_878[0];
    do {
      local_478 = (undefined1 *)(((ulong)local_478 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar5 != 0);
  }
  local_460 = (long *)0x0;
  local_470 = local_878;
  if (*(long *)(param_4 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_4 + 0x2c8),&local_478);
  }
  uVar25 = 0;
  uVar11 = 0;
  if ((param_12 & 1) == 0) {
    uVar11 = 0x3f800000;
  }
  FUN_00d2e2f0(uVar11,lVar10,local_878);
  snprintf((char *)local_878,0x400,"pane_L_icon_location_name_%02d_T_location_name_00",param_5);
  if ((param_12 & 1) == 0) {
    memset(&local_478,0,0x400);
    snprintf((char *)&local_478,0x400,"pane_L_icon_location_name_%02d",param_5);
    lVar13 = FUN_01306260(lVar10,&local_478);
    uVar25 = param_8[1];
    *(undefined4 *)(lVar13 + 0x30) = *param_8;
    *(undefined4 *)(lVar13 + 0x34) = uVar25;
    *(undefined4 *)(lVar13 + 0x38) = 0;
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 0x10;
    snprintf((char *)&local_478,0x400,"pane_L_icon_location_name_%02d_P_00",param_5);
    lVar13 = FUN_01306260(lVar10,&local_478);
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    goto joined_r0x0133aa84;
  }
  if ((param_7 & 1) == 0) {
    plVar21 = (long *)plVar18[0x38];
    if (plVar21 == (long *)0x0) {
      lVar9 = plVar19[0x16];
      if (lVar9 != 0) {
        plVar21 = *(long **)(lVar9 + 0x270);
        if (plVar21 != *(long **)(lVar9 + 0x278)) {
          iVar12 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar3 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar3 == 0xf2bc4a147075733) goto LAB_0133ae60;
            plVar21 = plVar21 + 1;
            iVar12 = iVar12 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar21);
        }
      }
      iVar12 = 0;
LAB_0133ae60:
      FUN_02c2e33c(plVar19,iVar12,0);
      plVar21 = (long *)plVar18[0x37];
joined_r0x0133ae74:
      if (plVar21 != (long *)0x0) goto LAB_0133ab78;
LAB_0133accc:
      FUN_010c7198(0,0,param_9);
    }
    else {
      plVar3 = plVar21 + 10;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar9 = plVar19[0x16];
      if (lVar9 != 0) {
        plVar15 = *(long **)(lVar9 + 0x270);
        if (plVar15 != *(long **)(lVar9 + 0x278)) {
          iVar12 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar15 != 0) {
              plVar2 = (long *)(*plVar15 + 0x58);
            }
            if (*plVar2 == 0xf2bc4a147075733) goto LAB_0133ab50;
            plVar15 = plVar15 + 1;
            iVar12 = iVar12 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar15);
        }
      }
      iVar12 = 0;
LAB_0133ab50:
      FUN_02c2e33c(plVar19,iVar12,plVar21);
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(int *)plVar3 = iVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        plVar21 = (long *)plVar18[0x37];
        goto joined_r0x0133ae74;
      }
      plVar21 = (long *)plVar18[0x37];
      if (plVar21 == (long *)0x0) goto LAB_0133accc;
LAB_0133ab78:
      lVar9 = plVar21[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0133ae7c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar14 = (int *)(lVar9 + 0xc);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar8) {
          *piVar14 = *piVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_010c7198(plVar21,0,param_9);
      lVar9 = plVar21[0xb];
      piVar14 = (int *)(lVar9 + 0xc);
      do {
        iVar12 = *piVar14;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar8) {
          *piVar14 = iVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    local_468 = strlen((char *)local_878);
    local_478 = &DAT_cbf29ce484222645;
    if (local_878[0] != 0) {
      local_478 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_878 | 1);
      bVar5 = local_878[0];
      do {
        local_478 = (undefined1 *)(((ulong)local_478 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar5 != 0);
    }
    local_460 = (long *)0x0;
    lVar23 = plVar18[0x37];
    lVar9 = plVar18[0x38];
    lVar4 = plVar18[0x39];
    *(undefined4 *)(lVar23 + 0x124) = 0;
    *(undefined2 *)(lVar23 + 0x128) = 0;
    *(undefined4 *)(lVar23 + 300) = 0;
    *(undefined4 *)(lVar23 + 0x134) = 0;
    local_470 = local_878;
    FUN_02c33414(lVar23);
    if (*(char *)(lVar4 + 0x7c) != '\0') {
      **(undefined2 **)(lVar4 + 0x58) = 0;
      *(undefined2 *)(lVar4 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar23,lVar4,lVar9,0,0);
    FUN_0283ce7c(plVar18,&local_478,plVar18[0x39],10);
    if (local_460 != (long *)0x0) {
      (**(code **)(*local_460 + 0x20))();
    }
  }
  if (10 < param_10) {
    uVar22 = 0;
  }
  else {
    uVar25 = NEON_ucvtf(*(undefined4 *)(&DAT_03a7a84c + (long)param_10 * 0xc));
    uVar22 = *(uint *)(&DAT_03a7a844 + (long)param_10 * 0xc);
  }
  if (local_878[0] != 0) {
    pbVar16 = (byte *)((ulong)local_878 | 1);
    bVar5 = local_878[0];
    do {
      puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar5 != 0);
  }
  local_470 = local_878;
  local_460 = (long *)0x0;
  local_468 = 0x3ff;
  local_478 = puVar20;
  if (local_878[0] != 0) {
    lVar9 = FUN_00d47110(*(undefined8 *)(param_4 + 0x2c8),&local_478);
    if (local_460 != (long *)0x0) {
      (**(code **)(*local_460 + 0x20))();
    }
    if (lVar9 != 0) {
      bVar8 = uVar22 != (*(byte *)(lVar9 + 0x116) & 3);
      *(ushort *)(lVar9 + 0x114) =
           *(ushort *)(lVar9 + 0x114) & 0xfffb |
           (*(ushort *)(lVar9 + 0x114) >> 2 & 1 | (ushort)bVar8) << 2;
      if (bVar8) {
        *(byte *)(lVar9 + 0x116) = *(byte *)(lVar9 + 0x116) & 0xfc | (byte)uVar22;
      }
    }
  }
  snprintf((char *)local_878,0x400,"pane_L_icon_location_name_%02d_N_icon_arrow_00",param_5);
  lVar9 = FUN_01306260(lVar10,local_878);
  if ((param_11 == 0) || (10 < param_10 || 7 < (long)param_10 - 3U)) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    snprintf((char *)local_878,0x400,"pane_L_icon_location_name_%02d_P_icon_arrow_00",param_5);
    lVar9 = FUN_01306260(lVar10,local_878);
    uVar24 = FUN_01308a54(param_11);
    *(undefined4 *)(lVar9 + 0x3c) = uVar24;
    *(undefined4 *)(lVar9 + 0x40) = param_2;
    *(undefined4 *)(lVar9 + 0x44) = param_3;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    snprintf((char *)local_878,0x400,"anime_L_icon_location_name_%02d_ptn_pos",param_5);
    FUN_00d2e2f0(uVar25,lVar10,local_878);
  }
  memset(&local_478,0,0x400);
  snprintf((char *)&local_478,0x400,"pane_L_icon_location_name_%02d",param_5);
  lVar9 = FUN_01306260(lVar10,&local_478);
  uVar25 = param_8[1];
  *(undefined4 *)(lVar9 + 0x30) = *param_8;
  *(undefined4 *)(lVar9 + 0x34) = uVar25;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
  snprintf((char *)&local_478,0x400,"pane_L_icon_location_name_%02d_P_00",param_5);
  lVar10 = FUN_01306260(lVar10,&local_478);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  if (bVar7) {
    FUN_002350e8(*(undefined8 *)(lVar13 + 0xe8),"T_location_name_00");
  }
joined_r0x0133aa84:
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  if (plVar18 != (long *)0x0) {
    plVar21 = plVar18 + 10;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  return;
LAB_0133aa8c:
  uVar17 = uVar17 + 1;
  piVar14 = piVar14 + 6;
  if (uVar22 == uVar17) goto LAB_0133a644;
  goto LAB_0133a614;
}


