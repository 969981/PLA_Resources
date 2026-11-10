/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00522810; name: FUN_00522810
 */


long * FUN_00522810(undefined8 *param_1,__tree_node_base *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var3 = param_2 + 0x10;
    plVar5 = *(long **)p_Var3;
    if ((__tree_node_base *)*plVar5 != param_2) {
      do {
        lVar4 = *(long *)p_Var3;
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar5 = *(long **)p_Var3;
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = plVar5;
  }
  param_1[2] = param_1[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0052289c to 0052289f has its CatchHandler @ 005228d8 */
    (**(code **)*puVar2)();
  }
  if (((byte)param_2[0x20] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_2 + 0x30));
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return plVar5;
}


