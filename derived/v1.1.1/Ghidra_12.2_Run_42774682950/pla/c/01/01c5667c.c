/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5667c; name: FUN_01c5667c
 */


void FUN_01c5667c(long *param_1,undefined8 param_2,undefined8 *param_3,__tree_node_base *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (__tree_node_base *)*param_3;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],param_4);
  param_1[6] = param_1[6] + 1;
  return;
}


