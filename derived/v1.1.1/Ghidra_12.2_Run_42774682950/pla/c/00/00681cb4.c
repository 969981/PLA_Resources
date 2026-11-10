/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00681cb4; name: FUN_00681cb4
 */


void FUN_00681cb4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  __tree_node_base *local_68 [3];
  undefined8 local_48;
  
  puVar2 = *(undefined **)(param_3 + 0x10);
  if (*(int *)(param_3 + 0x1c) != 2) {
    puVar2 = PTR_DAT_04375af8;
  }
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(puVar2 + 0x20) != 0) {
    puVar7 = (undefined8 *)(*(long *)(puVar2 + 0x20) + 8);
  }
  if (*(int *)(puVar2 + 0x18) != 0) {
    lVar8 = 0;
    plVar1 = (long *)(param_1 + 8);
    lVar9 = (long)*(int *)(puVar2 + 0x18) << 3;
    do {
      uVar6 = *puVar7;
      plVar3 = (long *)FUN_0067662c(param_2);
      lVar5 = *plVar3;
      FUN_006e48bc(auStack_70,uVar6);
                    /* try { // try from 00681d60 to 00681d8f has its CatchHandler @ 00681dd8 */
      plVar3 = (long *)FUN_0064e650(plVar1,&local_48,lVar5 + lVar8);
      if (*plVar3 == 0) {
        FUN_00681df4(local_68,plVar1,lVar5 + lVar8,auStack_70);
        *(undefined8 *)(local_68[0] + 0x10) = local_48;
        *(undefined8 *)local_68[0] = 0;
        *(undefined8 *)(local_68[0] + 8) = 0;
        *plVar3 = (long)local_68[0];
        p_Var4 = local_68[0];
        if (*(long *)*plVar1 != 0) {
          *plVar1 = *(long *)*plVar1;
          p_Var4 = (__tree_node_base *)*plVar3;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 0x10),p_Var4);
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      FUN_006e4b9c(auStack_70);
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + 0x20;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}


