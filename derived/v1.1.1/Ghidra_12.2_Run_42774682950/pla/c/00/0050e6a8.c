/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e6a8; name: FUN_0050e6a8
 */


void FUN_0050e6a8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  __tree_node_base *local_60 [3];
  undefined8 local_48;
  
  plVar1 = (long *)(param_1 + 0x188);
  local_68 = param_2;
  puVar2 = (undefined8 *)FUN_005213b8(plVar1,&local_48,param_2);
  p_Var4 = (__tree_node_base *)*puVar2;
  if ((__tree_node_base *)*puVar2 == (__tree_node_base *)0x0) {
    FUN_005214d4(local_60,plVar1,&DAT_03a2945a,&local_68,auStack_70);
    *(undefined8 *)(local_60[0] + 0x10) = local_48;
    *(undefined8 *)local_60[0] = 0;
    *(undefined8 *)(local_60[0] + 8) = 0;
    *puVar2 = local_60[0];
    p_Var4 = local_60[0];
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      p_Var4 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var4);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
    p_Var4 = local_60[0];
  }
  p_Var3 = (__tree_node_base *)FUN_00522700(p_Var4 + 0x70,param_3);
  if (p_Var4 + 0x78 != p_Var3) {
    FUN_00522810(p_Var4 + 0x70,p_Var3);
  }
  if ((param_4 & 1) == 0) {
    FUN_0050f8bc(param_1,param_2);
  }
  return;
}


