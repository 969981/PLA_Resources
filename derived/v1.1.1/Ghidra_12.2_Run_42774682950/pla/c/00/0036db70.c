/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036db70; name: FUN_0036db70
 */


void FUN_0036db70(undefined8 *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                 long *param_6,byte *param_7)

{
  __tree_node_base *p_Var1;
  byte *pbVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  __tree_node_base *p_Var14;
  long lVar15;
  undefined8 uVar16;
  void *pvVar17;
  size_t sVar18;
  __tree_node_base *p_Var19;
  ulong uVar20;
  long lVar21;
  byte *local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *pvStack_90;
  long local_88;
  long lStack_80;
  ulong local_78;
  size_t local_70;
  void *local_68;
  
  lVar6 = FUN_0036e198(param_1[1],0);
  uVar7 = FUN_003b0228(param_4);
  if ((uVar7 & 1) == 0) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    pbVar2 = (byte *)param_2[2];
    bVar5 = ((byte)*param_2 & 1) != 0;
    sVar18 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar5) {
      sVar18 = param_2[1];
    }
    if (!bVar5) {
      pbVar2 = (byte *)((long)param_2 + 1);
    }
    if (0xffffffffffffffef < sVar18 + 1) {
                    /* try { // try from 0036e0a8 to 0036e0af has its CatchHandler @ 0036e160 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar18 + 1 < 0x17) {
      local_78 = (ulong)(byte)((int)sVar18 << 1);
      pvVar17 = (void *)((ulong)&local_78 | 1);
      if (sVar18 == 0) goto LAB_0036dcac;
    }
    else {
      uVar7 = sVar18 + 0x11 & 0xfffffffffffffff0;
      pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      local_78 = uVar7 | 1;
      local_70 = sVar18;
      local_68 = pvVar17;
    }
    memcpy(pvVar17,pbVar2,sVar18);
LAB_0036dcac:
    *(undefined1 *)((long)pvVar17 + sVar18) = 0;
                    /* try { // try from 0036dcb0 to 0036dcc3 has its CatchHandler @ 0036e160 */
    FUN_002e4094(&local_78,&DAT_0389ff53,1);
    uVar7 = param_3[1];
    pbVar2 = (byte *)param_3[2];
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = (byte *)((long)param_3 + 1);
      uVar7 = (ulong)(byte)((byte)*param_3 >> 1);
    }
                    /* try { // try from 0036dcdc to 0036dce3 has its CatchHandler @ 0036e15c */
    puVar8 = (ulong *)FUN_002e4094(&local_78,pbVar2,uVar7);
    uStack_c8 = puVar8[1];
    local_d0 = (byte *)*puVar8;
    local_c0 = (void *)puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 0036dcfc to 0036dd17 has its CatchHandler @ 0036e134 */
    FUN_0034dc2c(param_1,&local_d0,param_4,7,"Uninterpreted option is missing name or value.");
    if (((ulong)local_d0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_c0);
    }
    if ((local_78 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
    }
    return;
  }
  FUN_0031f010(&local_d0,param_4);
                    /* try { // try from 0036dbd0 to 0036dbdb has its CatchHandler @ 0036e174 */
  FUN_0031e604(lVar6,&local_d0);
  if (((ulong)local_d0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c0);
  }
  *(long *)(param_5 + 0x20) = lVar6;
  if (*(int *)(lVar6 + 0x38) < 1) goto LAB_0036df00;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = (byte *)0x0;
  if ((*param_2 & 1) == 0) {
    uStack_c8 = param_2[1];
    local_d0 = (byte *)*param_2;
    local_c0 = (void *)param_2[2];
  }
  else {
    uVar7 = param_2[1];
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = (void *)param_2[2];
    if (uVar7 < 0x17) {
      local_d0 = (byte *)(ulong)(byte)((int)uVar7 << 1);
      pvVar9 = (void *)((ulong)&local_d0 | 1);
      if (uVar7 != 0) goto LAB_0036dda4;
    }
    else {
      uVar20 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar20);
      local_d0 = (byte *)(uVar20 | 1);
      uStack_c8 = uVar7;
      local_c0 = pvVar9;
LAB_0036dda4:
      memcpy(pvVar9,pvVar17,uVar7);
    }
    *(undefined1 *)((long)pvVar9 + uVar7) = 0;
  }
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  if ((*param_3 & 1) == 0) {
    uStack_b0 = param_3[1];
    local_b8 = *param_3;
    local_a8 = (void *)param_3[2];
  }
  else {
    uVar7 = param_3[1];
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036e0c4 to 0036e0c7 has its CatchHandler @ 0036e0c8 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = (void *)param_3[2];
    if (uVar7 < 0x17) {
      pvVar9 = (void *)((long)&local_b8 + 1);
      local_b8 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_0036de38;
    }
    else {
      uVar20 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar20);
      local_b8 = uVar20 | 1;
      uStack_b0 = uVar7;
      local_a8 = pvVar9;
LAB_0036de38:
      memcpy(pvVar9,pvVar17,uVar7);
    }
    *(undefined1 *)((long)pvVar9 + uVar7) = 0;
  }
  local_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (param_6[1] - *param_6 != 0) {
    uVar7 = param_6[1] - *param_6 >> 2;
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036e0b8 to 0036e0bb has its CatchHandler @ 0036e0d8 */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_a0 = (void *)FUN_002e2e80(PTR_FUN_04373078);
    pvStack_90 = (void *)((long)local_a0 + uVar7 * 4);
    sVar18 = param_6[1] - *param_6;
    local_98 = local_a0;
    if (0 < (long)sVar18) {
      memcpy(local_a0,(void *)*param_6,sVar18);
      local_98 = (void *)((long)local_98 + sVar18);
    }
  }
  local_88 = param_4;
  lStack_80 = lVar6;
                    /* try { // try from 0036deb0 to 0036deb7 has its CatchHandler @ 0036e0e8 */
  FUN_0036b6d0(param_1 + 3,&local_d0);
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if ((local_b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a8);
  }
  if (((ulong)local_d0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c0);
  }
