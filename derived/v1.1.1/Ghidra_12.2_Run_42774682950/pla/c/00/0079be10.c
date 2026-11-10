/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079be10; name: FUN_0079be10
 */


undefined1  [16] FUN_0079be10(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = param_1 + 1;
    iVar1 = *(int *)plVar8[4];
    do {
      if (*(int *)*param_2 < iVar1) {
        plVar4 = (long *)*plVar8;
        plVar7 = plVar8;
        if (plVar4 == (long *)0x0) {
          p_Var5 = (__tree_node_base *)*plVar8;
          goto joined_r0x0079bea4;
        }
      }
      else {
        if (*(int *)*param_2 <= iVar1) goto LAB_0079be8c;
        plVar7 = plVar8 + 1;
        plVar4 = (long *)*plVar7;
        if (plVar4 == (long *)0x0) goto LAB_0079be8c;
      }
      iVar1 = *(int *)plVar4[4];
      plVar8 = plVar4;
    } while( true );
  }
  plVar8 = plVar7;
LAB_0079be8c:
  p_Var5 = (__tree_node_base *)*plVar7;
joined_r0x0079bea4:
  if (p_Var5 == (__tree_node_base *)0x0) {
    lVar6 = param_1[2];
    if (lVar6 == 0) {
      p_Var5 = (__tree_node_base *)FUN_002ee6d0(0x28);
    }
    else {
      if (*(long *)(lVar6 + 0x70) != 0) {
        FUN_0032cf88(lVar6,0,0x28);
      }
      p_Var5 = (__tree_node_base *)FUN_0032cea0(lVar6,0x28);
    }
    *(undefined8 *)(p_Var5 + 0x20) = *param_3;
    *(long **)(p_Var5 + 0x10) = plVar8;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar7 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = p_Var5;
  return auVar9;
}


