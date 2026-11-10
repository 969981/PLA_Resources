/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00340df4; name: FUN_00340df4
 */


undefined8 FUN_00340df4(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  void *__src;
  size_t __n;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  uVar8 = *(ulong *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x44);
  plVar9 = (long *)(param_1 + 0x188);
  plVar11 = *(long **)(param_1 + 0x188);
  if (plVar11 == (long *)0x0) {
    lVar6 = *plVar9;
    plVar11 = plVar9;
  }
  else {
    uVar4 = plVar11[4];
    while( true ) {
      while ((uVar8 < uVar4 || ((uVar8 <= uVar4 && (iVar2 < (int)plVar11[5]))))) {
        plVar5 = (long *)*plVar11;
        plVar9 = plVar11;
        if (plVar5 == (long *)0x0) goto LAB_00340e90;
        uVar4 = plVar5[4];
        plVar11 = plVar5;
      }
      if ((uVar8 <= uVar4) && (iVar2 <= (int)plVar11[5])) break;
      plVar9 = plVar11 + 1;
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) break;
      uVar4 = plVar5[4];
      plVar11 = plVar5;
    }
LAB_00340e90:
    lVar6 = *plVar9;
  }
  if (lVar6 != 0) {
    return 0;
  }
  p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  *(ulong *)(p_Var3 + 0x20) = uVar8;
  *(int *)(p_Var3 + 0x28) = iVar2;
  *(long *)(p_Var3 + 0x30) = param_2;
  *(long **)(p_Var3 + 0x10) = plVar11;
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *plVar9 = (long)p_Var3;
  if (**(long **)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x180) = **(long **)(param_1 + 0x180);
    p_Var3 = (__tree_node_base *)*plVar9;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 0x188),p_Var3);
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
  puVar1 = *(ulong **)(param_1 + 0x1e8);
  if (puVar1 != *(ulong **)(param_1 + 0x1f0)) {
    *puVar1 = uVar8;
    *(int *)(puVar1 + 1) = iVar2;
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 0x10;
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x1e0);
  lVar10 = (long)puVar1 - lVar6 >> 4;
  uVar4 = lVar10 + 1;
  if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(ulong **)(param_1 + 0x1f0) - lVar6;
  if ((ulong)(lVar6 >> 4) < 0x7ffffffffffffff) {
    uVar7 = lVar6 >> 3;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      lVar6 = 0;
      goto LAB_00340f80;
    }
  }
  else {
    uVar4 = 0xfffffffffffffff;
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar4 << 4);
LAB_00340f80:
  puVar1 = (ulong *)(lVar6 + lVar10 * 0x10);
  *puVar1 = uVar8;
  *(int *)(puVar1 + 1) = iVar2;
  __src = *(void **)(param_1 + 0x1e0);
  __n = *(long *)(param_1 + 0x1e8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x1e0);
  }
  *(void **)(param_1 + 0x1e0) = (void *)((long)puVar1 - __n);
  *(ulong **)(param_1 + 0x1e8) = puVar1 + 2;
  *(ulong *)(param_1 + 0x1f0) = lVar6 + uVar4 * 0x10;
  if (__src != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return 1;
}


