/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00524538; name: FUN_00524538
 */


undefined1  [16] FUN_00524538(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
  }
  else {
    plVar7 = param_1 + 1;
    while( true ) {
      while( true ) {
        uVar1 = FUN_00524728(param_2,plVar8 + 4);
        plVar9 = plVar8;
        if ((uVar1 & 1) == 0) break;
        if ((long *)*plVar8 == (long *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar8;
          goto joined_r0x005245b8;
        }
        plVar7 = plVar8;
        plVar8 = (long *)*plVar8;
      }
      uVar1 = FUN_00524728(plVar8 + 4,param_2);
      if ((uVar1 & 1) == 0) break;
      plVar7 = plVar8 + 1;
      if ((long *)*plVar7 == (long *)0x0) break;
      plVar8 = (long *)*plVar7;
    }
  }
  p_Var6 = (__tree_node_base *)*plVar7;
  plVar8 = plVar7;
joined_r0x005245b8:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0xa0);
    uVar10 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(p_Var6 + 0x30) = param_3[2];
    *(undefined8 *)(p_Var6 + 0x28) = uVar10;
    *(undefined8 *)(p_Var6 + 0x20) = uVar2;
    uVar10 = param_3[4];
    uVar2 = param_3[3];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined8 *)(p_Var6 + 0x48) = param_3[5];
    *(undefined8 *)(p_Var6 + 0x40) = uVar10;
    *(undefined8 *)(p_Var6 + 0x38) = uVar2;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[3] = 0;
    *(undefined8 *)(p_Var6 + 0x50) = param_3[6];
    lVar4 = param_3[7];
    p_Var3 = p_Var6 + 0x58;
    *(long *)p_Var3 = lVar4;
    lVar5 = param_3[8];
    *(long *)(p_Var6 + 0x60) = lVar5;
    if (lVar5 == 0) {
      *(__tree_node_base **)(p_Var6 + 0x50) = p_Var3;
    }
    else {
      *(__tree_node_base **)(lVar4 + 0x10) = p_Var3;
      param_3[7] = 0;
      param_3[6] = param_3 + 7;
      param_3[8] = 0;
    }
    *(undefined8 *)(p_Var6 + 0x68) = param_3[9];
    lVar4 = param_3[10];
    p_Var3 = p_Var6 + 0x70;
    *(long *)p_Var3 = lVar4;
    lVar5 = param_3[0xb];
    *(long *)(p_Var6 + 0x78) = lVar5;
    if (lVar5 == 0) {
      *(__tree_node_base **)(p_Var6 + 0x68) = p_Var3;
    }
    else {
      *(__tree_node_base **)(lVar4 + 0x10) = p_Var3;
      param_3[10] = 0;
      param_3[9] = param_3 + 10;
      param_3[0xb] = 0;
    }
    *(undefined8 *)(p_Var6 + 0x80) = param_3[0xc];
    lVar4 = param_3[0xd];
    p_Var3 = p_Var6 + 0x88;
    *(long *)p_Var3 = lVar4;
    lVar5 = param_3[0xe];
    *(long *)(p_Var6 + 0x90) = lVar5;
    if (lVar5 == 0) {
      *(__tree_node_base **)(p_Var6 + 0x80) = p_Var3;
    }
    else {
      *(__tree_node_base **)(lVar4 + 0x10) = p_Var3;
      param_3[0xd] = 0;
      param_3[0xc] = param_3 + 0xd;
      param_3[0xe] = 0;
    }
    *(undefined8 *)(p_Var6 + 0x98) = param_3[0xf];
    *(long **)(p_Var6 + 0x10) = plVar9;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *plVar8 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar2 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = p_Var6;
  return auVar11;
}


