/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064e0e8; name: FUN_0064e0e8
 */


void FUN_0064e0e8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  __tree_node_base *local_68 [3];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  plVar7 = param_1 + 1;
  *param_1 = *param_2;
  *plVar7 = 0;
  uVar2 = FUN_00612290();
  puVar8 = param_1 + 2;
  *puVar8 = 0;
  param_1[3] = uVar2;
  param_1[4] = 0;
  *plVar7 = (long)puVar8;
  plVar5 = (long *)param_2[1];
  do {
    while( true ) {
      if (plVar5 == param_2 + 2) {
        return;
      }
                    /* try { // try from 0064e14c to 0064e18b has its CatchHandler @ 0064e228 */
      plVar3 = (long *)FUN_0064e240(plVar7,puVar8,&local_48,auStack_50,plVar5 + 4);
      if (*plVar3 != 0) break;
      FUN_0064e514(local_68,plVar7,plVar5 + 4);
      *(undefined8 *)(local_68[0] + 0x10) = local_48;
      *(undefined8 *)local_68[0] = 0;
      *(undefined8 *)(local_68[0] + 8) = 0;
      *plVar3 = (long)local_68[0];
      p_Var4 = local_68[0];
      if (*(long *)*plVar7 != 0) {
        *plVar7 = *(long *)*plVar7;
        p_Var4 = (__tree_node_base *)*plVar3;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[2],p_Var4);
      param_1[4] = param_1[4] + 1;
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) goto LAB_0064e1e0;
LAB_0064e1d0:
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while (plVar3 != (long *)0x0);
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) goto LAB_0064e1d0;
LAB_0064e1e0:
    plVar3 = plVar5 + 2;
    bVar1 = *(long **)*plVar3 != plVar5;
    plVar5 = (long *)*plVar3;
    if (bVar1) {
      do {
        lVar6 = *plVar3;
        plVar3 = (long *)(lVar6 + 0x10);
        plVar5 = (long *)*plVar3;
      } while (*(long *)*plVar3 != lVar6);
    }
  } while( true );
}


