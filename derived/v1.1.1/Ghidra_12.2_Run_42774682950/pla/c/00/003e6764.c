/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e6764; name: FUN_003e6764
 */


void FUN_003e6764(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  byte local_100;
  char acStack_ff [5];
  undefined2 uStack_fa;
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 local_f0;
  undefined4 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_002ef750();
  puVar2 = PTR_LAB_04373088;
  if (*(long *)(param_1 + 0x158) != 0) {
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    if (*(long **)(param_1 + 0x148) != (long *)(param_1 + 0x150)) {
      pcVar12 = (char *)((ulong)&local_100 | 1);
      plVar11 = *(long **)(param_1 + 0x148);
      do {
                    /* try { // try from 003e6804 to 003e680b has its CatchHandler @ 003e6f00 */
        FUN_003e5690(&local_118,plVar11[4]);
        uVar1 = s_subchannelId_039974fc._0_8_;
        local_100 = 0x18;
        acStack_ff[0] = '\0';
        acStack_ff[1] = '\0';
        acStack_ff[2] = '\0';
        acStack_ff[3] = '\0';
        acStack_ff[4] = '\0';
        uStack_fa = 0;
        cStack_f8 = '\0';
        cStack_f7 = '\0';
        cStack_f6 = '\0';
        cStack_f5 = '\0';
        cStack_f4 = '\0';
        uStack_f2 = 0;
        uStack_f1 = 0;
        local_f0 = 0;
        pcVar12[8] = 'e';
        pcVar12[9] = 'l';
        pcVar12[10] = 'I';
        pcVar12[0xb] = 'd';
        *(undefined8 *)pcVar12 = uVar1;
        cStack_f3 = '\0';
        local_e8 = 4;
        local_d0 = local_108;
        uStack_d8 = uStack_110;
        local_e0 = local_118;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_a0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
                    /* try { // try from 003e6854 to 003e6863 has its CatchHandler @ 003e6e84 */
        local_c8 = &local_c0;
        FUN_003e6510(&local_98,&local_100,1);
                    /* try { // try from 003e6864 to 003e686f has its CatchHandler @ 003e6e70 */
        FUN_003e6f24(&local_80,&local_98);
        FUN_003e9f80(&local_98,local_90);
        FUN_003e7200(&local_b0);
        FUN_003e9f80(&local_c8,local_c0);
        if ((local_e0 & 1) == 0) {
          if ((local_100 & 1) == 0) goto LAB_003e68a0;
LAB_003e68c8:
          FUN_002e2ea0(puVar2,local_f0);
          if ((local_118 & 1) != 0) goto LAB_003e68dc;
LAB_003e68a8:
          plVar4 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) goto LAB_003e6900;
LAB_003e68f0:
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        else {
          FUN_002e2ea0(puVar2,local_d0);
          if ((local_100 & 1) != 0) goto LAB_003e68c8;
LAB_003e68a0:
          if ((local_118 & 1) == 0) goto LAB_003e68a8;
LAB_003e68dc:
          FUN_002e2ea0(puVar2,local_108);
          plVar4 = (long *)plVar11[1];
          if ((long *)plVar11[1] != (long *)0x0) goto LAB_003e68f0;
LAB_003e6900:
          plVar4 = plVar11 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar11) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar6);
          }
        }
        plVar11 = plVar5;
      } while (plVar5 != (long *)(param_1 + 0x150));
    }
    uStack_f1 = 0;
    local_100 = 0x1a;
    acStack_ff[0] = s_subchannelRef_03967cf3[0];
    acStack_ff[1] = s_subchannelRef_03967cf3[1];
    acStack_ff[2] = s_subchannelRef_03967cf3[2];
    acStack_ff[3] = s_subchannelRef_03967cf3[3];
    acStack_ff[4] = s_subchannelRef_03967cf3[4];
    local_f0 = 0;
    uStack_f2 = 0;
    uStack_fa = s_subchannelRef_03967cf3._5_2_;
    cStack_f8 = s_subchannelRef_03967cf3[7];
    cStack_f7 = s_subchannelRef_03967cf3[8];
    cStack_f6 = s_subchannelRef_03967cf3[9];
    cStack_f5 = s_subchannelRef_03967cf3[10];
    cStack_f4 = s_subchannelRef_03967cf3[0xb];
    cStack_f3 = s_subchannelRef_03967cf3[0xc];
                    /* try { // try from 003e695c to 003e696f has its CatchHandler @ 003e6e3c */
    puVar3 = (undefined8 *)FUN_003ea500(param_2,&local_98,&local_100);
    p_Var9 = (__tree_node_base *)*puVar3;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(undefined8 *)(p_Var9 + 0x30) = local_f0;
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(uStack_f1,
                    CONCAT16(uStack_f2,
                             CONCAT15(cStack_f3,
                                      CONCAT14(cStack_f4,
                                               CONCAT13(cStack_f5,
                                                        CONCAT12(cStack_f6,
                                                                 CONCAT11(cStack_f7,cStack_f8)))))))
      ;
      *(ulong *)(p_Var9 + 0x20) = CONCAT26(uStack_fa,CONCAT51(acStack_ff,local_100));
      cStack_f8 = '\0';
      cStack_f7 = '\0';
      cStack_f6 = '\0';
      cStack_f5 = '\0';
      cStack_f4 = '\0';
      cStack_f3 = '\0';
      uStack_f2 = 0;
      uStack_f1 = 0;
      local_f0 = 0;
      local_100 = 0;
      acStack_ff[0] = '\0';
      acStack_ff[1] = '\0';
      acStack_ff[2] = '\0';
      acStack_ff[3] = '\0';
      acStack_ff[4] = '\0';
      uStack_fa = 0;
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(undefined8 *)(p_Var9 + 0x10) = local_98;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar3 = p_Var9;
      if (*(long *)*param_2 == 0) {
        p_Var7 = p_Var9;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var7 = (__tree_node_base *)*puVar3;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var7);
      param_2[2] = param_2[2] + 1;
    }
    p_Var7 = p_Var9 + 0x70;
    lVar6 = *(long *)p_Var7;
    *(undefined4 *)(p_Var9 + 0x38) = 6;
    puVar2 = PTR_LAB_04373088;
    if (lVar6 != 0) {
      lVar8 = *(long *)(p_Var9 + 0x78);
      if (lVar8 == lVar6) {
        lVar8 = lVar6;
      }
      else {
        do {
          lVar10 = lVar8 + -0x50;
          FUN_003e7200(lVar8 + -0x18);
          FUN_003e9f80(lVar8 + -0x30,*(undefined8 *)(lVar8 + -0x28));
          if ((*(byte *)(lVar8 + -0x48) & 1) != 0) {
            FUN_002e2ea0(puVar2,*(undefined8 *)(lVar8 + -0x38));
          }
          lVar8 = lVar10;
        } while (lVar6 != lVar10);
        lVar8 = *(long *)p_Var7;
      }
      *(long *)(p_Var9 + 0x78) = lVar6;
      FUN_002e2ea0(PTR_LAB_04373088,lVar8);
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
    }
    *(undefined8 *)(p_Var9 + 0x78) = uStack_78;
    *(undefined8 *)(p_Var9 + 0x70) = local_80;
    *(undefined8 *)(p_Var9 + 0x80) = local_70;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    if ((local_100 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
    FUN_003e7200(&local_80);
  }
  puVar2 = PTR_LAB_04373088;
  if (*(long *)(param_1 + 0x140) != 0) {
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    if (*(long **)(param_1 + 0x130) != (long *)(param_1 + 0x138)) {
      plVar11 = *(long **)(param_1 + 0x130);
      do {
                    /* try { // try from 003e6b38 to 003e6b3f has its CatchHandler @ 003e6e6c */
        FUN_003e5690(&local_118,plVar11[4]);
        uVar1 = s_channelId_03904cf3._0_8_;
        local_100 = 0x12;
        acStack_ff[0] = '\0';
        acStack_ff[1] = '\0';
        acStack_ff[2] = '\0';
        acStack_ff[3] = '\0';
        acStack_ff[4] = '\0';
        uStack_fa = 0;
        cStack_f8 = '\0';
        cStack_f7 = '\0';
        cStack_f5 = '\0';
        cStack_f4 = '\0';
        cStack_f3 = '\0';
        uStack_f2 = 0;
        uStack_f1 = 0;
        local_f0 = 0;
        ((char *)((ulong)&local_100 | 1))[8] = 'd';
        *(undefined8 *)((ulong)&local_100 | 1) = uVar1;
        cStack_f6 = '\0';
        local_e8 = 4;
        local_d0 = local_108;
        uStack_d8 = uStack_110;
        local_e0 = local_118;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_a0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
                    /* try { // try from 003e6b88 to 003e6b97 has its CatchHandler @ 003e6e68 */
        local_c8 = &local_c0;
        FUN_003e6510(&local_98,&local_100,1);
                    /* try { // try from 003e6b98 to 003e6ba3 has its CatchHandler @ 003e6e64 */
        FUN_003e6f24(&local_80,&local_98);
        FUN_003e9f80(&local_98,local_90);
        FUN_003e7200(&local_b0);
        FUN_003e9f80(&local_c8,local_c0);
        if ((local_e0 & 1) == 0) {
          if ((local_100 & 1) == 0) goto LAB_003e6bd4;
LAB_003e6bfc:
          FUN_002e2ea0(puVar2,local_f0);
          if ((local_118 & 1) != 0) goto LAB_003e6c10;
LAB_003e6bdc:
          plVar4 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) goto LAB_003e6c34;
LAB_003e6c24:
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        else {
          FUN_002e2ea0(puVar2,local_d0);
          if ((local_100 & 1) != 0) goto LAB_003e6bfc;
LAB_003e6bd4:
          if ((local_118 & 1) == 0) goto LAB_003e6bdc;
LAB_003e6c10:
          FUN_002e2ea0(puVar2,local_108);
          plVar4 = (long *)plVar11[1];
          if ((long *)plVar11[1] != (long *)0x0) goto LAB_003e6c24;
LAB_003e6c34:
          plVar4 = plVar11 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar11) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar6);
          }
        }
        plVar11 = plVar5;
      } while (plVar5 != (long *)(param_1 + 0x138));
    }
    cStack_f4 = '\0';
    cStack_f3 = '\0';
    uStack_f2 = 0;
    uStack_f1 = 0;
    local_100 = 0x14;
    cStack_f7 = 'e';
    cStack_f6 = 'f';
    local_f0 = 0;
    cStack_f5 = '\0';
    acStack_ff = s_channelRef_0398dfde._0_5_;
    uStack_fa = s_channelRef_0398dfde._5_2_;
    cStack_f8 = s_channelRef_0398dfde[7];
                    /* try { // try from 003e6c90 to 003e6ca3 has its CatchHandler @ 003e6e2c */
    puVar3 = (undefined8 *)FUN_003ea500(param_2,&local_98,&local_100);
    p_Var9 = (__tree_node_base *)*puVar3;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(undefined8 *)(p_Var9 + 0x30) = local_f0;
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(uStack_f1,
                    CONCAT16(uStack_f2,
                             CONCAT15(cStack_f3,
                                      CONCAT14(cStack_f4,
                                               CONCAT13(cStack_f5,
                                                        CONCAT12(cStack_f6,
                                                                 CONCAT11(cStack_f7,cStack_f8)))))))
      ;
      *(ulong *)(p_Var9 + 0x20) = CONCAT26(uStack_fa,CONCAT51(acStack_ff,local_100));
      cStack_f8 = '\0';
      cStack_f7 = '\0';
      cStack_f6 = '\0';
      cStack_f5 = '\0';
      cStack_f4 = '\0';
      cStack_f3 = '\0';
      uStack_f2 = 0;
      uStack_f1 = 0;
      local_f0 = 0;
      local_100 = 0;
      acStack_ff[0] = '\0';
      acStack_ff[1] = '\0';
      acStack_ff[2] = '\0';
      acStack_ff[3] = '\0';
      acStack_ff[4] = '\0';
      uStack_fa = 0;
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(undefined8 *)(p_Var9 + 0x10) = local_98;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar3 = p_Var9;
      if (*(long *)*param_2 == 0) {
        p_Var7 = p_Var9;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var7 = (__tree_node_base *)*puVar3;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var7);
      param_2[2] = param_2[2] + 1;
    }
    p_Var7 = p_Var9 + 0x70;
    lVar6 = *(long *)p_Var7;
    *(undefined4 *)(p_Var9 + 0x38) = 6;
    puVar2 = PTR_LAB_04373088;
    if (lVar6 != 0) {
      lVar8 = *(long *)(p_Var9 + 0x78);
      if (lVar8 == lVar6) {
        lVar8 = lVar6;
      }
      else {
        do {
          lVar10 = lVar8 + -0x50;
          FUN_003e7200(lVar8 + -0x18);
          FUN_003e9f80(lVar8 + -0x30,*(undefined8 *)(lVar8 + -0x28));
          if ((*(byte *)(lVar8 + -0x48) & 1) != 0) {
            FUN_002e2ea0(puVar2,*(undefined8 *)(lVar8 + -0x38));
          }
          lVar8 = lVar10;
        } while (lVar6 != lVar10);
        lVar8 = *(long *)p_Var7;
      }
      *(long *)(p_Var9 + 0x78) = lVar6;
      FUN_002e2ea0(PTR_LAB_04373088,lVar8);
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
    }
    *(undefined8 *)(p_Var9 + 0x78) = uStack_78;
    *(undefined8 *)(p_Var9 + 0x70) = local_80;
    *(undefined8 *)(p_Var9 + 0x80) = local_70;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
    if ((local_100 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
    FUN_003e7200(&local_80);
  }
                    /* try { // try from 003e6e04 to 003e6e0b has its CatchHandler @ 003e6e60 */
  FUN_002ef790(param_1 + 0x110);
  return;
}


