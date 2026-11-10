/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108b2bc; name: FUN_0108b2bc
 */


void FUN_0108b2bc(long param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float *local_130;
  float *local_128;
  long local_120;
  long *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  long local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar21 = *param_2;
  lVar18 = param_2[1];
  uVar24 = lVar18 - lVar21 >> 5;
  param_3[1] = *param_3;
  param_4[1] = *param_4;
  uVar20 = param_3[1] - *param_3 >> 5;
  if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
    if (uVar24 < uVar20) {
      param_3[1] = *param_3 + uVar24 * 0x20;
    }
  }
  else {
    FUN_0108bde4(param_3,uVar24 - uVar20);
  }
  uVar20 = param_4[1] - *param_4 >> 5;
  if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
    if (uVar24 < uVar20) {
      param_4[1] = *param_4 + uVar24 * 0x20;
    }
  }
  else {
    FUN_0108bde4(param_4,uVar24 - uVar20);
  }
  if (uVar24 < 3) {
    if (uVar24 == 1) {
      puVar19 = (undefined8 *)*param_2;
      puVar22 = (undefined8 *)*param_4;
      uVar26 = *puVar19;
      uVar5 = puVar19[1];
      uVar27 = puVar19[2];
      uVar6 = puVar19[3];
      puVar22[2] = uVar27;
      puVar22[3] = uVar6;
      *puVar22 = uVar26;
      puVar22[1] = uVar5;
      puVar19 = (undefined8 *)*param_3;
      *puVar19 = uVar26;
      puVar19[1] = uVar5;
      puVar19[2] = uVar27;
      puVar19[3] = uVar6;
      return;
    }
    if (uVar24 == 2) {
      uVar26 = FUN_0108c188(*param_2);
      uVar27 = FUN_0108c188(*param_2 + 0x20);
      fVar28 = (float)((ulong)uVar26 >> 0x20);
      FUN_0108c1b8(&local_88,
                   CONCAT44(fVar28 + ((float)((ulong)uVar27 >> 0x20) - fVar28) * 0.33333,
                            (float)uVar26 + ((float)uVar27 - (float)uVar26) * 0.33333),*param_3);
      uVar26 = FUN_0108c188(*param_2);
      uVar27 = FUN_0108c188(*param_2 + 0x20);
      fVar28 = (float)((ulong)uVar26 >> 0x20);
      FUN_0108c1b8(&local_88,
                   CONCAT44(fVar28 + ((float)((ulong)uVar27 >> 0x20) - fVar28) * 0.66666,
                            (float)uVar26 + ((float)uVar27 - (float)uVar26) * 0.66666),*param_4);
      return;
    }
    return;
  }
  uVar25 = uVar24 - 2;
  plStack_118 = *(long **)(param_1 + 8);
  local_88 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x0;
  local_68 = 0x3fffffffffffffff;
  uStack_60 = 0;
  local_58 = 0;
  local_90 = 0;
  local_c8 = 0;
  local_100 = 0;
  local_78 = 0;
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  local_b8 = (undefined4 *)0x0;
  local_a0 = 0x3fffffffffffffff;
  uStack_98 = 0;
  local_e8 = 0;
  local_f8 = (undefined4 *)0x0;
  local_f0 = (undefined4 *)0x0;
  local_d8 = 0x3fffffffffffffff;
  uStack_d0 = 0;
  local_120 = 0;
  local_130 = (float *)0x0;
  local_128 = (float *)0x0;
  local_110 = 0x3fffffffffffffff;
  uStack_108 = 0;
  plStack_e0 = plStack_118;
  plStack_a8 = plStack_118;
  plStack_70 = plStack_118;
  FUN_01088c58(&local_88,uVar24);
  uVar20 = (long)local_b8 - (long)local_c0 >> 2;
  if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
    if (uVar24 < uVar20) {
      local_b8 = local_c0 + uVar24;
    }
  }
  else {
    FUN_01088c58(&local_c0,uVar24 - uVar20);
  }
  uVar20 = (long)local_f0 - (long)local_f8 >> 2;
  if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
    if (uVar24 < uVar20) {
      local_f0 = local_f8 + uVar24;
    }
  }
  else {
    FUN_01088c58(&local_f8,uVar24 - uVar20);
  }
  uVar20 = (long)local_128 - (long)local_130 >> 2;
  if (uVar24 < uVar20 || uVar24 - uVar20 == 0) {
    if (uVar24 < uVar20) {
      local_128 = local_130 + uVar24;
    }
  }
  else {
    FUN_01088c58(&local_130,uVar24 - uVar20);
  }
  plVar11 = plStack_118;
  pfVar12 = local_130;
  uVar7 = (int)((ulong)(lVar18 - lVar21) >> 5) - 3;
  lVar18 = 0;
  lVar21 = 0;
  uVar23 = uVar24 - 1;
  uVar20 = -(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5;
  do {
    *local_88 = 0;
    *local_c0 = 0x40000000;
    *local_f8 = 0x3f800000;
    pfVar2 = (float *)(*param_2 + lVar21 * 4);
    fVar28 = pfVar2[8];
    *local_130 = *pfVar2 + fVar28 + fVar28;
    if (1 < uVar25) {
      lVar13 = lVar18;
      lVar14 = 1;
      do {
        lVar17 = lVar14 + 1;
        local_88[lVar14] = 0x3f800000;
        local_c0[lVar14] = 0x40800000;
        local_f8[lVar14] = 0x3f800000;
        lVar3 = *param_2 + lVar13;
        lVar13 = lVar13 + 0x20;
        fVar28 = *(float *)(lVar3 + 0x40);
        local_130[lVar14] = *(float *)(lVar3 + 0x20) * 4.0 + fVar28 + fVar28;
        lVar14 = lVar17;
      } while ((3 - uVar24) + lVar17 != 1);
    }
    local_88[uVar25] = 0x40000000;
    local_c0[uVar25] = 0x40e00000;
    local_f8[uVar25] = 0;
    lVar13 = lVar21 * 4;
    local_130[uVar25] =
         *(float *)(*param_2 + uVar25 * 0x20 + lVar13) * 8.0 +
         *(float *)(*param_2 + uVar23 * 0x20 + lVar13);
    if (1 < uVar23) {
      uVar15 = 0;
      do {
        uVar16 = uVar15 + 1;
        fVar28 = (float)local_88[uVar15 + 1];
        pfVar2 = (float *)(local_c0 + uVar15);
        pfVar2[1] = pfVar2[1] - (fVar28 / *pfVar2) * (float)local_f8[uVar15];
        pfVar4 = local_130 + uVar15;
        pfVar4[1] = pfVar4[1] - (fVar28 / *pfVar2) * *pfVar4;
        uVar15 = uVar16;
      } while (uVar25 != uVar16);
    }
    *(float *)(*param_3 + uVar25 * 0x20 + lVar21 * 4) = local_130[uVar25] / (float)local_c0[uVar25];
    uVar16 = uVar20;
    lVar17 = (long)(int)uVar7;
    uVar15 = uVar23;
    lVar14 = lVar18;
    if (-1 < (int)uVar7) {
      do {
        pfVar2 = (float *)(*param_3 + uVar16);
        uVar16 = uVar16 - 0x20;
        *pfVar2 = (local_130[lVar17] - (float)local_f8[lVar17] * pfVar2[8]) /
                  (float)local_c0[lVar17];
        bVar1 = 0 < lVar17;
        lVar17 = lVar17 + -1;
      } while (bVar1);
    }
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      fVar28 = *(float *)(*param_2 + lVar14 + 0x20);
      *(float *)(*param_4 + lVar14) = (fVar28 + fVar28) - *(float *)(*param_3 + lVar14 + 0x20);
      *(float *)(*param_4 + uVar25 * 0x20 + lVar13) =
           (*(float *)(*param_2 + uVar23 * 0x20 + lVar13) +
           *(float *)(*param_3 + uVar25 * 0x20 + lVar13)) * 0.5;
      lVar14 = lVar14 + 0x20;
    }
    lVar21 = lVar21 + 1;
    lVar18 = lVar18 + 4;
    uVar20 = uVar20 + 4;
  } while (lVar21 != 4);
  puVar8 = local_f8;
  plVar9 = plStack_e0;
  if (local_130 != (float *)0x0) {
    local_128 = local_130;
    lVar21 = local_120 - (long)local_130;
    uVar20 = (**(code **)(*plStack_118 + 0xc0))(plStack_118);
    if ((uVar20 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar11,pfVar12,lVar21,4);
        puVar8 = local_f8;
        plVar9 = plStack_e0;
        goto joined_r0x0108b6f4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pfVar12,lVar21,4);
    puVar8 = local_f8;
    plVar9 = plStack_e0;
  }
