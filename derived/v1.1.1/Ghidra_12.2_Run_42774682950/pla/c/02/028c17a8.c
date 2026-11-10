/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c17a8; name: FUN_028c17a8
 */


void FUN_028c17a8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = param_1 + 0x10;
  FUN_00b26ad8(lVar1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x30);
  FUN_028c2bf0(param_1 + 0x48,param_2 + 0x38);
  uVar3 = *(undefined1 *)(param_2 + 0x78);
  lVar9 = *(long *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  pfVar11 = (float *)(param_1 + 0x9c);
  pfVar11[0] = 0.0;
  pfVar11[1] = 0.0;
  *(undefined1 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = 0x3c00000000;
  *(long *)(param_1 + 0x78) = lVar9;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  if (((lVar9 != 0) || (*(long *)(param_1 + 0x80) != 0)) || (*(long *)(param_1 + 0x40) != 0))
  goto LAB_028c1844;
  lVar9 = *(long *)(param_1 + 0x50);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x1e1) == '\0')) {
    lVar10 = *(long *)(param_1 + 0x18);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x1e1) != '\0')) goto LAB_028c1a38;
    if (lVar9 == 0) goto LAB_028c1a60;
  }
  else {
    lVar10 = *(long *)(lVar9 + 0x278);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x1e1) == '\0')) goto LAB_028c1844;
LAB_028c1a38:
    lVar10 = (long)*(uint **)(lVar10 + 0x250) + (ulong)**(uint **)(lVar10 + 0x250);
    if ((lVar9 == 0) || (lVar10 != 0)) {
      if (lVar10 == 0) goto LAB_028c1a60;
      goto LAB_028c1844;
    }
  }
  if (*(char *)(lVar9 + 0x1e1) == '\0') {
LAB_028c1a60:
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = &PTR_LAB_042731e0;
      uStack_d8 = 0;
      local_b0 = 0;
      local_80 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a8 = &PTR_LAB_04273200;
      local_78 = 0;
      local_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))
                (plVar5,*(undefined8 *)(param_1 + 8),&local_e0,param_3,param_4,param_5);
      FUN_028bf4c8(&local_a8);
      FUN_00936104(&local_e0);
    }
    plVar5 = *(long **)(param_1 + 0xd0);
    if (plVar5 != (long *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = &PTR_LAB_042731e0;
      uStack_d8 = 0;
      local_b0 = 0;
      local_80 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a8 = &PTR_LAB_04273200;
      local_78 = 0;
      local_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))
                (plVar5,*(undefined8 *)(param_1 + 8),&local_e0,param_3,param_4,param_5);
      FUN_028bf4c8(&local_a8);
      FUN_00936104(&local_e0);
    }
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 != (long *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = &PTR_LAB_042731e0;
      uStack_d8 = 0;
      local_b0 = 0;
      local_80 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a8 = &PTR_LAB_04273200;
      local_78 = 0;
      local_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))
                (plVar5,*(undefined8 *)(param_1 + 8),&local_e0,param_3,param_4,param_5);
      FUN_028bf4c8(&local_a8);
      FUN_00936104(&local_e0);
    }
    plVar5 = *(long **)(param_1 + 0x110);
    if (plVar5 != (long *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = &PTR_LAB_042731e0;
      uStack_d8 = 0;
      local_b0 = 0;
      local_80 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a8 = &PTR_LAB_04273200;
      local_78 = 0;
      local_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))
                (plVar5,*(undefined8 *)(param_1 + 8),&local_e0,param_3,param_4,param_5);
      FUN_028bf4c8(&local_a8);
      FUN_00936104(&local_e0);
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 == (long *)0x0) {
      return;
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = &PTR_LAB_042731e0;
    uStack_d8 = 0;
    local_b0 = 0;
    local_80 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a8 = &PTR_LAB_04273200;
    local_78 = 0;
    local_70 = 0;
    local_68 = 1;
    (**(code **)(*plVar5 + 0x10))
              (plVar5,*(undefined8 *)(param_1 + 8),&local_e0,param_3,param_4,param_5);
    FUN_028bf4c8(&local_a8);
    FUN_00936104(&local_e0);
    return;
  }
LAB_028c1844:
  piVar4 = (int *)FUN_028c4610(param_2);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 5)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = (uint)(*(int *)((long)piVar4 + uVar8) != 0);
    }
  }
  *(uint *)(param_1 + 0x90) = uVar6;
  piVar4 = (int *)FUN_028c4610(param_2);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 9)) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = *(undefined4 *)((long)piVar4 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  piVar4 = (int *)FUN_028c4610(param_2);
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
     (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar8 == 0)) {
    fVar12 = 4.2949673e+09;
  }
  else {
    fVar12 = (float)(*(int *)((long)piVar4 + uVar8) - 1);
  }
  *(float *)(param_1 + 0xa4) = fVar12;
  if (fVar12 < *(float *)(param_1 + 0xa0)) {
    *(float *)(param_1 + 0xa0) = fVar12;
  }
  if (fVar12 < *pfVar11) {
    *pfVar11 = fVar12;
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x110);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x130);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028c1a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5);
  return;
}


