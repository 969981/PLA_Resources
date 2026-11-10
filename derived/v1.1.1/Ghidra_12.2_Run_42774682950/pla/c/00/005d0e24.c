/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d0e24; name: FUN_005d0e24
 */


__tree_node_base * FUN_005d0e24(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  __tree_node_base *local_40 [3];
  undefined8 local_28;
  
  local_48 = param_2;
  puVar1 = (undefined8 *)FUN_003ea500(param_1,&local_28,param_2);
  p_Var2 = (__tree_node_base *)*puVar1;
  if (p_Var2 == (__tree_node_base *)0x0) {
    FUN_005d1108(local_40,param_1,&DAT_03a3a7a5,&local_48,auStack_50);
    *(undefined8 *)(local_40[0] + 0x10) = local_28;
    *(undefined8 *)local_40[0] = 0;
    *(undefined8 *)(local_40[0] + 8) = 0;
    *puVar1 = local_40[0];
    p_Var2 = local_40[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    p_Var2 = local_40[0];
    param_1[2] = param_1[2] + 1;
    local_40[0] = (__tree_node_base *)0x0;
    FUN_005d0ecc(local_40);
  }
  return p_Var2 + 0x38;
}


