/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59564; name: FUN_00d59564
 */


bool FUN_00d59564(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar8[0x29];
  lVar14 = plVar8[0x2a];
  if ((lVar14 != 0) && (*plVar10 != 0x2dc110817bf2fd6c)) {
    plVar12 = plVar10 + lVar14 * 6;
    lVar14 = lVar14 * 0x30;
    do {
      lVar14 = lVar14 + -0x30;
      if (lVar14 == 0) {
        plVar10 = plVar12;
        break;
      }
      plVar2 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar2;
    } while (*plVar1 != 0x2dc110817bf2fd6c);
  }
  fVar16 = *(float *)(plVar10[4] + 0x30);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (0.0 < fVar16) {
    uVar15 = 0x3f800000;
  }
  else {
    uVar15 = 0;
  }
  local_70 = 0x1638befea8dd2e4a;
  pcStack_68 = "anime_L_inventory_parts_00_switch_name_popup_reverse";
  local_60 = 0x34;
  uStack_58 = 0;
  bVar5 = fVar16 <= 0.0;
  lVar14 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
    lVar14 = *(long *)(param_1 + 0x2c8);
  }
  local_70 = 0x1638befea8dd2e4a;
  pcStack_68 = "anime_L_inventory_parts_00_switch_name_popup_reverse";
  local_60 = 0x34;
  uStack_58 = 0;
  lVar9 = 0;
  if (lVar14 != 0) {
    plVar8 = *(long **)(lVar14 + 0x1a0);
    lVar9 = *(long *)(lVar14 + 0x1a8);
    if ((lVar9 == 0) || (*plVar8 == 0x1638befea8dd2e4a)) {
      plVar10 = plVar8;
    }
    else {
      lVar13 = lVar9 * 0x30;
      plVar12 = plVar8;
      do {
        lVar13 = lVar13 + -0x30;
        if (lVar13 == 0) goto LAB_00d5976c;
        plVar1 = plVar12 + 6;
        plVar10 = plVar12 + 6;
        plVar12 = plVar12 + 6;
      } while (*plVar1 != 0x1638befea8dd2e4a);
    }
    plVar8 = plVar8 + lVar9 * 6;
    if (plVar10 == plVar8) {
      plVar12 = (long *)0x0;
      if (plVar10 != plVar8) goto LAB_00d596ec;
LAB_00d5976c:
      lVar9 = 0;
      if (lVar14 == 0) goto LAB_00d5978c;
      FUN_0283b1e8(lVar14,&local_70);
    }
    else {
      plVar12 = plVar10 + 4;
      if (plVar10 == plVar8) goto LAB_00d5976c;
LAB_00d596ec:
      uVar11 = (ulong)*(uint *)(plVar12 + 1);
      if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
          (lVar9 = *(long *)(*plVar12 + 600), *(char *)(lVar9 + uVar11 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar9 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_00d5976c;
      plVar8 = (long *)(lVar9 + uVar11 * 0x48 + 0x10);
      lVar14 = *plVar8;
      if ((lVar14 != 0) && (*(char *)(lVar9 + uVar11 * 0x48 + 9) == '\0')) {
        fVar16 = *(float *)(lVar14 + 0x20);
        uVar7 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar8);
        if (((float)uVar7 <= fVar16) && ((uVar11 & 1) == 0)) {
          lVar14 = *(long *)(param_1 + 0x2c8);
          goto LAB_00d5976c;
        }
      }
    }
    FUN_0283b748(uVar15,*(undefined8 *)(param_1 + 0x2c8),&local_70);
    lVar9 = *(long *)(param_1 + 0x2c8);
  }
LAB_00d5978c:
  uVar15 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar15 = 0;
  }
  local_70 = 0x32fc1ddfde0c853b;
  pcStack_68 = "anime_L_inventory_parts_00_switch_name_popup";
  local_60 = 0x2c;
  uStack_58 = 0;
  lVar14 = 0;
  if (lVar9 != 0) {
    FUN_0283b1e8(lVar9,&local_70);
    lVar14 = *(long *)(param_1 + 0x2c8);
  }
  local_70 = 0x32fc1ddfde0c853b;
  pcStack_68 = "anime_L_inventory_parts_00_switch_name_popup";
  local_60 = 0x2c;
  uStack_58 = 0;
  if (lVar14 == 0) {
    return bVar5;
  }
  plVar8 = *(long **)(lVar14 + 0x1a0);
  lVar9 = *(long *)(lVar14 + 0x1a8);
  if ((lVar9 == 0) || (*plVar8 == 0x32fc1ddfde0c853b)) {
    plVar10 = plVar8;
  }
  else {
    lVar13 = lVar9 * 0x30;
    plVar12 = plVar8;
    do {
      lVar13 = lVar13 + -0x30;
      if (lVar13 == 0) goto LAB_00d598c8;
      plVar1 = plVar12 + 6;
      plVar10 = plVar12 + 6;
      plVar12 = plVar12 + 6;
    } while (*plVar1 != 0x32fc1ddfde0c853b);
  }
  if (plVar10 != plVar8 + lVar9 * 6) {
    lVar9 = plVar10[4];
    uVar3 = *(uint *)(plVar10 + 4 + 1);
    uVar11 = (ulong)uVar3;
    if (((uVar3 < *(uint *)(lVar9 + 0x278)) &&
        (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar11 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar9 + uVar11 * 0x48 + 0xb) != '\0')) {
      plVar8 = (long *)(lVar9 + uVar11 * 0x48 + 0x10);
      lVar14 = *plVar8;
      if ((lVar14 == 0) || (*(char *)(lVar9 + uVar11 * 0x48 + 9) != '\0')) goto LAB_00d598d4;
      fVar16 = *(float *)(lVar14 + 0x20);
      uVar7 = FUN_00227728();
      uVar11 = FUN_00227744(*plVar8);
      if ((fVar16 < (float)uVar7) || ((uVar11 & 1) != 0)) goto LAB_00d598d4;
      lVar14 = *(long *)(param_1 + 0x2c8);
    }
  }
LAB_00d598c8:
  if (lVar14 == 0) {
    return bVar5;
  }
  FUN_0283b1e8(lVar14,&local_70);
LAB_00d598d4:
  FUN_0283b748(uVar15,*(undefined8 *)(param_1 + 0x2c8),&local_70);
  return bVar5;
}


