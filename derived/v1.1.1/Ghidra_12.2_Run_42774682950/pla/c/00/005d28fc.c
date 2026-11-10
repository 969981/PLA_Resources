/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d28fc; name: FUN_005d28fc
 */


undefined1  [16]
FUN_005d28fc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    plVar6 = param_1 + 1;
    iVar1 = FUN_0051f1a8(*param_2,plVar7[4]);
    do {
      if (iVar1 < 0) {
        plVar4 = (long *)*plVar7;
        plVar6 = plVar7;
        if (plVar4 == (long *)0x0) {
          p_Var5 = (__tree_node_base *)*plVar7;
          goto joined_r0x005d2990;
        }
      }
      else {
        iVar1 = FUN_0051f1a8(plVar7[4],*param_2);
        if (-1 < iVar1) goto LAB_005d2978;
        plVar6 = plVar7 + 1;
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) goto LAB_005d2978;
      }
      iVar1 = FUN_0051f1a8(*param_2,plVar4[4]);
      plVar7 = plVar4;
    } while( true );
  }
  plVar7 = plVar6;
LAB_005d2978:
  p_Var5 = (__tree_node_base *)*plVar6;
joined_r0x005d2990:
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(undefined8 *)(p_Var5 + 0x20) = *(undefined8 *)*param_4;
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    *(long **)(p_Var5 + 0x10) = plVar7;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar6 = (long)p_Var5;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var5;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = p_Var5;
  return auVar8;
}


