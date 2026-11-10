/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00370d00; name: FUN_00370d00
 */


void FUN_00370d00(long *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  __tree_node_base *p_Var2;
  void *__src;
  size_t __n;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  plVar10 = param_1 + 1;
  plVar12 = (long *)*plVar10;
  if (plVar12 == (long *)0x0) {
    plVar12 = plVar10;
LAB_00370d7c:
    p_Var8 = (__tree_node_base *)*plVar10;
    if (p_Var8 == (__tree_node_base *)0x0) goto LAB_00370dc0;
LAB_00370d84:
    puVar6 = *(undefined8 **)(p_Var8 + 0x30);
    puVar4 = *(undefined8 **)(p_Var8 + 0x38);
    if (puVar6 != puVar4) {
LAB_00370d90:
      *puVar6 = param_3;
      *(long *)(p_Var8 + 0x30) = *(long *)(p_Var8 + 0x30) + 8;
      return;
    }
  }
  else {
    plVar10 = param_1 + 1;
    bVar1 = param_2 <= (ulong)plVar12[4];
    if (!bVar1 || plVar12[4] == param_2) goto LAB_00370d54;
    while (plVar10 = plVar12, plVar12 = (long *)*plVar10, plVar12 != (long *)0x0) {
      bVar1 = param_2 <= (ulong)plVar12[4];
      if ((ulong)plVar12[4] <= param_2) {
LAB_00370d54:
        do {
          if (bVar1) goto LAB_00370d7c;
          plVar10 = plVar12 + 1;
          plVar3 = (long *)*plVar10;
          if (plVar3 == (long *)0x0) goto LAB_00370d7c;
          bVar1 = param_2 <= (ulong)plVar3[4];
          plVar12 = plVar3;
        } while (!bVar1 || plVar3[4] == param_2);
      }
    }
    p_Var8 = (__tree_node_base *)*plVar10;
    plVar12 = plVar10;
    if (p_Var8 != (__tree_node_base *)0x0) goto LAB_00370d84;
LAB_00370dc0:
    p_Var8 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    *(ulong *)(p_Var8 + 0x20) = param_2;
    *(undefined8 *)(p_Var8 + 0x28) = 0;
    *(long **)(p_Var8 + 0x10) = plVar12;
    *(undefined8 *)(p_Var8 + 0x30) = 0;
    *(undefined8 *)(p_Var8 + 0x38) = 0;
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *plVar10 = (long)p_Var8;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var8;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar10;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[2] = param_1[2] + 1;
    puVar6 = *(undefined8 **)(p_Var8 + 0x30);
    puVar4 = *(undefined8 **)(p_Var8 + 0x38);
    if (puVar6 != puVar4) goto LAB_00370d90;
  }
  lVar7 = *(long *)(p_Var8 + 0x28);
  lVar9 = (long)puVar6 - lVar7 >> 3;
  uVar11 = lVar9 + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = (long)puVar4 - lVar7;
  if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar7 >> 2;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
      goto LAB_00370e7c;
    }
  }
  else {
    uVar11 = 0x1fffffffffffffff;
  }
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 3);
LAB_00370e7c:
  puVar6 = (undefined8 *)(lVar7 + lVar9 * 8);
  *puVar6 = param_3;
  __src = *(void **)(p_Var8 + 0x28);
  __n = *(long *)(p_Var8 + 0x30) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar6 - __n),__src,__n);
    __src = *(void **)(p_Var8 + 0x28);
  }
  *(void **)(p_Var8 + 0x28) = (void *)((long)puVar6 - __n);
  *(undefined8 **)(p_Var8 + 0x30) = puVar6 + 1;
  *(ulong *)(p_Var8 + 0x38) = lVar7 + uVar11 * 8;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


