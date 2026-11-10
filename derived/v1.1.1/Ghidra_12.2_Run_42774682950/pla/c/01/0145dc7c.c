/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145dc7c; name: FUN_0145dc7c
 */


void FUN_0145dc7c(float param_1,float param_2,long param_3,uint param_4,long *param_5,ulong param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined1 *puVar23;
  float fVar24;
  float fVar25;
  byte local_128 [128];
  undefined1 *local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long *local_90;
  
  if (3 < param_4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar23 = &DAT_cbf29ce484222645;
  snprintf((char *)local_128,0x80,"pane_L_guide_%02d",param_4);
  puVar9 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    bVar4 = local_128[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  puVar11 = *(undefined8 **)(lVar13 + 0x148);
  lVar13 = *(long *)(lVar13 + 0x150);
  if ((lVar13 == 0) || ((undefined1 *)*puVar11 == puVar9)) {
    puVar15 = puVar11;
  }
  else {
    lVar16 = lVar13 * 0x30;
    puVar18 = puVar11;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) goto LAB_0145e188;
      puVar1 = puVar18 + 6;
      puVar15 = puVar18 + 6;
      puVar18 = puVar18 + 6;
    } while ((undefined1 *)*puVar1 != puVar9);
  }
  if (puVar15 == puVar11 + lVar13 * 6) {
LAB_0145e188:
    lVar13 = 0;
  }
  else {
    lVar13 = puVar15[4];
  }
  snprintf((char *)local_128,0x80,"pane_L_guide_%02d_A_alignment_00",param_4);
  uVar19 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x148);
  local_98 = strlen((char *)local_128);
  local_a8 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    local_a8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    bVar4 = local_128[0];
    do {
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  local_90 = (long *)0x0;
  pbStack_a0 = local_128;
  uVar19 = FUN_00d648b4(uVar19,&local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if ((param_6 & 1) != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    return;
  }
  *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
  snprintf((char *)local_128,0x80,"pane_L_guide_%02d",param_4);
  local_a8 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    uVar17 = (ulong)(uint)local_128[0];
    local_a8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    do {
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar17) * 0x100000001b3);
      bVar4 = *pbVar12;
      uVar17 = (ulong)bVar4;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  pbStack_a0 = local_128;
  if (local_128[0] != 0) {
    lVar13 = FUN_011da5dc(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x148),&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0xe8), lVar13 != 0)) {
      FUN_00235780(lVar13);
      FUN_002350e8(lVar13,"T_hud_guide_00");
    }
  }
  snprintf((char *)local_128,0x80,"pane_L_guide_%02d_T_hud_guide_00",param_4);
  local_a8 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    local_a8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    bVar4 = local_128[0];
    do {
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  plVar20 = *(long **)(*(long *)(param_3 + 0x10) + 0x148);
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar13 = *(long *)(param_3 + 0x200);
  plVar21 = (long *)plVar20[0x38];
  pbStack_a0 = local_128;
  if (plVar21 == (long *)0x0) {
    lVar16 = *(long *)(lVar13 + 0xb0);
    if (lVar16 != 0) {
      plVar21 = *(long **)(lVar16 + 0x270);
      if (plVar21 != *(long **)(lVar16 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar21 != 0) {
            plVar3 = (long *)(*plVar21 + 0x58);
          }
          if (*plVar3 == *param_5) goto LAB_0145e4c8;
          plVar21 = plVar21 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar21);
      }
    }
    iVar8 = 0;
LAB_0145e4c8:
    FUN_02c2e33c(lVar13,iVar8,0);
  }
  else {
    plVar3 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = *(long *)(lVar13 + 0xb0);
    if (lVar16 != 0) {
      plVar10 = *(long **)(lVar16 + 0x270);
      if (plVar10 != *(long **)(lVar16 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == *param_5) goto LAB_0145dfc8;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar10);
      }
    }
    iVar8 = 0;
