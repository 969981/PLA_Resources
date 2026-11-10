/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00525c8c; name: FUN_00525c8c
 */


long * FUN_00525c8c(undefined8 *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var2 = param_2 + 0x10;
    plVar4 = *(long **)p_Var2;
    if ((__tree_node_base *)*plVar4 != param_2) {
      do {
        lVar3 = *(long *)p_Var2;
        p_Var2 = (__tree_node_base *)(lVar3 + 0x10);
        plVar4 = *(long **)p_Var2;
      } while (*plVar4 != lVar3);
    }
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = plVar4;
  }
  param_1[2] = param_1[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  FUN_0051f670(param_2 + 0x80,*(undefined8 *)(param_2 + 0x88));
  FUN_005244dc(param_2 + 0x68,*(undefined8 *)(param_2 + 0x70));
  FUN_0051f75c(param_2 + 0x50,*(undefined8 *)(param_2 + 0x58));
  if (((byte)param_2[0x38] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_2 + 0x48));
  }
  if (((byte)param_2[0x20] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_2 + 0x30));
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return plVar4;
}


