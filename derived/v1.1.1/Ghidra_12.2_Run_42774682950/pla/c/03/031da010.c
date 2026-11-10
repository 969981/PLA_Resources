/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031da010; name: FUN_031da010
 */


void FUN_031da010(long param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  int *piVar18;
  long lVar19;
  undefined8 *puVar20;
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  long local_70;
  undefined8 local_68;
  
  plVar2 = (long *)(param_1 + 0x50);
  if (*param_2 == *param_4) {
    local_70 = 0;
    local_68 = -0x8000000000000000;
    iVar6 = FUN_031da494(plVar2,param_2,&local_70);
    lVar15 = *plVar2 + (long)iVar6 * 0x18;
    plVar16 = (long *)(lVar15 + 8);
    piVar7 = (int *)*plVar16;
    piVar17 = (int *)(lVar15 + 0x10);
    iVar8 = *piVar17;
    if (iVar8 != 0) {
      lVar15 = (long)iVar8 << 3;
      piVar18 = piVar7;
      do {
        if (*piVar18 != -2) {
          bVar4 = false;
          goto LAB_031da0ac;
        }
        lVar15 = lVar15 + -8;
        piVar18 = piVar18 + 2;
      } while (lVar15 != 0);
    }
    bVar4 = true;
LAB_031da0ac:
    iVar3 = param_3;
    if (param_3 <= param_5) {
      iVar3 = param_5;
    }
    if (iVar8 <= iVar3) {
      iVar1 = iVar3 + 1;
      if ((int)(*(uint *)(*plVar2 + (long)iVar6 * 0x18 + 0x14) & 0x3fffffff) <= iVar3) {
        piVar7 = (int *)FUN_031dd6d0(PTR_PTR_0434a080,iVar1);
        *plVar16 = (long)piVar7;
        iVar8 = *piVar17;
      }
      if ((iVar8 <= iVar3) || (iVar1 < iVar8)) {
        *piVar17 = iVar1;
      }
    }
    piVar7[(long)param_3 * 2] = *param_2;
    (piVar7 + (long)param_3 * 2)[1] = param_5;
    piVar7 = (int *)(*plVar16 + (long)param_5 * 8);
    *piVar7 = *param_2;
    piVar7[1] = param_3;
    if (!bVar4) {
      return;
    }
    local_78[0] = *param_2;
    piVar7 = local_78;
  }
  else {
    lVar15 = FUN_031dd758(plVar2,param_2);
    if ((lVar15 == 0) ||
       ((int)(*(uint *)(lVar15 + 4) |
             ((int)lVar15 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000) < 0)) {
      local_70 = 0;
      local_68 = -0x8000000000000000;
      FUN_031daa04(plVar2,param_2,&local_70);
      lVar15 = local_68;
      uVar9 = local_68._4_4_;
      local_68 = (ulong)local_68._4_4_ << 0x20;
      if ((-1 < lVar15) && (local_70 != 0)) {
        FUN_032cf244(PTR_PTR_0434a080,local_70,8,uVar9 & 0x3fffffff);
      }
    }
    lVar15 = FUN_031dd758(plVar2,param_4);
    if ((lVar15 == 0) ||
       ((int)(*(uint *)(lVar15 + 4) |
             ((int)lVar15 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000) < 0)) {
      local_70 = 0;
      local_68 = -0x8000000000000000;
      FUN_031daa04(plVar2,param_4,&local_70);
      lVar15 = local_68;
      uVar9 = local_68._4_4_;
      local_68 = (ulong)local_68._4_4_ << 0x20;
      if ((-1 < lVar15) && (local_70 != 0)) {
        FUN_032cf244(PTR_PTR_0434a080,local_70,8,uVar9 & 0x3fffffff);
      }
    }
    lVar15 = FUN_031dd758(plVar2,param_2);
    if (lVar15 == 0) {
      uVar13 = 0;
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = *(uint *)(lVar15 + 4);
      uVar13 = ((int)lVar15 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar15 = FUN_031dd758(plVar2,param_4);
    if (lVar15 == 0) {
      uVar14 = 0;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(uint *)(lVar15 + 4);
      uVar14 = ((int)lVar15 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar19 = *plVar2;
    uVar10 = uVar10 | uVar14;
    lVar15 = lVar19 + (long)(int)(uVar9 | uVar13) * 0x18;
    puVar20 = (undefined8 *)(lVar15 + 8);
    piVar7 = (int *)*puVar20;
    piVar17 = (int *)(lVar15 + 0x10);
    iVar8 = *piVar17;
    lVar15 = (long)iVar8;
    plVar2 = (long *)(lVar19 + (long)(int)uVar10 * 0x18 + 8);
    if (iVar8 != 0) {
      lVar11 = lVar15 << 3;
      piVar18 = piVar7;
      do {
        if (*piVar18 != -2) {
          bVar4 = false;
          goto LAB_031da2d8;
        }
        lVar11 = lVar11 + -8;
        piVar18 = piVar18 + 2;
      } while (lVar11 != 0);
    }
    bVar4 = true;
LAB_031da2d8:
    piVar18 = (int *)(lVar19 + (long)(int)uVar10 * 0x18 + 0x10);
    if (*piVar18 != 0) {
      lVar11 = (long)*piVar18 << 3;
      piVar12 = (int *)*plVar2;
      do {
        if (*piVar12 != -2) {
          bVar5 = false;
          goto LAB_031da308;
        }
        lVar11 = lVar11 + -8;
        piVar12 = piVar12 + 2;
      } while (lVar11 != 0);
    }
    bVar5 = true;
LAB_031da308:
    if (param_3 < iVar8) {
      piVar7 = piVar7 + (long)param_3 * 2;
    }
    else {
      if ((int)(*(uint *)(lVar19 + (long)(int)(uVar9 | uVar13) * 0x18 + 0x14) & 0x3fffffff) <= iVar8
         ) {
        piVar7 = (int *)FUN_031dd6d0(PTR_PTR_0434a080,iVar8 + 1);
        *puVar20 = piVar7;
        lVar15 = (long)*piVar17;
      }
      *piVar17 = iVar8 + 1;
      piVar7 = piVar7 + lVar15 * 2;
    }
    *piVar7 = *param_4;
    piVar7[1] = param_5;
    iVar8 = *piVar18;
    if (param_5 < iVar8) {
      piVar7 = (int *)(*plVar2 + (long)param_5 * 8);
    }
    else {
      iVar6 = iVar8 + 1;
      lVar15 = *plVar2;
      if ((int)(*(uint *)(lVar19 + (long)(int)uVar10 * 0x18 + 0x14) & 0x3fffffff) <= iVar8) {
        lVar15 = FUN_031dd6d0(PTR_PTR_0434a080,iVar6);
        *plVar2 = lVar15;
        iVar8 = *piVar18;
      }
      piVar7 = (int *)(lVar15 + (long)iVar8 * 8);
      *piVar18 = iVar6;
    }
    *piVar7 = *param_2;
    piVar7[1] = param_3;
    if (bVar4) {
      local_80[0] = *param_2;
      FUN_031da604(param_1,local_80);
    }
    if (!bVar5) {
      return;
    }
    local_88[0] = *param_4;
    piVar7 = local_88;
  }
  FUN_031da604(param_1,piVar7);
  return;
}


