/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003485bc; name: FUN_003485bc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003485bc(undefined8 *param_1,uint param_2,byte *param_3,char *param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  char **__src;
  byte *pbVar7;
  ulong *puVar8;
  long lVar9;
  size_t sVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  __tree_node_base *p_Var14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  char **ppcVar21;
  __tree_node_base *p_Var22;
  __tree_node_base *p_Var23;
  byte local_308 [8];
  undefined8 local_300;
  char **local_2f8;
  __tree_node_base *local_2f0;
  __tree_node_base *local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  char *local_1b8;
  undefined4 local_1b0;
  char *local_188;
  undefined4 local_180;
  undefined1 auStack_17c [36];
  char ***local_158;
  uint local_150;
  undefined1 auStack_14c [36];
  char **local_128;
  undefined8 local_120;
  undefined8 local_118;
  byte local_f8 [8];
  undefined1 auStack_f0 [16];
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte *local_b0;
  byte *pbStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  char local_96;
  undefined1 local_90 [8];
  ulong uStack_88;
  char **local_80;
  undefined1 local_78 [8];
  ulong uStack_70;
  char **local_68;
  
  if (*(char *)(param_1[4] + 0x4b) != '\0') {
    return;
  }
  uVar20 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar19 = (uint)((ulong)param_2 << 1);
  local_68 = (char **)0x0;
  uStack_70 = 0;
  local_78 = (undefined1  [8])0x0;
  if (0xffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar19 < 0x17) {
    local_78._1_7_ = 0;
    local_78[0] = (byte)(param_2 << 2);
    ppcVar21 = (char **)((ulong)local_78 | 1);
    if (param_2 != 0) goto LAB_00348660;
  }
  else {
    uVar13 = uVar20 + 0x10 & 0xfffffffffffffff0;
    ppcVar21 = (char **)FUN_002e2e80(PTR_FUN_04373078,uVar13);
    local_78 = (undefined1  [8])(uVar13 | 1);
    uStack_70 = uVar20;
    local_68 = ppcVar21;
LAB_00348660:
    memset(ppcVar21,0x20,uVar20);
  }
  __src = local_68;
  uVar13 = uStack_70;
  *(undefined1 *)((long)ppcVar21 + uVar20) = 0;
  pbStack_a8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_98 = *(undefined2 *)param_4;
  local_96 = param_4[2];
  local_90 = (undefined1  [8])0x0;
  local_80 = (char **)0x0;
  uStack_88 = 0;
  if (((ulong)(byte)local_78[0] & 1) == 0) {
    local_80 = local_68;
    uStack_88 = uStack_70;
    local_90 = local_78;
    if (*param_4 == '\0') {
      local_f8[0] = 0;
      goto LAB_003487a0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003497dc to 003497df has its CatchHandler @ 003497e0 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      ppcVar21 = (char **)(local_90 + 1);
      local_90._1_7_ = 0;
      local_90[0] = (byte)((int)uStack_70 << 1);
      if (uStack_70 == 0) {
        local_90 = (undefined1  [8])0x0;
        if (*param_4 == '\0') {
          local_f8[0] = 0;
          goto LAB_003487a0;
        }
        goto LAB_00348758;
      }
    }
    else {
      uVar20 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      ppcVar21 = (char **)FUN_002e2e80(PTR_FUN_04373078,uVar20);
      local_90 = (undefined1  [8])(uVar20 | 1);
      uStack_88 = uVar13;
      local_80 = ppcVar21;
    }
    memcpy(ppcVar21,__src,uVar13);
    *(undefined1 *)((long)ppcVar21 + uVar13) = 0;
    local_f8[0] = 0;
    if (*param_4 == '\0') goto LAB_003487a0;
  }
LAB_00348758:
  local_118 = 0;
  local_120 = (char **)0x0;
  local_128 = (char **)0x0;
                    /* try { // try from 00348764 to 0034877f has its CatchHandler @ 00349810 */
  FUN_0034c314(param_1,&local_128);
  local_f8[0] = FUN_0034bd2c(param_1[2],&local_128,auStack_f0);
  if (local_128 != (char **)0x0) {
    local_120 = local_128;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  local_f8[0] = local_f8[0] & 1;
LAB_003487a0:
                    /* try { // try from 003487a4 to 003487af has its CatchHandler @ 003498a0 */
  FUN_00347438(local_f8,param_3);
  if ((param_5 & 1) != 0) {
    uVar19 = (uint)(local_78[0] >> 1);
    local_128 = (char **)((ulong)local_78 | 1);
    if (((ulong)(byte)local_78[0] & 1) != 0) {
      uVar19 = (uint)uStack_70;
      local_128 = local_68;
    }
    local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
    pbVar12 = (byte *)*param_1;
    local_158 = *(char ****)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      local_158 = (char ***)(pbVar12 + 1);
    }
    local_188 = (char *)0x0;
    local_180 = 0xffffffff;
    local_1b8 = (char *)0x0;
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
    local_150 = (uint)(*pbVar12 >> 1);
    if ((*pbVar12 & 1) != 0) {
      local_150 = (uint)*(undefined8 *)(pbVar12 + 8);
    }
                    /* try { // try from 00348854 to 00348893 has its CatchHandler @ 003497f4 */
    FUN_003c68c0(param_3,"$0message $1",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
  }
                    /* try { // try from 00348894 to 003488c3 has its CatchHandler @ 003498a0 */
  FUN_002e4094(param_3,&DAT_03940b34,3);
  iVar1 = param_2 + 1;
  FUN_00347690(iVar1,param_1[4],*(undefined8 *)(param_1[2] + 0x10),param_3);
  puVar6 = PTR_FUN_04373078;
  local_2e8 = (__tree_node_base *)0x0;
  local_2e0 = 0;
  local_2f0 = (__tree_node_base *)&local_2e8;
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar18 = 0;
    lVar17 = param_1[5];
    puVar8 = *(ulong **)(lVar17 + 0x30);
    do {
      if (puVar8 != (ulong *)0x0) {
        local_188 = PTR_LAB_04373a98;
        local_1b8 = (char *)(lVar17 + lVar18 * 0x98);
        if (*puVar8 != 0xffffffffffffffff) {
          local_120 = &local_1b8;
          local_128 = &local_188;
                    /* try { // try from 0034897c to 0034898b has its CatchHandler @ 003498d4 */
          local_158 = &local_128;
          std::__call_once(puVar8,&local_158,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if (*(int *)(lVar17 + lVar18 * 0x98 + 0x38) == 10) {
        lVar17 = param_1[5];
        puVar8 = *(ulong **)(lVar17 + lVar18 * 0x98 + 0x30);
        if ((puVar8 != (ulong *)0x0) &&
           (local_188 = (char *)(lVar17 + lVar18 * 0x98), *puVar8 != 0xffffffffffffffff)) {
          local_120 = &local_188;
          local_128 = (char **)PTR_LAB_04373a98;
                    /* try { // try from 003489d8 to 003489e7 has its CatchHandler @ 003498b4 */
          local_158 = &local_128;
          std::__call_once(puVar8,&local_158,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        uVar20 = *(ulong *)(lVar17 + lVar18 * 0x98 + 0x68);
        p_Var23 = (__tree_node_base *)&local_2e8;
        if (local_2e8 == (__tree_node_base *)0x0) {
          p_Var22 = (__tree_node_base *)&local_2e8;
LAB_00348a54:
          p_Var14 = *(__tree_node_base **)p_Var23;
        }
        else {
          uVar13 = *(ulong *)(local_2e8 + 0x20);
          p_Var22 = local_2e8;
          while( true ) {
            while (uVar13 <= uVar20) {
              if (uVar20 <= uVar13) goto LAB_00348a54;
              p_Var23 = p_Var22 + 8;
              p_Var14 = *(__tree_node_base **)p_Var23;
              if (p_Var14 == (__tree_node_base *)0x0) goto LAB_00348a54;
              p_Var22 = p_Var14;
              uVar13 = *(ulong *)(p_Var14 + 0x20);
            }
            p_Var14 = *(__tree_node_base **)p_Var22;
            p_Var23 = p_Var22;
            if (p_Var14 == (__tree_node_base *)0x0) break;
            uVar13 = *(ulong *)(p_Var14 + 0x20);
            p_Var22 = p_Var14;
          }
          p_Var14 = *(__tree_node_base **)p_Var22;
        }
        if (p_Var14 == (__tree_node_base *)0x0) {
          p_Var14 = (__tree_node_base *)FUN_002e2e80(puVar6,0x28);
          *(ulong *)(p_Var14 + 0x20) = uVar20;
          *(__tree_node_base **)(p_Var14 + 0x10) = p_Var22;
          *(undefined8 *)p_Var14 = 0;
          *(undefined8 *)(p_Var14 + 8) = 0;
          *(__tree_node_base **)p_Var23 = p_Var14;
          if (*(__tree_node_base **)local_2f0 == (__tree_node_base *)0x0) {
          }
          else {
            p_Var14 = *(__tree_node_base **)p_Var23;
            local_2f0 = *(__tree_node_base **)local_2f0;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_2e8,p_Var14);
          local_2e0 = local_2e0 + 1;
        }
      }
      lVar18 = lVar18 + 1;
      if (*(int *)(param_1 + 0xd) <= lVar18) break;
      lVar17 = param_1[5];
      puVar8 = *(ulong **)(lVar17 + lVar18 * 0x98 + 0x30);
    } while( true );
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar18 = 0;
    lVar17 = param_1[10];
    puVar8 = *(ulong **)(lVar17 + 0x30);
    do {
      if (puVar8 != (ulong *)0x0) {
        local_188 = PTR_LAB_04373a98;
        local_1b8 = (char *)(lVar17 + lVar18 * 0x98);
        if (*puVar8 != 0xffffffffffffffff) {
          local_120 = &local_1b8;
                    /* try { // try from 00348b38 to 00348b47 has its CatchHandler @ 003498d0 */
          local_158 = &local_128;
          local_128 = &local_188;
          std::__call_once(puVar8,&local_158,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if (*(int *)(lVar17 + lVar18 * 0x98 + 0x38) == 10) {
        lVar17 = param_1[10];
        puVar8 = *(ulong **)(lVar17 + lVar18 * 0x98 + 0x30);
        if ((puVar8 != (ulong *)0x0) &&
           (local_188 = (char *)(lVar17 + lVar18 * 0x98), *puVar8 != 0xffffffffffffffff)) {
          local_128 = (char **)PTR_LAB_04373a98;
                    /* try { // try from 00348b90 to 00348b9f has its CatchHandler @ 003498b0 */
          local_158 = &local_128;
          local_120 = &local_188;
          std::__call_once(puVar8,&local_158,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        uVar20 = *(ulong *)(lVar17 + lVar18 * 0x98 + 0x68);
        p_Var23 = (__tree_node_base *)&local_2e8;
        if (local_2e8 == (__tree_node_base *)0x0) {
          p_Var22 = (__tree_node_base *)&local_2e8;
LAB_00348c0c:
          lVar17 = *(long *)p_Var23;
        }
        else {
          uVar13 = *(ulong *)(local_2e8 + 0x20);
          p_Var22 = local_2e8;
          while( true ) {
            while (uVar13 <= uVar20) {
              if (uVar20 <= uVar13) goto LAB_00348c0c;
              p_Var23 = p_Var22 + 8;
              p_Var14 = *(__tree_node_base **)p_Var23;
              if (p_Var14 == (__tree_node_base *)0x0) goto LAB_00348c0c;
              p_Var22 = p_Var14;
              uVar13 = *(ulong *)(p_Var14 + 0x20);
            }
            p_Var14 = *(__tree_node_base **)p_Var22;
            p_Var23 = p_Var22;
            if (p_Var14 == (__tree_node_base *)0x0) break;
            uVar13 = *(ulong *)(p_Var14 + 0x20);
            p_Var22 = p_Var14;
          }
          lVar17 = *(long *)p_Var22;
        }
        if (lVar17 == 0) {
          p_Var14 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
          *(ulong *)(p_Var14 + 0x20) = uVar20;
          *(__tree_node_base **)(p_Var14 + 0x10) = p_Var22;
          *(undefined8 *)p_Var14 = 0;
          *(undefined8 *)(p_Var14 + 8) = 0;
          *(__tree_node_base **)p_Var23 = p_Var14;
          if (*(__tree_node_base **)local_2f0 == (__tree_node_base *)0x0) {
          }
          else {
            p_Var14 = *(__tree_node_base **)p_Var23;
            local_2f0 = *(__tree_node_base **)local_2f0;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_2e8,p_Var14);
          local_2e0 = local_2e0 + 1;
        }
      }
      lVar18 = lVar18 + 1;
      if (*(int *)(param_1 + 0x10) <= lVar18) break;
      lVar17 = param_1[10];
      puVar8 = *(ulong **)(lVar17 + lVar18 * 0x98 + 0x30);
    } while( true );
  }
  iVar11 = *(int *)((long)param_1 + 0x74);
  if (0 < iVar11) {
    lVar18 = 0;
    uVar20 = param_1[7];
    p_Var23 = local_2e8;
joined_r0x00348c7c:
    for (; p_Var23 != (__tree_node_base *)0x0; p_Var23 = *(__tree_node_base **)p_Var23) {
      if (*(ulong *)(p_Var23 + 0x20) <= uVar20) {
        if (uVar20 <= *(ulong *)(p_Var23 + 0x20)) goto LAB_00348c84;
        p_Var23 = p_Var23 + 8;
      }
    }
                    /* try { // try from 00348cc4 to 00348cd7 has its CatchHandler @ 00349904 */
    FUN_003485bc(uVar20,iVar1,param_3,param_4,1);
    iVar11 = *(int *)((long)param_1 + 0x74);
LAB_00348c84:
    lVar18 = lVar18 + 1;
    if (lVar18 < iVar11) {
      uVar20 = param_1[7] + lVar18 * 0x90;
      p_Var23 = local_2e8;
      goto joined_r0x00348c7c;
    }
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar17 = 0;
    lVar18 = 0;
    do {
                    /* try { // try from 00348cfc to 00348d0b has its CatchHandler @ 00349918 */
      FUN_003479e4(param_1[8] + lVar17,iVar1,param_3,param_4);
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x50;
    } while (lVar18 < *(int *)(param_1 + 0xf));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar17 = 0;
    lVar18 = 0;
    lVar15 = param_1[5];
    lVar9 = *(long *)(lVar15 + 0x58);
    if (lVar9 != 0) goto LAB_00348d7c;
    do {
                    /* try { // try from 00348d44 to 00348d9b has its CatchHandler @ 003498d8 */
      FUN_00349a18(lVar15,iVar1,param_3,param_4);
      while( true ) {
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x98;
        if (*(int *)(param_1 + 0xd) <= lVar18) goto LAB_00348da0;
        lVar15 = param_1[5] + lVar17;
        lVar9 = *(long *)(lVar15 + 0x58);
        if (lVar9 == 0) break;
LAB_00348d7c:
        if (lVar15 == **(long **)(lVar9 + 0x20)) {
          FUN_0034a8b0(lVar9,iVar1,param_3,param_4);
        }
      }
    } while( true );
  }
LAB_00348da0:
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar17 = 0;
    lVar18 = 0;
    do {
      uVar19 = (uint)(local_78[0] >> 1);
      local_128 = (char **)((ulong)local_78 | 1);
      if (((ulong)(byte)local_78[0] & 1) != 0) {
        uVar19 = (uint)uStack_70;
        local_128 = local_68;
      }
      local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
                    /* try { // try from 00348e0c to 00348e13 has its CatchHandler @ 0034990c */
      local_158 = (char ***)FUN_00320300(*(undefined4 *)(param_1[9] + lVar17),auStack_14c);
      sVar10 = strlen((char *)local_158);
      local_150 = (uint)sVar10;
                    /* try { // try from 00348e30 to 00348e37 has its CatchHandler @ 00349910 */
      local_188 = (char *)FUN_00320300(*(int *)(param_1[9] + lVar17 + 4) + -1,auStack_17c);
      sVar10 = strlen(local_188);
      local_1b8 = (char *)0x0;
      local_180 = (undefined4)sVar10;
      local_1b0 = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0xffffffff;
      local_218 = 0;
      local_210 = 0xffffffff;
      local_248 = 0;
      local_240 = 0xffffffff;
      local_278 = 0;
      local_270 = 0xffffffff;
      local_2a8 = 0;
      local_2a0 = 0xffffffff;
      local_2d8 = 0;
      local_2d0 = 0xffffffff;
                    /* try { // try from 00348e7c to 00348eb3 has its CatchHandler @ 00349914 */
      FUN_003c68c0(param_3,"$0  extensions $1 to $2;\n",&local_128,&local_158,&local_188,&local_1b8,
                   &local_1e8,&local_218,&local_248,&local_278,&local_2a8,&local_2d8);
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar18 < *(int *)((long)param_1 + 0x7c));
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar18 = 0;
    lVar15 = 0;
    lVar17 = 0x50;
    do {
      lVar9 = param_1[10];
      lVar16 = *(long *)(lVar9 + lVar17);
      if (lVar16 != lVar15) {
        if (lVar17 != 0x50) {
          local_128 = (char **)((ulong)local_78 | 1);
          uVar19 = (uint)(local_78[0] >> 1);
          if (((ulong)(byte)local_78[0] & 1) != 0) {
            local_128 = local_68;
            uVar19 = (uint)uStack_70;
          }
          local_158 = (char ***)0x0;
          local_150 = 0xffffffff;
          local_188 = (char *)0x0;
          local_180 = 0xffffffff;
          local_1b8 = (char *)0x0;
          local_1b0 = 0xffffffff;
          local_1e8 = 0;
          local_1e0 = 0xffffffff;
          local_218 = 0;
          local_210 = 0xffffffff;
          local_248 = 0;
          local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
          local_240 = 0xffffffff;
          local_278 = 0;
          local_270 = 0xffffffff;
          local_2a8 = 0;
          local_2a0 = 0xffffffff;
          local_2d8 = 0;
          local_2d0 = 0xffffffff;
                    /* try { // try from 00348f88 to 00348fbb has its CatchHandler @ 003498cc */
          FUN_003c68c0(param_3,"$0  }\n",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                       &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
          lVar16 = *(long *)(param_1[10] + lVar17);
        }
        uVar19 = (uint)(local_78[0] >> 1);
        local_128 = (char **)((ulong)local_78 | 1);
        if (((ulong)(byte)local_78[0] & 1) != 0) {
          uVar19 = (uint)uStack_70;
          local_128 = local_68;
        }
        local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
        pbVar12 = *(byte **)(lVar16 + 8);
        local_158 = *(char ****)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          local_158 = (char ***)(pbVar12 + 1);
        }
        local_188 = (char *)0x0;
        local_180 = 0xffffffff;
        local_1b8 = (char *)0x0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_240 = 0xffffffff;
        local_278 = 0;
        local_270 = 0xffffffff;
        local_2a8 = 0;
        local_2a0 = 0xffffffff;
        local_2d8 = 0;
        local_2d0 = 0xffffffff;
        local_150 = (uint)(*pbVar12 >> 1);
        if ((*pbVar12 & 1) != 0) {
          local_150 = (uint)*(undefined8 *)(pbVar12 + 8);
        }
                    /* try { // try from 00349058 to 0034908b has its CatchHandler @ 00349900 */
        FUN_003c68c0(param_3,"$0  extend .$1 {\n",&local_128,&local_158,&local_188,&local_1b8,
                     &local_1e8,&local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        lVar9 = param_1[10];
        lVar15 = lVar16;
      }
                    /* try { // try from 00349098 to 003490a7 has its CatchHandler @ 00349908 */
      FUN_00349a18(lVar9 + lVar17 + -0x50,param_2 + 2,param_3,param_4);
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x98;
    } while (lVar18 < *(int *)(param_1 + 0x10));
    if (0 < *(int *)(param_1 + 0x10)) {
      local_158 = (char ***)0x0;
      local_150 = 0xffffffff;
      local_188 = (char *)0x0;
      local_180 = 0xffffffff;
      uVar19 = (uint)(local_78[0] >> 1);
      local_128 = (char **)((ulong)local_78 | 1);
      if (((ulong)(byte)local_78[0] & 1) != 0) {
        uVar19 = (uint)uStack_70;
        local_128 = local_68;
      }
      local_1b8 = (char *)0x0;
      local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
      local_1b0 = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0xffffffff;
      local_218 = 0;
      local_210 = 0xffffffff;
      local_248 = 0;
      local_240 = 0xffffffff;
      local_278 = 0;
      local_270 = 0xffffffff;
      local_2a8 = 0;
      local_2a0 = 0xffffffff;
      local_2d8 = 0;
      local_2d0 = 0xffffffff;
                    /* try { // try from 00349138 to 00349177 has its CatchHandler @ 003497f0 */
      FUN_003c68c0(param_3,"$0  }\n",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                   &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
    }
  }
  if (0 < *(int *)((long)param_1 + 0x84)) {
    local_158 = (char ***)0x0;
    local_188 = (char *)0x0;
    local_1b8 = (char *)0x0;
    local_150 = 0xffffffff;
    uVar19 = (uint)(local_78[0] >> 1);
    local_128 = (char **)((ulong)local_78 | 1);
    if (((ulong)(byte)local_78[0] & 1) != 0) {
      uVar19 = (uint)uStack_70;
      local_128 = local_68;
    }
    local_180 = 0xffffffff;
    local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
                    /* try { // try from 003491fc to 0034923b has its CatchHandler @ 00349808 */
    FUN_003c68c0(param_3,"$0  reserved ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
    if (0 < *(int *)((long)param_1 + 0x84)) {
      lVar17 = 0;
      lVar18 = 0;
      do {
        piVar2 = (int *)(param_1[0xb] + lVar17);
        iVar1 = *piVar2;
        if (piVar2[1] == iVar1 + 1) {
                    /* try { // try from 0034929c to 003492a3 has its CatchHandler @ 003498bc */
          local_128 = (char **)FUN_00320300(iVar1,(long)&local_120 + 4);
          sVar10 = strlen((char *)local_128);
          local_158 = (char ***)0x0;
          local_120 = (char **)CONCAT44(local_120._4_4_,(int)sVar10);
          local_150 = 0xffffffff;
          local_188 = (char *)0x0;
          local_180 = 0xffffffff;
          local_1b8 = (char *)0x0;
          local_1b0 = 0xffffffff;
          local_1e8 = 0;
          local_1e0 = 0xffffffff;
          local_218 = 0;
          local_210 = 0xffffffff;
          local_248 = 0;
          local_240 = 0xffffffff;
          local_278 = 0;
          local_270 = 0xffffffff;
          local_2a8 = 0;
          local_2a0 = 0xffffffff;
          local_2d8 = 0;
          local_2d0 = 0xffffffff;
                    /* try { // try from 003492f8 to 0034932b has its CatchHandler @ 003498c8 */
          FUN_003c68c0(param_3,&DAT_038eecc1,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                       &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        }
        else {
                    /* try { // try from 00349330 to 00349337 has its CatchHandler @ 003498c0 */
          local_128 = (char **)FUN_00320300(iVar1,(long)&local_120 + 4);
          sVar10 = strlen((char *)local_128);
          local_120 = (char **)CONCAT44(local_120._4_4_,(int)sVar10);
                    /* try { // try from 0034934c to 00349353 has its CatchHandler @ 003498b8 */
          local_158 = (char ***)FUN_00320300(piVar2[1] + -1,auStack_14c);
          sVar10 = strlen((char *)local_158);
          local_188 = (char *)0x0;
          local_150 = (uint)sVar10;
          local_180 = 0xffffffff;
          local_1b8 = (char *)0x0;
          local_1b0 = 0xffffffff;
          local_1e8 = 0;
          local_1e0 = 0xffffffff;
          local_218 = 0;
          local_210 = 0xffffffff;
          local_248 = 0;
          local_240 = 0xffffffff;
          local_278 = 0;
          local_270 = 0xffffffff;
          local_2a8 = 0;
          local_2a0 = 0xffffffff;
          local_2d8 = 0;
          local_2d0 = 0xffffffff;
                    /* try { // try from 003493a0 to 003493d3 has its CatchHandler @ 003498c4 */
          FUN_003c68c0(param_3,"$0 to $1, ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                       &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        }
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 8;
      } while (lVar18 < *(int *)((long)param_1 + 0x84));
    }
    if ((*param_3 & 1) == 0) {
      uVar20 = (ulong)(*param_3 >> 1);
    }
    else {
      uVar20 = *(ulong *)(param_3 + 8);
    }
                    /* try { // try from 003493f0 to 00349407 has its CatchHandler @ 0034989c */
    FUN_0036b20c(param_3,uVar20 - 2,2,&DAT_038a090c,2);
  }
  if (0 < *(int *)(param_1 + 0x11)) {
    local_158 = (char ***)0x0;
    local_188 = (char *)0x0;
    local_1b8 = (char *)0x0;
    local_150 = 0xffffffff;
    uVar19 = (uint)(local_78[0] >> 1);
    local_128 = (char **)((ulong)local_78 | 1);
    if (((ulong)(byte)local_78[0] & 1) != 0) {
      uVar19 = (uint)uStack_70;
      local_128 = local_68;
    }
    local_180 = 0xffffffff;
    local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
                    /* try { // try from 0034948c to 003494cb has its CatchHandler @ 00349804 */
    FUN_003c68c0(param_3,"$0  reserved ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
    puVar6 = PTR_LAB_04373088;
    if (0 < *(int *)(param_1 + 0x11)) {
      lVar18 = 0;
      do {
                    /* try { // try from 00349520 to 00349527 has its CatchHandler @ 003498dc */
        FUN_003201a0(local_308,*(undefined8 *)(param_1[0xc] + lVar18 * 8));
        local_128 = (char **)((ulong)local_308 | 1);
        uVar19 = (uint)(local_308[0] >> 1);
        if ((local_308[0] & 1) != 0) {
          local_128 = local_2f8;
          uVar19 = (uint)local_300;
        }
        local_158 = (char ***)0x0;
        local_150 = 0xffffffff;
        local_188 = (char *)0x0;
        local_180 = 0xffffffff;
        local_1b8 = (char *)0x0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
        local_240 = 0xffffffff;
        local_278 = 0;
        local_270 = 0xffffffff;
        local_2a8 = 0;
        local_2a0 = 0xffffffff;
        local_2d8 = 0;
        local_2d0 = 0xffffffff;
                    /* try { // try from 00349590 to 003495bb has its CatchHandler @ 003498e0 */
        FUN_003c68c0(param_3,"\"$0\", ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                     &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        if ((local_308[0] & 1) != 0) {
          FUN_002e2ea0(puVar6,local_2f8);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(param_1 + 0x11));
    }
    if ((*param_3 & 1) == 0) {
      uVar20 = (ulong)(*param_3 >> 1);
    }
    else {
      uVar20 = *(ulong *)(param_3 + 8);
    }
                    /* try { // try from 003495ec to 00349603 has its CatchHandler @ 0034989c */
    FUN_0036b20c(param_3,uVar20 - 2,2,&DAT_038a090c,2);
  }
  local_158 = (char ***)0x0;
  local_188 = (char *)0x0;
  local_1b8 = (char *)0x0;
  uVar19 = (uint)uStack_70;
  local_128 = local_68;
  if (((ulong)(byte)local_78[0] & 1) == 0) {
    uVar19 = (uint)(local_78[0] >> 1);
    local_128 = (char **)(local_78 + 1);
  }
  local_150 = 0xffffffff;
  local_180 = 0xffffffff;
  local_120 = (char **)CONCAT44(local_120._4_4_,uVar19);
  local_1b0 = 0xffffffff;
  local_1e8 = 0;
  local_1e0 = 0xffffffff;
  local_218 = 0;
  local_210 = 0xffffffff;
  local_248 = 0;
  local_240 = 0xffffffff;
  local_278 = 0;
  local_270 = 0xffffffff;
  local_2a8 = 0;
  local_2a0 = 0xffffffff;
  local_2d8 = 0;
  local_2d0 = 0xffffffff;
                    /* try { // try from 00349678 to 003496b7 has its CatchHandler @ 0034980c */
  FUN_003c68c0(param_3,&DAT_038f98f1,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
               &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
                    /* try { // try from 003496b8 to 003496c3 has its CatchHandler @ 0034989c */
  FUN_003475cc(local_f8,param_3);
  FUN_0036b1c8(&local_2f0,local_2e8);
  if (((ulong)(byte)local_90[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  pbVar12 = local_b0;
  puVar6 = PTR_LAB_04373088;
  if (local_b0 != (byte *)0x0) {
    if (pbStack_a8 != local_b0) {
      bVar3 = pbStack_a8[-0x18];
      pbVar7 = pbStack_a8 + -0x18;
      pbVar5 = pbStack_a8;
      while( true ) {
        pbVar4 = pbVar7;
        if ((bVar3 & 1) != 0) {
          FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar5 + -8));
        }
        if (pbVar12 == pbVar4) break;
        bVar3 = pbVar4[-0x18];
        pbVar7 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    pbStack_a8 = pbVar12;
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if ((uStack_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_b8);
  }
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if (((ulong)local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


