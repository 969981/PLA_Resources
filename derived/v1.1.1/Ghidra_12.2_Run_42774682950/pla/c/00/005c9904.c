/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c9904; name: FUN_005c9904
 */


void FUN_005c9904(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  __tree_node_base *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  param_1[2] = 0;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  *param_1 = (long)plVar3;
  if (param_3 != 0) {
    param_3 = param_3 * 0x68;
    do {
                    /* try { // try from 005c9968 to 005c999b has its CatchHandler @ 005c99dc */
      plVar1 = (long *)FUN_003ea61c(param_1,plVar3,&local_38,auStack_40,param_2);
      if (*plVar1 == 0) {
        FUN_003ea8f0(local_58,param_1,param_2);
        *(undefined8 *)(local_58[0] + 0x10) = local_38;
        *(undefined8 *)local_58[0] = 0;
        *(undefined8 *)(local_58[0] + 8) = 0;
        *plVar1 = (long)local_58[0];
        p_Var2 = local_58[0];
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          p_Var2 = (__tree_node_base *)*plVar1;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)param_1[1],p_Var2);
        param_1[2] = param_1[2] + 1;
        local_58[0] = (__tree_node_base *)0x0;
        FUN_005c9b44(local_58);
      }
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return;
}


