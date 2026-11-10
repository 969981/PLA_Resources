/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003415f0; name: FUN_003415f0
 */


undefined8 FUN_003415f0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar9 < *(undefined8 **)(param_1 + 200)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    if (param_2 < 0) {
                    /* try { // try from 003418ac to 003418b3 has its CatchHandler @ 003418f4 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (ulong)param_2;
    puVar2 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    puVar9[2] = puVar2 + uVar10;
    *puVar9 = puVar2;
    puVar9[1] = puVar2;
    if ((uVar10 & 1) != 0) {
      *puVar2 = 0;
      puVar2 = (undefined1 *)(puVar9[1] + 1);
      uVar10 = uVar10 - 1;
      puVar9[1] = puVar2;
    }
    if (param_2 != 1) {
      do {
        *puVar2 = 0;
        lVar3 = puVar9[1];
        puVar9[1] = lVar3 + 1;
        *(undefined1 *)(lVar3 + 1) = 0;
        puVar2 = (undefined1 *)(puVar9[1] + 1);
        uVar10 = uVar10 - 2;
        puVar9[1] = puVar2;
      } while (uVar10 != 0);
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 0x18;
    goto LAB_00341884;
  }
  uVar12 = 0xaaaaaaaaaaaaaaa;
  lVar3 = (long)puVar9 - *(long *)(param_1 + 0xb8) >> 3;
  uVar10 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined8 **)(param_1 + 200) - *(long *)(param_1 + 0xb8) >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar12 = uVar10;
    if (uVar10 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 != 0) goto LAB_0034170c;
    lVar4 = 0;
  }
  else {
LAB_0034170c:
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x18);
  }
  puVar9 = (undefined8 *)(lVar4 + lVar3 * 8);
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  if (param_2 < 0) {
                    /* try { // try from 003418b8 to 003418bf has its CatchHandler @ 003418c0 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar10 = (ulong)param_2;
  puVar2 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
  lVar3 = lVar4 + lVar3 * 8;
  plVar6 = (long *)(lVar3 + 8);
  *plVar6 = (long)puVar2;
  *puVar9 = puVar2;
  *(undefined1 **)(lVar3 + 0x10) = puVar2 + uVar10;
  if ((uVar10 & 1) != 0) {
    *puVar2 = 0;
    puVar2 = (undefined1 *)(*plVar6 + 1);
    uVar10 = uVar10 - 1;
    *plVar6 = (long)puVar2;
  }
  if (param_2 != 1) {
    do {
      *puVar2 = 0;
      lVar3 = *plVar6;
      *plVar6 = lVar3 + 1;
      *(undefined1 *)(lVar3 + 1) = 0;
      puVar2 = (undefined1 *)(*plVar6 + 1);
      uVar10 = uVar10 - 2;
      *plVar6 = (long)puVar2;
    } while (uVar10 != 0);
  }
  lVar4 = lVar4 + uVar12 * 0x18;
  plVar6 = *(long **)(param_1 + 0xb8);
  plVar7 = *(long **)(param_1 + 0xc0);
  if (plVar7 == plVar6) {
    *(undefined8 **)(param_1 + 0xb8) = puVar9;
    *(undefined8 **)(param_1 + 0xc0) = puVar9 + 3;
    *(long *)(param_1 + 200) = lVar4;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)puVar9 + lVar3 + -8) = 0;
      *(undefined8 *)((long)puVar9 + lVar3 + -0x18) = 0;
      *(undefined8 *)((long)puVar9 + lVar3 + -0x10) = 0;
      uVar13 = *(undefined8 *)((long)plVar7 + lVar3 + -0x18);
      lVar8 = lVar3 + -0x18;
      *(undefined8 *)((long)puVar9 + lVar3 + -0x10) = *(undefined8 *)((long)plVar7 + lVar3 + -0x10);
      *(undefined8 *)((long)puVar9 + lVar3 + -0x18) = uVar13;
      *(undefined8 *)((long)puVar9 + lVar3 + -8) = *(undefined8 *)((long)plVar7 + lVar3 + -8);
      *(undefined8 *)((long)plVar7 + lVar3 + -0x18) = 0;
      *(undefined8 *)((long)plVar7 + lVar3 + -0x10) = 0;
      *(undefined8 *)((long)plVar7 + lVar3 + -8) = 0;
      lVar3 = lVar8;
    } while ((long)plVar6 - (long)plVar7 != lVar8);
    plVar6 = *(long **)(param_1 + 0xb8);
    plVar7 = *(long **)(param_1 + 0xc0);
    *(long *)(param_1 + 0xb8) = (long)puVar9 + lVar8;
    *(undefined8 **)(param_1 + 0xc0) = puVar9 + 3;
    *(long *)(param_1 + 200) = lVar4;
    puVar1 = PTR_LAB_04373088;
    if (plVar7 != plVar6) {
      plVar11 = plVar7 + -3;
      lVar3 = *plVar11;
      if (lVar3 != 0) goto LAB_00341858;
      while (plVar7 = plVar11, plVar6 != plVar11) {
        while( true ) {
          plVar11 = plVar7 + -3;
          lVar3 = *plVar11;
          if (lVar3 == 0) break;
LAB_00341858:
          plVar7[-2] = lVar3;
          FUN_002e2ea0(puVar1);
          plVar7 = plVar11;
          if (plVar6 == plVar11) goto LAB_00341870;
        }
      }
    }
  }
LAB_00341870:
  if (plVar6 != (long *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar6);
  }
LAB_00341884:
  return *(undefined8 *)(*(long *)(param_1 + 0xc0) + -0x18);
}


