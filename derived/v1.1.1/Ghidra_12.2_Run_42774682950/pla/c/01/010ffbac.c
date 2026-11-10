/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ffbac; name: FUN_010ffbac
 */


void FUN_010ffbac(long *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(param_2 + 0x10);
    if ((__tree_node_base *)*plVar2 != param_2) {
      lVar3 = *(long *)(param_2 + 0x10);
      while( true ) {
        plVar2 = *(long **)(lVar3 + 0x10);
        if (*plVar2 == lVar3) break;
        lVar3 = *(long *)(lVar3 + 0x10);
      }
    }
  }
  else {
    for (plVar1 = (long *)*plVar2; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      plVar2 = plVar1;
    }
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = (long)plVar2;
  }
  param_1[6] = param_1[6] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  return;
}


