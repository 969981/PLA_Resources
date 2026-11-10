/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e40fc; name: FUN_003e40fc
 */


undefined1  [16] FUN_003e40fc(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
LAB_003e4194:
    p_Var6 = (__tree_node_base *)*plVar7;
    plVar2 = plVar7;
  }
  else {
    uVar1 = *param_2;
    plVar7 = param_1 + 1;
    uVar5 = plVar8[4];
    while( true ) {
      while ((plVar2 = plVar8, plVar9 = plVar2, uVar5 <= uVar1 &&
             ((uVar5 < uVar1 || ((ulong)plVar2[5] <= param_2[1]))))) {
        if ((uVar1 <= uVar5) && (param_2[1] <= (ulong)plVar2[5])) goto LAB_003e4194;
        plVar7 = plVar2 + 1;
        plVar8 = (long *)*plVar7;
        if (plVar8 == (long *)0x0) goto LAB_003e4194;
        uVar5 = plVar8[4];
      }
      plVar8 = (long *)*plVar2;
      if (plVar8 == (long *)0x0) break;
      uVar5 = plVar8[4];
      plVar7 = plVar2;
    }
    p_Var6 = (__tree_node_base *)*plVar2;
  }
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    uVar4 = *param_3;
    *(undefined8 *)(p_Var6 + 0x28) = param_3[1];
    *(undefined8 *)(p_Var6 + 0x20) = uVar4;
    *(undefined8 *)(p_Var6 + 0x30) = param_3[2];
    *(undefined8 *)(p_Var6 + 0x38) = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *plVar2 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar4 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar4 = 0;
  }
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = p_Var6;
  return auVar10;
}


