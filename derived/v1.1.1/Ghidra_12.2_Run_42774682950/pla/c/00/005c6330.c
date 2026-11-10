/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6330; name: FUN_005c6330
 */


undefined1  [16]
FUN_005c6330(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  __tree_node_base *p_Var1;
  int iVar2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  __tree_node_base *local_58 [3];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    plVar6 = param_1 + 1;
    iVar2 = FUN_0051f1a8(*param_2,plVar7[4]);
    do {
      if (iVar2 < 0) {
        plVar5 = (long *)*plVar7;
        plVar6 = plVar7;
        if (plVar5 == (long *)0x0) {
          p_Var1 = (__tree_node_base *)*plVar7;
          p_Var3 = local_58[0];
          goto joined_r0x005c63d0;
        }
      }
      else {
        iVar2 = FUN_0051f1a8(plVar7[4],*param_2);
        if (-1 < iVar2) goto LAB_005c63b8;
        plVar6 = plVar7 + 1;
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) goto LAB_005c63b8;
      }
      iVar2 = FUN_0051f1a8(*param_2,plVar5[4]);
      plVar7 = plVar5;
    } while( true );
  }
  plVar7 = plVar6;
LAB_005c63b8:
  p_Var1 = (__tree_node_base *)*plVar6;
  p_Var3 = local_58[0];
joined_r0x005c63d0:
  local_58[0] = p_Var1;
  if (local_58[0] == (__tree_node_base *)0x0) {
    local_58[0] = p_Var3;
    FUN_005c6440(local_58,param_1,param_3,param_4);
    *(undefined8 *)local_58[0] = 0;
    *(undefined8 *)(local_58[0] + 8) = 0;
    *(long **)(local_58[0] + 0x10) = plVar7;
    *plVar6 = (long)local_58[0];
    p_Var3 = local_58[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    param_1[2] = param_1[2] + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = local_58[0];
  return auVar8;
}


