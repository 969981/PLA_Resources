/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d7ea8; name: FUN_031d7ea8
 */


void FUN_031d7ea8(long param_1,long *param_2,int *param_3,int *param_4,long *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *__dest;
  short sVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  uint *puVar25;
  undefined4 local_c0 [2];
  int local_b8 [2];
  undefined4 local_b0 [2];
  int local_a8 [2];
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
  puVar6 = PTR_PTR_0434a080;
  if (lVar9 == 0) {
    return;
  }
  uVar13 = *(uint *)(lVar9 + 4) | ((int)lVar9 - (int)param_2[2]) * 0x20000000;
  if ((int)uVar13 < 0) {
    return;
  }
  lVar9 = *param_2;
  if (*(char *)(lVar9 + (long)(int)uVar13 * 0x28 + 0xc) == '\0') {
    return;
  }
  lVar16 = lVar9 + (long)(int)uVar13 * 0x28;
  local_88 = *(int *)(lVar16 + 8);
  local_84 = *(short *)(lVar16 + 0xc);
  local_80 = (undefined4 *)0x0;
  local_78 = 0x8000000000000000;
  uVar15 = *(uint *)(lVar16 + 0x18);
  puVar24 = *(undefined4 **)(lVar16 + 0x10);
  local_64 = uVar15;
  if ((int)uVar15 < 1) {
    local_80 = (undefined4 *)0x0;
    local_78 = 0x8000000000000000;
  }
  else {
    local_80 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_64);
    local_78 = CONCAT44(local_64,uVar15);
    uVar4 = uVar15 & 3;
    puVar11 = local_80;
    if (2 < uVar15 - 1) {
      iVar8 = uVar4 - uVar15;
      puVar10 = local_80;
      do {
        *puVar10 = *puVar24;
        puVar10[1] = puVar24[1];
        puVar10[2] = puVar24[2];
        puVar1 = puVar24 + 3;
        puVar11 = puVar10 + 4;
        puVar24 = puVar24 + 4;
        iVar8 = iVar8 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar11;
      } while (iVar8 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar24;
      puVar11 = puVar11 + 1;
      puVar24 = puVar24 + 1;
    }
  }
  local_70 = *(undefined4 *)(lVar9 + (long)(int)uVar13 * 0x28 + 0x20);
  sVar12 = (short)param_4[2];
  sVar3 = *(short *)((long)param_4 + 10);
  if (0 < (int)sVar3 + (int)sVar12) {
    iVar8 = (int)sVar12;
    uVar13 = 0;
    while( true ) {
      uVar5 = uVar13 >> 5;
      uVar15 = local_80[uVar5];
      uVar4 = 1 << (ulong)(uVar13 & 0x1f);
      iVar19 = *param_4;
      if ((int)sVar12 <= (int)uVar13) {
        iVar19 = param_4[1] - (int)sVar12;
      }
      if ((uVar15 & uVar4) != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x28);
        iVar2 = *(int *)(lVar9 + (long)(int)(iVar19 + uVar13) * 0x14 + 0xc);
        if (iVar2 != -1) {
          if (iVar2 != *param_3) {
            local_98[0] = *(undefined4 *)(lVar9 + (long)(int)(iVar19 + uVar13) * 0x14 + 8);
            local_90[0] = iVar2;
            FUN_031d9978(param_1,local_90,local_98,param_5);
            uVar15 = local_80[uVar5];
          }
          local_80[uVar5] = uVar15 & (uVar4 ^ 0xffffffff);
        }
      }
      if ((iVar8 + sVar3) - 1U == uVar13) break;
      sVar12 = (short)param_4[2];
      uVar13 = uVar13 + 1;
    }
  }
  if (local_84._1_1_ == 0) {
    if (local_88 == 0) {
      iVar19 = (int)param_5[1];
      iVar8 = iVar19 + 1;
      iVar2 = *param_3;
      lVar9 = *param_5;
      if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar19) {
        lVar9 = FUN_031db48c(puVar6,iVar8);
        iVar19 = (int)param_5[1];
        *param_5 = lVar9;
      }
      puVar14 = (undefined1 *)(lVar9 + (long)iVar19 * 0xc);
      *puVar14 = 3;
      *(int *)(puVar14 + 4) = iVar2;
      *(int *)(param_5 + 1) = iVar8;
      local_a8[0] = *param_3;
      local_b0[0] = 0xffffffff;
      FUN_031d87ac(param_1,local_a8,local_b0,param_5 + 2);
      lVar9 = FUN_031dc4f4(param_2,param_3);
      if (lVar9 != 0) {
        FUN_031dc578(param_2,lVar9);
      }
      goto LAB_031d83d8;
    }
    local_84 = 0;
    iVar19 = (int)param_5[1];
    iVar2 = *param_3;
    iVar8 = iVar19 + 1;
    lVar9 = *param_5;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar19) {
      lVar9 = FUN_031db48c(puVar6,iVar8);
      iVar19 = (int)param_5[1];
      *param_5 = lVar9;
    }
    puVar14 = (undefined1 *)(lVar9 + (long)iVar19 * 0xc);
    *puVar14 = 2;
    *(int *)(puVar14 + 4) = iVar2;
    *(int *)(param_5 + 1) = iVar8;
    local_b8[0] = *param_3;
    local_c0[0] = 0xffffffff;
    FUN_031dc2a4(param_1,local_b8,local_c0,param_5 + 2);
    iVar8 = FUN_031ddb18(param_2,param_3);
    if ((int)param_2[1] != iVar8) goto LAB_031d8354;
    lVar9 = *param_2;
    iVar19 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar9 = FUN_031ddc04(puVar6,iVar19,lVar9);
      iVar8 = (int)param_2[1];
      *param_2 = lVar9;
    }
    uVar7 = local_78;
    puVar24 = local_80;
    lVar16 = (long)iVar8;
    piVar17 = (int *)(lVar9 + (long)iVar8 * 0x28);
    *piVar17 = *param_3;
    plVar18 = (long *)(piVar17 + 4);
    *plVar18 = 0;
    piVar17[2] = local_88;
    *(short *)(piVar17 + 3) = local_84;
    puVar23 = (uint *)(piVar17 + 7);
    puVar25 = (uint *)(piVar17 + 6);
    puVar25[0] = 0;
    puVar25[1] = 0x80000000;
    uVar13 = (uint)local_78;
    local_64 = (uint)local_78;
    if ((int)(uint)local_78 < 1) goto LAB_031d816c;
    puVar11 = (undefined4 *)FUN_032cf190(puVar6,4,&local_64);
    *plVar18 = (long)puVar11;
    *puVar25 = uVar13;
    *puVar23 = local_64;
    uVar15 = uVar13 & 3;
    if (2 < uVar13 - 1) {
      iVar8 = uVar15 - uVar13;
      puVar10 = puVar11;
      do {
        *puVar10 = *puVar24;
        puVar10[1] = puVar24[1];
        puVar10[2] = puVar24[2];
        puVar1 = puVar24 + 3;
        puVar11 = puVar10 + 4;
        puVar24 = puVar24 + 4;
        iVar8 = iVar8 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar11;
      } while (iVar8 != 0);
    }
    if ((uVar7 & 3) != 0) {
      do {
        uVar15 = uVar15 - 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (uVar15 != 0);
    }
  }
  else {
    local_84 = (ushort)local_84._1_1_ << 8;
    iVar19 = (int)param_5[1];
    iVar2 = *param_3;
    iVar8 = iVar19 + 1;
    lVar9 = *param_5;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar19) {
      lVar9 = FUN_031db48c(puVar6,iVar8);
      iVar19 = (int)param_5[1];
      *param_5 = lVar9;
    }
    puVar14 = (undefined1 *)(lVar9 + (long)iVar19 * 0xc);
    *puVar14 = 1;
    *(int *)(puVar14 + 4) = iVar2;
    *(int *)(param_5 + 1) = iVar8;
    local_a0[0] = *param_3;
    FUN_031dc058(param_1,local_a0,param_5 + 2);
    iVar8 = FUN_031ddb18(param_2,param_3);
    if ((int)param_2[1] != iVar8) {
LAB_031d8354:
      puVar24 = local_80;
      lVar16 = *param_2;
      lVar9 = lVar16 + (long)iVar8 * 0x28;
      lVar20 = (long)iVar8;
      piVar17 = (int *)(lVar9 + 8);
      *piVar17 = local_88;
      *(short *)(lVar9 + 0xc) = local_84;
      if (piVar17 != &local_88) {
        lVar9 = lVar16 + lVar20 * 0x28;
        puVar22 = (undefined8 *)(lVar9 + 0x10);
        __dest = (void *)*puVar22;
        iVar8 = (uint)local_78;
        lVar21 = (long)(int)(uint)local_78;
        if ((int)(*(uint *)(lVar9 + 0x1c) & 0x3fffffff) < (int)(uint)local_78) {
          __dest = (void *)FUN_032bd1d4(puVar6,local_78 & 0xffffffff,4,__dest,
                                        *(undefined4 *)(lVar16 + lVar20 * 0x28 + 0x18));
          *puVar22 = __dest;
        }
        memcpy(__dest,puVar24,lVar21 << 2);
        *(int *)(lVar16 + lVar20 * 0x28 + 0x18) = iVar8;
      }
      *(undefined4 *)(lVar16 + lVar20 * 0x28 + 0x20) = local_70;
      goto LAB_031d83d8;
    }
    lVar9 = *param_2;
    iVar19 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar9 = FUN_031ddc04(puVar6,iVar19,lVar9);
      iVar8 = (int)param_2[1];
      *param_2 = lVar9;
    }
    uVar7 = local_78;
    puVar24 = local_80;
    lVar16 = (long)iVar8;
    piVar17 = (int *)(lVar9 + (long)iVar8 * 0x28);
    *piVar17 = *param_3;
    plVar18 = (long *)(piVar17 + 4);
    *plVar18 = 0;
    piVar17[2] = local_88;
    *(short *)(piVar17 + 3) = local_84;
    puVar23 = (uint *)(piVar17 + 7);
    puVar25 = (uint *)(piVar17 + 6);
    puVar25[0] = 0;
    puVar25[1] = 0x80000000;
    uVar13 = (uint)local_78;
    local_64 = (uint)local_78;
    if ((int)(uint)local_78 < 1) {
LAB_031d816c:
      *plVar18 = 0;
      *puVar25 = 0;
      *puVar23 = 0x80000000;
    }
    else {
      puVar11 = (undefined4 *)FUN_032cf190(puVar6,4,&local_64);
      *plVar18 = (long)puVar11;
      *puVar25 = uVar13;
      *puVar23 = local_64;
      uVar15 = uVar13 & 3;
      if (2 < uVar13 - 1) {
        iVar8 = uVar15 - uVar13;
        puVar10 = puVar11;
        do {
          *puVar10 = *puVar24;
          puVar10[1] = puVar24[1];
          puVar10[2] = puVar24[2];
          puVar1 = puVar24 + 3;
          puVar11 = puVar10 + 4;
          puVar24 = puVar24 + 4;
          iVar8 = iVar8 + 4;
          puVar10[3] = *puVar1;
          puVar10 = puVar11;
        } while (iVar8 != 0);
      }
      if ((uVar7 & 3) != 0) {
        do {
          uVar15 = uVar15 - 1;
          *puVar11 = *puVar24;
          puVar11 = puVar11 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar15 != 0);
      }
    }
  }
  *(undefined4 *)(lVar9 + lVar16 * 0x28 + 0x20) = local_70;
  *(int *)(param_2 + 1) = iVar19;
LAB_031d83d8:
  uVar7 = local_78;
  uVar13 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar7) && (local_80 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar6,local_80,4,uVar13 & 0x3fffffff);
  }
  return;
}


