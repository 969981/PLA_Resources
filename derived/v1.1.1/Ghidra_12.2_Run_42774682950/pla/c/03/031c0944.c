/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0944; name: FUN_031c0944
 */


bool FUN_031c0944(long param_1,long *param_2,long *param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  long lVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ushort *puVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  undefined1 *puVar31;
  uint uVar32;
  int iVar33;
  ulong uVar34;
  int iVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long local_120;
  uint *local_118;
  undefined8 *local_110;
  uint local_f8 [2];
  long local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint local_6c [3];
  
  uVar6 = *(uint *)(param_3 + 1);
  uVar8 = (int)param_2[1] - 1;
  if ((int)uVar6 < 1) {
    iVar24 = 0;
  }
  else {
    if (uVar6 == 1) {
      lVar22 = 0;
      iVar24 = 0;
    }
    else {
      lVar22 = 0;
      iVar24 = 0;
      do {
        piVar4 = (int *)(*param_3 + lVar22 * 4);
        lVar22 = lVar22 + 2;
        if (*piVar4 != -1) {
          iVar24 = iVar24 + 1;
        }
        if (piVar4[1] != -1) {
          iVar24 = iVar24 + 1;
        }
      } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar22);
      if ((uVar6 & 1) == 0) goto LAB_031c09ac;
    }
    if (*(int *)(*param_3 + lVar22 * 4) != -1) {
      iVar24 = iVar24 + 1;
    }
  }
LAB_031c09ac:
  iVar2 = (int)param_2[1] + iVar24;
  uVar6 = iVar2 + 1;
  iVar3 = iVar24 + uVar8;
  lVar22 = tpidr_el0;
  iVar7 = uVar6 * 4;
  local_6c[0] = param_4;
  if (uVar6 == 0) {
    local_118 = (uint *)0x0;
    local_110 = (undefined8 *)0x0;
    if (iVar3 != 0) goto LAB_031c0a64;
LAB_031c1424:
    local_120 = 0;
  }
  else {
    lVar15 = *(long *)(lVar22 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar15;
    }
    lVar11 = *(long *)(lVar15 + 8);
    uVar14 = (ulong)(int)(uVar6 * 0x10 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar11 + 0x10) < uVar14) {
LAB_031c13c0:
      local_110 = (undefined8 *)FUN_032ce670();
      lVar15 = *(long *)(lVar22 + 0x38d490);
    }
    else {
      local_110 = *(undefined8 **)(lVar11 + 0x18);
      uVar14 = (long)local_110 + uVar14;
      if (*(ulong *)(lVar11 + 0x20) < uVar14) goto LAB_031c13c0;
      *(ulong *)(lVar11 + 0x18) = uVar14;
    }
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    uVar14 = (ulong)(int)(iVar7 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar15 + 0x10) < uVar14) {
LAB_031c1408:
      local_118 = (uint *)FUN_032ce670();
    }
    else {
      local_118 = *(uint **)(lVar15 + 0x18);
      uVar14 = (long)local_118 + uVar14;
      if (*(ulong *)(lVar15 + 0x20) < uVar14) goto LAB_031c1408;
      *(ulong *)(lVar15 + 0x18) = uVar14;
    }
    if (iVar3 == 0) goto LAB_031c1424;
LAB_031c0a64:
    lVar15 = *(long *)(lVar22 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    uVar14 = (ulong)(int)(iVar3 * 0x20 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar15 + 0x10) < uVar14) {
LAB_031c13a4:
      local_120 = FUN_032ce670();
    }
    else {
      local_120 = *(long *)(lVar15 + 0x18);
      uVar14 = local_120 + uVar14;
      if (*(ulong *)(lVar15 + 0x20) < uVar14) goto LAB_031c13a4;
      *(ulong *)(lVar15 + 0x18) = uVar14;
    }
  }
  if (uVar6 == 0) {
    puVar12 = (undefined1 *)0x0;
    puVar13 = (undefined4 *)0x0;
    goto LAB_031c0b38;
  }
  lVar15 = *(long *)(lVar22 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar11 = *(long *)(lVar15 + 8);
  uVar14 = (ulong)(int)(iVar2 + 0x80U & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar14) {
LAB_031c1434:
    puVar12 = (undefined1 *)FUN_032ce670();
    lVar15 = *(long *)(lVar22 + 0x38d490);
  }
  else {
    puVar12 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) < puVar12 + uVar14) goto LAB_031c1434;
    *(undefined1 **)(lVar11 + 0x18) = puVar12 + uVar14;
  }
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar15 = *(long *)(lVar15 + 8);
  uVar14 = (ulong)(int)(iVar7 + 0x7fU & 0xffffff80);
  if (uVar14 <= *(ulong *)(lVar15 + 0x10)) {
    puVar13 = *(undefined4 **)(lVar15 + 0x18);
    uVar14 = (long)puVar13 + uVar14;
    if (uVar14 <= *(ulong *)(lVar15 + 0x20)) {
      *(ulong *)(lVar15 + 0x18) = uVar14;
      goto LAB_031c0b38;
    }
  }
  puVar13 = (undefined4 *)FUN_032ce670();
