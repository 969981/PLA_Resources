/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051cd40; name: FUN_0051cd40
 */


void FUN_0051cd40(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 void *param_6,void **param_7,undefined8 *param_8,ulong param_9)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  __tree_node_base *p_Var4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  __tree_node_base *p_Var13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  void **ppvStack_a0;
  void *local_98;
  ulong local_90;
  ulong local_80;
  void **ppvStack_78;
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  
  local_58 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  if (param_4 != (void *)0x0) {
    if (0xffffffffffffffef < param_5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < 0x17) {
      local_68 = (ulong)(byte)((int)param_5 << 1);
      pvVar20 = (void *)((ulong)&local_68 | 1);
      if (param_5 != 0) goto LAB_0051cdc8;
    }
    else {
      uVar2 = param_5 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
      local_68 = uVar2 | 1;
      uStack_60 = param_5;
      local_58 = pvVar20;
LAB_0051cdc8:
      memcpy(pvVar20,param_4,param_5);
    }
    *(undefined1 *)((long)pvVar20 + param_5) = 0;
  }
  ppvStack_78 = (void **)0x0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (param_6 != (void *)0x0) {
    if ((void **)0xffffffffffffffef < param_7) {
                    /* try { // try from 0051d280 to 0051d287 has its CatchHandler @ 0051d2a8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (&DAT_00000016 < param_7) {
      pvVar20 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(param_7 + 2) & 0xfffffffffffffff0);
      local_80 = (ulong)(param_7 + 2) & 0xfffffffffffffff0 | 1;
      ppvStack_78 = param_7;
      local_70 = pvVar20;
LAB_0051ce38:
      memcpy(pvVar20,param_6,(size_t)param_7);
    }
    else {
      local_80 = (ulong)(byte)((int)param_7 << 1);
      pvVar20 = (void *)((ulong)&local_80 | 1);
      if (param_7 != (void **)0x0) goto LAB_0051ce38;
    }
    *(undefined1 *)((long)pvVar20 + (long)param_7) = 0;
  }
  local_b0 = local_58;
  uStack_b8 = uStack_60;
  local_c0 = local_68;
  local_98 = local_70;
  ppvStack_a0 = ppvStack_78;
  local_a8 = local_80;
  local_68 = 0;
  uStack_60 = 0;
  lVar9 = param_1 + 0x148;
  local_58 = (void *)0x0;
  ppvStack_78 = (void **)0x0;
  local_70 = (void *)0x0;
  local_80 = 0;
  lVar14 = *(long *)(param_1 + 0x148);
  lVar6 = lVar9;
  if (lVar14 != 0) {
    lVar17 = lVar9;
    do {
      uVar2 = FUN_00524728(lVar14 + 0x20,&local_c0);
      lVar10 = 8;
      if ((uVar2 & 1) == 0) {
        lVar10 = 0;
        lVar17 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + lVar10);
    } while (lVar14 != 0);
    if ((lVar17 != lVar9) && (uVar2 = FUN_00524728(&local_c0,lVar17 + 0x20), (uVar2 & 1) == 0)) {
      lVar6 = lVar17;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if (lVar6 == lVar9) {
    return;
  }
  plVar18 = (long *)(lVar6 + 0x88);
  plVar19 = (long *)*plVar18;
  if (plVar19 == (long *)0x0) {
    return;
  }
  plVar16 = plVar18;
  do {
    iVar1 = FUN_0051f1a8(plVar19[4],*param_8);
    if (iVar1 >= 0) {
      plVar16 = plVar19;
    }
    plVar19 = (long *)plVar19[iVar1 < 0];
  } while (plVar19 != (long *)0x0);
  if (plVar16 == plVar18) {
    return;
  }
  iVar1 = FUN_0051f1a8(*param_8,plVar16[4]);
  if (iVar1 < 0) {
    return;
  }
  p_Var8 = (__tree_node_base *)(plVar16 + 6);
  p_Var4 = *(__tree_node_base **)p_Var8;
  if (p_Var4 == (__tree_node_base *)0x0) {
    return;
  }
  p_Var13 = p_Var8;
  do {
    if (*(ulong *)(p_Var4 + 0x20) >= param_9) {
      p_Var13 = p_Var4;
    }
    p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(ulong *)(p_Var4 + 0x20) < param_9) * 8);
  } while (p_Var4 != (__tree_node_base *)0x0);
  if (p_Var13 == p_Var8) {
    return;
  }
  if (param_9 < *(ulong *)(p_Var13 + 0x20)) {
    return;
  }
  FUN_005b719c(&local_c0,param_9);
  puVar3 = (ulong *)plVar16[9];
  if (puVar3 < (ulong *)plVar16[10]) {
    puVar3[1] = uStack_b8;
    *puVar3 = local_c0;
    puVar3[3] = local_a8;
    puVar3[2] = (ulong)local_b0;
    puVar3[4] = (ulong)ppvStack_a0;
    puVar5 = puVar3 + 5;
    *puVar5 = (ulong)local_98;
    puVar3[6] = local_90;
    if (local_90 == 0) {
      puVar3[4] = (ulong)puVar5;
    }
    else {
      ppvStack_a0 = &local_98;
      *(ulong **)((long)local_98 + 0x10) = puVar5;
      local_98 = (void *)0x0;
      local_90 = 0;
    }
    plVar16[9] = plVar16[9] + 0x38;
    goto LAB_0051d1e4;
  }
  uVar15 = 0x492492492492492;
  lVar9 = (long)puVar3 - plVar16[8] >> 3;
  uVar2 = lVar9 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0051d288 to 0051d28b has its CatchHandler @ 0051d28c */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = plVar16[10] - plVar16[8] >> 3;
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar7 = lVar6 * -0x2492492492492492;
    uVar15 = uVar2;
    if (uVar2 <= uVar7) {
      uVar15 = uVar7;
    }
    if (uVar15 != 0) goto LAB_0051d088;
    lVar6 = 0;
  }
  else {
LAB_0051d088:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar15 * 0x38);
  }
  puVar3 = (ulong *)(lVar6 + lVar9 * 8);
  puVar3[1] = uStack_b8;
  *puVar3 = local_c0;
  puVar3[3] = local_a8;
  puVar3[2] = (ulong)local_b0;
  puVar3[4] = (ulong)ppvStack_a0;
  puVar5 = puVar3 + 5;
  *puVar5 = (ulong)local_98;
  puVar3[6] = local_90;
  if (local_90 == 0) {
    puVar3[4] = (ulong)puVar5;
  }
  else {
    ppvStack_a0 = &local_98;
    *(ulong **)((long)local_98 + 0x10) = puVar5;
    local_98 = (void *)0x0;
    local_90 = 0;
  }
  lVar6 = lVar6 + uVar15 * 0x38;
  lVar9 = plVar16[8];
  lVar14 = plVar16[9];
  if (lVar14 == lVar9) {
    plVar16[8] = (long)puVar3;
    plVar16[9] = (long)(puVar3 + 7);
    plVar16[10] = lVar6;
  }
  else {
    lVar17 = 0;
    do {
      while( true ) {
        lVar10 = lVar17;
        lVar17 = lVar14 + lVar10;
        uVar22 = *(undefined8 *)(lVar17 + -0x30);
        uVar21 = *(undefined8 *)(lVar17 + -0x38);
        uVar23 = *(undefined8 *)(lVar17 + -0x28);
        *(undefined8 *)((long)puVar3 + lVar10 + -0x20) = *(undefined8 *)(lVar17 + -0x20);
        *(undefined8 *)((long)puVar3 + lVar10 + -0x28) = uVar23;
        *(undefined8 *)((long)puVar3 + lVar10 + -0x30) = uVar22;
        *(undefined8 *)((long)puVar3 + lVar10 + -0x38) = uVar21;
        *(undefined8 *)((long)puVar3 + lVar10 + -0x18) = *(undefined8 *)(lVar17 + -0x18);
        lVar11 = *(long *)(lVar17 + -0x10);
        plVar18 = (long *)((long)puVar3 + lVar10 + -0x10);
        *plVar18 = lVar11;
        lVar12 = *(long *)(lVar17 + -8);
        *(long *)((long)puVar3 + lVar10 + -8) = lVar12;
        if (lVar12 != 0) break;
        *(long **)((long)puVar3 + lVar10 + -0x18) = plVar18;
        lVar17 = lVar10 + -0x38;
        if (lVar9 - lVar14 == lVar10 + -0x38) goto LAB_0051d184;
      }
      *(long **)(lVar11 + 0x10) = plVar18;
      *(undefined8 *)(lVar17 + -0x10) = 0;
      *(undefined8 **)(lVar17 + -0x18) = (undefined8 *)(lVar17 + -0x10);
      *(undefined8 *)(lVar17 + -8) = 0;
      lVar17 = lVar10 + -0x38;
    } while (lVar9 - lVar14 != lVar10 + -0x38);
LAB_0051d184:
    lVar9 = plVar16[8];
    lVar14 = plVar16[9];
    plVar16[8] = (long)puVar3 + lVar10 + -0x38;
    plVar16[9] = (long)(puVar3 + 7);
    plVar16[10] = lVar6;
    for (; lVar14 != lVar9; lVar14 = lVar14 + -0x38) {
      FUN_0051f7a0(lVar14 + -0x18,*(undefined8 *)(lVar14 + -0x10));
    }
  }
  if (lVar9 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,lVar9);
  }
LAB_0051d1e4:
  FUN_0051f7a0(&ppvStack_a0,local_98);
  plVar18 = *(long **)(p_Var13 + 8);
  if (*(long **)(p_Var13 + 8) == (long *)0x0) {
    p_Var8 = p_Var13 + 0x10;
    plVar19 = *(long **)p_Var8;
    if ((__tree_node_base *)*plVar19 != p_Var13) {
      do {
        lVar9 = *(long *)p_Var8;
        p_Var8 = (__tree_node_base *)(lVar9 + 0x10);
        plVar19 = *(long **)p_Var8;
      } while (*plVar19 != lVar9);
    }
  }
  else {
    do {
      plVar19 = plVar18;
      plVar18 = (long *)*plVar19;
    } while ((long *)*plVar19 != (long *)0x0);
  }
  if ((__tree_node_base *)plVar16[5] == p_Var13) {
    plVar16[5] = (long)plVar19;
  }
  plVar16[7] = plVar16[7] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)plVar16[6],p_Var13);
  FUN_002e2ea0(PTR_LAB_04373088,p_Var13);
  return;
}


