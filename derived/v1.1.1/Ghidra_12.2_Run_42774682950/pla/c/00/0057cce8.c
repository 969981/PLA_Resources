/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057cce8; name: FUN_0057cce8
 */


void FUN_0057cce8(undefined4 *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  __tree_node_base *local_70 [3];
  undefined1 auStack_58 [8];
  undefined8 local_48;
  
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  puVar6 = (undefined8 *)(param_1 + 10);
  *puVar6 = 0;
  plVar7 = (long *)(param_1 + 8);
  *plVar7 = (long)puVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  plVar4 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar4 == param_2 + 1) {
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x12) = 0;
        return;
      }
                    /* try { // try from 0057cd50 to 0057cd8f has its CatchHandler @ 0057ce38 */
      plVar2 = (long *)FUN_003ea61c(plVar7,puVar6,&local_48,auStack_58,plVar4 + 4);
      if (*plVar2 != 0) break;
      FUN_003ea8f0(local_70,plVar7,plVar4 + 4);
      *(undefined8 *)(local_70[0] + 0x10) = local_48;
      *(undefined8 *)local_70[0] = 0;
      *(undefined8 *)(local_70[0] + 8) = 0;
      *plVar2 = (long)local_70[0];
      p_Var3 = local_70[0];
      if (*(long *)*plVar7 != 0) {
        *plVar7 = *(long *)*plVar7;
        p_Var3 = (__tree_node_base *)*plVar2;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 10),p_Var3);
      *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 1;
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) goto LAB_0057cde4;
LAB_0057cdd4:
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while (plVar2 != (long *)0x0);
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] != (long *)0x0) goto LAB_0057cdd4;
LAB_0057cde4:
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


