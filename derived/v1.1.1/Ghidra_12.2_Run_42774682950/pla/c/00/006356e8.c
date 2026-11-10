/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006356e8; name: FUN_006356e8
 */


undefined1  [16] FUN_006356e8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_006357bc(param_1,&local_28,param_2);
  p_Var4 = (__tree_node_base *)*puVar1;
  if (p_Var4 == (__tree_node_base *)0x0) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      p_Var4 = (__tree_node_base *)FUN_002ee6d0(0x28);
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x28);
      }
      p_Var4 = (__tree_node_base *)FUN_0032cea0(lVar5,0x28);
    }
    *(undefined8 *)(p_Var4 + 0x20) = *param_3;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(undefined8 *)(p_Var4 + 0x10) = local_28;
    *puVar1 = p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = p_Var4;
  return auVar6;
}


