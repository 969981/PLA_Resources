/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006641c8; name: FUN_006641c8
 */


undefined1  [16]
FUN_006641c8(long *param_1,uint *param_2,undefined4 *param_3,__tree_node_base *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar7;
LAB_00664248:
    p_Var6 = (__tree_node_base *)*plVar7;
  }
  else {
    uVar1 = *param_2;
    plVar7 = param_1 + 1;
    bVar2 = uVar1 <= *(uint *)(plVar8 + 4);
    if (!bVar2 || *(uint *)(plVar8 + 4) == uVar1) goto LAB_00664220;
    while (plVar7 = plVar8, plVar8 = (long *)*plVar7, plVar8 != (long *)0x0) {
      bVar2 = uVar1 <= *(uint *)(plVar8 + 4);
      if (*(uint *)(plVar8 + 4) <= uVar1) {
LAB_00664220:
        do {
          if (bVar2) goto LAB_00664248;
          plVar7 = plVar8 + 1;
          plVar5 = (long *)*plVar7;
          if (plVar5 == (long *)0x0) goto LAB_00664248;
          bVar2 = uVar1 <= *(uint *)(plVar5 + 4);
          plVar8 = plVar5;
        } while (!bVar2 || *(uint *)(plVar5 + 4) == uVar1);
      }
    }
    p_Var6 = (__tree_node_base *)*plVar7;
    plVar8 = plVar7;
  }
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)
             (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x90,0x10);
    *(undefined4 *)(p_Var6 + 0x20) = *param_3;
    if (p_Var6 + 0x30 != param_4) {
      p_Var4 = *(__tree_node_base **)(param_4 + 0x20);
      if (p_Var4 == (__tree_node_base *)0x0) {
        *(undefined8 *)(p_Var6 + 0x50) = 0;
        p_Var4 = *(__tree_node_base **)(param_4 + 0x50);
      }
      else if (p_Var4 == param_4) {
        *(__tree_node_base **)(p_Var6 + 0x50) = p_Var6 + 0x30;
        (**(code **)(**(long **)(param_4 + 0x20) + 0x28))();
        p_Var4 = *(__tree_node_base **)(param_4 + 0x50);
      }
      else {
        *(__tree_node_base **)(p_Var6 + 0x50) = p_Var4;
        *(undefined8 *)(param_4 + 0x20) = 0;
        p_Var4 = *(__tree_node_base **)(param_4 + 0x50);
      }
      if (p_Var4 == (__tree_node_base *)0x0) {
        *(undefined8 *)(p_Var6 + 0x80) = 0;
      }
      else if (p_Var4 == param_4 + 0x30) {
        *(__tree_node_base **)(p_Var6 + 0x80) = p_Var6 + 0x60;
        (**(code **)(**(long **)(param_4 + 0x50) + 0x28))();
      }
      else {
        *(__tree_node_base **)(p_Var6 + 0x80) = p_Var4;
        *(undefined8 *)(param_4 + 0x50) = 0;
      }
    }
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar8;
    *plVar7 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var4 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var4 = (__tree_node_base *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var4);
    uVar3 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = p_Var6;
  return auVar9;
}


