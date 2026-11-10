/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005228dc; name: FUN_005228dc
 */


undefined1  [16]
FUN_005228dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  __tree_node_base *local_50;
  long *plStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_0051fd24(param_1,&local_38,param_2);
  p_Var4 = (__tree_node_base *)*puVar1;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x90);
    param_4 = (undefined8 *)*param_4;
    uVar5 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(p_Var4 + 0x30) = param_4[2];
    *(undefined8 *)(p_Var4 + 0x28) = uVar5;
    *(undefined8 *)(p_Var4 + 0x20) = uVar2;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(p_Var4 + 0x48) = 0;
    *(undefined8 *)(p_Var4 + 0x50) = 0;
    *(undefined8 *)(p_Var4 + 0x40) = 0;
    *(__tree_node_base **)(p_Var4 + 0x38) = p_Var4 + 0x40;
    *(undefined8 *)(p_Var4 + 0x88) = 0;
    *(undefined8 *)(p_Var4 + 0x80) = 0;
    *(undefined8 *)(p_Var4 + 0x78) = 0;
    *(undefined8 *)(p_Var4 + 0x70) = 0;
    *(undefined8 *)(p_Var4 + 0x68) = 0;
    *(undefined8 *)(p_Var4 + 0x60) = 0;
    *(undefined8 *)(p_Var4 + 0x58) = 0;
    local_40 = 1;
    *(undefined8 *)(p_Var4 + 0x10) = local_38;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *puVar1 = p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*puVar1;
    }
    local_50 = p_Var4;
    plStack_48 = param_1 + 1;
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    param_1[2] = param_1[2] + 1;
    local_50 = (__tree_node_base *)0x0;
    FUN_0051ff5c(&local_50);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = p_Var4;
  return auVar6;
}


