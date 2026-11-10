/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d943c; name: FUN_031d943c
 */


void FUN_031d943c(long param_1,long *param_2,int *param_3,undefined4 *param_4,long *param_5)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  undefined4 local_98 [2];
  int local_90 [2];
  int local_88;
  undefined2 local_84;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  
  lVar4 = FUN_031dc4f4(param_2,param_3);
  puVar5 = PTR_PTR_0434a080;
  if ((lVar4 == 0) ||
     (uVar10 = *(uint *)(lVar4 + 4) | ((int)lVar4 - (int)param_2[2]) * 0x20000000, (int)uVar10 < 0))
  {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_3 * 0x10;
    FUN_031db014(&local_88,(int)*(short *)(lVar4 + 10) + (int)*(short *)(lVar4 + 8));
    local_88 = local_88 + 1;
    local_84 = (ushort)local_84._1_1_ << 8;
    FUN_02ff1f1c(&local_80,0,local_70,0);
    local_90[0] = *param_3;
    local_98[0] = *param_4;
    FUN_031dc2a4(param_1,local_90,local_98,param_5 + 2);
    iVar3 = FUN_031ddb18(param_2,param_3);
    puVar18 = local_80;
    puVar5 = PTR_PTR_0434a080;
    if ((int)param_2[1] == iVar3) {
      lVar4 = *param_2;
      iVar8 = iVar3 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar3) {
        lVar4 = FUN_031ddc04(PTR_PTR_0434a080,iVar8);
        iVar3 = (int)param_2[1];
        *param_2 = lVar4;
      }
      uVar2 = local_78;
      puVar18 = local_80;
      piVar12 = (int *)(lVar4 + (long)iVar3 * 0x28);
      *piVar12 = *param_3;
      plVar13 = (long *)(piVar12 + 4);
      *plVar13 = 0;
      piVar12[2] = local_88;
      *(short *)(piVar12 + 3) = local_84;
      puVar21 = (uint *)(piVar12 + 6);
      puVar21[0] = 0;
      puVar21[1] = 0x80000000;
      uVar10 = (uint)local_78;
      local_64 = (uint)local_78;
      if ((int)(uint)local_78 < 1) {
        *plVar13 = 0;
        *puVar21 = 0;
        piVar12[7] = 0x80000000;
      }
      else {
        puVar6 = (undefined4 *)FUN_032cf190(puVar5,4,&local_64);
        *plVar13 = (long)puVar6;
        *puVar21 = uVar10;
        piVar12[7] = local_64;
        uVar11 = uVar10 & 3;
        if (2 < uVar10 - 1) {
          iVar15 = uVar11 - uVar10;
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar18;
            puVar7[1] = puVar18[1];
            puVar7[2] = puVar18[2];
            puVar1 = puVar18 + 3;
            puVar6 = puVar7 + 4;
            puVar18 = puVar18 + 4;
            iVar15 = iVar15 + 4;
            puVar7[3] = *puVar1;
            puVar7 = puVar6;
          } while (iVar15 != 0);
        }
        if ((uVar2 & 3) != 0) {
          do {
            uVar11 = uVar11 - 1;
            *puVar6 = *puVar18;
            puVar6 = puVar6 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar11 != 0);
        }
      }
      *(undefined4 *)(lVar4 + (long)iVar3 * 0x28 + 0x20) = local_70;
      *(int *)(param_2 + 1) = iVar8;
    }
    else {
      lVar16 = *param_2;
      lVar4 = lVar16 + (long)iVar3 * 0x28;
      lVar17 = (long)iVar3;
      piVar12 = (int *)(lVar4 + 8);
      *piVar12 = local_88;
      *(short *)(lVar4 + 0xc) = local_84;
      if (piVar12 != &local_88) {
        lVar4 = lVar16 + lVar17 * 0x28;
        puVar20 = (undefined8 *)(lVar4 + 0x10);
        pvVar9 = (void *)*puVar20;
        iVar3 = (uint)local_78;
        lVar19 = (long)(int)(uint)local_78;
        if ((int)(*(uint *)(lVar4 + 0x1c) & 0x3fffffff) < (int)(uint)local_78) {
          pvVar9 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,local_78 & 0xffffffff,4,pvVar9,
                                        *(undefined4 *)(lVar16 + lVar17 * 0x28 + 0x18));
          *puVar20 = pvVar9;
        }
        memcpy(pvVar9,puVar18,lVar19 << 2);
        *(int *)(lVar16 + lVar17 * 0x28 + 0x18) = iVar3;
      }
      *(undefined4 *)(lVar16 + lVar17 * 0x28 + 0x20) = local_70;
      puVar5 = PTR_PTR_0434a080;
    }
    iVar8 = (int)param_5[1];
    iVar3 = iVar8 + 1;
    iVar15 = *param_3;
    lVar4 = *param_5;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar4 = FUN_031db48c(puVar5,iVar3);
      iVar8 = (int)param_5[1];
      *param_5 = lVar4;
    }
    puVar14 = (undefined1 *)(lVar4 + (long)iVar8 * 0xc);
    *puVar14 = 2;
    *(int *)(puVar14 + 4) = iVar15;
    *(int *)(param_5 + 1) = iVar3;
    if ((int)local_78._4_4_ < 0) {
      return;
    }
    if (local_80 == (undefined4 *)0x0) {
      return;
    }
    uVar10 = local_78._4_4_;
  }
  else {
    lVar16 = *param_2;
    lVar4 = lVar16 + (long)(int)uVar10 * 0x28;
    lVar17 = (long)(int)uVar10;
    local_88 = *(int *)(lVar4 + 8);
    local_84 = *(short *)(lVar4 + 0xc);
    local_80 = (undefined4 *)0x0;
    local_78 = 0x8000000000000000;
    uVar10 = *(uint *)(lVar4 + 0x18);
    puVar18 = *(undefined4 **)(lVar4 + 0x10);
    local_64 = uVar10;
    if ((int)uVar10 < 1) {
      local_80 = (undefined4 *)0x0;
      local_78 = 0x8000000000000000;
      lVar4 = lVar16;
    }
    else {
      local_80 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_64);
      local_78 = CONCAT44(local_64,uVar10);
      uVar11 = uVar10 & 3;
      puVar6 = local_80;
      if (2 < uVar10 - 1) {
        iVar3 = uVar11 - uVar10;
        puVar7 = local_80;
        do {
          *puVar7 = *puVar18;
          puVar7[1] = puVar18[1];
          puVar7[2] = puVar18[2];
          puVar1 = puVar18 + 3;
          puVar6 = puVar7 + 4;
          puVar18 = puVar18 + 4;
          iVar3 = iVar3 + 4;
          puVar7[3] = *puVar1;
          puVar7 = puVar6;
        } while (iVar3 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar6 = *puVar18;
        puVar6 = puVar6 + 1;
        puVar18 = puVar18 + 1;
      }
      lVar4 = *param_2;
    }
    puVar18 = local_80;
    lVar19 = lVar4 + lVar17 * 0x28;
    local_70 = *(undefined4 *)(lVar16 + lVar17 * 0x28 + 0x20);
    local_88 = local_88 + 1;
    piVar12 = (int *)(lVar19 + 8);
    *piVar12 = local_88;
    *(short *)(lVar19 + 0xc) = local_84;
    if (piVar12 != &local_88) {
      lVar16 = lVar4 + lVar17 * 0x28;
      puVar20 = (undefined8 *)(lVar16 + 0x10);
      pvVar9 = (void *)*puVar20;
      iVar3 = (uint)local_78;
      lVar19 = (long)(int)(uint)local_78;
      if ((int)(*(uint *)(lVar16 + 0x1c) & 0x3fffffff) < (int)(uint)local_78) {
        pvVar9 = (void *)FUN_032bd1d4(puVar5,local_78 & 0xffffffff,4,pvVar9,
                                      *(undefined4 *)(lVar4 + lVar17 * 0x28 + 0x18));
        *puVar20 = pvVar9;
      }
      memcpy(pvVar9,puVar18,lVar19 << 2);
      *(int *)(lVar4 + lVar17 * 0x28 + 0x18) = iVar3;
    }
    *(undefined4 *)(lVar4 + lVar17 * 0x28 + 0x20) = local_70;
    if ((long)local_78 < 0) {
      return;
    }
    if (local_80 == (undefined4 *)0x0) {
      return;
    }
    uVar10 = local_78._4_4_;
  }
  local_78 = (ulong)uVar10 << 0x20;
  FUN_032cf244(puVar5,local_80,4,uVar10 & 0x3fffffff);
  return;
}


