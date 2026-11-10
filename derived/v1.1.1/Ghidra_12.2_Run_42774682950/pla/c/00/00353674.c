/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00353674; name: FUN_00353674
 */


long FUN_00353674(long param_1)

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
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (lVar4 != 0) {
    FUN_003bdc84(lVar4,0);
  }
  plVar13 = *(long **)(param_1 + 0xf0);
  if (plVar13 < *(long **)(param_1 + 0xf8)) {
    *plVar13 = lVar4;
    *(long **)(param_1 + 0xf0) = plVar13 + 1;
    return lVar4;
  }
  plVar10 = *(long **)(param_1 + 0xe8);
  lVar12 = (long)plVar13 - (long)plVar10 >> 3;
  uVar14 = lVar12 + 1;
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(long **)(param_1 + 0xf8) - (long)plVar10;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar14 <= uVar6) {
      uVar14 = uVar6;
    }
    if (uVar14 == 0) {
      lVar5 = 0;
      goto LAB_00353720;
    }
  }
  else {
    uVar14 = 0x1fffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 3);
  plVar10 = *(long **)(param_1 + 0xe8);
  plVar13 = *(long **)(param_1 + 0xf0);
LAB_00353720:
  plVar7 = (long *)(lVar5 + lVar12 * 8);
  plVar8 = plVar7 + 1;
  *plVar7 = lVar4;
  if ((long)plVar13 - (long)plVar10 != 0) {
    uVar6 = ((long)plVar13 - (long)plVar10) - 8;
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
      do {
        plVar13 = plVar13 + -1;
        lVar9 = *plVar13;
        *plVar13 = 0;
        plVar7 = plVar7 + -1;
        *plVar7 = lVar9;
        bVar3 = lVar12 != -1;
        lVar12 = lVar12 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar6) {
      do {
        lVar12 = plVar13[-1];
        plVar13[-1] = 0;
        plVar7[-1] = lVar12;
        lVar12 = plVar13[-2];
        plVar13[-2] = 0;
        plVar7[-2] = lVar12;
        lVar12 = plVar13[-3];
        plVar13[-3] = 0;
        plVar7[-3] = lVar12;
        plVar13 = plVar13 + -4;
        lVar12 = *plVar13;
        *plVar13 = 0;
        plVar7 = plVar7 + -4;
        *plVar7 = lVar12;
      } while (plVar10 != plVar13);
    }
    plVar10 = *(long **)(param_1 + 0xe8);
  }
  plVar13 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xe8) = plVar7;
  *(long **)(param_1 + 0xf0) = plVar8;
  *(ulong *)(param_1 + 0xf8) = lVar5 + uVar14 * 8;
  puVar2 = PTR_LAB_04373088;
  if (plVar13 != plVar10) {
    plVar13 = plVar13 + -1;
    puVar11 = (undefined8 *)*plVar13;
    *plVar13 = 0;
    if (puVar11 != (undefined8 *)0x0) goto LAB_003537e4;
    while (plVar10 != plVar13) {
      while( true ) {
        plVar13 = plVar13 + -1;
        puVar11 = (undefined8 *)*plVar13;
        *plVar13 = 0;
        if (puVar11 == (undefined8 *)0x0) break;
LAB_003537e4:
        (**(code **)*puVar11)(puVar11);
        FUN_002e2ea0(puVar2,puVar11);
        if (plVar10 == plVar13) goto LAB_00353808;
      }
    }
  }
LAB_00353808:
  if (plVar10 != (long *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar10);
  }
  return lVar4;
}


