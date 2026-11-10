/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ed4c; name: FUN_0051ed4c
 */


void FUN_0051ed4c(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  __tree_node_base *local_60 [3];
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  param_1[2] = 0;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  *param_1 = (long)plVar6;
  plVar4 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar4 == param_2 + 1) {
        return;
      }
                    /* try { // try from 0051ed98 to 0051edd7 has its CatchHandler @ 0051ee74 */
      plVar2 = (long *)FUN_0051ee8c(param_1,plVar6,&local_38,auStack_48,plVar4 + 4);
      if (*plVar2 != 0) break;
      FUN_0051f0b4(local_60,param_1,plVar4 + 4);
      *(undefined8 *)(local_60[0] + 0x10) = local_38;
      *(undefined8 *)local_60[0] = 0;
      *(undefined8 *)(local_60[0] + 8) = 0;
      *plVar2 = (long)local_60[0];
      p_Var3 = local_60[0];
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        p_Var3 = (__tree_node_base *)*plVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var3);
      param_1[2] = param_1[2] + 1;
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) goto LAB_0051ee2c;
LAB_0051ee1c:
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while (plVar2 != (long *)0x0);
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] != (long *)0x0) goto LAB_0051ee1c;
LAB_0051ee2c:
    plVar2 = plVar4 + 2;
    bVar1 = (long *)*(long *)*plVar2 != plVar4;
    plVar4 = (long *)*plVar2;
    if (bVar1) {
      do {
        lVar5 = *plVar2;
        plVar2 = (long *)(lVar5 + 0x10);
        plVar4 = (long *)*plVar2;
      } while (*(long *)*plVar2 != lVar5);
    }
  } while( true );
}


