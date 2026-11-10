/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dbb74; name: FUN_006dbb74
 */


undefined1  [16] FUN_006dbb74(long *param_1,undefined8 param_2,undefined8 param_3)

{
  __tree_node_base *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  undefined8 local_38;
  
  plVar5 = param_1 + 2;
  p_Var1 = (__tree_node_base *)(**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,0x60,8);
  p_Var4 = p_Var1 + 0x20;
                    /* try { // try from 006dbbb4 to 006dbbc7 has its CatchHandler @ 006dbd04 */
  FUN_006dbe4c(plVar5,p_Var4,param_2,param_3);
                    /* try { // try from 006dbbc8 to 006dbbd7 has its CatchHandler @ 006dbcb0 */
  puVar2 = (undefined8 *)FUN_006dbd30(param_1,&local_38,p_Var4);
  p_Var6 = (__tree_node_base *)*puVar2;
  if (p_Var6 == (__tree_node_base *)0x0) {
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(undefined8 *)(p_Var1 + 0x10) = local_38;
    *puVar2 = p_Var1;
    if (*(long *)*param_1 == 0) {
      p_Var4 = p_Var1;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var4 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var4);
    param_1[3] = param_1[3] + 1;
    uVar3 = 1;
  }
  else {
    if (p_Var1 != (__tree_node_base *)0x0) {
      if (((byte)p_Var1[0x40] & 1) != 0) {
        (**(code **)(**(long **)(p_Var1 + 0x58) + 0x18))
                  (*(long **)(p_Var1 + 0x58),*(undefined8 *)(p_Var1 + 0x50),
                   *(ulong *)(p_Var1 + 0x40) & 0xfffffffffffffffe,1);
      }
      if (((byte)*p_Var4 & 1) != 0) {
        (**(code **)(**(long **)(p_Var1 + 0x38) + 0x18))
                  (*(long **)(p_Var1 + 0x38),*(undefined8 *)(p_Var1 + 0x30),
                   *(ulong *)(p_Var1 + 0x20) & 0xfffffffffffffffe,1);
      }
      (**(code **)(*(long *)*plVar5 + 0x18))((long *)*plVar5,p_Var1,0x60,8);
    }
    uVar3 = 0;
    p_Var1 = p_Var6;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = p_Var1;
  return auVar7;
}


