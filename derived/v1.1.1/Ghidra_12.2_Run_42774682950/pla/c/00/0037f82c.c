/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037f82c; name: FUN_0037f82c
 */


void FUN_0037f82c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  *param_1 = (long)(PTR_DAT_04373c78 + 0x10);
  lVar15 = *(long *)(param_1[2] + 0x20);
  if (((param_1[1] & 1U) == 0) ||
     (plVar11 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar11 != 0 || plVar11 == (long *)0x0))
  {
    iVar5 = *(int *)(param_1[2] + 0xc);
  }
  else {
    plVar13 = plVar11 + 1;
    lVar16 = *plVar13;
    if (lVar16 != plVar11[2]) {
                    /* try { // try from 0037fdf4 to 0037fdfb has its CatchHandler @ 0037fe38 */
      FUN_0030cac0(plVar13);
      lVar16 = *plVar13;
    }
    if (lVar16 != 0) {
      plVar11[2] = lVar16;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar11);
    iVar5 = *(int *)(param_1[2] + 0xc);
  }
  if (iVar5 != -1) {
    FUN_0032dd18((long)param_1 + (long)iVar5);
  }
  puVar2 = PTR_DAT_04373ab0;
  puVar1 = PTR_LAB_04373a98;
  iVar5 = *(int *)(lVar15 + 0x68);
  if (iVar5 < 1) {
    return;
  }
  lVar16 = 0;
  lVar17 = *(long *)(lVar15 + 0x28);
  lVar10 = *(long *)(lVar17 + 0x58);
  lVar7 = lVar17;
  if (lVar10 != 0) goto LAB_0037f910;
LAB_0037f934:
  lVar8 = param_1[2];
