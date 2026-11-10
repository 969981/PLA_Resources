/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039a930; name: FUN_0039a930
 */


undefined1  [16] FUN_0039a930(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar8 = plVar6;
LAB_0039a9b4:
    p_Var4 = (__tree_node_base *)*plVar6;
    plVar7 = plVar6;
  }
  else {
    plVar6 = param_1 + 1;
    while( true ) {
      while (uVar1 = FUN_00399d40(*(undefined8 *)*param_2,*(undefined8 *)plVar7[4]), plVar8 = plVar7
            , (uVar1 & 1) == 0) {
        uVar1 = FUN_00399d40(*(undefined8 *)plVar7[4],*(undefined8 *)*param_2);
        if ((uVar1 & 1) == 0) goto LAB_0039a9b4;
        plVar6 = plVar7 + 1;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_0039a9b4;
        plVar7 = (long *)*plVar6;
      }
      if ((long *)*plVar7 == (long *)0x0) break;
      plVar6 = plVar7;
      plVar7 = (long *)*plVar7;
    }
    p_Var4 = (__tree_node_base *)*plVar7;
  }
  if (p_Var4 == (__tree_node_base *)0x0) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      p_Var4 = (__tree_node_base *)FUN_002ee6d0(0x28);
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x28);
      }
      p_Var4 = (__tree_node_base *)FUN_0032cea0(lVar5,0x28);
    }
    *(undefined8 *)(p_Var4 + 0x20) = *param_3;
    *(long **)(p_Var4 + 0x10) = plVar8;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *plVar7 = (long)p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    uVar3 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = p_Var4;
  return auVar9;
}


