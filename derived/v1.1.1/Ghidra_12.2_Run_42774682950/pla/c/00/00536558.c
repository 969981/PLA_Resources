/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536558; name: FUN_00536558
 */


void FUN_00536558(long *param_1,ulong *param_2)

{
  bool bVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong local_38;
  
  uVar5 = *param_2;
  *param_2 = 0;
  plVar6 = param_1 + 1;
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar6;
LAB_005365e0:
    lVar4 = *plVar6;
  }
  else {
    plVar6 = param_1 + 1;
    bVar1 = uVar5 <= (ulong)plVar7[4];
    if (!bVar1 || plVar7[4] == uVar5) goto LAB_005365b8;
    while( true ) {
      plVar6 = plVar7;
      plVar7 = (long *)*plVar6;
      if (plVar7 == (long *)0x0) break;
      bVar1 = uVar5 <= (ulong)plVar7[4];
      if ((ulong)plVar7[4] <= uVar5) {
LAB_005365b8:
        do {
          if (bVar1) goto LAB_005365e0;
          plVar6 = plVar7 + 1;
          plVar3 = (long *)*plVar6;
          if (plVar3 == (long *)0x0) goto LAB_005365e0;
          bVar1 = uVar5 <= (ulong)plVar3[4];
          plVar7 = plVar3;
        } while (!bVar1 || plVar3[4] == uVar5);
      }
    }
    lVar4 = *plVar6;
    plVar7 = plVar6;
  }
  local_38 = uVar5;
  if (lVar4 == 0) {
    p_Var2 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(ulong *)(p_Var2 + 0x20) = uVar5;
    *(ulong *)(p_Var2 + 0x28) = uVar5;
    local_38 = 0;
    *(long **)(p_Var2 + 0x10) = plVar7;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *plVar6 = (long)p_Var2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[2] = param_1[2] + 1;
  }
  FUN_005318f8(&local_38);
  return;
}