LAB_0037f938:
  lVar10 = lVar7 + lVar16 * 0x98;
  plVar11 = (long *)((long)param_1 + (long)*(int *)(*(long *)(lVar8 + 0x28) + lVar16 * 4));
  puVar12 = (undefined8 *)(lVar10 + 0x30);
  puVar3 = (ulong *)*puVar12;
  if (*(int *)(lVar10 + 0x3c) != 3) {
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_80 = puVar1, local_88 = lVar17, *puVar3 != 0xffffffffffffffff)) {
      local_68 = &local_88;
      local_70 = &puStack_80;
      local_78 = &local_70;
                    /* try { // try from 0037fae4 to 0037fb6f has its CatchHandler @ 0037fe54 */
      std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    puVar18 = (uint *)(lVar7 + lVar16 * 0x98 + 0x38);
    iVar5 = *(int *)(puVar2 + (ulong)*puVar18 * 4);
    if (iVar5 == 9) {
      pbVar14 = (byte *)*plVar11;
      if (pbVar14 ==
          *(byte **)(*(long *)(param_1[2] + 0x40) +
                    (long)*(int *)(*(long *)(param_1[2] + 0x28) + lVar16 * 4)) ||
          pbVar14 == (byte *)0x0) goto switchD_0037f9c0_default;
      goto LAB_0037fa9c;
    }
    puVar3 = (ulong *)*puVar12;
    if (puVar3 != (ulong *)0x0) {
      puStack_80 = puVar1;
      local_88 = lVar17;
      if (*puVar3 != 0xffffffffffffffff) {
        local_68 = &local_88;
        local_70 = &puStack_80;
        local_78 = &local_70;
        std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      iVar5 = *(int *)(puVar2 + (ulong)*puVar18 * 4);
    }
    if (iVar5 != 10) goto switchD_0037f9c0_default;
    if (*(long **)(param_1[2] + 0x40) == param_1) goto switchD_0037f9c0_default;
    if (*(long **)(param_1[2] + 0x40) == (long *)0x0) goto switchD_0037f9c0_default;
    pbVar14 = (byte *)*plVar11;
    goto joined_r0x0037fb98;
  }
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_80 = puVar1, local_88 = lVar17, *puVar3 != 0xffffffffffffffff)) {
    local_68 = &local_88;
    local_70 = &puStack_80;
    local_78 = &local_70;
                    /* try { // try from 0037f984 to 0037f993 has its CatchHandler @ 0037fe54 */
    std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  puVar18 = (uint *)(lVar7 + lVar16 * 0x98 + 0x38);
  uVar6 = *puVar18;
  switch(*(undefined4 *)(puVar2 + (ulong)uVar6 * 4)) {
  case 1:
  case 8:
    FUN_00326c10(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 2:
    FUN_00328710(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 3:
    FUN_00327990(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 4:
    FUN_00329490(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 5:
    FUN_0032af90(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 6:
    FUN_0032a210(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 7:
    FUN_00325e98(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 9:
    FUN_0032b6e4(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  case 10:
    puVar3 = (ulong *)*puVar12;
    if (puVar3 != (ulong *)0x0) {
      puStack_80 = puVar1;
      local_88 = lVar17;
      if (*puVar3 != 0xffffffffffffffff) {
        local_68 = &local_88;
        local_70 = &puStack_80;
        local_78 = &local_70;
                    /* try { // try from 0037fcf0 to 0037fd13 has its CatchHandler @ 0037fe54 */
        std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar6 = *puVar18;
    }
    if ((uVar6 != 0xb) || (uVar4 = FUN_00344344(lVar17), (uVar4 & 1) == 0)) {
      puVar18 = (uint *)plVar11[2];
      if ((puVar18 != (uint *)0x0) && (*plVar11 == 0)) {
        uVar4 = (ulong)*puVar18;
        if (0 < (int)*puVar18) {
          puVar18 = puVar18 + 2;
          puVar12 = *(undefined8 **)puVar18;
          while( true ) {
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              FUN_002e2ea0(PTR_LAB_04373088,puVar12);
            }
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) break;
            puVar18 = puVar18 + 2;
            puVar12 = *(undefined8 **)puVar18;
          }
          puVar18 = (uint *)plVar11[2];
        }
        FUN_002ee710(puVar18);
      }
      plVar11[2] = 0;
      if (*plVar11 == 0) goto switchD_0037f9c0_default;
                    /* try { // try from 0037fdb8 to 0037fdbb has its CatchHandler @ 0037fe4c */
      FUN_0032ce8c();
      goto switchD_0037f9c0_default;
    }
    (**(code **)*plVar11)(plVar11);
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
    break;
  default:
    goto switchD_0037f9c0_default;
  }
  do {
    iVar5 = (int)lVar7;
    lVar7 = *(long *)(lVar15 + 0x28);
    lVar17 = lVar7 + lVar16 * 0x98;
    lVar10 = *(long *)(lVar17 + 0x58);
    if (lVar10 == 0) goto LAB_0037f934;
LAB_0037f910:
    if (*(int *)(lVar10 + 0x18) == 1) {
      lVar8 = param_1[2];
      if (*(char *)(**(long **)(lVar10 + 0x20) + 0x41) != '\0') goto LAB_0037f938;
    }
    else {
      lVar8 = param_1[2];
    }
    iVar9 = (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x30)) >> 4);
    if (*(int *)((long)param_1 + (long)(*(int *)(lVar8 + 8) + iVar9 * -0x55555554)) ==
        *(int *)(lVar7 + lVar16 * 0x98 + 0x44)) {
      lVar10 = (long)*(int *)(*(long *)(lVar8 + 0x28) + (long)(iVar5 + iVar9 * -0x55555555) * 4);
      puVar12 = (undefined8 *)(lVar7 + lVar16 * 0x98 + 0x30);
      puVar3 = (ulong *)*puVar12;
      if ((puVar3 != (ulong *)0x0) &&
         (puStack_80 = puVar1, local_88 = lVar17, *puVar3 != 0xffffffffffffffff)) {
        local_68 = &local_88;
        local_70 = &puStack_80;
        local_78 = &local_70;
                    /* try { // try from 0037fa54 to 0037fa63 has its CatchHandler @ 0037fe50 */
        std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      puVar18 = (uint *)(lVar7 + lVar16 * 0x98 + 0x38);
      iVar5 = *(int *)(puVar2 + (ulong)*puVar18 * 4);
      if (iVar5 == 9) {
        pbVar14 = *(byte **)((long)param_1 + lVar10);
        if (pbVar14 !=
            *(byte **)(*(long *)(param_1[2] + 0x40) +
                      (ulong)*(uint *)(*(long *)(param_1[2] + 0x28) + lVar16 * 4)) &&
            pbVar14 != (byte *)0x0) {
LAB_0037fa9c:
          if ((*pbVar14 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar14 + 0x10));
          }
LAB_0037f8e0:
          FUN_002e2ea0(PTR_LAB_04373088,pbVar14);
        }
      }
      else {
        puVar3 = (ulong *)*puVar12;
        if (puVar3 != (ulong *)0x0) {
          puStack_80 = puVar1;
          local_88 = lVar17;
          if (*puVar3 != 0xffffffffffffffff) {
            local_68 = &local_88;
            local_70 = &puStack_80;
            local_78 = &local_70;
                    /* try { // try from 0037fbd0 to 0037fbdf has its CatchHandler @ 0037fe50 */
            std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          iVar5 = *(int *)(puVar2 + (ulong)*puVar18 * 4);
        }
        if (iVar5 == 10) {
          pbVar14 = *(byte **)((long)param_1 + lVar10);
joined_r0x0037fb98:
          if (pbVar14 != (byte *)0x0) {
            (*(code *)**(undefined8 **)pbVar14)(pbVar14);
            goto LAB_0037f8e0;
          }
        }
      }
    }
switchD_0037f9c0_default:
    lVar7 = (long)*(int *)(lVar15 + 0x68);
    lVar16 = lVar16 + 1;
    if (lVar7 <= lVar16) {
      return;
    }
  } while( true );
}


