/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005258b4; name: FUN_005258b4
 */


long * FUN_005258b4(undefined8 *param_1,__tree_node_base *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var4 = param_2 + 0x10;
    plVar6 = *(long **)p_Var4;
    if ((__tree_node_base *)*plVar6 != param_2) {
      do {
        lVar7 = *(long *)p_Var4;
        p_Var4 = (__tree_node_base *)(lVar7 + 0x10);
        plVar6 = *(long **)p_Var4;
      } while (*plVar6 != lVar7);
    }
  }
  else {
    do {
      plVar6 = plVar2;
      plVar2 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == param_2) {
    *param_1 = plVar6;
  }
  param_1[2] = param_1[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],param_2);
  lVar7 = *(long *)(param_2 + 0x40);
  if (lVar7 != 0) {
    lVar5 = *(long *)(param_2 + 0x48);
    if (lVar5 == lVar7) {
      lVar5 = lVar7;
    }
    else {
      do {
        puVar1 = (undefined8 *)(lVar5 + -0x10);
        lVar3 = lVar5 + -0x18;
        lVar5 = lVar5 + -0x38;
        FUN_0051f7a0(lVar3,*puVar1);
      } while (lVar7 != lVar5);
      lVar5 = *(long *)(param_2 + 0x40);
    }
    *(long *)(param_2 + 0x48) = lVar7;
    FUN_002e2ea0(PTR_LAB_04373088,lVar5);
  }
  FUN_0051f718(param_2 + 0x28,*(undefined8 *)(param_2 + 0x30));
  FUN_0051f4ac(param_2 + 0x20);
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return plVar6;
}


