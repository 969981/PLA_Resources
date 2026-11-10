/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e75b8; name: FUN_003e75b8
 */


void FUN_003e75b8(long param_1,long param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  __tree_node_base *p_Var6;
  
  FUN_002ef750(param_1 + 0x110);
  p_Var2 = *(__tree_node_base **)(param_1 + 0x150);
  if (p_Var2 != (__tree_node_base *)0x0) {
    p_Var4 = p_Var2;
    p_Var6 = (__tree_node_base *)(param_1 + 0x150);
    do {
      if (param_2 <= *(long *)(p_Var4 + 0x20)) {
        p_Var6 = p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(long *)(p_Var4 + 0x20) < param_2) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((p_Var6 != (__tree_node_base *)(param_1 + 0x150)) && (*(long *)(p_Var6 + 0x20) <= param_2))
    {
      plVar1 = *(long **)(p_Var6 + 8);
      if (*(long **)(p_Var6 + 8) == (long *)0x0) {
        p_Var4 = p_Var6 + 0x10;
        plVar3 = *(long **)p_Var4;
        if ((__tree_node_base *)*plVar3 != p_Var6) {
          do {
            lVar5 = *(long *)p_Var4;
            p_Var4 = (__tree_node_base *)(lVar5 + 0x10);
            plVar3 = *(long **)p_Var4;
          } while (*plVar3 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 0x148) == p_Var6) {
        *(long **)(param_1 + 0x148) = plVar3;
      }
      *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var2,p_Var6);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var6);
    }
  }
                    /* try { // try from 003e7690 to 003e7697 has its CatchHandler @ 003e76a8 */
  FUN_002ef790(param_1 + 0x110);
  return;
}


