/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c6504; name: FUN_003c6504
 */


undefined1  [16] FUN_003c6504(long *param_1,undefined8 param_2,undefined8 param_3)

{
  __tree_node_base *p_Var1;
  ulong uVar2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  __tree_node_base *local_58 [3];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
  }
  else {
    plVar5 = param_1 + 1;
    while( true ) {
      while( true ) {
        uVar2 = FUN_003c4ec4(param_2,plVar6 + 4);
        plVar7 = plVar6;
        if ((uVar2 & 1) == 0) break;
        if ((long *)*plVar6 == (long *)0x0) {
          p_Var1 = (__tree_node_base *)*plVar6;
          p_Var3 = local_58[0];
          goto joined_r0x003c6588;
        }
        plVar5 = plVar6;
        plVar6 = (long *)*plVar6;
      }
      uVar2 = FUN_003c4ec4(plVar6 + 4,param_2);
      if ((uVar2 & 1) == 0) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  p_Var1 = (__tree_node_base *)*plVar5;
  plVar6 = plVar5;
  p_Var3 = local_58[0];
joined_r0x003c6588:
  local_58[0] = p_Var1;
  if (local_58[0] == (__tree_node_base *)0x0) {
    local_58[0] = p_Var3;
    FUN_003c6608(local_58,param_1,param_3);
    *(undefined8 *)local_58[0] = 0;
    *(undefined8 *)(local_58[0] + 8) = 0;
    *(long **)(local_58[0] + 0x10) = plVar7;
    *plVar6 = (long)local_58[0];
    p_Var3 = local_58[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    param_1[2] = param_1[2] + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = local_58[0];
  return auVar8;
}


