/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d7544; name: FUN_006d7544
 */


void FUN_006d7544(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long *plVar6;
  __tree_node_base *local_60 [3];
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  *param_1 = 0;
  lVar2 = FUN_00612290();
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = lVar2;
  param_1[3] = 0;
  *param_1 = (long)plVar6;
  plVar5 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar5 == param_2 + 1) {
        return;
      }
                    /* try { // try from 006d7598 to 006d75d7 has its CatchHandler @ 006d7674 */
      plVar3 = (long *)FUN_02766fc4(param_1,plVar6,&local_38,auStack_48,plVar5 + 4);
      if (*plVar3 != 0) break;
      FUN_02767154(local_60,param_1,plVar5 + 4);
      *(undefined8 *)(local_60[0] + 0x10) = local_38;
      *(undefined8 *)local_60[0] = 0;
      *(undefined8 *)(local_60[0] + 8) = 0;
      *plVar3 = (long)local_60[0];
      p_Var4 = local_60[0];
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        p_Var4 = (__tree_node_base *)*plVar3;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var4);
      param_1[3] = param_1[3] + 1;
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) goto LAB_006d762c;
LAB_006d761c:
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while (plVar3 != (long *)0x0);
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) goto LAB_006d761c;
LAB_006d762c:
    plVar3 = plVar5 + 2;
    bVar1 = (long *)*(long *)*plVar3 != plVar5;
    plVar5 = (long *)*plVar3;
    if (bVar1) {
      do {
        lVar2 = *plVar3;
        plVar3 = (long *)(lVar2 + 0x10);
        plVar5 = (long *)*plVar3;
      } while (*(long *)*plVar3 != lVar2);
    }
  } while( true );
}


