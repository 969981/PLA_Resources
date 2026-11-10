/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147a958; name: FUN_0147a958
 */


undefined8 FUN_0147a958(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint param3;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  char *__format;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long local_b0 [8];
  
  param3 = *(uint *)(param_2 + 4);
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 0:
    __format = "anime_L_result_plate_%02d_L_info_%02d_wake";
    break;
  case 1:
    snprintf((char *)local_b0,0x40,"anime_L_result_plate_%02d_L_info_%02d_wake",param3,param_3);
    local_d8 = local_b0;
    FUN_009313e8(&local_d0,&local_d8);
    plVar1 = local_d0;
    if (local_d0 == (long *)0x0) {
      lVar15 = *(long *)PTR_DAT_04379c88;
LAB_0147ae60:
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
    }
    else {
      lVar15 = local_d0[0xb];
      if (local_d0 == (long *)0x0) goto LAB_0147ae60;
      (**(code **)(*local_d0 + 0x18))(local_d0);
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    if (lVar8 != 0) {
      lVar8 = *plVar14;
      while ((lVar8 != lVar15 && (plVar11 = plVar14 + 6, plVar14 = plVar9, plVar9 != plVar11))) {
        lVar8 = *plVar11;
        plVar14 = plVar11;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    plVar9 = (long *)(plVar12[0x34] + plVar12[0x35] * 0x30);
    if (plVar14 == plVar9) {
      plVar11 = (long *)0x0;
      if (plVar14 != plVar9) goto LAB_0147aaa8;
LAB_0147ae94:
      bVar5 = true;
    }
    else {
      plVar11 = plVar14 + 4;
      if (plVar14 == plVar9) goto LAB_0147ae94;
LAB_0147aaa8:
      uVar10 = (ulong)*(uint *)(plVar11 + 1);
      if (((*(uint *)(*plVar11 + 0x278) <= *(uint *)(plVar11 + 1)) ||
          (lVar15 = *(long *)(*plVar11 + 600), *(char *)(lVar15 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar15 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_0147ae94;
      plVar14 = (long *)(lVar15 + uVar10 * 0x48 + 0x10);
      lVar8 = *plVar14;
      if ((lVar8 == 0) || (*(char *)(lVar15 + uVar10 * 0x48 + 9) != '\0')) {
        bVar5 = false;
      }
      else {
        fVar16 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar10 = FUN_00227744(*plVar14);
        bVar5 = false;
        if (((float)uVar7 <= fVar16) && ((uVar10 & 1) == 0)) goto LAB_0147ae94;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (!bVar5) goto switchD_0147a9c8_default;
    __format = "anime_L_result_plate_%02d_L_info_%02d_keep";
    break;
  case 2:
    cVar4 = *(char *)(param_2 + 0x2d);
    cVar2 = *(char *)(param_2 + 0x2c);
    cVar3 = *(char *)(param_2 + 0x2e);
    snprintf((char *)local_b0,0x40,"anime_L_result_plate_%02d_L_info_%02d_keep",param3,param_3);
    local_d8 = local_b0;
    FUN_009313e8(&local_d0,&local_d8);
    plVar1 = local_d0;
    if (local_d0 == (long *)0x0) {
      lVar15 = *(long *)PTR_DAT_04379c88;
LAB_0147b008:
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
    }
    else {
      lVar15 = local_d0[0xb];
      if (local_d0 == (long *)0x0) goto LAB_0147b008;
      (**(code **)(*local_d0 + 0x18))(local_d0);
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    if (lVar8 != 0) {
      lVar8 = *plVar14;
      while ((lVar8 != lVar15 && (plVar11 = plVar14 + 6, plVar14 = plVar9, plVar9 != plVar11))) {
        lVar8 = *plVar11;
        plVar14 = plVar11;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    plVar9 = (long *)(plVar12[0x34] + plVar12[0x35] * 0x30);
    if (plVar14 == plVar9) {
      plVar11 = (long *)0x0;
      if (plVar14 != plVar9) goto LAB_0147ac00;
LAB_0147b030:
      bVar5 = true;
    }
    else {
      plVar11 = plVar14 + 4;
      if (plVar14 == plVar9) goto LAB_0147b030;
LAB_0147ac00:
      uVar10 = (ulong)*(uint *)(plVar11 + 1);
      if (((*(uint *)(*plVar11 + 0x278) <= *(uint *)(plVar11 + 1)) ||
          (lVar15 = *(long *)(*plVar11 + 600), *(char *)(lVar15 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar15 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_0147b030;
      plVar14 = (long *)(lVar15 + uVar10 * 0x48 + 0x10);
      lVar8 = *plVar14;
      if ((lVar8 == 0) || (*(char *)(lVar15 + uVar10 * 0x48 + 9) != '\0')) {
        bVar5 = false;
      }
      else {
        fVar16 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar10 = FUN_00227744(*plVar14);
        bVar5 = false;
        if (((float)uVar7 <= fVar16) && ((uVar10 & 1) == 0)) goto LAB_0147b030;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (!bVar5) goto switchD_0147a9c8_default;
    snprintf((char *)local_b0,0x40,"anime_L_result_plate_%02d_L_info_%02d_close",param3,param_3);
    if (1 < (byte)(cVar2 + cVar4 + cVar3)) goto LAB_0147af2c;
    *(uint *)(param_2 + 0x28) = param_3;
    uVar13 = 1;
    goto joined_r0x0147b0a8;
  case 3:
    snprintf((char *)local_b0,0x40,"anime_L_result_plate_%02d_L_info_%02d_close",param3,param_3);
    local_d8 = local_b0;
    FUN_009313e8(&local_d0,&local_d8);
    plVar1 = local_d0;
    if (local_d0 == (long *)0x0) {
      lVar15 = *(long *)PTR_DAT_04379c88;
LAB_0147b0f4:
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
    }
    else {
      lVar15 = local_d0[0xb];
      if (local_d0 == (long *)0x0) goto LAB_0147b0f4;
      (**(code **)(*local_d0 + 0x18))(local_d0);
      plVar14 = (long *)plVar12[0x34];
      lVar8 = plVar12[0x35];
      plVar9 = plVar14 + lVar8 * 6;
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    if (lVar8 != 0) {
      lVar8 = *plVar14;
      while ((lVar8 != lVar15 && (plVar11 = plVar14 + 6, plVar14 = plVar9, plVar9 != plVar11))) {
        lVar8 = *plVar11;
        plVar14 = plVar11;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    plVar9 = (long *)(plVar12[0x34] + plVar12[0x35] * 0x30);
    if (plVar14 == plVar9) {
      plVar11 = (long *)0x0;
      if (plVar14 != plVar9) goto LAB_0147adb4;
LAB_0147b11c:
      bVar5 = true;
    }
    else {
      plVar11 = plVar14 + 4;
      if (plVar14 == plVar9) goto LAB_0147b11c;
LAB_0147adb4:
      uVar10 = (ulong)*(uint *)(plVar11 + 1);
      if (((*(uint *)(*plVar11 + 0x278) <= *(uint *)(plVar11 + 1)) ||
          (lVar15 = *(long *)(*plVar11 + 600), *(char *)(lVar15 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar15 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_0147b11c;
      plVar14 = (long *)(lVar15 + uVar10 * 0x48 + 0x10);
      lVar8 = *plVar14;
      if ((lVar8 == 0) || (*(char *)(lVar15 + uVar10 * 0x48 + 9) != '\0')) {
        bVar5 = false;
      }
      else {
        fVar16 = *(float *)(lVar8 + 0x20);
        uVar7 = FUN_00227728();
        uVar10 = FUN_00227744(*plVar14);
        bVar5 = false;
        if (((float)uVar7 <= fVar16) && ((uVar10 & 1) == 0)) goto LAB_0147b11c;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (!bVar5) goto switchD_0147a9c8_default;
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar13 = 1;
    goto joined_r0x0147b154;
  default:
switchD_0147a9c8_default:
    uVar13 = 0;
joined_r0x0147b154:
    if (plVar12 == (long *)0x0) {
      return uVar13;
    }
    goto LAB_0147aecc;
  }
  snprintf((char *)local_b0,0x40,__format,(ulong)param3,(ulong)param_3);
LAB_0147af2c:
  local_e0 = local_b0;
  FUN_009313e8(&local_d8,&local_e0);
  plVar1 = local_d8;
  if (local_d8 == (long *)0x0) {
    local_d0 = *(long **)PTR_DAT_04379c88;
LAB_0147b0c0:
    lStack_c8 = *(long *)PTR_PTR_04379d00;
    if (local_d8 != (long *)0x0) goto LAB_0147af5c;
LAB_0147b0d0:
    local_c0 = 0;
  }
  else {
    local_d0 = (long *)local_d8[0xb];
    if (local_d8 == (long *)0x0) goto LAB_0147b0c0;
    lStack_c8 = local_d8[0xc];
    if (local_d8 == (long *)0x0) goto LAB_0147b0d0;
LAB_0147af5c:
    local_c0 = local_d8[0xd];
  }
  local_b8 = (long *)0x0;
  if (local_d8 == (long *)0x0) {
    local_b8 = local_d8;
    FUN_0283b1e8(plVar12,&local_d0);
  }
  else {
    (**(code **)(*local_d8 + 0x18))(local_d8);
    local_b8 = plVar1;
    FUN_0283b1e8(plVar12,&local_d0);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  uVar13 = 0;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
joined_r0x0147b0a8:
  if (plVar12 != (long *)0x0) {
LAB_0147aecc:
    plVar1 = plVar12 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return uVar13;
}


