/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00668538; name: FUN_00668538
 */


void FUN_00668538(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  plVar4 = param_1 + 1;
  *plVar4 = 0;
  lVar1 = FUN_00612290();
  param_1[2] = lVar1;
  param_1[3] = 0;
  *param_1 = (long)plVar4;
  if (param_3 != 0) {
    param_3 = param_3 << 6;
    do {
                    /* try { // try from 00668594 to 006685c7 has its CatchHandler @ 00668608 */
      plVar2 = (long *)FUN_02766fc4(param_1,plVar4,&local_38,auStack_40,param_2);
      if (*plVar2 == 0) {
        FUN_02767154(local_58,param_1,param_2);
        *(undefined8 *)(local_58[0] + 0x10) = local_38;
        *(undefined8 *)local_58[0] = 0;
        *(undefined8 *)(local_58[0] + 8) = 0;
        *plVar2 = (long)local_58[0];
        p_Var3 = local_58[0];
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          p_Var3 = (__tree_node_base *)*plVar2;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((__tree_node_base *)param_1[1],p_Var3);
        param_1[3] = param_1[3] + 1;
      }
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -0x40;
    } while (param_3 != 0);
  }
  return;
}


