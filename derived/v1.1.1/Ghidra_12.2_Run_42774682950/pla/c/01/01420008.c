/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01420008; name: FUN_01420008
 */


void FUN_01420008(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint param3;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long lVar23;
  float fVar24;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  ulong local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  
  if (param_2 == 0) {
    return;
  }
  lVar13 = *param_1;
  plVar19 = *(long **)(lVar13 + 0x1b8);
  if (plVar19 != (long *)0x0) {
    lVar13 = plVar19[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar13 = *param_1;
  }
  plVar20 = *(long **)(lVar13 + 0x1c0);
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      iVar11 = (int)*plVar14 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *(int *)plVar14 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  lVar13 = *(long *)(param_2 + 0x70);
  if (*(byte *)(lVar13 + 0x368) <= param_3) goto LAB_01420a08;
  param3 = *(uint *)(lVar13 + (ulong)param_3 * 0x1c + 0x300);
  uVar21 = (ulong)param3;
  uVar7 = *(undefined2 *)(lVar13 + 0x70);
  uVar5 = *(undefined1 *)(lVar13 + 0x369);
  lVar13 = *(long *)(param_1[1] + 0xb0);
  if (lVar13 != 0) {
    plVar14 = *(long **)(lVar13 + 0x270);
    if (plVar14 != *(long **)(lVar13 + 0x278)) {
      iVar11 = 0;
      do {
        plVar16 = (long *)PTR_DAT_04379c88;
        if (*plVar14 != 0) {
          plVar16 = (long *)(*plVar14 + 0x58);
        }
        if (*plVar16 == 0x76311f44b1fc2479) goto LAB_01420148;
        plVar14 = plVar14 + 1;
        iVar11 = iVar11 + 1;
      } while (*(long **)(lVar13 + 0x278) != plVar14);
    }
  }
  iVar11 = 0;
LAB_01420148:
  FUN_02c2e33c(param_1[1],iVar11,plVar20);
  local_b0 = 0x92c38504c9024b60;
  pcStack_a8 = "pane_T_class_00";
  local_a0 = 0xf;
  local_98 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_b0,plVar20,10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  plVar14 = &DAT_0428af30 + uVar21 * 6;
  lVar13 = *plVar14;
  if (lVar13 == 0) {
    plVar16 = &DAT_0428af30;
  }
  else {
    plVar16 = &DAT_0428af30;
    if (*(char *)(lVar13 + 0x1e1) != '\0') {
      plVar16 = plVar14;
    }
  }
  fVar24 = 2.0;
  piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
  if (((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar18 != 0)) &&
     (*(char *)((long)piVar1 + uVar18) != '\0')) {
    plVar16 = &DAT_0428af30;
    if ((lVar13 != 0) && (plVar16 = &DAT_0428af30, *(char *)(lVar13 + 0x1e1) != '\0')) {
      plVar16 = plVar14;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar18 != 0)) &&
       (bVar6 = *(byte *)((long)piVar1 + uVar18), bVar6 != 0 && bVar6 != 3)) {
      fVar24 = (float)(int)(bVar6 - 1);
    }
  }
  local_b0 = 0x4a8580993b6db700;
  pcStack_a8 = "anime_L_skilltype_00_change";
  local_a0 = 0x1b;
  local_98 = (long *)0x0;
  FUN_0283b1e8(*param_1,&local_b0);
  local_b0 = 0x4a8580993b6db700;
  pcStack_a8 = "anime_L_skilltype_00_change";
  local_a0 = 0x1b;
  local_98 = (long *)0x0;
  FUN_0283b748(fVar24,*param_1,&local_b0);
  lVar13 = *(long *)(param_1[1] + 0xb0);
  if (lVar13 != 0) {
    plVar16 = *(long **)(lVar13 + 0x270);
    if (plVar16 != *(long **)(lVar13 + 0x278)) {
      iVar11 = 0;
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          plVar3 = (long *)(*plVar16 + 0x58);
        }
        if (*plVar3 == 0x76311c44b1fc1f60) goto LAB_0142030c;
        plVar16 = plVar16 + 1;
        iVar11 = iVar11 + 1;
      } while (*(long **)(lVar13 + 0x278) != plVar16);
    }
  }
  iVar11 = 0;
