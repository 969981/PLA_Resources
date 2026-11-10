/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d71bc; name: FUN_031d71bc
 */


void FUN_031d71bc(long param_1,long *param_2,int *param_3,int *param_4,long *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  void *pvVar14;
  short sVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  long lVar27;
  short *psVar28;
  short *psVar29;
  uint *puVar30;
  int local_c8 [2];
  undefined4 local_c0 [2];
  int local_b8 [2];
  int local_b0 [2];
  undefined4 local_a8 [2];
  int local_a0 [2];
  undefined4 local_98 [2];
  int local_90 [2];
  int local_88;
  undefined2 local_84;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  
  lVar9 = FUN_031dc4f4(param_2,param_3);
  puVar10 = PTR_PTR_0434a080;
  if ((lVar9 == 0) ||
     (uVar16 = *(uint *)(lVar9 + 4) | ((int)lVar9 - (int)param_2[2]) * 0x20000000, (int)uVar16 < 0))
  {
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_3 * 0x10;
    psVar28 = (short *)(lVar9 + 10);
    psVar29 = (short *)(lVar9 + 8);
    FUN_031db014(&local_88,(int)*psVar28 + (int)*psVar29);
    local_84 = CONCAT11(local_84._1_1_,1);
    iVar13 = (int)param_5[1];
    iVar18 = *param_3;
    iVar3 = param_3[10];
    iVar8 = iVar13 + 1;
    lVar9 = *param_5;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar9 = FUN_031db48c(PTR_PTR_0434a080,iVar8);
      iVar13 = (int)param_5[1];
      *param_5 = lVar9;
    }
    puVar17 = (undefined1 *)(lVar9 + (long)iVar13 * 0xc);
    *puVar17 = 0;
    *(int *)(puVar17 + 4) = iVar18;
    *(int *)(puVar17 + 8) = iVar3;
    *(int *)(param_5 + 1) = iVar8;
    uVar16 = (int)*psVar28 + (int)*psVar29;
    if (0 < (int)uVar16) {
      uVar26 = 0;
      do {
        uVar19 = (ulong)(uVar26 >> 5);
        iVar8 = *param_4;
        if ((int)(short)param_4[2] <= (int)uVar26) {
          iVar8 = param_4[1] - (int)(short)param_4[2];
        }
        uVar5 = 1 << (ulong)(uVar26 & 0x1f);
        if ((*(uint *)(*(long *)(param_3 + 2) + uVar19 * 4) & uVar5) == 0) {
          local_80[uVar19] = local_80[uVar19] & (uVar5 ^ 0xffffffff);
        }
        else {
          lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          local_80[uVar19] = local_80[uVar19] | uVar5;
          iVar13 = *(int *)(lVar9 + (long)(int)(iVar8 + uVar26) * 0x14 + 0xc);
          if (iVar13 != -1 && iVar13 != *param_3) {
            local_c0[0] = *(undefined4 *)(lVar9 + (long)(int)(iVar8 + uVar26) * 0x14 + 8);
            local_b8[0] = iVar13;
            FUN_031d85f8(param_1,local_b8,local_c0,param_5);
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar16 != uVar26);
    }
    local_c8[0] = *param_3;
    FUN_031db5c4(param_1,&local_88,local_c8,param_5 + 2);
    iVar8 = FUN_031ddb18(param_2,param_3);
    puVar20 = local_80;
    puVar10 = PTR_PTR_0434a080;
    if ((int)param_2[1] == iVar8) {
      lVar9 = *param_2;
      iVar13 = iVar8 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar8) {
        lVar9 = FUN_031ddc04(PTR_PTR_0434a080,iVar13,lVar9);
        iVar8 = (int)param_2[1];
        *param_2 = lVar9;
      }
      uVar19 = local_78;
      puVar20 = local_80;
      piVar23 = (int *)(lVar9 + (long)iVar8 * 0x28);
      *piVar23 = *param_3;
      plVar24 = (long *)(piVar23 + 4);
      *plVar24 = 0;
      piVar23[2] = local_88;
      *(undefined2 *)(piVar23 + 3) = local_84;
      puVar30 = (uint *)(piVar23 + 6);
      puVar30[0] = 0;
      puVar30[1] = 0x80000000;
      uVar16 = (uint)local_78;
      local_64 = (uint)local_78;
      if ((int)(uint)local_78 < 1) {
        *plVar24 = 0;
        *puVar30 = 0;
        piVar23[7] = 0x80000000;
      }
      else {
        puVar11 = (undefined4 *)FUN_032cf190(puVar10,4,&local_64);
        *plVar24 = (long)puVar11;
        *puVar30 = uVar16;
        piVar23[7] = local_64;
        uVar26 = uVar16 & 3;
        if (2 < uVar16 - 1) {
          iVar18 = uVar26 - uVar16;
          puVar12 = puVar11;
          do {
            *puVar12 = *puVar20;
            puVar12[1] = puVar20[1];
            puVar12[2] = puVar20[2];
            puVar1 = puVar20 + 3;
            puVar11 = puVar12 + 4;
            puVar20 = puVar20 + 4;
            iVar18 = iVar18 + 4;
            puVar12[3] = *puVar1;
            puVar12 = puVar11;
          } while (iVar18 != 0);
        }
        if ((uVar19 & 3) != 0) {
          do {
            uVar26 = uVar26 - 1;
            *puVar11 = *puVar20;
            puVar11 = puVar11 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar26 != 0);
        }
      }
      *(undefined4 *)(lVar9 + (long)iVar8 * 0x28 + 0x20) = local_70;
      *(int *)(param_2 + 1) = iVar13;
    }
    else {
      lVar27 = *param_2;
      lVar9 = lVar27 + (long)iVar8 * 0x28;
      lVar21 = (long)iVar8;
      piVar23 = (int *)(lVar9 + 8);
      *piVar23 = local_88;
      *(undefined2 *)(lVar9 + 0xc) = local_84;
      if (piVar23 != &local_88) {
        lVar9 = lVar27 + lVar21 * 0x28;
        puVar25 = (undefined8 *)(lVar9 + 0x10);
        pvVar14 = (void *)*puVar25;
        iVar8 = (uint)local_78;
        lVar22 = (long)(int)(uint)local_78;
        if ((int)(*(uint *)(lVar9 + 0x1c) & 0x3fffffff) < (int)(uint)local_78) {
          pvVar14 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,local_78 & 0xffffffff,4,pvVar14,
                                         *(undefined4 *)(lVar27 + lVar21 * 0x28 + 0x18));
          *puVar25 = pvVar14;
        }
        memcpy(pvVar14,puVar20,lVar22 << 2);
        *(int *)(lVar27 + lVar21 * 0x28 + 0x18) = iVar8;
      }
      *(undefined4 *)(lVar27 + lVar21 * 0x28 + 0x20) = local_70;
      puVar10 = PTR_PTR_0434a080;
    }
    if ((int)local_78._4_4_ < 0) {
      return;
    }
    if (local_80 == (undefined4 *)0x0) {
      return;
    }
    uVar16 = local_78._4_4_;
  }
  else {
    lVar27 = *param_2;
    lVar9 = lVar27 + (long)(int)uVar16 * 0x28;
    local_88 = *(int *)(lVar9 + 8);
    local_84 = *(undefined2 *)(lVar9 + 0xc);
    local_80 = (undefined4 *)0x0;
    local_78 = 0x8000000000000000;
    uVar26 = *(uint *)(lVar9 + 0x18);
    puVar20 = *(undefined4 **)(lVar9 + 0x10);
    local_64 = uVar26;
    if ((int)uVar26 < 1) {
      local_80 = (undefined4 *)0x0;
      local_78 = 0x8000000000000000;
    }
    else {
      local_80 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_64);
      local_78 = CONCAT44(local_64,uVar26);
      uVar5 = uVar26 & 3;
      puVar11 = local_80;
      if (2 < uVar26 - 1) {
        iVar8 = uVar5 - uVar26;
        puVar12 = local_80;
        do {
          *puVar12 = *puVar20;
          puVar12[1] = puVar20[1];
          puVar12[2] = puVar20[2];
          puVar1 = puVar20 + 3;
          puVar11 = puVar12 + 4;
          puVar20 = puVar20 + 4;
          iVar8 = iVar8 + 4;
          puVar12[3] = *puVar1;
          puVar12 = puVar11;
        } while (iVar8 != 0);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar20;
        puVar11 = puVar11 + 1;
        puVar20 = puVar20 + 1;
      }
    }
    local_70 = *(undefined4 *)(lVar27 + (long)(int)uVar16 * 0x28 + 0x20);
    local_84 = CONCAT11(local_84._1_1_,1);
    iVar13 = (int)param_5[1];
    iVar18 = *param_3;
    iVar3 = param_3[10];
    lVar9 = *param_5;
    iVar8 = iVar13 + 1;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar9 = FUN_031db48c(puVar10,iVar8);
      iVar13 = (int)param_5[1];
      *param_5 = lVar9;
    }
    puVar17 = (undefined1 *)(lVar9 + (long)iVar13 * 0xc);
    *puVar17 = 0;
    *(int *)(puVar17 + 4) = iVar18;
    *(int *)(puVar17 + 8) = iVar3;
    *(int *)(param_5 + 1) = iVar8;
    sVar15 = (short)param_4[2];
    sVar6 = *(short *)((long)param_4 + 10);
    if (0 < (int)sVar6 + (int)sVar15) {
      iVar8 = (int)sVar15;
      uVar16 = 0;
      while( true ) {
        uVar19 = (ulong)(uVar16 >> 5);
        iVar13 = *param_4;
        if ((int)sVar15 <= (int)uVar16) {
          iVar13 = param_4[1] - (int)sVar15;
        }
        uVar5 = local_80[uVar19];
        uVar26 = *(uint *)(*(long *)(param_3 + 2) + uVar19 * 4) >> (ulong)(uVar16 & 0x1f) & 1;
        if ((uVar5 >> (ulong)(uVar16 & 0x1f) & 1) != uVar26) {
          lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          uVar7 = 1 << (ulong)(uVar16 & 0x1f);
          uVar2 = uVar5 | uVar7;
          if (uVar26 == 0) {
            uVar2 = uVar5 & (uVar7 ^ 0xffffffff);
          }
          local_80[uVar19] = uVar2;
          iVar18 = *(int *)(lVar9 + (long)(int)(iVar13 + uVar16) * 0x14 + 0xc);
          if ((iVar18 != -1) && (iVar18 != *param_3)) {
            uVar4 = *(undefined4 *)(lVar9 + (long)(int)(iVar13 + uVar16) * 0x14 + 8);
            if (uVar26 == 0) {
              local_a8[0] = uVar4;
              local_a0[0] = iVar18;
              FUN_031d9978(param_1,local_a0,local_a8,param_5);
            }
            else {
              local_98[0] = uVar4;
              local_90[0] = iVar18;
              FUN_031d85f8(param_1,local_90,local_98,param_5);
            }
          }
        }
        if ((iVar8 + sVar6) - 1U == uVar16) break;
        sVar15 = (short)param_4[2];
        uVar16 = uVar16 + 1;
      }
    }
    local_b0[0] = *param_3;
    FUN_031db5c4(param_1,&local_88,local_b0,param_5 + 2);
    iVar8 = FUN_031ddb18(param_2,param_3);
    puVar20 = local_80;
    if ((int)param_2[1] == iVar8) {
      lVar9 = *param_2;
      iVar13 = iVar8 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar8) {
        lVar9 = FUN_031ddc04(puVar10,iVar13,lVar9);
        iVar8 = (int)param_2[1];
        *param_2 = lVar9;
      }
      uVar19 = local_78;
      puVar20 = local_80;
      piVar23 = (int *)(lVar9 + (long)iVar8 * 0x28);
      *piVar23 = *param_3;
      plVar24 = (long *)(piVar23 + 4);
      *plVar24 = 0;
      piVar23[2] = local_88;
      *(undefined2 *)(piVar23 + 3) = local_84;
      puVar30 = (uint *)(piVar23 + 6);
      puVar30[0] = 0;
      puVar30[1] = 0x80000000;
      uVar16 = (uint)local_78;
      local_64 = (uint)local_78;
      if ((int)(uint)local_78 < 1) {
        *plVar24 = 0;
        *puVar30 = 0;
        piVar23[7] = 0x80000000;
      }
      else {
        puVar11 = (undefined4 *)FUN_032cf190(puVar10,4,&local_64);
        *plVar24 = (long)puVar11;
        *puVar30 = uVar16;
        piVar23[7] = local_64;
        uVar26 = uVar16 & 3;
        if (2 < uVar16 - 1) {
          iVar18 = uVar26 - uVar16;
          puVar12 = puVar11;
          do {
            *puVar12 = *puVar20;
            puVar12[1] = puVar20[1];
            puVar12[2] = puVar20[2];
            puVar1 = puVar20 + 3;
            puVar11 = puVar12 + 4;
            puVar20 = puVar20 + 4;
            iVar18 = iVar18 + 4;
            puVar12[3] = *puVar1;
            puVar12 = puVar11;
          } while (iVar18 != 0);
        }
        if ((uVar19 & 3) != 0) {
          do {
            uVar26 = uVar26 - 1;
            *puVar11 = *puVar20;
            puVar11 = puVar11 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar26 != 0);
        }
      }
      *(undefined4 *)(lVar9 + (long)iVar8 * 0x28 + 0x20) = local_70;
      *(int *)(param_2 + 1) = iVar13;
    }
    else {
      lVar27 = *param_2;
      lVar9 = lVar27 + (long)iVar8 * 0x28;
      lVar21 = (long)iVar8;
      piVar23 = (int *)(lVar9 + 8);
      *piVar23 = local_88;
      *(undefined2 *)(lVar9 + 0xc) = local_84;
      if (piVar23 != &local_88) {
        lVar9 = lVar27 + lVar21 * 0x28;
        puVar25 = (undefined8 *)(lVar9 + 0x10);
        pvVar14 = (void *)*puVar25;
        iVar8 = (uint)local_78;
        lVar22 = (long)(int)(uint)local_78;
        if ((int)(*(uint *)(lVar9 + 0x1c) & 0x3fffffff) < (int)(uint)local_78) {
          pvVar14 = (void *)FUN_032bd1d4(puVar10,local_78 & 0xffffffff,4,pvVar14,
                                         *(undefined4 *)(lVar27 + lVar21 * 0x28 + 0x18));
          *puVar25 = pvVar14;
        }
        memcpy(pvVar14,puVar20,lVar22 << 2);
        *(int *)(lVar27 + lVar21 * 0x28 + 0x18) = iVar8;
      }
      *(undefined4 *)(lVar27 + lVar21 * 0x28 + 0x20) = local_70;
    }
    if ((int)local_78._4_4_ < 0) {
      return;
    }
    if (local_80 == (undefined4 *)0x0) {
      return;
    }
    uVar16 = local_78._4_4_;
  }
  local_78 = (ulong)uVar16 << 0x20;
  FUN_032cf244(puVar10,local_80,4,uVar16 & 0x3fffffff);
  return;
}


