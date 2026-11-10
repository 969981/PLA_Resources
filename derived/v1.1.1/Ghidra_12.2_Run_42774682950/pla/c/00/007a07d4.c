/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a07d4; name: FUN_007a07d4
 */


undefined8 FUN_007a07d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  
  p_Var5 = (__tree_node_base *)(param_1 + 1);
  p_Var3 = *(__tree_node_base **)p_Var5;
  if (p_Var3 != (__tree_node_base *)0x0) {
    iVar1 = *(int *)*param_2;
    p_Var6 = p_Var3;
    p_Var8 = p_Var5;
    do {
      if (iVar1 <= **(int **)(p_Var6 + 0x20)) {
        p_Var8 = p_Var6;
      }
      p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(**(int **)(p_Var6 + 0x20) < iVar1) * 8);
    } while (p_Var6 != (__tree_node_base *)0x0);
    if (p_Var8 == p_Var5) {
      return 0;
    }
    if (**(int **)(p_Var8 + 0x20) <= iVar1) {
      plVar2 = *(long **)(p_Var8 + 8);
      if (*(long **)(p_Var8 + 8) == (long *)0x0) {
        p_Var5 = p_Var8 + 0x10;
        plVar4 = *(long **)p_Var5;
        if ((__tree_node_base *)*plVar4 != p_Var8) {
          do {
            lVar7 = *(long *)p_Var5;
            p_Var5 = (__tree_node_base *)(lVar7 + 0x10);
            plVar4 = *(long **)p_Var5;
          } while (*plVar4 != lVar7);
        }
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((__tree_node_base *)*param_1 == p_Var8) {
        *param_1 = plVar4;
      }
      param_1[3] = param_1[3] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var8);
      if (param_1[2] == 0) {
        FUN_002ee710(p_Var8);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


