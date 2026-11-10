/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00370edc; name: FUN_00370edc
 */


undefined8 FUN_00370edc(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  __tree_node_base *p_Var11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  
  puVar13 = (undefined8 *)(param_1 + 0x20);
  puVar14 = (undefined8 *)*puVar13;
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = puVar13;
LAB_00370f54:
    p_Var11 = (__tree_node_base *)*puVar13;
  }
  else {
    puVar13 = (undefined8 *)(param_1 + 0x20);
    bVar3 = param_2 <= (ulong)puVar14[4];
    if (!bVar3 || puVar14[4] == param_2) goto LAB_00370f2c;
    while (puVar13 = puVar14, puVar14 = (undefined8 *)*puVar13, puVar14 != (undefined8 *)0x0) {
      bVar3 = param_2 <= (ulong)puVar14[4];
      if ((ulong)puVar14[4] <= param_2) {
LAB_00370f2c:
        do {
          if (bVar3) goto LAB_00370f54;
          puVar13 = puVar14 + 1;
          puVar5 = (undefined8 *)*puVar13;
          if (puVar5 == (undefined8 *)0x0) goto LAB_00370f54;
          bVar3 = param_2 <= (ulong)puVar5[4];
          puVar14 = puVar5;
        } while (!bVar3 || puVar5[4] == param_2);
      }
    }
    p_Var11 = (__tree_node_base *)*puVar13;
    puVar14 = puVar13;
  }
  if (p_Var11 == (__tree_node_base *)0x0) {
    p_Var11 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    *(ulong *)(p_Var11 + 0x20) = param_2;
    *(undefined8 *)(p_Var11 + 0x28) = 0;
    *(undefined8 **)(p_Var11 + 0x10) = puVar14;
    *(undefined8 *)(p_Var11 + 0x30) = 0;
    *(undefined8 *)(p_Var11 + 0x38) = 0;
    *(undefined8 *)p_Var11 = 0;
    *(undefined8 *)(p_Var11 + 8) = 0;
    *puVar13 = p_Var11;
    if (**(long **)(param_1 + 0x18) == 0) {
      p_Var4 = p_Var11;
    }
    else {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      p_Var4 = (__tree_node_base *)*puVar13;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x20),p_Var4);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  puVar13 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = 0;
    *puVar13 = puVar13 + 1;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[2] = 0;
    puVar13[3] = puVar13 + 4;
  }
  plVar16 = *(long **)(p_Var11 + 0x30);
  if (plVar16 < *(long **)(p_Var11 + 0x38)) {
    *plVar16 = (long)puVar13;
    *(long **)(p_Var11 + 0x30) = plVar16 + 1;
    goto LAB_00371170;
  }
  plVar12 = *(long **)(p_Var11 + 0x28);
  lVar15 = (long)plVar16 - (long)plVar12 >> 3;
  uVar17 = lVar15 + 1;
  if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(long **)(p_Var11 + 0x38) - (long)plVar12;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar17 <= uVar7) {
      uVar17 = uVar7;
    }
    if (uVar17 != 0) goto LAB_00371058;
    lVar6 = 0;
  }
  else {
    uVar17 = 0x1fffffffffffffff;
LAB_00371058:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar17 << 3);
    plVar12 = *(long **)(p_Var11 + 0x28);
    plVar16 = *(long **)(p_Var11 + 0x30);
  }
  plVar8 = (long *)(lVar6 + lVar15 * 8);
  plVar9 = plVar8 + 1;
  *plVar8 = (long)puVar13;
  if ((long)plVar16 - (long)plVar12 != 0) {
    uVar7 = ((long)plVar16 - (long)plVar12) - 8;
    uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar15 = -((ulong)uVar1 & 3);
      do {
        plVar16 = plVar16 + -1;
        lVar10 = *plVar16;
        *plVar16 = 0;
        plVar8 = plVar8 + -1;
        *plVar8 = lVar10;
        bVar3 = lVar15 != -1;
        lVar15 = lVar15 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar7) {
      do {
        lVar15 = plVar16[-1];
        plVar16[-1] = 0;
        plVar8[-1] = lVar15;
        lVar15 = plVar16[-2];
        plVar16[-2] = 0;
        plVar8[-2] = lVar15;
        lVar15 = plVar16[-3];
        plVar16[-3] = 0;
        plVar8[-3] = lVar15;
        plVar16 = plVar16 + -4;
        lVar15 = *plVar16;
        *plVar16 = 0;
        plVar8 = plVar8 + -4;
        *plVar8 = lVar15;
      } while (plVar12 != plVar16);
    }
    plVar12 = *(long **)(p_Var11 + 0x28);
  }
  plVar16 = *(long **)(p_Var11 + 0x30);
  *(long **)(p_Var11 + 0x28) = plVar8;
  *(long **)(p_Var11 + 0x30) = plVar9;
  *(ulong *)(p_Var11 + 0x38) = lVar6 + uVar17 * 8;
  puVar2 = PTR_LAB_04373088;
  if (plVar16 != plVar12) {
    plVar16 = plVar16 + -1;
    lVar15 = *plVar16;
    *plVar16 = 0;
    if (lVar15 != 0) goto LAB_00371130;
    while (plVar12 != plVar16) {
      while( true ) {
        plVar16 = plVar16 + -1;
        lVar15 = *plVar16;
        *plVar16 = 0;
        if (lVar15 == 0) break;
LAB_00371130:
        FUN_0037c31c(lVar15 + 0x18,*(undefined8 *)(lVar15 + 0x20));
        FUN_0037c3ec(lVar15,*(undefined8 *)(lVar15 + 8));
        FUN_002e2ea0(puVar2,lVar15);
        if (plVar12 == plVar16) goto LAB_0037115c;
      }
    }
  }
LAB_0037115c:
  if (plVar12 != (long *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar12);
  }
LAB_00371170:
  return *(undefined8 *)(*(long *)(p_Var11 + 0x30) + -8);
}


