/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e72b4; name: FUN_003e72b4
 */


void FUN_003e72b4(long param_1,long param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  FUN_002ef750(param_1 + 0x110);
  plVar6 = *(long **)(param_1 + 0x138);
  plVar5 = (long *)(param_1 + 0x138);
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
LAB_003e7330:
    lVar4 = *plVar5;
    plVar1 = plVar5;
  }
  else {
    lVar3 = plVar6[4];
    lVar4 = lVar3 - param_2;
    while( true ) {
      while( true ) {
        plVar1 = plVar6;
        plVar7 = plVar1;
        if (param_2 < lVar3) break;
        if (lVar4 < 0 == SBORROW8(lVar3,param_2)) goto LAB_003e7330;
        plVar5 = plVar1 + 1;
        plVar6 = (long *)*plVar5;
        if (plVar6 == (long *)0x0) goto LAB_003e7330;
        lVar3 = plVar6[4];
        lVar4 = lVar3 - param_2;
      }
      plVar6 = (long *)*plVar1;
      if (plVar6 == (long *)0x0) break;
      lVar3 = plVar6[4];
      lVar4 = lVar3 - param_2;
      plVar5 = plVar1;
    }
    lVar4 = *plVar1;
  }
  if (lVar4 == 0) {
    p_Var2 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(long *)(p_Var2 + 0x20) = param_2;
    *(long **)(p_Var2 + 0x10) = plVar7;
    p_Var2[0x28] = (__tree_node_base)0x1;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *plVar1 = (long)p_Var2;
    if (**(long **)(param_1 + 0x130) != 0) {
      *(long *)(param_1 + 0x130) = **(long **)(param_1 + 0x130);
      p_Var2 = (__tree_node_base *)*plVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x138),p_Var2);
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
  }
                    /* try { // try from 003e73a0 to 003e73a7 has its CatchHandler @ 003e73b8 */
  FUN_002ef790(param_1 + 0x110);
  return;
}


