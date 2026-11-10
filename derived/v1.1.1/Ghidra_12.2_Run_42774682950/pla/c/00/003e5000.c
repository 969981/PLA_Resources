/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e5000; name: FUN_003e5000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003e5000(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  byte local_80;
  undefined6 uStack_7f;
  char cStack_79;
  undefined4 uStack_78;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  undefined1 uStack_71;
  char *local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  lStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_003e4eec(param_1,&local_50);
  if (local_50 != 0) {
    FUN_003e5690(&local_68);
    cStack_72 = 0;
    uStack_71 = 0;
    local_80 = 0x18;
    cStack_74 = 100;
    local_70 = (char *)0x0;
    cStack_73 = 0;
    uStack_7f = s_callsStarted_039b1450._0_6_;
    cStack_79 = s_callsStarted_039b1450[6];
    uStack_78._0_1_ = s_callsStarted_039b1450[7];
    uStack_78 = CONCAT31(0x657472,(char)uStack_78);
                    /* try { // try from 003e5060 to 003e506f has its CatchHandler @ 003e5644 */
    puVar2 = (undefined8 *)FUN_003ea500(param_2,&local_28,&local_80);
    p_Var3 = (__tree_node_base *)*puVar2;
    if (p_Var3 == (__tree_node_base *)0x0) {
      p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(char **)(p_Var3 + 0x30) = local_70;
      *(ulong *)(p_Var3 + 0x28) =
           CONCAT17(uStack_71,CONCAT16(cStack_72,CONCAT15(cStack_73,CONCAT14(cStack_74,uStack_78))))
      ;
      *(ulong *)(p_Var3 + 0x20) = CONCAT17(cStack_79,CONCAT61(uStack_7f,local_80));
      uStack_78 = 0;
      cStack_74 = 0;
      cStack_73 = 0;
      cStack_72 = 0;
      uStack_71 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uStack_7f = 0;
      cStack_79 = '\0';
      *(undefined8 *)(p_Var3 + 0x60) = 0;
      *(undefined8 *)(p_Var3 + 0x58) = 0;
      *(undefined8 *)(p_Var3 + 0x68) = 0;
      *(undefined8 *)(p_Var3 + 0x70) = 0;
      *(__tree_node_base **)(p_Var3 + 0x58) = p_Var3 + 0x60;
      *(undefined8 *)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      *(undefined8 *)(p_Var3 + 0x40) = 0;
      *(undefined8 *)(p_Var3 + 0x38) = 0;
      *(undefined8 *)(p_Var3 + 0x78) = 0;
      *(undefined8 *)(p_Var3 + 0x80) = 0;
      *(undefined8 *)(p_Var3 + 0x10) = local_28;
      *(undefined8 *)p_Var3 = 0;
      *(undefined8 *)(p_Var3 + 8) = 0;
      *puVar2 = p_Var3;
      if (*(long *)*param_2 == 0) {
        p_Var4 = p_Var3;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var4 = (__tree_node_base *)*puVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var4);
      param_2[2] = param_2[2] + 1;
    }
    p_Var4 = p_Var3 + 0x40;
    *(undefined4 *)(p_Var3 + 0x38) = 4;
    if (((byte)*p_Var4 & 1) == 0) {
      *(undefined2 *)p_Var4 = 0;
    }
    else {
      **(undefined1 **)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      if (((byte)p_Var3[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var3 + 0x50));
        *(undefined8 *)(p_Var3 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var3 + 0x50) = local_58;
    *(undefined8 *)(p_Var3 + 0x48) = uStack_60;
    *(ulong *)p_Var4 = local_68;
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0;
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      if ((local_68 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_58);
      }
    }
    auVar5 = FUN_002eee50(local_38);
    FUN_002ef4e0(auVar5._0_8_,auVar5._8_8_,1);
    FUN_002ec330(&local_68);
    uStack_78 = 0;
    cStack_74 = 0;
    cStack_73 = 0;
    cStack_72 = 0;
    uStack_71 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
    uStack_7f = 0;
    cStack_79 = 0;
    local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar1 = s_lastCallStartedTimestamp_03949ecb._0_8_;
    uStack_78 = (undefined4)_UNK_03889048;
    cStack_74 = (char)((ulong)_UNK_03889048 >> 0x20);
    cStack_73 = (char)((ulong)_UNK_03889048 >> 0x28);
    cStack_72 = (char)((ulong)_UNK_03889048 >> 0x30);
    uStack_71 = (undefined1)((ulong)_UNK_03889048 >> 0x38);
    local_80 = (byte)_DAT_03889040;
    uStack_7f = (undefined6)((ulong)_DAT_03889040 >> 8);
    cStack_79 = (char)((ulong)_DAT_03889040 >> 0x38);
    *(undefined8 *)(local_70 + 8) = s_lastCallStartedTimestamp_03949ecb._8_8_;
    *(undefined8 *)local_70 = uVar1;
    *(undefined8 *)(local_70 + 0x10) = s_lastCallStartedTimestamp_03949ecb._16_8_;
    local_70[0x18] = '\0';
                    /* try { // try from 003e51f0 to 003e51ff has its CatchHandler @ 003e5634 */
    puVar2 = (undefined8 *)FUN_003ea500(param_2,&local_28,&local_80);
    p_Var3 = (__tree_node_base *)*puVar2;
    if (p_Var3 == (__tree_node_base *)0x0) {
      p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(char **)(p_Var3 + 0x30) = local_70;
      *(ulong *)(p_Var3 + 0x28) =
           CONCAT17(uStack_71,CONCAT16(cStack_72,CONCAT15(cStack_73,CONCAT14(cStack_74,uStack_78))))
      ;
      *(ulong *)(p_Var3 + 0x20) = CONCAT17(cStack_79,CONCAT61(uStack_7f,local_80));
      uStack_78 = 0;
      cStack_74 = '\0';
      cStack_73 = '\0';
      cStack_72 = '\0';
      uStack_71 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uStack_7f._0_1_ = '\0';
      uStack_7f._1_1_ = '\0';
      uStack_7f._2_1_ = '\0';
      uStack_7f._3_1_ = '\0';
      uStack_7f._4_1_ = '\0';
      uStack_7f._5_1_ = '\0';
      cStack_79 = '\0';
      *(undefined8 *)(p_Var3 + 0x60) = 0;
      *(undefined8 *)(p_Var3 + 0x58) = 0;
      *(undefined8 *)(p_Var3 + 0x68) = 0;
      *(undefined8 *)(p_Var3 + 0x70) = 0;
      *(__tree_node_base **)(p_Var3 + 0x58) = p_Var3 + 0x60;
      *(undefined8 *)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      *(undefined8 *)(p_Var3 + 0x40) = 0;
      *(undefined8 *)(p_Var3 + 0x38) = 0;
      *(undefined8 *)(p_Var3 + 0x78) = 0;
      *(undefined8 *)(p_Var3 + 0x80) = 0;
      *(undefined8 *)(p_Var3 + 0x10) = local_28;
      *(undefined8 *)p_Var3 = 0;
      *(undefined8 *)(p_Var3 + 8) = 0;
      *puVar2 = p_Var3;
      if (*(long *)*param_2 == 0) {
        p_Var4 = p_Var3;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var4 = (__tree_node_base *)*puVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var4);
      param_2[2] = param_2[2] + 1;
    }
    p_Var4 = p_Var3 + 0x40;
    *(undefined4 *)(p_Var3 + 0x38) = 4;
    if (((byte)*p_Var4 & 1) == 0) {
      *(undefined2 *)p_Var4 = 0;
    }
    else {
      **(undefined1 **)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      if (((byte)p_Var3[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var3 + 0x50));
        *(undefined8 *)(p_Var3 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var3 + 0x50) = local_58;
    *(undefined8 *)(p_Var3 + 0x48) = uStack_60;
    *(ulong *)p_Var4 = local_68;
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0;
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      if ((local_68 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_58);
      }
    }
  }
  if (lStack_48 != 0) {
    FUN_003e5690(&local_68);
    local_80 = 0x1c;
    uStack_7f._0_1_ = s_callsSucceeded_038f9c33[0];
    uStack_7f._1_1_ = s_callsSucceeded_038f9c33[1];
    uStack_7f._2_1_ = s_callsSucceeded_038f9c33[2];
    uStack_7f._3_1_ = s_callsSucceeded_038f9c33[3];
    uStack_7f._4_1_ = s_callsSucceeded_038f9c33[4];
    uStack_7f._5_1_ = s_callsSucceeded_038f9c33[5];
    local_70 = (char *)0x0;
    uStack_71 = 0;
    cStack_79 = s_callsSucceeded_038f9c33[6];
    uStack_78 = (undefined4)
                (CONCAT62(s_callsSucceeded_038f9c33._8_6_,s_callsSucceeded_038f9c33._6_2_) >> 8);
    cStack_74 = s_callsSucceeded_038f9c33[0xb];
    cStack_73 = s_callsSucceeded_038f9c33[0xc];
    cStack_72 = s_callsSucceeded_038f9c33[0xd];
                    /* try { // try from 003e535c to 003e536b has its CatchHandler @ 003e5624 */
    puVar2 = (undefined8 *)FUN_003ea500(param_2,&local_28,&local_80);
    p_Var3 = (__tree_node_base *)*puVar2;
    if (p_Var3 == (__tree_node_base *)0x0) {
      p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(char **)(p_Var3 + 0x30) = local_70;
      *(ulong *)(p_Var3 + 0x28) =
           CONCAT17(uStack_71,CONCAT16(cStack_72,CONCAT15(cStack_73,CONCAT14(cStack_74,uStack_78))))
      ;
      *(ulong *)(p_Var3 + 0x20) = CONCAT17(cStack_79,CONCAT61(uStack_7f,local_80));
      uStack_78 = 0;
      cStack_74 = '\0';
      cStack_73 = '\0';
      cStack_72 = '\0';
      uStack_71 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uStack_7f._0_1_ = '\0';
      uStack_7f._1_1_ = '\0';
      uStack_7f._2_1_ = '\0';
      uStack_7f._3_1_ = '\0';
      uStack_7f._4_1_ = '\0';
      uStack_7f._5_1_ = '\0';
      cStack_79 = '\0';
      *(undefined8 *)(p_Var3 + 0x60) = 0;
      *(undefined8 *)(p_Var3 + 0x58) = 0;
      *(undefined8 *)(p_Var3 + 0x68) = 0;
      *(undefined8 *)(p_Var3 + 0x70) = 0;
      *(__tree_node_base **)(p_Var3 + 0x58) = p_Var3 + 0x60;
      *(undefined8 *)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      *(undefined8 *)(p_Var3 + 0x40) = 0;
      *(undefined8 *)(p_Var3 + 0x38) = 0;
      *(undefined8 *)(p_Var3 + 0x78) = 0;
      *(undefined8 *)(p_Var3 + 0x80) = 0;
      *(undefined8 *)(p_Var3 + 0x10) = local_28;
      *(undefined8 *)p_Var3 = 0;
      *(undefined8 *)(p_Var3 + 8) = 0;
      *puVar2 = p_Var3;
      if (*(long *)*param_2 == 0) {
        p_Var4 = p_Var3;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var4 = (__tree_node_base *)*puVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var4);
      param_2[2] = param_2[2] + 1;
    }
    p_Var4 = p_Var3 + 0x40;
    *(undefined4 *)(p_Var3 + 0x38) = 4;
    if (((byte)*p_Var4 & 1) == 0) {
      *(undefined2 *)p_Var4 = 0;
    }
    else {
      **(undefined1 **)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      if (((byte)p_Var3[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var3 + 0x50));
        *(undefined8 *)(p_Var3 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var3 + 0x50) = local_58;
    *(undefined8 *)(p_Var3 + 0x48) = uStack_60;
    *(ulong *)p_Var4 = local_68;
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0;
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      if ((local_68 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_58);
      }
    }
  }
  if (local_40 != 0) {
    FUN_003e5690(&local_68);
    cStack_73 = 0;
    cStack_72 = 0;
    uStack_71 = 0;
    local_80 = 0x16;
    local_70 = (char *)0x0;
    cStack_74 = 0;
    uStack_7f = s_callsFailed_038a118b._0_6_;
    cStack_79 = s_callsFailed_038a118b[6];
    uStack_78._0_1_ = s_callsFailed_038a118b[7];
    uStack_78 = CONCAT31(0x64656c,(char)uStack_78);
                    /* try { // try from 003e54d0 to 003e54df has its CatchHandler @ 003e5614 */
    puVar2 = (undefined8 *)FUN_003ea500(param_2,&local_28,&local_80);
    p_Var3 = (__tree_node_base *)*puVar2;
    if (p_Var3 == (__tree_node_base *)0x0) {
      p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(char **)(p_Var3 + 0x30) = local_70;
      *(ulong *)(p_Var3 + 0x28) =
           CONCAT17(uStack_71,CONCAT16(cStack_72,CONCAT15(cStack_73,CONCAT14(cStack_74,uStack_78))))
      ;
      *(ulong *)(p_Var3 + 0x20) = CONCAT17(cStack_79,CONCAT61(uStack_7f,local_80));
      uStack_78 = 0;
      cStack_74 = 0;
      cStack_73 = 0;
      cStack_72 = 0;
      uStack_71 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uStack_7f = 0;
      cStack_79 = '\0';
      *(undefined8 *)(p_Var3 + 0x60) = 0;
      *(undefined8 *)(p_Var3 + 0x58) = 0;
      *(undefined8 *)(p_Var3 + 0x68) = 0;
      *(undefined8 *)(p_Var3 + 0x70) = 0;
      *(__tree_node_base **)(p_Var3 + 0x58) = p_Var3 + 0x60;
      *(undefined8 *)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      *(undefined8 *)(p_Var3 + 0x40) = 0;
      *(undefined8 *)(p_Var3 + 0x38) = 0;
      *(undefined8 *)(p_Var3 + 0x78) = 0;
      *(undefined8 *)(p_Var3 + 0x80) = 0;
      *(undefined8 *)(p_Var3 + 0x10) = local_28;
      *(undefined8 *)p_Var3 = 0;
      *(undefined8 *)(p_Var3 + 8) = 0;
      *puVar2 = p_Var3;
      if (*(long *)*param_2 == 0) {
        p_Var4 = p_Var3;
      }
      else {
        *param_2 = *(long *)*param_2;
        p_Var4 = (__tree_node_base *)*puVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_2[1],p_Var4);
      param_2[2] = param_2[2] + 1;
    }
    p_Var4 = p_Var3 + 0x40;
    *(undefined4 *)(p_Var3 + 0x38) = 4;
    if (((byte)*p_Var4 & 1) == 0) {
      *(undefined2 *)p_Var4 = 0;
    }
    else {
      **(undefined1 **)(p_Var3 + 0x50) = 0;
      *(undefined8 *)(p_Var3 + 0x48) = 0;
      if (((byte)p_Var3[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var3 + 0x50));
        *(undefined8 *)(p_Var3 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var3 + 0x50) = local_58;
    *(undefined8 *)(p_Var3 + 0x48) = uStack_60;
    *(ulong *)p_Var4 = local_68;
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0;
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      if ((local_68 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_58);
      }
    }
  }
  return;
}


