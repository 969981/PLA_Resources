/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00341434; name: FUN_00341434
 */


long FUN_00341434(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x160);
  if (lVar4 != 0) {
    FUN_0033e07c(lVar4);
  }
  plVar12 = *(long **)(param_1 + 0x120);
  if (plVar12 < *(long **)(param_1 + 0x128)) {
    *plVar12 = lVar4;
    *(long **)(param_1 + 0x120) = plVar12 + 1;
    return lVar4;
  }
  plVar10 = *(long **)(param_1 + 0x118);
  lVar11 = (long)plVar12 - (long)plVar10 >> 3;
  uVar13 = lVar11 + 1;
  if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(long **)(param_1 + 0x128) - (long)plVar10;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar13 <= uVar6) {
      uVar13 = uVar6;
    }
    if (uVar13 == 0) {
      lVar5 = 0;
      goto LAB_003414dc;
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 3);
  plVar10 = *(long **)(param_1 + 0x118);
  plVar12 = *(long **)(param_1 + 0x120);
LAB_003414dc:
  plVar7 = (long *)(lVar5 + lVar11 * 8);
  plVar8 = plVar7 + 1;
  *plVar7 = lVar4;
  if ((long)plVar12 - (long)plVar10 != 0) {
    uVar6 = ((long)plVar12 - (long)plVar10) - 8;
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar11 = -((ulong)uVar1 & 3);
      do {
        plVar12 = plVar12 + -1;
        lVar9 = *plVar12;
        *plVar12 = 0;
        plVar7 = plVar7 + -1;
        *plVar7 = lVar9;
        bVar3 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar6) {
      do {
        lVar11 = plVar12[-1];
        plVar12[-1] = 0;
        plVar7[-1] = lVar11;
        lVar11 = plVar12[-2];
        plVar12[-2] = 0;
        plVar7[-2] = lVar11;
        lVar11 = plVar12[-3];
        plVar12[-3] = 0;
        plVar7[-3] = lVar11;
        plVar12 = plVar12 + -4;
        lVar11 = *plVar12;
        *plVar12 = 0;
        plVar7 = plVar7 + -4;
        *plVar7 = lVar11;
      } while (plVar10 != plVar12);
    }
    plVar10 = *(long **)(param_1 + 0x118);
  }
  plVar12 = *(long **)(param_1 + 0x120);
  *(long **)(param_1 + 0x118) = plVar7;
  *(long **)(param_1 + 0x120) = plVar8;
  *(ulong *)(param_1 + 0x128) = lVar5 + uVar13 * 8;
  puVar2 = PTR_LAB_04373088;
  if (plVar12 != plVar10) {
    plVar12 = plVar12 + -1;
    lVar11 = *plVar12;
    *plVar12 = 0;
    if (lVar11 != 0) goto LAB_003415a0;
    while (plVar10 != plVar12) {
      while( true ) {
        plVar12 = plVar12 + -1;
        lVar11 = *plVar12;
        *plVar12 = 0;
        if (lVar11 == 0) break;
LAB_003415a0:
        FUN_0033e9f8(lVar11);
        FUN_002e2ea0(puVar2,lVar11);
        if (plVar10 == plVar12) goto LAB_003415bc;
      }
    }
  }
LAB_003415bc:
  if (plVar10 != (long *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar10);
  }
  return lVar4;
}