LAB_0036df00:
  if ((*(ulong *)(param_4 + 8) & 1) == 0) {
    plVar10 = (long *)FUN_0030ca24();
    if (*plVar10 == plVar10[1]) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffe;
    plVar10 = (long *)(uVar7 + 8);
    if (*plVar10 == *(long *)(uVar7 + 0x10)) {
      return;
    }
  }
  local_d0 = *(byte **)(param_7 + 0x10);
  if ((*param_7 & 1) == 0) {
    local_d0 = param_7 + 1;
  }
  lVar6 = FUN_00364a2c(param_1[1] + 0x130,&local_d0);
  puVar3 = PTR_LAB_04373088;
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x18) != 1) {
    return;
  }
  lVar15 = *plVar10;
  lVar21 = plVar10[1];
  if ((int)((ulong)(lVar21 - lVar15) >> 4) < 1) {
    return;
  }
  uVar16 = *(undefined8 *)(lVar6 + 0x20);
  lVar6 = 0;
  p_Var1 = (__tree_node_base *)(param_1 + 0x10);
  do {
    lVar11 = FUN_00342b48(*param_1,uVar16,*(undefined4 *)(lVar15 + lVar6 * 0x10));
    if ((lVar11 != 0) &&
       (p_Var12 = *(__tree_node_base **)p_Var1, p_Var12 != (__tree_node_base *)0x0)) {
      uVar7 = *(ulong *)(lVar11 + 0x28);
      p_Var14 = p_Var12;
      p_Var19 = p_Var1;
      do {
        if (*(ulong *)(p_Var14 + 0x20) >= uVar7) {
          p_Var19 = p_Var14;
        }
        p_Var14 = *(__tree_node_base **)(p_Var14 + (ulong)(*(ulong *)(p_Var14 + 0x20) < uVar7) * 8);
      } while (p_Var14 != (__tree_node_base *)0x0);
      if ((p_Var19 != p_Var1) && (*(ulong *)(p_Var19 + 0x20) <= uVar7)) {
        plVar4 = *(long **)(p_Var19 + 8);
        if (*(long **)(p_Var19 + 8) == (long *)0x0) {
          p_Var14 = p_Var19 + 0x10;
          plVar13 = *(long **)p_Var14;
          if ((__tree_node_base *)*plVar13 != p_Var19) {
            do {
              lVar15 = *(long *)p_Var14;
              p_Var14 = (__tree_node_base *)(lVar15 + 0x10);
              plVar13 = *(long **)p_Var14;
            } while (*plVar13 != lVar15);
          }
        }
        else {
          do {
            plVar13 = plVar4;
            plVar4 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        if ((__tree_node_base *)param_1[0xf] == p_Var19) {
          param_1[0xf] = plVar13;
        }
        param_1[0x11] = param_1[0x11] + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>(p_Var12,p_Var19);
        FUN_002e2ea0(puVar3,p_Var19);
        lVar15 = *plVar10;
        lVar21 = plVar10[1];
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 < (int)((ulong)(lVar21 - lVar15) >> 4));
  return;
}


