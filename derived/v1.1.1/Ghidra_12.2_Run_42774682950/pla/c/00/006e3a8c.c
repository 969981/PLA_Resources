/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e3a8c; name: FUN_006e3a8c
 */


/* WARNING: Removing unreachable block (ram,0x006e3b80) */

bool FUN_006e3a8c(__tree_node_base *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  __tree_node_base *p_Var4;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  __tree_node_base *local_58 [3];
  undefined8 local_38;
  
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    do {
      local_70 = 0;
      local_68 = FUN_00612290();
      uStack_60 = 0;
                    /* try { // try from 006e3adc to 006e3b2b has its CatchHandler @ 006e3bb0 */
      local_78 = &local_70;
      puVar2 = (undefined8 *)FUN_006e3bc8(param_1,&local_38,lVar3);
      p_Var4 = (__tree_node_base *)*puVar2;
      if (p_Var4 == (__tree_node_base *)0x0) {
        FUN_006e3ce4(local_58,param_1,lVar3,&local_78);
        *(undefined8 *)(local_58[0] + 0x10) = local_38;
        *(undefined8 *)local_58[0] = 0;
        *(undefined8 *)(local_58[0] + 8) = 0;
        *puVar2 = local_58[0];
        p_Var4 = local_58[0];
        if (**(long **)param_1 != 0) {
          *(long *)param_1 = **(long **)param_1;
          p_Var4 = (__tree_node_base *)*puVar2;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 8),p_Var4);
        p_Var4 = local_58[0];
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        FUN_006e3f68(&local_78,local_70);
      }
      else {
        FUN_006e3f68(&local_78,local_70);
        if (*(long *)(p_Var4 + 0x58) == 0) {
          return false;
        }
      }
      lVar3 = lVar3 + 0x20;
      param_1 = p_Var4 + 0x40;
    } while (lVar1 != lVar3);
  }
  return *(long *)(param_1 + 0x18) == 0;
}


