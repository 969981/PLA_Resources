/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010fc044; name: FUN_010fc044
 */


void FUN_010fc044(long *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  __tree_node_base *local_48 [3];
  
  plVar2 = param_1 + 1;
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  else {
    plVar2 = param_1 + 1;
    while( true ) {
      for (; *param_2 < (ulong)plVar3[4]; plVar3 = (long *)*plVar3) {
        plVar2 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_010fc0b0;
      }
      if (*param_2 <= (ulong)plVar3[4]) break;
      plVar2 = plVar3 + 1;
      if ((long *)*plVar2 == (long *)0x0) break;
      plVar3 = (long *)*plVar2;
    }
LAB_010fc0b0:
    lVar1 = *plVar2;
  }
  if (lVar1 == 0) {
    FUN_010fc128(local_48,param_1,param_3);
    *(undefined8 *)local_48[0] = 0;
    *(undefined8 *)(local_48[0] + 8) = 0;
    *(long **)(local_48[0] + 0x10) = plVar3;
    *plVar2 = (long)local_48[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      local_48[0] = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],local_48[0]);
    param_1[6] = param_1[6] + 1;
  }
  return;
}


