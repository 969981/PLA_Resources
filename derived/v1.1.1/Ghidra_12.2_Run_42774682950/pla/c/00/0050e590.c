/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e590; name: FUN_0050e590
 */


void FUN_0050e590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  __tree_node_base *p_Var4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  __tree_node_base *local_50 [3];
  undefined8 local_38;
  
  plVar2 = (long *)(param_1 + 0x188);
  local_58 = param_2;
  puVar1 = (undefined8 *)FUN_005213b8(plVar2,&local_38,param_2);
  p_Var4 = (__tree_node_base *)*puVar1;
  if ((__tree_node_base *)*puVar1 == (__tree_node_base *)0x0) {
    FUN_005214d4(local_50,plVar2,&DAT_03a2945a,&local_58,auStack_60);
    *(undefined8 *)(local_50[0] + 0x10) = local_38;
    *(undefined8 *)local_50[0] = 0;
    *(undefined8 *)(local_50[0] + 8) = 0;
    *puVar1 = local_50[0];
    p_Var4 = local_50[0];
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      p_Var4 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var4);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
    p_Var4 = local_50[0];
  }
  plVar2 = (long *)FUN_00510118(p_Var4 + 0x70,param_3);
  if (*plVar2 == 0) {
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,0xd8);
    if (lVar3 != 0) {
      FUN_00521a98(lVar3,param_2,param_3);
    }
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = lVar3;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0050e680 to 0050e683 has its CatchHandler @ 0050e6a4 */
      (**(code **)*puVar1)();
    }
    FUN_0050f8bc(param_1,param_2);
  }
  return;
}


