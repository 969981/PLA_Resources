/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006144fc; name: FUN_006144fc
 */


__tree_node_base * FUN_006144fc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  p_Var1 = (__tree_node_base *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x60,8);
  puVar3 = (undefined8 *)*param_3;
  uVar4 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  *(undefined8 *)(p_Var1 + 0x28) = puVar3[1];
  *(undefined8 *)(p_Var1 + 0x20) = uVar4;
  *(undefined8 *)(p_Var1 + 0x38) = uVar6;
  *(undefined8 *)(p_Var1 + 0x30) = uVar5;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3 = (undefined8 *)param_3[1];
  uVar4 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  *(undefined8 *)(p_Var1 + 0x48) = puVar3[1];
  *(undefined8 *)(p_Var1 + 0x40) = uVar4;
  *(undefined8 *)(p_Var1 + 0x58) = uVar6;
  *(undefined8 *)(p_Var1 + 0x50) = uVar5;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
                    /* try { // try from 00614564 to 00614577 has its CatchHandler @ 006145d0 */
  puVar3 = (undefined8 *)FUN_00614644(param_1,param_2,&local_38,p_Var1 + 0x20);
  *(undefined8 *)p_Var1 = 0;
  *(undefined8 *)(p_Var1 + 8) = 0;
  *(undefined8 *)(p_Var1 + 0x10) = local_38;
  *puVar3 = p_Var1;
  if (*(long *)*param_1 == 0) {
    p_Var2 = p_Var1;
  }
  else {
    *param_1 = *(long *)*param_1;
    p_Var2 = (__tree_node_base *)*puVar3;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var2);
  param_1[3] = param_1[3] + 1;
  return p_Var1;
}


