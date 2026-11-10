/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00539c40; name: FUN_00539c40
 */


undefined8 FUN_00539c40(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  
  p_Var6 = (__tree_node_base *)(param_1 + 1);
  p_Var2 = *(__tree_node_base **)p_Var6;
  uVar3 = 0;
  if (p_Var2 != (__tree_node_base *)0x0) {
    uVar5 = *param_2;
    p_Var7 = p_Var2;
    p_Var9 = p_Var6;
    do {
      if (*(ulong *)(p_Var7 + 0x20) >= uVar5) {
        p_Var9 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) < uVar5) * 8);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if ((p_Var9 == p_Var6) || (uVar5 < *(ulong *)(p_Var9 + 0x20))) {
      return 0;
    }
    plVar1 = *(long **)(p_Var9 + 8);
    if (*(long **)(p_Var9 + 8) == (long *)0x0) {
      p_Var6 = p_Var9 + 0x10;
      plVar4 = *(long **)p_Var6;
      if ((__tree_node_base *)*plVar4 != p_Var9) {
        do {
          lVar8 = *(long *)p_Var6;
          p_Var6 = (__tree_node_base *)(lVar8 + 0x10);
          plVar4 = *(long **)p_Var6;
        } while (*plVar4 != lVar8);
      }
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if ((__tree_node_base *)*param_1 == p_Var9) {
      *param_1 = plVar4;
    }
    param_1[2] = param_1[2] + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(p_Var2,p_Var9);
    FUN_005318f8(p_Var9 + 0x28);
    FUN_002e2ea0(PTR_LAB_04373088,p_Var9);
    uVar3 = 1;
  }
  return uVar3;
}


