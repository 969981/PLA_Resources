/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dba30; name: FUN_011dba30
 */


void FUN_011dba30(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  long local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar3 = (param_3 & 0xff) * 0x60;
  uVar12 = *(undefined8 *)(&DAT_041f9cc0 + lVar3);
  lVar3 = *(long *)(&DAT_041f9cb0 + lVar3);
  puVar2 = (&PTR_s_anime_L_icon_00_waza_target_041f9cb8)[(param_3 & 0xff) * 0xc];
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    local_70 = lVar3;
    puStack_68 = puVar2;
    local_60 = uVar12;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
  }
  if ((param_2 & 1) != 0) {
    uStack_58 = 0;
    lVar5 = *(long *)(param_1 + 0x2c8);
    if (lVar5 == 0) {
      return;
    }
    plVar11 = *(long **)(lVar5 + 0x1a0);
    lVar7 = *(long *)(lVar5 + 0x1a8);
    if ((lVar7 == 0) || (*plVar11 == lVar3)) {
      plVar10 = plVar11;
    }
    else {
      lVar9 = lVar7 * 0x30;
      plVar8 = plVar11;
      do {
        lVar9 = lVar9 + -0x30;
        local_70 = lVar3;
        puStack_68 = puVar2;
        local_60 = uVar12;
        if (lVar9 == 0) goto LAB_011dbcb4;
        plVar1 = plVar8 + 6;
        plVar10 = plVar8 + 6;
        plVar8 = plVar8 + 6;
      } while (*plVar1 != lVar3);
    }
    plVar11 = plVar11 + lVar7 * 6;
    if (plVar10 == plVar11) {
      plVar8 = (long *)0x0;
      local_70 = lVar3;
      puStack_68 = puVar2;
      local_60 = uVar12;
      if (plVar10 != plVar11) goto LAB_011dbc34;
LAB_011dbcb4:
      if (lVar5 == 0) {
        return;
      }
      FUN_0283b1e8(lVar5,&local_70);
    }
    else {
      plVar8 = plVar10 + 4;
      local_70 = lVar3;
      puStack_68 = puVar2;
      local_60 = uVar12;
      if (plVar10 == plVar11) goto LAB_011dbcb4;
LAB_011dbc34:
      uVar6 = (ulong)*(uint *)(plVar8 + 1);
      local_70 = lVar3;
      puStack_68 = puVar2;
      local_60 = uVar12;
      if (((*(uint *)(*plVar8 + 0x278) <= *(uint *)(plVar8 + 1)) ||
          (lVar7 = *(long *)(*plVar8 + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_011dbcb4;
      plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
      lVar5 = *plVar11;
      if ((lVar5 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
        fVar14 = *(float *)(lVar5 + 0x20);
        uVar4 = FUN_00227728();
        uVar6 = FUN_00227744(*plVar11);
        if (((float)uVar4 <= fVar14) && ((uVar6 & 1) == 0)) {
          lVar5 = *(long *)(param_1 + 0x2c8);
          goto LAB_011dbcb4;
        }
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x2c8);
    uVar13 = 0x3f800000;
    goto LAB_011dbbf0;
  }
  uStack_58 = 0;
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 == 0) {
    return;
  }
  plVar11 = *(long **)(lVar5 + 0x1a0);
  lVar7 = *(long *)(lVar5 + 0x1a8);
  if ((lVar7 == 0) || (*plVar11 == lVar3)) {
    plVar10 = plVar11;
  }
  else {
    lVar9 = lVar7 * 0x30;
    plVar8 = plVar11;
    do {
      lVar9 = lVar9 + -0x30;
      local_70 = lVar3;
      puStack_68 = puVar2;
      local_60 = uVar12;
      if (lVar9 == 0) goto LAB_011dbbdc;
      plVar1 = plVar8 + 6;
      plVar10 = plVar8 + 6;
      plVar8 = plVar8 + 6;
    } while (*plVar1 != lVar3);
  }
  plVar11 = plVar11 + lVar7 * 6;
  if (plVar10 == plVar11) {
    plVar8 = (long *)0x0;
    local_70 = lVar3;
    puStack_68 = puVar2;
    local_60 = uVar12;
    if (plVar10 != plVar11) goto LAB_011dbb5c;
LAB_011dbbdc:
    if (lVar5 == 0) {
      return;
    }
    FUN_0283b1e8(lVar5,&local_70);
  }
  else {
    plVar8 = plVar10 + 4;
    local_70 = lVar3;
    puStack_68 = puVar2;
    local_60 = uVar12;
    if (plVar10 == plVar11) goto LAB_011dbbdc;
LAB_011dbb5c:
    uVar6 = (ulong)*(uint *)(plVar8 + 1);
    local_70 = lVar3;
    puStack_68 = puVar2;
    local_60 = uVar12;
    if (((*(uint *)(*plVar8 + 0x278) <= *(uint *)(plVar8 + 1)) ||
        (lVar7 = *(long *)(*plVar8 + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_011dbbdc;
    plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
    lVar5 = *plVar11;
    if ((lVar5 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
      fVar14 = *(float *)(lVar5 + 0x20);
      uVar4 = FUN_00227728();
      uVar6 = FUN_00227744(*plVar11);
      if (((float)uVar4 <= fVar14) && ((uVar6 & 1) == 0)) {
        lVar5 = *(long *)(param_1 + 0x2c8);
        goto LAB_011dbbdc;
      }
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0x2c8);
  uVar13 = 0;
LAB_011dbbf0:
  FUN_0283b748(uVar13,uVar12,&local_70);
  return;
}


