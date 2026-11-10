/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ff81c; name: FUN_010ff81c
 */


undefined1  [16] FUN_010ff81c(long *param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    p_Var3 = (__tree_node_base *)*plVar5;
    plVar6 = plVar5;
  }
  else {
    plVar5 = param_1 + 1;
    while( true ) {
      for (; *param_2 < (ulong)plVar6[4]; plVar6 = (long *)*plVar6) {
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_010ff88c;
      }
      if (*param_2 <= (ulong)plVar6[4]) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
LAB_010ff88c:
    p_Var3 = (__tree_node_base *)*plVar5;
  }
  if (p_Var3 == (__tree_node_base *)0x0) {
    plVar4 = param_1 + 2;
    p_Var3 = (__tree_node_base *)(**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x28,8);
    if (p_Var3 == (__tree_node_base *)0x0) {
      (**(code **)(*(long *)*plVar4 + 0xb8))();
    }
    FUN_010ff948(plVar4,p_Var3 + 0x20,param_3);
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(long **)(p_Var3 + 0x10) = plVar6;
    *plVar5 = (long)p_Var3;
    p_Var2 = p_Var3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar5;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    uVar1 = 1;
    param_1[6] = param_1[6] + 1;
  }
  else {
    uVar1 = 0;
  }
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = p_Var3;
  return auVar7;
}


