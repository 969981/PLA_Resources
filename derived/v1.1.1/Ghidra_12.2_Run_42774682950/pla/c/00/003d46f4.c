/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d46f4; name: FUN_003d46f4
 */


undefined8 FUN_003d46f4(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  long lVar9;
  __tree_node_base *p_Var10;
  
  p_Var7 = (__tree_node_base *)(param_1 + 1);
  p_Var2 = *(__tree_node_base **)p_Var7;
  uVar4 = 0;
  if (p_Var2 != (__tree_node_base *)0x0) {
    uVar6 = *param_2;
    p_Var8 = p_Var2;
    p_Var10 = p_Var7;
    do {
      if (*(ulong *)(p_Var8 + 0x20) >= uVar6) {
        p_Var10 = p_Var8;
      }
      p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < uVar6) * 8);
    } while (p_Var8 != (__tree_node_base *)0x0);
    if ((p_Var10 == p_Var7) || (uVar6 < *(ulong *)(p_Var10 + 0x20))) {
      return 0;
    }
    plVar1 = *(long **)(p_Var10 + 8);
    if (*(long **)(p_Var10 + 8) == (long *)0x0) {
      p_Var7 = p_Var10 + 0x10;
      plVar5 = *(long **)p_Var7;
      if ((__tree_node_base *)*plVar5 != p_Var10) {
        do {
          lVar9 = *(long *)p_Var7;
          p_Var7 = (__tree_node_base *)(lVar9 + 0x10);
          plVar5 = *(long **)p_Var7;
        } while (*plVar5 != lVar9);
      }
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    if ((__tree_node_base *)*param_1 == p_Var10) {
      *param_1 = plVar5;
    }
    param_1[2] = param_1[2] + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(p_Var2,p_Var10);
    puVar3 = *(undefined8 **)(p_Var10 + 0x28);
    *(undefined8 *)(p_Var10 + 0x28) = 0;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 003d47c8 to 003d47cb has its CatchHandler @ 003d47e8 */
      (**(code **)*puVar3)();
    }
    FUN_002e2ea0(PTR_LAB_04373088,p_Var10);
    uVar4 = 1;
  }
  return uVar4;
}


