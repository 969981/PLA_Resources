/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039ad30; name: FUN_0039ad30
 */


undefined8 FUN_0039ad30(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  
  p_Var4 = (__tree_node_base *)(param_1 + 1);
  p_Var7 = *(__tree_node_base **)p_Var4;
  if (p_Var7 != (__tree_node_base *)0x0) {
    p_Var6 = p_Var4;
    do {
      uVar2 = FUN_00399d40(**(undefined8 **)(p_Var7 + 0x20),*(undefined8 *)*param_2);
      lVar5 = 8;
      if ((uVar2 & 1) == 0) {
        lVar5 = 0;
        p_Var6 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)(p_Var7 + lVar5);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if ((p_Var6 != p_Var4) &&
       (uVar2 = FUN_00399d40(*(undefined8 *)*param_2,**(undefined8 **)(p_Var6 + 0x20)),
       (uVar2 & 1) == 0)) {
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
      if ((__tree_node_base *)*param_1 == p_Var6) {
        *param_1 = plVar3;
      }
      param_1[3] = param_1[3] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],p_Var6);
      if (param_1[2] == 0) {
        FUN_002ee710(p_Var6);
      }
      return 1;
    }
  }
  return 0;
}


