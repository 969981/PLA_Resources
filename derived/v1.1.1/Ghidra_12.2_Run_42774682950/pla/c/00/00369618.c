/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00369618; name: FUN_00369618
 */


undefined8 FUN_00369618(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  ulong uVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  long lVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  
  p_Var7 = (__tree_node_base *)(param_1 + 1);
  p_Var3 = *(__tree_node_base **)p_Var7;
  if (p_Var3 == (__tree_node_base *)0x0) {
    return 0;
  }
  uVar5 = *param_2;
  uVar10 = *(ulong *)(p_Var3 + 0x20);
  p_Var4 = p_Var7;
  p_Var8 = p_Var3;
  if (uVar5 <= uVar10) goto LAB_00369668;
LAB_00369648:
  do {
    p_Var8 = p_Var8 + 8;
    p_Var11 = p_Var4;
    do {
      p_Var2 = *(__tree_node_base **)p_Var8;
      p_Var4 = p_Var11;
      while( true ) {
        p_Var8 = p_Var2;
        if (p_Var8 == (__tree_node_base *)0x0) {
          if (((p_Var4 == p_Var7) || (uVar5 < *(ulong *)(p_Var4 + 0x20))) ||
             ((uVar5 <= *(ulong *)(p_Var4 + 0x20) && ((int)param_2[1] < *(int *)(p_Var4 + 0x28)))))
          {
            return 0;
          }
          plVar1 = *(long **)(p_Var4 + 8);
          if (*(long **)(p_Var4 + 8) == (long *)0x0) {
            p_Var7 = p_Var4 + 0x10;
            plVar6 = *(long **)p_Var7;
            if ((__tree_node_base *)*plVar6 != p_Var4) {
              do {
                lVar9 = *(long *)p_Var7;
                p_Var7 = (__tree_node_base *)(lVar9 + 0x10);
                plVar6 = *(long **)p_Var7;
              } while (*plVar6 != lVar9);
            }
          }
          else {
            do {
              plVar6 = plVar1;
              plVar1 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if ((__tree_node_base *)*param_1 == p_Var4) {
            *param_1 = plVar6;
          }
          param_1[2] = param_1[2] + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var4);
          FUN_002e2ea0(PTR_LAB_04373088,p_Var4);
          return 1;
        }
        uVar10 = *(ulong *)(p_Var8 + 0x20);
        if (uVar10 < uVar5) goto LAB_00369648;
LAB_00369668:
        if (uVar10 <= uVar5) break;
        p_Var2 = *(__tree_node_base **)p_Var8;
        p_Var4 = p_Var8;
      }
      p_Var11 = p_Var8;
    } while ((int)param_2[1] <= *(int *)(p_Var8 + 0x28));
  } while( true );
}


