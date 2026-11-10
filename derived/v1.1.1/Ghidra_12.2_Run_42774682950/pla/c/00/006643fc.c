/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006643fc; name: FUN_006643fc
 */


long * FUN_006643fc(undefined8 *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var2 = param_2 + 0x10;
    plVar5 = *(long **)p_Var2;
    if ((__tree_node_base *)*plVar5 != param_2) {
      do {
        lVar4 = *(long *)p_Var2;
        p_Var2 = (__tree_node_base *)(lVar4 + 0x10);
        plVar5 = *(long **)p_Var2;
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = plVar5;
  }
  param_1[3] = param_1[3] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  p_Var2 = *(__tree_node_base **)(param_2 + 0x80);
  if (p_Var2 != (__tree_node_base *)0x0) {
    if (p_Var2 == param_2 + 0x60) {
      pcVar3 = *(code **)(*(long *)p_Var2 + 0x10);
    }
    else {
      pcVar3 = *(code **)(*(long *)p_Var2 + 0x18);
    }
    (*pcVar3)();
  }
  p_Var2 = *(__tree_node_base **)(param_2 + 0x50);
  if (p_Var2 != (__tree_node_base *)0x0) {
    if (p_Var2 == param_2 + 0x30) {
      pcVar3 = *(code **)(*(long *)p_Var2 + 0x10);
    }
    else {
      pcVar3 = *(code **)(*(long *)p_Var2 + 0x18);
    }
    (*pcVar3)();
  }
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_2,0x90,0x10);
  return plVar5;
}


