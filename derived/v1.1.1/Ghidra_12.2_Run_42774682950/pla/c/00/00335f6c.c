/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00335f6c; name: FUN_00335f6c
 */


undefined1  [16] FUN_00335f6c(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint local_4c;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar10 = *(int **)(param_1 + 0x10);
    uVar6 = *(ushort *)(param_1 + 10);
    uVar7 = (ulong)uVar6;
    piVar1 = piVar10 + uVar7 * 8;
    if (uVar7 != 0) {
      uVar8 = uVar7;
      piVar11 = piVar10;
      do {
        uVar9 = uVar8 >> 1;
        piVar10 = piVar11 + uVar9 * 8 + 8;
        uVar8 = uVar8 + ~uVar9;
        if (param_2 <= piVar11[uVar9 * 8]) {
          piVar10 = piVar11;
          uVar8 = uVar9;
        }
        piVar11 = piVar10;
      } while (uVar8 != 0);
    }
    if ((piVar10 == piVar1) || (*piVar10 != param_2)) {
      if (uVar6 < *(ushort *)(param_1 + 8)) {
        __n = (long)piVar1 - (long)piVar10;
        if (__n != 0) {
          memmove((void *)((long)piVar1 + (0x20 - __n)),piVar10,__n);
          uVar6 = *(ushort *)(param_1 + 10);
        }
        uVar7 = 0;
        *(ushort *)(param_1 + 10) = uVar6 + 1;
        *piVar10 = param_2;
        piVar10[4] = 0;
        piVar10[5] = 0;
        piVar10[6] = 0;
        piVar10[7] = 0;
        piVar10 = piVar10 + 2;
        auVar17._8_8_ = 1;
        auVar17._0_8_ = piVar10;
        piVar10[0] = 0;
        piVar10[1] = 0;
      }
      else {
        FUN_0033508c(param_1,uVar7 + 1);
        auVar17 = FUN_00335f6c(param_1,param_2);
        uVar7 = auVar17._8_8_ & 0xffffffffffffff00;
      }
    }
    else {
      uVar7 = 0;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = piVar10 + 2;
    }
    goto LAB_00336050;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  plVar14 = plVar13 + 1;
  plVar15 = (long *)*plVar14;
  if (plVar15 == (long *)0x0) {
    p_Var12 = (__tree_node_base *)*plVar14;
    plVar16 = plVar14;
    if (p_Var12 == (__tree_node_base *)0x0) goto LAB_003360fc;
LAB_003360f4:
    uVar4 = 0;
  }
  else {
    iVar3 = (int)plVar15[4];
    iVar2 = iVar3 - param_2;
    plVar14 = plVar13 + 1;
    while( true ) {
      while (plVar16 = plVar15, param_2 < iVar3) {
        plVar15 = (long *)*plVar16;
        plVar14 = plVar16;
        if (plVar15 == (long *)0x0) goto LAB_003360ec;
        iVar3 = (int)plVar15[4];
        iVar2 = iVar3 - param_2;
      }
      if (iVar2 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar14 = plVar16 + 1;
      plVar15 = (long *)*plVar14;
      if (plVar15 == (long *)0x0) break;
      iVar3 = (int)plVar15[4];
      iVar2 = iVar3 - param_2;
    }
LAB_003360ec:
    p_Var12 = (__tree_node_base *)*plVar14;
    if (p_Var12 != (__tree_node_base *)0x0) goto LAB_003360f4;
LAB_003360fc:
    p_Var12 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    *(int *)(p_Var12 + 0x20) = param_2;
    *(undefined8 *)(p_Var12 + 0x2c) = 0;
    *(ulong *)(p_Var12 + 0x24) = (ulong)local_4c;
    *(long **)(p_Var12 + 0x10) = plVar16;
    *(undefined8 *)(p_Var12 + 0x38) = 0;
    *(undefined8 *)(p_Var12 + 0x30) = 0;
    *(undefined8 *)p_Var12 = 0;
    *(undefined8 *)(p_Var12 + 8) = 0;
    *plVar14 = (long)p_Var12;
    if (*(long *)*plVar13 == 0) {
      p_Var5 = p_Var12;
    }
    else {
      *plVar13 = *(long *)*plVar13;
      p_Var5 = (__tree_node_base *)*plVar14;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar13[1],p_Var5);
    uVar4 = 1;
    plVar13[2] = plVar13[2] + 1;
  }
  uVar7 = 0;
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = p_Var12 + 0x28;
LAB_00336050:
  auVar18._8_8_ = uVar7 | auVar17._8_8_ & 0xff;
  auVar18._0_8_ = auVar17._0_8_;
  return auVar18;
}