LAB_0145dfc8:
    FUN_02c2e33c(lVar13,iVar8,plVar21);
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
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  lVar13 = plVar20[0x38];
  lVar16 = plVar20[0x39];
  lVar22 = plVar20[0x37];
  *(undefined4 *)(lVar22 + 0x124) = 0;
  *(undefined2 *)(lVar22 + 0x128) = 0;
  *(undefined4 *)(lVar22 + 300) = 0;
  *(undefined4 *)(lVar22 + 0x134) = 0;
  FUN_02c33414(lVar22,lVar13);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar22,lVar16,lVar13,0,0);
  FUN_0283ce7c(plVar20,&local_a8,plVar20[0x39],10);
  plVar21 = plVar20 + 10;
  do {
    iVar8 = (int)*plVar21 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *(int *)plVar21 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  snprintf((char *)local_128,0x80,"anime_L_guide_%02d_L_btn_00_change",param_4);
  local_a8 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    uVar17 = (ulong)(uint)local_128[0];
    local_a8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    do {
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar17) * 0x100000001b3);
      bVar4 = *pbVar12;
      uVar17 = (ulong)bVar4;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  if (lVar13 != 0) {
    pbStack_a0 = local_128;
    FUN_0283b1e8(lVar13,&local_a8);
  }
  puVar9 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    bVar4 = local_128[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  pbStack_a0 = local_128;
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  local_a8 = puVar9;
  if (lVar13 != 0) {
    fVar24 = (float)FUN_0283b914(lVar13,&local_a8);
    lVar13 = *(long *)(param_3 + 0x10);
    if (param_1 <= fVar24) {
      fVar24 = param_1;
    }
    lVar16 = *(long *)(lVar13 + 0x148);
    if (lVar16 != 0) {
      puVar11 = *(undefined8 **)(lVar16 + 0x1a0);
      lVar22 = *(long *)(lVar16 + 0x1a8);
      if ((lVar22 == 0) || ((undefined1 *)*puVar11 == puVar9)) {
        puVar15 = puVar11;
      }
      else {
        lVar14 = lVar22 * 0x30;
        puVar18 = puVar11;
        do {
          lVar14 = lVar14 + -0x30;
          if (lVar14 == 0) goto LAB_0145e260;
          puVar1 = puVar18 + 6;
          puVar15 = puVar18 + 6;
          puVar18 = puVar18 + 6;
        } while ((undefined1 *)*puVar1 != puVar9);
      }
      puVar11 = puVar11 + lVar22 * 6;
      if (puVar15 == puVar11) {
        plVar20 = (long *)0x0;
        if (puVar15 != puVar11) goto LAB_0145e1e0;
LAB_0145e260:
        if (lVar16 == 0) goto LAB_0145e27c;
        FUN_0283b1e8(lVar16,&local_a8);
      }
      else {
        plVar20 = puVar15 + 4;
        if (puVar15 == puVar11) goto LAB_0145e260;
LAB_0145e1e0:
        uVar17 = (ulong)*(uint *)(plVar20 + 1);
        if (((*(uint *)(*plVar20 + 0x278) <= *(uint *)(plVar20 + 1)) ||
            (lVar22 = *(long *)(*plVar20 + 600), *(char *)(lVar22 + uVar17 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar22 + uVar17 * 0x48 + 0xb) == '\0')) goto LAB_0145e260;
        plVar20 = (long *)(lVar22 + uVar17 * 0x48 + 0x10);
        lVar16 = *plVar20;
        if ((lVar16 != 0) && (*(char *)(lVar22 + uVar17 * 0x48 + 9) == '\0')) {
          fVar25 = *(float *)(lVar16 + 0x20);
          uVar7 = FUN_00227728();
          uVar17 = FUN_00227744(*plVar20);
          if (((float)uVar7 <= fVar25) && ((uVar17 & 1) == 0)) {
            lVar16 = *(long *)(lVar13 + 0x148);
            goto LAB_0145e260;
          }
        }
      }
      FUN_0283b748(fVar24,*(undefined8 *)(lVar13 + 0x148),&local_a8);
    }
  }
LAB_0145e27c:
  snprintf((char *)local_128,0x80,"pane_L_guide_%02d_L_btn_01",param_4);
  puVar9 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    bVar4 = local_128[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  puVar11 = *(undefined8 **)(lVar13 + 0x148);
  lVar13 = *(long *)(lVar13 + 0x150);
  if ((lVar13 == 0) || ((undefined1 *)*puVar11 == puVar9)) {
    puVar15 = puVar11;
  }
  else {
    lVar16 = lVar13 * 0x30;
    puVar18 = puVar11;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) goto LAB_0145e344;
      puVar1 = puVar18 + 6;
      puVar15 = puVar18 + 6;
      puVar18 = puVar18 + 6;
    } while ((undefined1 *)*puVar1 != puVar9);
  }
  if (puVar15 == puVar11 + lVar13 * 6) {
LAB_0145e344:
    lVar13 = 0;
  }
  else {
    lVar13 = puVar15[4];
  }
  if (255.0 <= param_2) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    goto LAB_0145e338;
  }
  *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
  snprintf((char *)local_128,0x80,"anime_L_guide_%02d_L_btn_01_change",param_4);
  local_a8 = &DAT_cbf29ce484222645;
  if (local_128[0] != 0) {
    uVar17 = (ulong)(uint)local_128[0];
    local_a8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_128 | 1);
    do {
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar17) * 0x100000001b3);
      bVar4 = *pbVar12;
      uVar17 = (ulong)bVar4;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  if (lVar13 != 0) {
    pbStack_a0 = local_128;
    FUN_0283b1e8(lVar13,&local_a8);
  }
  if (local_128[0] != 0) {
    pbVar12 = (byte *)((ulong)local_128 | 1);
    do {
      puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)local_128[0]) * 0x100000001b3);
      local_128[0] = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (local_128[0] != 0);
  }
  pbStack_a0 = local_128;
  local_98 = 0x7f;
  local_90 = (long *)0x0;
  lVar13 = *(long *)(*(long *)(param_3 + 0x10) + 0x148);
  local_a8 = puVar23;
  if (lVar13 == 0) goto LAB_0145e338;
  fVar24 = (float)FUN_0283b914(lVar13,&local_a8);
  lVar13 = *(long *)(param_3 + 0x10);
  if (param_2 <= fVar24) {
    fVar24 = param_2;
  }
  lVar16 = *(long *)(lVar13 + 0x148);
  if (lVar16 == 0) goto LAB_0145e338;
  puVar11 = *(undefined8 **)(lVar16 + 0x1a0);
  lVar22 = *(long *)(lVar16 + 0x1a8);
  if ((lVar22 == 0) || ((undefined1 *)*puVar11 == puVar23)) {
    puVar15 = puVar11;
  }
  else {
    lVar14 = lVar22 * 0x30;
    puVar18 = puVar11;
    do {
      lVar14 = lVar14 + -0x30;
      if (lVar14 == 0) goto joined_r0x0145e574;
      puVar1 = puVar18 + 6;
      puVar15 = puVar18 + 6;
      puVar18 = puVar18 + 6;
    } while ((undefined1 *)*puVar1 != puVar23);
  }
  puVar11 = puVar11 + lVar22 * 6;
  if (puVar15 == puVar11) {
    plVar20 = (long *)0x0;
    if (puVar15 != puVar11) goto LAB_0145e4f4;
joined_r0x0145e574:
    if (lVar16 == 0) goto LAB_0145e338;
    FUN_0283b1e8(lVar16,&local_a8);
  }
  else {
    plVar20 = puVar15 + 4;
    if (puVar15 == puVar11) goto joined_r0x0145e574;
LAB_0145e4f4:
    uVar17 = (ulong)*(uint *)(plVar20 + 1);
    if (((*(uint *)(*plVar20 + 0x278) <= *(uint *)(plVar20 + 1)) ||
        (lVar22 = *(long *)(*plVar20 + 600), *(char *)(lVar22 + uVar17 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar22 + uVar17 * 0x48 + 0xb) == '\0')) goto joined_r0x0145e574;
    plVar20 = (long *)(lVar22 + uVar17 * 0x48 + 0x10);
    lVar16 = *plVar20;
    if ((lVar16 != 0) && (*(char *)(lVar22 + uVar17 * 0x48 + 9) == '\0')) {
      fVar25 = *(float *)(lVar16 + 0x20);
      uVar7 = FUN_00227728();
      uVar17 = FUN_00227744(*plVar20);
      if (((float)uVar7 <= fVar25) && ((uVar17 & 1) == 0)) {
        lVar16 = *(long *)(lVar13 + 0x148);
        goto joined_r0x0145e574;
      }
    }
  }
  FUN_0283b748(fVar24,*(undefined8 *)(lVar13 + 0x148),&local_a8);
LAB_0145e338:
  FUN_00256608(uVar19);
  return;
}


