/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd57dc; name: FUN_02cd57dc
 */


void FUN_02cd57dc(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [8];
  undefined8 local_58;
  
  FUN_02762fb0();
  FUN_006d9d50(param_1 + 0x20,param_2 + 0x20);
  FUN_02762fb0(param_1 + 0x28,param_2 + 0x28);
  plVar7 = (long *)(param_1 + 0x48);
  *plVar7 = 0;
  uVar2 = FUN_00612290();
  puVar8 = (undefined8 *)(param_1 + 0x50);
  *puVar8 = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *plVar7 = (long)puVar8;
  plVar5 = *(long **)(param_2 + 0x48);
  do {
    while( true ) {
      if (plVar5 == (long *)(param_2 + 0x50)) {
        return;
      }
      plVar3 = (long *)FUN_02cd5968(plVar7,puVar8,&local_58,auStack_68,plVar5 + 4);
      if (*plVar3 != 0) break;
      p_Var4 = (__tree_node_base *)
               (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(*(long **)(param_1 + 0x58),0x48,8);
      FUN_02762fb0(p_Var4 + 0x20,plVar5 + 4);
      *(long *)(p_Var4 + 0x40) = plVar5[8];
      *(undefined8 *)p_Var4 = 0;
      *(undefined8 *)(p_Var4 + 8) = 0;
      *(undefined8 *)(p_Var4 + 0x10) = local_58;
      *plVar3 = (long)p_Var4;
      if (**(long **)(param_1 + 0x48) != 0) {
        *plVar7 = **(long **)(param_1 + 0x48);
        p_Var4 = (__tree_node_base *)*plVar3;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x50),p_Var4);
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) goto LAB_02cd5918;
LAB_02cd5908:
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while (plVar3 != (long *)0x0);
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) goto LAB_02cd5908;
LAB_02cd5918:
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


