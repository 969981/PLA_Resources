/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eb528; name: FUN_003eb528
 */


undefined8 FUN_003eb528(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  
  p_Var6 = (__tree_node_base *)(param_1 + 1);
  p_Var2 = *(__tree_node_base **)p_Var6;
  uVar3 = 0;
  if (p_Var2 != (__tree_node_base *)0x0) {
    lVar5 = *param_2;
    p_Var7 = p_Var2;
    p_Var8 = p_Var6;
    do {
      if (lVar5 <= *(long *)(p_Var7 + 0x20)) {
        p_Var8 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(long *)(p_Var7 + 0x20) < lVar5) * 8);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if ((p_Var8 == p_Var6) || (lVar5 < *(long *)(p_Var8 + 0x20))) {
      return 0;
    }
    plVar1 = *(long **)(p_Var8 + 8);
    if (*(long **)(p_Var8 + 8) == (long *)0x0) {
      p_Var6 = p_Var8 + 0x10;
      plVar4 = *(long **)p_Var6;
      if ((__tree_node_base *)*plVar4 != p_Var8) {
        do {
          lVar5 = *(long *)p_Var6;
          p_Var6 = (__tree_node_base *)(lVar5 + 0x10);
          plVar4 = *(long **)p_Var6;
        } while (*plVar4 != lVar5);
      }
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if ((__tree_node_base *)*param_1 == p_Var8) {
      *param_1 = plVar4;
    }
    param_1[2] = param_1[2] + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(p_Var2,p_Var8);
    FUN_003eb45c(*(undefined8 *)(p_Var8 + 0x28));
    FUN_002e2ea0(PTR_LAB_04373088,p_Var8);
    uVar3 = 1;
  }
  return uVar3;
}


