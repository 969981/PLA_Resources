/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079a930; name: FUN_0079a930
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0079a930(long *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined7 *puVar9;
  bool bVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  size_t sVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  __tree_node_base *p_Var18;
  int *piVar19;
  ulong uVar20;
  long *plVar21;
  int **ppiVar22;
  __tree_node_base *p_Var23;
  ulong uVar24;
  byte *pbVar25;
  __tree_node_base *p_Var26;
  long local_160;
  long lStack_158;
  __tree_node_base *local_140;
  __tree_node_base *local_138;
  long *local_130;
  long local_128;
  int *local_120;
  int *local_118;
  int *local_110;
  long *local_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  byte local_e0;
  undefined7 uStack_df;
  ulong local_d8;
  undefined7 *local_d0;
  long *plStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  byte local_a0;
  undefined7 uStack_9f;
  ulong local_98;
  undefined7 *local_90;
  long *plStack_88;
  long local_80;
  long lStack_78;
  
  *param_1 = (long)(PTR_DAT_04376d70 + 0x10);
  pbVar25 = (byte *)(param_1 + 1);
  pbVar25[0] = 0;
  pbVar25[1] = 0;
  pbVar25[2] = 0;
  pbVar25[3] = 0;
  pbVar25[4] = 0;
  pbVar25[5] = 0;
  pbVar25[6] = 0;
  pbVar25[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar11 = FUN_00612290();
  param_1[3] = 0;
  param_1[4] = lVar11;
  pbVar25[0] = 0;
  pbVar25[1] = 0;
  pbVar25[2] = 0;
  pbVar25[3] = 0;
  pbVar25[4] = 0;
  pbVar25[5] = 0;
  pbVar25[6] = 0;
  pbVar25[7] = 0;
  param_1[2] = 0;
  pbVar15 = (byte *)(param_1 + 5);
  pbVar15[0] = 0;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar11 = FUN_00612290();
  param_1[7] = 0;
  param_1[8] = lVar11;
  pbVar15[0] = 0;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  param_1[6] = 0;
  ppiVar22 = (int **)(param_1 + 9);
  *ppiVar22 = (int *)0x0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar11 = FUN_00612290();
  param_1[0xc] = lVar11;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  lVar11 = FUN_00612290();
  param_1[0x11] = 0;
  param_1[0x12] = lVar11;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  lVar11 = FUN_00612290();
  param_1[0x15] = lVar11;
  param_1[0x16] = 0;
  plVar21 = param_1 + 0x17;
  *plVar21 = 0;
  param_1[0x13] = (long)(param_1 + 0x14);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar11 = FUN_00612290();
  param_1[0x1b] = 0;
  param_1[0x1a] = lVar11;
  *plVar21 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  pbVar16 = *(byte **)(param_2 + 0x40);
  if ((*pbVar16 & 1) == 0) {
    pbVar16 = pbVar16 + 1;
  }
  else {
    pbVar16 = *(byte **)(pbVar16 + 0x10);
  }
  FUN_0079cea0(&local_c0,pbVar16);
  if (pbVar25 != &local_a0) {
    if ((local_a0 & 1) == 0) {
      local_98 = (ulong)(local_a0 >> 1);
      puVar9 = &uStack_9f;
    }
    else {
      puVar9 = local_90;
    }
                    /* try { // try from 0079aa50 to 0079aa57 has its CatchHandler @ 0079af68 */
    FUN_02762710(pbVar25,puVar9,local_98);
  }
  pbVar16 = *(byte **)(param_2 + 0x48);
  if ((*pbVar16 & 1) == 0) {
    pbVar16 = pbVar16 + 1;
  }
  else {
    pbVar16 = *(byte **)(pbVar16 + 0x10);
  }
  FUN_006e8ad0(&local_100,pbVar16);
  if (pbVar15 != &local_e0) {
    if ((local_e0 & 1) == 0) {
      local_d8 = (ulong)(local_e0 >> 1);
      puVar9 = &uStack_df;
    }
    else {
      puVar9 = local_d0;
    }
                    /* try { // try from 0079aaa0 to 0079aaa7 has its CatchHandler @ 0079af64 */
    FUN_02762710(pbVar15,puVar9,local_d8);
  }
  local_118 = (int *)0x0;
  local_110 = (int *)0x0;
  local_120 = (int *)0x0;
  local_108 = (long *)FUN_00612290();
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar24 = 0;
    do {
                    /* try { // try from 0079aae8 to 0079aaf3 has its CatchHandler @ 0079af90 */
      piVar12 = (int *)FUN_00326ad0(param_2 + 0x10,uVar24 & 0xffffffff);
      iVar8 = (uint)(*piVar12 == 2) << 1;
      if (*piVar12 == 1) {
        iVar8 = 1;
      }
      if (local_118 < local_110) {
        *local_118 = iVar8;
        piVar12 = local_120;
        local_118 = local_118 + 1;
        piVar2 = local_110;
      }
      else {
        lVar11 = (long)local_118 - (long)local_120 >> 2;
        uVar20 = lVar11 + 1;
        if (uVar20 >> 0x3e != 0) {
                    /* try { // try from 0079af44 to 0079af4b has its CatchHandler @ 0079af4c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_110 - (long)local_120 >> 2) < 0x1fffffffffffffff) {
          uVar17 = (long)local_110 - (long)local_120 >> 1;
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          if (uVar20 != 0) goto LAB_0079ab58;
          lVar13 = 0;
        }
        else {
          uVar20 = 0x3fffffffffffffff;
LAB_0079ab58:
          lVar13 = (**(code **)(*local_108 + 0x10))(local_108,uVar20 << 2,4);
        }
        piVar12 = (int *)(lVar13 + lVar11 * 4);
        piVar2 = (int *)(lVar13 + uVar20 * 4);
        piVar19 = piVar12 + 1;
        *piVar12 = iVar8;
        if ((long)local_118 - (long)local_120 != 0) {
          uVar20 = ((long)local_118 - (long)local_120) - 4;
          uVar1 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
          if ((uVar1 & 7) != 0) {
            lVar11 = -((ulong)uVar1 & 7);
            do {
              local_118 = local_118 + -1;
              bVar10 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              piVar12 = piVar12 + -1;
              *piVar12 = *local_118;
            } while (bVar10);
          }
          if (0x1b < uVar20) {
            do {
              piVar12[-1] = local_118[-1];
              piVar12[-2] = local_118[-2];
              piVar12[-3] = local_118[-3];
              piVar12[-4] = local_118[-4];
              piVar12[-5] = local_118[-5];
              piVar12[-6] = local_118[-6];
              piVar12[-7] = local_118[-7];
              local_118 = local_118 + -8;
              piVar12 = piVar12 + -8;
              *piVar12 = *local_118;
            } while (local_120 != local_118);
          }
        }
        local_118 = piVar19;
        if (local_120 != (int *)0x0) {
          lVar11 = (long)local_110 - (long)local_120;
          piVar19 = local_120;
          local_120 = piVar12;
          local_110 = piVar2;
          (**(code **)(*local_108 + 0x18))(local_108,piVar19,lVar11,4);
          piVar12 = local_120;
          piVar2 = local_110;
        }
      }
      local_110 = piVar2;
      local_120 = piVar12;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (ulong)(long)*(int *)(param_2 + 0x10));
  }
  if (ppiVar22 != &local_120) {
                    /* try { // try from 0079ac40 to 0079ac47 has its CatchHandler @ 0079af60 */
    FUN_027623c8(ppiVar22,local_120,local_118);
  }
  puVar4 = PTR_DAT_043737a8;
  puVar5 = PTR_DAT_043737a8;
  if (*(undefined **)(param_2 + 0x60) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 0x60);
  }
  lVar11 = FUN_006ddf20(puVar5);
  param_1[0xd] = lVar11;
  if (*(undefined **)(param_2 + 0x68) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x68);
  }
  lVar11 = FUN_006ddf20(puVar4);
  param_1[0xe] = lVar11;
  pbVar16 = *(byte **)(param_2 + 0x50);
  if ((*pbVar16 & 1) == 0) {
    pbVar15 = pbVar16 + 1;
    uVar24 = (ulong)(*pbVar16 >> 1);
  }
  else {
    uVar24 = *(ulong *)(pbVar16 + 8);
    pbVar15 = *(byte **)(pbVar16 + 0x10);
  }
  FUN_027610e4(param_1,pbVar15,uVar24);
  local_138 = (__tree_node_base *)0x0;
  local_130 = (long *)FUN_00612290();
  local_128 = 0;
  lStack_78 = *(long *)(param_2 + 0x38);
                    /* try { // try from 0079acc0 to 0079acc7 has its CatchHandler @ 0079af70 */
  local_140 = (__tree_node_base *)&local_138;
  FUN_0079bf44(&local_80,*(undefined8 *)(lStack_78 + 0x18));
  lStack_158 = lStack_78;
  local_160 = local_80;
  do {
    if (local_160 == 0) {
      if ((__tree_node_base **)(param_1 + 0x13) != &local_140) {
                    /* try { // try from 0079adf0 to 0079adf7 has its CatchHandler @ 0079af5c */
        FUN_02762970(param_1 + 0x13,local_140,(__tree_node_base *)&local_138);
      }
      pbVar16 = *(byte **)(param_2 + 0x58);
      if ((*pbVar16 & 1) == 0) {
        pbVar16 = pbVar16 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar16 + 0x10);
      }
      sVar14 = strlen((char *)pbVar16);
                    /* try { // try from 0079ae1c to 0079ae27 has its CatchHandler @ 0079af6c */
      FUN_02762710(plVar21,pbVar16,sVar14);
      puVar5 = *(undefined **)(param_2 + 0x70);
      if (*(int *)(param_2 + 0x7c) != 9) {
        puVar5 = PTR_DAT_043737a8;
      }
      lVar11 = FUN_006ddf20(puVar5);
      param_1[0x1b] = lVar11;
      FUN_02762c44(&local_140,local_138);
      if (local_120 != (int *)0x0) {
        local_118 = local_120;
        (**(code **)(*local_108 + 0x18))(local_108,local_120,(long)local_110 - (long)local_120,4);
      }
      if ((local_e0 & 1) != 0) {
        (**(code **)(*plStack_c8 + 0x18))
                  (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
      }
      if ((local_100 & 1) != 0) {
        (**(code **)(*plStack_e8 + 0x18))
                  (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
      }
      if ((local_a0 & 1) != 0) {
        (**(code **)(*plStack_88 + 0x18))
                  (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
      }
      if ((local_c0 & 1) != 0) {
        (**(code **)(*plStack_a8 + 0x18))
                  (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
      }
      return;
    }
    piVar12 = *(int **)(local_160 + 8);
    iVar8 = piVar12[1];
    p_Var26 = (__tree_node_base *)&local_138;
    if (local_138 == (__tree_node_base *)0x0) {
      p_Var23 = (__tree_node_base *)&local_138;
LAB_0079ad50:
      p_Var18 = *(__tree_node_base **)p_Var26;
    }
    else {
      iVar6 = *piVar12;
      iVar7 = *(int *)(local_138 + 0x1c);
      iVar3 = iVar7 - iVar6;
      p_Var23 = local_138;
      while( true ) {
        while (iVar7 <= iVar6) {
          if (iVar3 < 0 == SBORROW4(iVar7,iVar6)) goto LAB_0079ad50;
          p_Var26 = p_Var23 + 8;
          p_Var18 = *(__tree_node_base **)p_Var26;
          if (p_Var18 == (__tree_node_base *)0x0) goto LAB_0079ad50;
          iVar7 = *(int *)(p_Var18 + 0x1c);
          iVar3 = iVar7 - iVar6;
          p_Var23 = p_Var18;
        }
        p_Var18 = *(__tree_node_base **)p_Var23;
        p_Var26 = p_Var23;
        if (p_Var18 == (__tree_node_base *)0x0) break;
        iVar7 = *(int *)(p_Var18 + 0x1c);
        iVar3 = iVar7 - iVar6;
        p_Var23 = p_Var18;
      }
      p_Var18 = *(__tree_node_base **)p_Var23;
    }
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = (__tree_node_base *)(**(code **)(*local_130 + 0x10))(local_130,0x28,8);
      *(int *)(p_Var18 + 0x1c) = *piVar12;
      *(undefined4 *)(p_Var18 + 0x20) = 0;
      *(__tree_node_base **)(p_Var18 + 0x10) = p_Var23;
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *(__tree_node_base **)p_Var26 = p_Var18;
      if (*(__tree_node_base **)local_140 == (__tree_node_base *)0x0) {
        p_Var26 = p_Var18;
      }
      else {
        p_Var26 = *(__tree_node_base **)p_Var26;
        local_140 = *(__tree_node_base **)local_140;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_138,p_Var26);
      local_128 = local_128 + 1;
    }
    *(int *)(p_Var18 + 0x20) = iVar8;
                    /* try { // try from 0079adcc to 0079add3 has its CatchHandler @ 0079af74 */
    FUN_0079c0b4(&local_160);
  } while( true );
}


