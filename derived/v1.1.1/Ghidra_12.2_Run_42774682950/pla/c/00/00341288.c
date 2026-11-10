/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00341288; name: FUN_00341288
 */


undefined8 * FUN_00341288(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  plVar11 = *(long **)(param_1 + 0x108);
  if (plVar11 < *(long **)(param_1 + 0x110)) {
    *plVar11 = (long)puVar4;
    *(long **)(param_1 + 0x108) = plVar11 + 1;
    return puVar4;
  }
  plVar10 = *(long **)(param_1 + 0x100);
  lVar12 = (long)plVar11 - (long)plVar10 >> 3;
  uVar13 = lVar12 + 1;
  if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(long **)(param_1 + 0x110) - (long)plVar10;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar13 <= uVar6) {
      uVar13 = uVar6;
    }
    if (uVar13 == 0) {
      lVar5 = 0;
      goto LAB_0034132c;
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 3);
  plVar10 = *(long **)(param_1 + 0x100);
  plVar11 = *(long **)(param_1 + 0x108);
LAB_0034132c:
  plVar7 = (long *)(lVar5 + lVar12 * 8);
  plVar8 = plVar7 + 1;
  *plVar7 = (long)puVar4;
  if ((long)plVar11 - (long)plVar10 != 0) {
    uVar6 = ((long)plVar11 - (long)plVar10) - 8;
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
      do {
        plVar11 = plVar11 + -1;
        lVar9 = *plVar11;
        *plVar11 = 0;
        plVar7 = plVar7 + -1;
        *plVar7 = lVar9;
        bVar3 = lVar12 != -1;
        lVar12 = lVar12 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar6) {
      do {
        lVar12 = plVar11[-1];
        plVar11[-1] = 0;
        plVar7[-1] = lVar12;
        lVar12 = plVar11[-2];
        plVar11[-2] = 0;
        plVar7[-2] = lVar12;
        lVar12 = plVar11[-3];
        plVar11[-3] = 0;
        plVar7[-3] = lVar12;
        plVar11 = plVar11 + -4;
        lVar12 = *plVar11;
        *plVar11 = 0;
        plVar7 = plVar7 + -4;
        *plVar7 = lVar12;
      } while (plVar10 != plVar11);
    }
    plVar10 = *(long **)(param_1 + 0x100);
  }
  plVar11 = *(long **)(param_1 + 0x108);
  *(long **)(param_1 + 0x100) = plVar7;
  *(long **)(param_1 + 0x108) = plVar8;
  *(ulong *)(param_1 + 0x110) = lVar5 + uVar13 * 8;
  puVar2 = PTR_LAB_04373088;
  if (plVar11 != plVar10) {
    plVar11 = plVar11 + -1;
    lVar12 = *plVar11;
    *plVar11 = 0;
    if (lVar12 != 0) goto LAB_003413f0;
    while (plVar10 != plVar11) {
      while( true ) {
        plVar11 = plVar11 + -1;
        lVar12 = *plVar11;
        *plVar11 = 0;
        if (lVar12 == 0) break;
LAB_003413f0:
        FUN_002e2ea0(puVar2);
        if (plVar10 == plVar11) goto LAB_00341400;
      }
    }
  }
LAB_00341400:
  if (plVar10 != (long *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar10);
  }
  return puVar4;
}


