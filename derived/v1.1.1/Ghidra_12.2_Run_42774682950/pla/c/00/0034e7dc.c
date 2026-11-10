/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034e7dc; name: FUN_0034e7dc
 */


undefined1  [16] FUN_0034e7dc(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  __tree_node_base *p_Var1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_0034e62c(param_1,*param_1,param_2,param_3 & 1);
  uVar2 = auVar9._8_8_;
  switch(auVar9._0_4_) {
  case 1:
  case 4:
  case 6:
    uVar2 = *(ulong *)(uVar2 + 0x10);
    if (uVar2 != param_1[10]) {
LAB_0034e83c:
      plVar4 = (long *)param_1[0xd];
      do {
        if (plVar4 == (long *)0x0) {
          return auVar9;
        }
        if ((ulong)plVar4[4] <= uVar2) {
          if (uVar2 <= (ulong)plVar4[4]) break;
          plVar4 = plVar4 + 1;
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
    break;
  case 2:
    uVar2 = *(ulong *)(uVar2 + 0x28);
    if (uVar2 != param_1[10]) goto LAB_0034e83c;
    break;
  case 3:
  case 7:
    uVar2 = *(ulong *)(*(long *)(uVar2 + 0x10) + 0x10);
    if (uVar2 != param_1[10]) goto LAB_0034e83c;
    break;
  case 5:
    uVar2 = *(ulong *)(*(long *)(uVar2 + 0x18) + 0x10);
    if (uVar2 != param_1[10]) goto LAB_0034e83c;
    break;
  case 8:
    if (uVar2 != param_1[10]) goto LAB_0034e83c;
    break;
  default:
    uVar2 = 0;
    if (param_1[10] != 0) goto LAB_0034e83c;
  }
  p_Var5 = (__tree_node_base *)(param_1 + 0x10);
  p_Var1 = *(__tree_node_base **)p_Var5;
  if (p_Var1 != (__tree_node_base *)0x0) {
    p_Var6 = p_Var1;
    p_Var8 = p_Var5;
    do {
      if (*(ulong *)(p_Var6 + 0x20) >= uVar2) {
        p_Var8 = p_Var6;
      }
      p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(ulong *)(p_Var6 + 0x20) < uVar2) * 8);
    } while (p_Var6 != (__tree_node_base *)0x0);
    if ((p_Var8 != p_Var5) && (*(ulong *)(p_Var8 + 0x20) <= uVar2)) {
      plVar4 = *(long **)(p_Var8 + 8);
      if (*(long **)(p_Var8 + 8) == (long *)0x0) {
        p_Var5 = p_Var8 + 0x10;
        plVar3 = *(long **)p_Var5;
        if ((__tree_node_base *)*plVar3 != p_Var8) {
          do {
            lVar7 = *(long *)p_Var5;
            p_Var5 = (__tree_node_base *)(lVar7 + 0x10);
            plVar3 = *(long **)p_Var5;
          } while (*plVar3 != lVar7);
        }
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((__tree_node_base *)param_1[0xf] == p_Var8) {
        param_1[0xf] = plVar3;
      }
      param_1[0x11] = param_1[0x11] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var1,p_Var8);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var8);
    }
  }
  return auVar9;
}


