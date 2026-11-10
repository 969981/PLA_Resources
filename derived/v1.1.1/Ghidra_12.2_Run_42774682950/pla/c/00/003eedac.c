/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eedac; name: FUN_003eedac
 */


void FUN_003eedac(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_002ef750();
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = lVar4 + 1;
  *(long *)(param_1 + 0x38) = lVar1;
  *(long *)(param_2 + 0x20) = lVar1;
  puVar7 = (undefined8 *)(param_1 + 0x28);
  puVar8 = (undefined8 *)*puVar7;
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  else {
    lVar5 = puVar8[4];
    puVar7 = (undefined8 *)(param_1 + 0x28);
    while( true ) {
      while (puVar2 = puVar8, puVar9 = puVar2, lVar1 < lVar5) {
        puVar8 = (undefined8 *)*puVar2;
        if (puVar8 == (undefined8 *)0x0) {
          p_Var6 = (__tree_node_base *)*puVar2;
          goto joined_r0x003eee3c;
        }
        lVar5 = puVar8[4];
        puVar7 = puVar2;
      }
      if (lVar4 < lVar5) break;
      puVar7 = puVar2 + 1;
      puVar8 = (undefined8 *)*puVar7;
      if (puVar8 == (undefined8 *)0x0) break;
      lVar5 = puVar8[4];
    }
  }
  p_Var6 = (__tree_node_base *)*puVar7;
  puVar2 = puVar7;
joined_r0x003eee3c:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(undefined8 *)(p_Var6 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(undefined8 **)(p_Var6 + 0x10) = puVar9;
    *puVar2 = p_Var6;
    if (**(long **)(param_1 + 0x20) == 0) {
      p_Var3 = p_Var6;
    }
    else {
      *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
      p_Var3 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x28),p_Var3);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  *(long *)(p_Var6 + 0x28) = param_2;
                    /* try { // try from 003eeeac to 003eeeb3 has its CatchHandler @ 003eeec4 */
  FUN_002ef790(param_1);
  return;
}


