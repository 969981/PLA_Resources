/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fbc88; name: FUN_006fbc88
 */


undefined1  [16] FUN_006fbc88(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  __tree_node_base *local_38;
  undefined8 *local_30;
  char local_28;
  undefined8 local_18;
  
  FUN_006fbddc(&local_38);
                    /* try { // try from 006fbca8 to 006fbcb3 has its CatchHandler @ 006fbd78 */
  puVar1 = (undefined8 *)FUN_006fbf14(param_1,&local_18,local_38 + 0x20);
  p_Var3 = local_38;
  p_Var4 = (__tree_node_base *)*puVar1;
  if (p_Var4 == (__tree_node_base *)0x0) {
    *(undefined8 *)(local_38 + 0x10) = local_18;
    *(undefined8 *)local_38 = 0;
    *(undefined8 *)(local_38 + 8) = 0;
    *puVar1 = local_38;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    param_1[3] = param_1[3] + 1;
    uVar2 = 1;
  }
  else {
    local_38 = (__tree_node_base *)0x0;
    if (p_Var3 != (__tree_node_base *)0x0) {
      if ((local_28 != '\0') && (((byte)p_Var3[0x20] & 1) != 0)) {
        (**(code **)(**(long **)(p_Var3 + 0x38) + 0x18))
                  (*(long **)(p_Var3 + 0x38),*(undefined8 *)(p_Var3 + 0x30),
                   *(ulong *)(p_Var3 + 0x20) & 0xfffffffffffffffe,1);
      }
      (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,p_Var3,0x48,8);
    }
    uVar2 = 0;
    local_38 = p_Var4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = local_38;
  return auVar5;
}


