/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d60260; name: FUN_00d60260
 */


void FUN_00d60260(long param_1,int param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  char *pcVar2;
  char *__format;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  float fVar16;
  long *local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  char local_b0 [96];
  
  if (param_3 == 0xffffffff) {
    return;
  }
  pcVar2 = "anime_L_inventory_parts_00_L_btn_sub_%02d_item_max";
  if (param_2 != 1) {
    pcVar2 = "anime_L_inventory_parts_00_L_btn_catch_%02d_item_max";
  }
  __format = "anime_L_inventory_parts_00_L_btn_main_%02d_item_max";
  if (param_2 != 0) {
    __format = pcVar2;
  }
  iVar5 = snprintf(local_b0,0x60,__format,(ulong)param_3);
  if (local_b0[0] == '\0') {
    local_d0 = (long *)FUN_00938550(iVar5);
    if (local_d0 == (long *)0x0) goto LAB_00d60304;
    (**(code **)(*local_d0 + 0x18))(local_d0);
    if (local_d0 != (long *)0x0) goto LAB_00d60308;
LAB_00d605c0:
    plVar14 = *(long **)PTR_DAT_04379c88;
    if (local_d0 != (long *)0x0) goto LAB_00d60314;
LAB_00d605d0:
    lStack_c8 = *(long *)PTR_PTR_04379d00;
    if (local_d0 != (long *)0x0) goto LAB_00d60320;
LAB_00d605e0:
    local_c0 = 0;
    plVar13 = local_d0;
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
    FUN_02a47cd8(&local_d0,uVar6,local_b0);
LAB_00d60304:
    if (local_d0 == (long *)0x0) goto LAB_00d605c0;
LAB_00d60308:
    plVar14 = (long *)local_d0[0xb];
    if (local_d0 == (long *)0x0) goto LAB_00d605d0;
LAB_00d60314:
    lStack_c8 = local_d0[0xc];
    if (local_d0 == (long *)0x0) goto LAB_00d605e0;
LAB_00d60320:
    local_c0 = local_d0[0xd];
    plVar13 = local_d0;
  }
  local_b8 = (long *)0x0;
  local_d0 = plVar14;
  if (plVar13 == (long *)0x0) {
    local_b8 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x2c8);
    if (lVar7 == 0) goto LAB_00d60498;
LAB_00d6033c:
    FUN_0283b1e8(lVar7,&local_d0);
    lVar7 = *(long *)(param_1 + 0x2c8);
    if ((param_4 & 1) != 0) goto LAB_00d604a0;
LAB_00d6034c:
    if (lVar7 == 0) goto LAB_00d6067c;
    plVar12 = *(long **)(lVar7 + 0x1a0);
    lVar8 = *(long *)(lVar7 + 0x1a8);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar3 = plVar12;
    if ((lVar8 != 0) && ((long *)*plVar12 != plVar14)) {
      lVar11 = lVar8 * 0x30;
      plVar9 = plVar12 + lVar8 * 6;
      do {
        lVar11 = lVar11 + -0x30;
        plVar3 = plVar9;
        if (lVar11 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar3 = plVar12;
      } while ((long *)*plVar1 != plVar14);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    plVar14 = (long *)(*(long *)(lVar7 + 0x1a0) + *(long *)(lVar7 + 0x1a8) * 0x30);
    if (plVar3 == plVar14) {
      plVar12 = (long *)0x0;
      if (plVar3 != plVar14) goto LAB_00d603cc;
LAB_00d6065c:
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d6067c;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d0);
    }
    else {
      plVar12 = plVar3 + 4;
      if (plVar3 == plVar14) goto LAB_00d6065c;
LAB_00d603cc:
      uVar10 = (ulong)*(uint *)(plVar12 + 1);
      if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
          (lVar7 = *(long *)(*plVar12 + 600), *(char *)(lVar7 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar7 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_00d6065c;
      plVar14 = (long *)(lVar7 + uVar10 * 0x48 + 0x10);
      lVar8 = *plVar14;
      if ((lVar8 != 0) && (*(char *)(lVar7 + uVar10 * 0x48 + 9) == '\0')) {
        fVar16 = *(float *)(lVar8 + 0x20);
        uVar4 = FUN_00227728();
        uVar10 = FUN_00227744(*plVar14);
        if (((float)uVar4 <= fVar16) && ((uVar10 & 1) == 0)) goto LAB_00d6065c;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x2c8);
    uVar15 = 0;
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_b8 = plVar13;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    lVar7 = *(long *)(param_1 + 0x2c8);
    if (lVar7 != 0) goto LAB_00d6033c;
LAB_00d60498:
    lVar7 = 0;
    if ((param_4 & 1) == 0) goto LAB_00d6034c;
LAB_00d604a0:
    if (lVar7 == 0) goto LAB_00d6067c;
    plVar12 = *(long **)(lVar7 + 0x1a0);
    lVar8 = *(long *)(lVar7 + 0x1a8);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar3 = plVar12;
    if ((lVar8 != 0) && ((long *)*plVar12 != plVar14)) {
      lVar11 = lVar8 * 0x30;
      plVar9 = plVar12 + lVar8 * 6;
      do {
        lVar11 = lVar11 + -0x30;
        plVar3 = plVar9;
        if (lVar11 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar3 = plVar12;
      } while ((long *)*plVar1 != plVar14);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    plVar14 = (long *)(*(long *)(lVar7 + 0x1a0) + *(long *)(lVar7 + 0x1a8) * 0x30);
    if (plVar3 == plVar14) {
      plVar12 = (long *)0x0;
      if (plVar3 != plVar14) goto LAB_00d60520;
LAB_00d606c4:
      if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d6067c;
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d0);
    }
    else {
      plVar12 = plVar3 + 4;
      if (plVar3 == plVar14) goto LAB_00d606c4;
LAB_00d60520:
      uVar10 = (ulong)*(uint *)(plVar12 + 1);
      if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
          (lVar7 = *(long *)(*plVar12 + 600), *(char *)(lVar7 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar7 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_00d606c4;
      plVar14 = (long *)(lVar7 + uVar10 * 0x48 + 0x10);
      lVar8 = *plVar14;
      if ((lVar8 != 0) && (*(char *)(lVar7 + uVar10 * 0x48 + 9) == '\0')) {
        fVar16 = *(float *)(lVar8 + 0x20);
        uVar4 = FUN_00227728();
        uVar10 = FUN_00227744(*plVar14);
        if (((float)uVar4 <= fVar16) && ((uVar10 & 1) == 0)) goto LAB_00d606c4;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x2c8);
    uVar15 = 0x3f800000;
  }
  FUN_0283b748(uVar15,uVar6,&local_d0);
LAB_00d6067c:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return;
}


