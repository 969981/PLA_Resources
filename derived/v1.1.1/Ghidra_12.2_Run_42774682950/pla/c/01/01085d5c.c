/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01085d5c; name: FUN_01085d5c
 */


void FUN_01085d5c(ulong *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  ulong *puVar9;
  
  DAT_043ba400 = 0;
  DAT_043ba3f8 = (__tree_node_base *)0x0;
  DAT_043ba3f0 = &DAT_043ba3f8;
  if (param_2 == 0) {
    DAT_043ba400 = 0;
    DAT_043ba3f8 = (__tree_node_base *)0x0;
    return;
  }
  puVar9 = param_1 + param_2 * 5;
  lVar1 = tpidr_el0;
LAB_01085f1c:
  p_Var8 = (__tree_node_base *)&DAT_043ba3f8;
  do {
    if (DAT_043ba3f8 == (__tree_node_base *)0x0) goto LAB_01085f34;
    p_Var5 = p_Var8 + 8;
    if (*(long *)(p_Var8 + 8) == 0) goto LAB_01085e2c;
LAB_01085ed8:
    param_1 = param_1 + 5;
    if (param_1 == puVar9) {
      return;
    }
    if ((__tree_node_base **)DAT_043ba3f0 == &DAT_043ba3f8) goto LAB_01085f1c;
    if (DAT_043ba3f8 == (__tree_node_base *)0x0) {
      p_Var5 = (__tree_node_base *)&DAT_043ba3f8;
      do {
        p_Var8 = *(__tree_node_base **)(p_Var5 + 0x10);
        bVar2 = *(__tree_node_base **)p_Var8 == p_Var5;
        p_Var5 = p_Var8;
      } while (bVar2);
    }
    else {
      p_Var5 = *(__tree_node_base **)(DAT_043ba3f8 + 8);
      p_Var8 = DAT_043ba3f8;
      if ((p_Var5 != (__tree_node_base *)0x0) &&
         (p_Var7 = *(__tree_node_base **)(p_Var5 + 8), p_Var8 = p_Var5,
         p_Var7 != (__tree_node_base *)0x0)) {
        p_Var8 = p_Var7;
        for (p_Var5 = *(__tree_node_base **)(p_Var7 + 8); p_Var5 != (__tree_node_base *)0x0;
            p_Var5 = *(__tree_node_base **)(p_Var5 + 8)) {
          p_Var8 = p_Var5;
        }
      }
    }
    uVar6 = *param_1;
  } while (*(ulong *)(p_Var8 + 0x20) < uVar6);
  p_Var5 = DAT_043ba3f8;
  if (DAT_043ba3f8 == (__tree_node_base *)0x0) {
LAB_01085f34:
    p_Var8 = (__tree_node_base *)&DAT_043ba3f8;
    p_Var5 = (__tree_node_base *)&DAT_043ba3f8;
  }
  else {
    do {
      while (p_Var8 = p_Var5, *(ulong *)(p_Var8 + 0x20) <= uVar6) {
        if (uVar6 <= *(ulong *)(p_Var8 + 0x20)) goto LAB_01085ed8;
        p_Var5 = *(__tree_node_base **)(p_Var8 + 8);
        if (*(__tree_node_base **)(p_Var8 + 8) == (__tree_node_base *)0x0) {
          p_Var5 = p_Var8 + 8;
          goto LAB_01085e2c;
        }
      }
      p_Var5 = *(__tree_node_base **)p_Var8;
    } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
    p_Var5 = p_Var8;
  }
LAB_01085e2c:
  plVar3 = DAT_043f1798;
  plVar4 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar4 = plVar3;
  }
  p_Var7 = (__tree_node_base *)(**(code **)(*plVar4 + 0x10))(plVar4,0x48,8);
  *(ulong *)(p_Var7 + 0x20) = *param_1;
  *(ulong *)(p_Var7 + 0x28) = param_1[1];
  *(ulong *)(p_Var7 + 0x30) = param_1[2];
  plVar3 = (long *)param_1[3];
  *(long **)(p_Var7 + 0x38) = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *(int *)(p_Var7 + 0x40) = (int)param_1[4];
  *(__tree_node_base **)(p_Var7 + 0x10) = p_Var8;
  *(undefined8 *)p_Var7 = 0;
  *(undefined8 *)(p_Var7 + 8) = 0;
  *(__tree_node_base **)p_Var5 = p_Var7;
  if ((undefined8 *)*DAT_043ba3f0 != (undefined8 *)0x0) {
    p_Var7 = *(__tree_node_base **)p_Var5;
    DAT_043ba3f0 = (undefined8 *)*DAT_043ba3f0;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_043ba3f8,p_Var7);
  DAT_043ba400 = DAT_043ba400 + 1;
  goto LAB_01085ed8;
}