LAB_0142030c:
  FUN_02c2e33c(param_1[1],iVar11,plVar20);
  local_b0 = 0xd8a267e74e809293;
  pcStack_a8 = "pane_T_power_00";
  local_a0 = 0xf;
  local_98 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_b0,plVar20,10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  lVar13 = *plVar14;
  plVar16 = &DAT_0428af30;
  if ((lVar13 != 0) && (plVar16 = &DAT_0428af30, *(char *)(lVar13 + 0x1e1) != '\0')) {
    plVar16 = plVar14;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
      (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar18 == 0)) ||
     (*(char *)((long)piVar1 + uVar18) == '\0')) {
    if (param3 == 0x1ce) goto LAB_01420454;
LAB_0142041c:
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar18 = FUN_010a3370(&local_b0,&DAT_041efa98,uVar21,uVar7,uVar5,0);
    if ((uVar18 & 1) == 0) {
      plVar16 = &DAT_0428af30;
      if ((*plVar14 != 0) && (plVar16 = &DAT_0428af30, *(char *)(*plVar14 + 0x1e1) != '\0')) {
        plVar16 = plVar14;
      }
      piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
         (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar18 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (ulong)*(byte *)((long)piVar1 + uVar18);
      }
    }
    else {
      uVar18 = local_b0 & 0xffffffff;
    }
    FUN_02c395d0(plVar19,0,uVar18,3,0,1);
    lVar13 = param_1[1];
    lVar17 = *(long *)(lVar13 + 0xb0);
    if (lVar17 != 0) {
      plVar16 = *(long **)(lVar17 + 0x270);
      if (plVar16 != *(long **)(lVar17 + 0x278)) {
        iVar11 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar16 != 0) {
            plVar3 = (long *)(*plVar16 + 0x58);
          }
          if (*plVar3 == 0x76312244b1fc2992) goto LAB_01420590;
          plVar16 = plVar16 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar16);
      }
    }
  }
  else {
    plVar16 = &DAT_0428af30;
    if ((lVar13 != 0) && (plVar16 = &DAT_0428af30, *(char *)(lVar13 + 0x1e1) != '\0')) {
      plVar16 = plVar14;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar18 != 0)) &&
       ((param3 != 0x1ce && (*(char *)((long)piVar1 + uVar18) != '\0')))) goto LAB_0142041c;
LAB_01420454:
    lVar13 = param_1[1];
    lVar17 = *(long *)(lVar13 + 0xb0);
    if (lVar17 != 0) {
      plVar16 = *(long **)(lVar17 + 0x270);
      if (plVar16 != *(long **)(lVar17 + 0x278)) {
        iVar11 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar16 != 0) {
            plVar3 = (long *)(*plVar16 + 0x58);
          }
          if (*plVar3 == 0x76312344b1fc2b45) goto LAB_01420590;
          plVar16 = plVar16 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar16);
      }
    }
  }
  iVar11 = 0;
LAB_01420590:
  FUN_02c2e33c(lVar13,iVar11,plVar20);
  lVar17 = *param_1;
  local_b0 = 0xd8a266e74e8090e0;
  pcStack_a8 = "pane_T_power_01";
  local_a0 = 0xf;
  local_98 = (long *)0x0;
  lVar23 = *(long *)(lVar17 + 0x1b8);
  uVar10 = *(undefined8 *)(lVar17 + 0x1c0);
  lVar13 = *(long *)(lVar17 + 0x1c8);
  *(undefined4 *)(lVar23 + 0x124) = 0;
  *(undefined2 *)(lVar23 + 0x128) = 0;
  *(undefined4 *)(lVar23 + 300) = 0;
  *(undefined4 *)(lVar23 + 0x134) = 0;
  FUN_02c33414(lVar23,uVar10);
  if (*(char *)(lVar13 + 0x7c) != '\0') {
    **(undefined2 **)(lVar13 + 0x58) = 0;
    *(undefined2 *)(lVar13 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar23,lVar13,uVar10,0,0);
  FUN_0283ce7c(lVar17,&local_b0,*(undefined8 *)(lVar17 + 0x1c8),10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  lVar13 = *(long *)(param_1[1] + 0xb0);
  if (lVar13 != 0) {
    plVar16 = *(long **)(lVar13 + 0x270);
    if (plVar16 != *(long **)(lVar13 + 0x278)) {
      iVar11 = 0;
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (*plVar16 != 0) {
          plVar3 = (long *)(*plVar16 + 0x58);
        }
        if (*plVar3 == 0x76311d44b1fc2113) goto LAB_01420688;
        plVar16 = plVar16 + 1;
        iVar11 = iVar11 + 1;
      } while (*(long **)(lVar13 + 0x278) != plVar16);
    }
  }
  iVar11 = 0;
LAB_01420688:
  FUN_02c2e33c(param_1[1],iVar11,plVar20);
  local_b0 = 0xf8ec3e882df3e43b;
  pcStack_a8 = "pane_T_dex_00";
  local_a0 = 0xd;
  local_98 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_b0,plVar20,10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar21 = FUN_010a3760(uVar21);
  if ((uVar21 & 1) == 0) {
    lVar13 = param_1[1];
    lVar17 = *(long *)(lVar13 + 0xb0);
    if (lVar17 != 0) {
      plVar14 = *(long **)(lVar17 + 0x270);
      if (plVar14 != *(long **)(lVar17 + 0x278)) {
        iVar11 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar16 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar16 == 0x76312344b1fc2b45) goto LAB_01420860;
          plVar14 = plVar14 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar14);
      }
    }
  }
  else {
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar21 = FUN_010a3370(&local_b0,&DAT_041efba0,param3,uVar7,uVar5,0);
    if ((uVar21 & 1) == 0) {
      plVar16 = &DAT_0428af30;
      if ((*plVar14 != 0) && (plVar16 = &DAT_0428af30, *(char *)(*plVar14 + 0x1e1) != '\0')) {
        plVar16 = plVar14;
      }
      piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
         (uVar21 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar21 == 0)) {
        uVar21 = 0;
      }
      else {
        uVar12 = (uint)*(byte *)((long)piVar1 + uVar21);
        uVar2 = 100;
        if (uVar12 != 0x65) {
          uVar2 = uVar12;
        }
        uVar21 = (ulong)uVar2;
      }
    }
    else {
      uVar21 = local_b0 & 0xffffffff;
    }
    FUN_02c395d0(plVar19,0,uVar21,3,0,1);
    lVar13 = param_1[1];
    lVar17 = *(long *)(lVar13 + 0xb0);
    if (lVar17 != 0) {
      plVar14 = *(long **)(lVar17 + 0x270);
      if (plVar14 != *(long **)(lVar17 + 0x278)) {
        iVar11 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar16 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar16 == 0x76312244b1fc2992) goto LAB_01420860;
          plVar14 = plVar14 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar14);
      }
    }
  }
  iVar11 = 0;