joined_r0x0108b6f4:
  local_f8 = puVar8;
  plStack_e0 = plVar9;
  puVar10 = local_c0;
  plVar11 = plStack_a8;
  if (puVar8 != (undefined4 *)0x0) {
    lVar21 = local_e8 - (long)puVar8;
    local_f0 = puVar8;
    uVar20 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar20 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar9,puVar8,lVar21,4);
        puVar10 = local_c0;
        plVar11 = plStack_a8;
        goto joined_r0x0108b90c;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar21,4);
    puVar10 = local_c0;
    plVar11 = plStack_a8;
  }
joined_r0x0108b90c:
  local_c0 = puVar10;
  plStack_a8 = plVar11;
  puVar8 = local_88;
  plVar9 = plStack_70;
  if (puVar10 != (undefined4 *)0x0) {
    lVar21 = local_b0 - (long)puVar10;
    local_b8 = puVar10;
    uVar20 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar20 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar11,puVar10,lVar21,4);
        puVar8 = local_88;
        plVar9 = plStack_70;
        goto joined_r0x0108b804;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar21,4);
    puVar8 = local_88;
    plVar9 = plStack_70;
  }
joined_r0x0108b804:
  if (puVar8 != (undefined4 *)0x0) {
    lVar21 = local_78 - (long)puVar8;
    local_88 = puVar8;
    local_80 = puVar8;
    plStack_70 = plVar9;
    uVar20 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar20 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar9,puVar8,lVar21,4);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar21,4);
  }
  return;
}


