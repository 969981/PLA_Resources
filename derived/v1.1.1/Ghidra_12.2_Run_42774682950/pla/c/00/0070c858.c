/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c858; name: FUN_0070c858
 */


undefined8 FUN_0070c858(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  code *pcVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  
  p_Var6 = (__tree_node_base *)(param_1 + 1);
  p_Var3 = *(__tree_node_base **)p_Var6;
  if (p_Var3 != (__tree_node_base *)0x0) {
    uVar1 = *param_2;
    p_Var7 = p_Var3;
    p_Var9 = p_Var6;
    do {
      if (*(uint *)(p_Var7 + 0x20) >= uVar1) {
        p_Var9 = p_Var7;
      }
      p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(uint *)(p_Var7 + 0x20) < uVar1) * 8);
    } while (p_Var7 != (__tree_node_base *)0x0);
    if (p_Var9 == p_Var6) {
      return 0;
    }
    if (*(uint *)(p_Var9 + 0x20) <= uVar1) {
      plVar2 = *(long **)(p_Var9 + 8);
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
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((__tree_node_base *)*param_1 == p_Var9) {
        *param_1 = plVar4;
      }
      param_1[3] = param_1[3] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var9);
      p_Var3 = *(__tree_node_base **)(p_Var9 + 0x50);
      if (p_Var3 != (__tree_node_base *)0x0) {
        if (p_Var3 == p_Var9 + 0x30) {
          pcVar5 = *(code **)(*(long *)p_Var3 + 0x10);
        }
        else {
          pcVar5 = *(code **)(*(long *)p_Var3 + 0x18);
        }
        (*pcVar5)();
      }
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],p_Var9,0x60,0x10);
      return 1;
    }
  }
  return 0;
}