LAB_031c0b38:
  local_110[1] = param_5[1];
  *local_110 = *param_5;
  *local_118 = param_4 >> 0x16;
  *puVar12 = 0;
  *puVar13 = 0;
  uVar14 = (ulong)(*(uint *)*param_2 >> 0x16);
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + uVar14 * 0xf0 + 8);
  FUN_03159b7c(lVar15,*(long *)(*(long *)(lVar15 + 0x20) + 0x18) +
                      ((ulong)*(uint *)*param_2 & 0x3fffff) * 0x18,&local_90);
  if ((int)uVar8 < 1) {
    iVar38 = 1;
    uVar26 = 1;
    iVar21 = 1;
    uVar32 = 1;
  }
  else {
    uVar34 = 0;
    uVar36 = 1;
    iVar21 = 1;
    uVar27 = 1;
    iVar38 = 1;
    uVar37 = 0;
    do {
      uVar1 = uVar37 + 1;
      uVar32 = *(uint *)(*param_2 + uVar37 * 4 + 4);
      uVar23 = (ulong)(uVar32 >> 0x16);
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + uVar23 * 0xf0 + 8);
      FUN_03159b7c(lVar11,*(long *)(*(long *)(lVar11 + 0x20) + 0x18) +
                          ((ulong)uVar32 & 0x3fffff) * 0x18,&local_f0);
      iVar33 = (int)uVar34;
      iVar25 = (int)uVar27;
      iVar35 = (int)uVar36;
      uVar32 = (uint)uVar14;
      if ((iVar24 < 1) || (uVar26 = *(uint *)(*param_3 + uVar37 * 4), uVar26 == 0xffffffff)) {
        auVar41._8_8_ = uStack_88;
        auVar41._0_8_ = local_90;
        auVar10._8_8_ = uStack_78;
        auVar10._0_8_ = uStack_80;
        puVar29 = (undefined8 *)(local_120 + (long)iVar33 * 0x20);
        auVar40._8_8_ = uStack_e8;
        auVar40._0_8_ = local_f0;
        auVar39._4_4_ = iStack_dc;
        auVar39._0_4_ = local_e0;
        auVar39._8_8_ = uStack_d8;
        auVar39 = NEON_fmin(auVar10,auVar39,4);
        auVar40 = NEON_fmax(auVar41,auVar40,4);
        auVar41 = NEON_fmin(auVar40,auVar39,4);
        auVar40 = NEON_fmax(auVar40,auVar39,4);
        puVar29[1] = auVar41._8_8_;
        *puVar29 = auVar41._0_8_;
        puVar29[3] = auVar40._8_8_;
        puVar29[2] = auVar40._0_8_;
        pfVar9 = (float *)(local_110 + (long)iVar35 * 2);
        pfVar9[2] = (auVar41._8_4_ + auVar40._8_4_) * 0.5;
        pfVar9[3] = (auVar41._12_4_ + auVar40._12_4_) * 0.5;
        *pfVar9 = (auVar41._0_4_ + auVar40._0_4_) * 0.5;
        pfVar9[1] = (auVar41._4_4_ + auVar40._4_4_) * 0.5;
        local_118[iVar21] = uVar32;
        puVar12[iVar25] = 0;
        puVar13[iVar38] = 0;
      }
      else {
        uVar14 = (ulong)uVar26 & 0x3fffff;
        lVar16 = *(long *)(lVar15 + 0x20);
        iVar18 = (int)uVar14;
        if (iVar18 < *(int *)(lVar16 + 0x30)) {
          puVar19 = (ushort *)(*(long *)(lVar16 + 0x28) + uVar14 * 8);
        }
        else {
          puVar19 = (ushort *)
                    (*(long *)(lVar16 + 0x60) + (long)(iVar18 - *(int *)(lVar16 + 0x30)) * 8);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0x38) + (ulong)*puVar19 * 0x18;
        FUN_031c05e8(lVar15,lVar16,&local_a0);
        uVar36 = (long)iVar35 + 1;
        (local_110 + (long)iVar35 * 2)[1] = uStack_98;
        local_110[(long)iVar35 * 2] = local_a0;
        uVar34 = (long)iVar33 + 1;
        puVar29 = (undefined8 *)(local_120 + (long)iVar33 * 0x20);
        puVar29[1] = uStack_98;
        *puVar29 = local_a0;
        puVar29[3] = uStack_98;
        puVar29[2] = local_a0;
        uVar27 = (long)iVar25 + 1;
        local_118[iVar21] = uVar32;
        puVar12[iVar25] = 1;
        lVar17 = *(long *)(*(long *)(lVar15 + 0x20) + 0x38);
        lVar20 = (long)iVar38;
        puVar13[iVar38] =
             *(undefined4 *)
              (*(long *)(lVar17 + 0x48) + (long)(int)(*(int *)(lVar17 + 0xbc) * (uint)*puVar19) * 4)
        ;
        FUN_031bff48(lVar11,lVar16,&local_a0);
        (local_110 + uVar36 * 2)[1] = uStack_98;
        local_110[uVar36 * 2] = local_a0;
        puVar29 = (undefined8 *)(local_120 + uVar34 * 0x20);
        puVar29[1] = uStack_98;
        *puVar29 = local_a0;
        puVar29[3] = uStack_98;
        puVar29[2] = local_a0;
        local_118[(long)iVar21 + 1] = uVar32;
        iVar38 = (int)(lVar20 + 1);
        puVar12[uVar27] = 2;
        lVar15 = *(long *)(*(long *)(lVar15 + 0x20) + 0x38);
        puVar13[lVar20 + 1] =
             *(undefined4 *)
              (*(long *)(lVar15 + 0x48) + (long)(int)(*(int *)(lVar15 + 0xbc) * (uint)*puVar19) * 4)
        ;
        iVar21 = (int)((long)iVar21 + 1);
      }
      uStack_80 = CONCAT44(iStack_dc,local_e0);
      uVar32 = (int)uVar36 + 1;
      uVar36 = (ulong)uVar32;
      iVar21 = iVar21 + 1;
      uVar34 = (ulong)((int)uVar34 + 1);
      uVar26 = (int)uVar27 + 1;
      uVar27 = (ulong)uVar26;
      iVar38 = iVar38 + 1;
      uStack_88 = uStack_e8;
      local_90 = local_f0;
      uStack_78 = uStack_d8;
      lVar15 = lVar11;
      uVar14 = uVar23;
      uVar37 = uVar1;
    } while (uVar8 != uVar1);
  }
  (local_110 + (long)(int)uVar32 * 2)[1] = param_6[1];
  local_110[(long)(int)uVar32 * 2] = *param_6;
  puVar28 = local_6c;
  if ((int)param_2[1] != 0) {
    puVar28 = (uint *)(*param_2 + (long)((int)param_2[1] + -1) * 4);
  }
  local_118[iVar21] = *puVar28 >> 0x16;
  puVar12[(int)uVar26] = 0;
  puVar13[iVar38] = 0;
  if (1 < (int)uVar32) {
    lVar16 = (ulong)uVar32 - 1;
    lVar11 = lVar16;
    lVar15 = local_120;
    puVar29 = local_110 + 2;
    do {
      uStack_e8 = puVar29[-1];
      local_f0 = puVar29[-2];
      uStack_98 = puVar29[3];
      local_a0 = puVar29[2];
      uStack_a8 = puVar29[1];
      local_b0 = *puVar29;
      FUN_031c1528(&local_f0,&local_a0,lVar15,&local_b0);
      lVar11 = lVar11 + -1;
      lVar15 = lVar15 + 0x20;
      puVar29[1] = uStack_a8;
      *puVar29 = local_b0;
      puVar29 = puVar29 + 2;
    } while (lVar11 != 0);
    lVar11 = lVar16;
    lVar15 = local_120;
    puVar29 = local_110 + 2;
    do {
      uStack_e8 = puVar29[-1];
      local_f0 = puVar29[-2];
      uStack_98 = puVar29[3];
      local_a0 = puVar29[2];
      uStack_a8 = puVar29[1];
      local_b0 = *puVar29;
      FUN_031c1528(&local_f0,&local_a0,lVar15,&local_b0);
      lVar11 = lVar11 + -1;
      lVar15 = lVar15 + 0x20;
      puVar29[1] = uStack_a8;
      *puVar29 = local_b0;
      puVar29 = puVar29 + 2;
    } while (lVar11 != 0);
    puVar29 = local_110 + 2;
    lVar15 = local_120;
    do {
      uStack_e8 = puVar29[-1];
      local_f0 = puVar29[-2];
      uStack_98 = puVar29[3];
      local_a0 = puVar29[2];
      uStack_a8 = puVar29[1];
      local_b0 = *puVar29;
      FUN_031c1528(&local_f0,&local_a0,lVar15,&local_b0);
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + 0x20;
      puVar29[1] = uStack_a8;
      *puVar29 = local_b0;
      puVar29 = puVar29 + 2;
    } while (lVar16 != 0);
  }
  FUN_031ba1b4(&local_f0);
  FUN_031ba1bc(&local_f0,param_7,param_8,param_9);
  if (0 < (int)uVar6) {
    uVar14 = (ulong)uVar6;
    puVar28 = local_118;
    puVar30 = puVar13;
    puVar31 = puVar12;
    puVar29 = local_110;
    do {
      uStack_98 = puVar29[1];
      local_a0 = *puVar29;
      local_f8[0] = *puVar28;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_031ba1d4(&local_f0,&local_a0,&local_b0,local_f8,*puVar30,*puVar31);
      uVar14 = uVar14 - 1;
      puVar28 = puVar28 + 1;
      puVar30 = puVar30 + 1;
      puVar31 = puVar31 + 1;
      puVar29 = puVar29 + 2;
    } while (uVar14 != 0);
  }
  FUN_031ba39c(&local_f0);
  bVar5 = local_f0 != 0;
  lVar15 = *(long *)(lVar22 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar11 = *(long *)(lVar15 + 8);
  uVar14 = (ulong)(int)(iVar7 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar11 + 0x10) < uVar14) || (*(long *)(lVar11 + 0x18) != (long)puVar13 + uVar14))
     || (*(undefined4 **)(lVar11 + 0x28) == puVar13)) {
    FUN_032cedf0(lVar11,puVar13,uVar14);
    lVar15 = *(long *)(lVar22 + 0x38d490);
  }
  else {
    *(undefined4 **)(lVar11 + 0x18) = puVar13;
  }
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar11 = *(long *)(lVar15 + 8);
  uVar36 = (ulong)(int)(iVar2 + 0x80U & 0xffffff80);
  if (((*(ulong *)(lVar11 + 0x10) < uVar36) || (*(undefined1 **)(lVar11 + 0x18) != puVar12 + uVar36)
      ) || (*(undefined1 **)(lVar11 + 0x28) == puVar12)) {
    FUN_032cedf0(lVar11,puVar12);
    lVar15 = *(long *)(lVar22 + 0x38d490);
  }
  else {
    *(undefined1 **)(lVar11 + 0x18) = puVar12;
  }
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar11 = *(long *)(lVar15 + 8);
  uVar36 = (ulong)(int)(iVar3 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar11 + 0x10) < uVar36) || (*(long *)(lVar11 + 0x18) != local_120 + uVar36)) ||
     (*(long *)(lVar11 + 0x28) == local_120)) {
    FUN_032cedf0(lVar11,local_120);
    lVar15 = *(long *)(lVar22 + 0x38d490);
  }
  else {
    *(long *)(lVar11 + 0x18) = local_120;
  }
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar11 = *(long *)(lVar15 + 8);
  if (((*(ulong *)(lVar11 + 0x10) < uVar14) ||
      (*(long *)(lVar11 + 0x18) != (long)local_118 + uVar14)) ||
     (*(uint **)(lVar11 + 0x28) == local_118)) {
    FUN_032cedf0(lVar11,local_118,uVar14);
    lVar15 = *(long *)(lVar22 + 0x38d490);
  }
  else {
    *(uint **)(lVar11 + 0x18) = local_118;
  }
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar15;
  }
  lVar22 = *(long *)(lVar15 + 8);
  uVar14 = (ulong)(int)(uVar6 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar22 + 0x10) < uVar14) ||
      (*(long *)(lVar22 + 0x18) != (long)local_110 + uVar14)) ||
     (*(undefined8 **)(lVar22 + 0x28) == local_110)) {
    FUN_032cedf0(lVar22,local_110);
  }
  else {
    *(undefined8 **)(lVar22 + 0x18) = local_110;
  }
  return bVar5 || iStack_dc < local_e0;
}