LAB_01420860:
  FUN_02c2e33c(lVar13,iVar11,plVar20);
  lVar17 = *param_1;
  local_a0 = 0xd;
  local_98 = (long *)0x0;
  local_b0 = 0xf8ec3d882df3e288;
  pcStack_a8 = "pane_T_dex_01";
  uVar10 = *(undefined8 *)(lVar17 + 0x1c0);
  lVar13 = *(long *)(lVar17 + 0x1c8);
  lVar23 = *(long *)(lVar17 + 0x1b8);
  *(undefined4 *)(lVar23 + 0x124) = 0;
  *(undefined2 *)(lVar23 + 0x128) = 0;
  *(undefined4 *)(lVar23 + 300) = 0;
  *(undefined4 *)(lVar23 + 0x134) = 0;
  FUN_02c33414(lVar23,uVar10);
  if (*(char *)(lVar13 + 0x7c) != '\0') {
    **(undefined2 **)(lVar13 + 0x58) = 0;
    *(undefined2 *)(lVar13 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar23,lVar13,uVar10,0,0);
  FUN_0283ce7c(lVar17,&local_b0,*(undefined8 *)(lVar17 + 0x1c8),10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  puVar22 = &DAT_cbf29ce484222645;
  snprintf((char *)&local_b0,0x40,"WAZAINFO_%03d",param3);
  if ((byte)local_b0 != 0) {
    pbVar15 = (byte *)((ulong)&local_b0 | 1);
    bVar6 = (byte)local_b0;
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar6 != 0);
  }
  lVar13 = *(long *)(param_1[2] + 0xb0);
  if (lVar13 != 0) {
    plVar14 = *(long **)(lVar13 + 0x270);
    if (plVar14 != *(long **)(lVar13 + 0x278)) {
      iVar11 = 0;
      do {
        puVar4 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar14 != 0) {
          puVar4 = (undefined8 *)(*plVar14 + 0x58);
        }
        if ((undefined1 *)*puVar4 == puVar22) goto LAB_014209b4;
        plVar14 = plVar14 + 1;
        iVar11 = iVar11 + 1;
      } while (*(long **)(lVar13 + 0x278) != plVar14);
    }
  }
  iVar11 = 0;
LAB_014209b4:
  FUN_02c2e33c(param_1[2],iVar11,plVar20);
  local_d0 = 0x49aa9227c2de343e;
  pcStack_c8 = "pane_T_info_00";
  local_c0 = 0xe;
  local_b8 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_d0,plVar20,10);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
LAB_01420a08:
  if (plVar19 != (long *)0x0) {
    lVar13 = plVar19[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar11 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return;
}


