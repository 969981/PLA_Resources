/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136fee8; name: FUN_0136fee8
 */


void FUN_0136fee8(undefined8 *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var3 = param_2 + 0x10;
    plVar2 = *(long **)p_Var3;
    if ((__tree_node_base *)*plVar2 != param_2) {
      do {
        lVar4 = *(long *)p_Var3;
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar2 = *(long **)p_Var3;
      } while (*plVar2 != lVar4);
    }
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = plVar2;
  }
  param_1[6] = param_1[6] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  return;
}


