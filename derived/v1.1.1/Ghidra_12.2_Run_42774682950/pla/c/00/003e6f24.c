/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e6f24; name: FUN_003e6f24
 */


void FUN_003e6f24(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  puVar11 = (undefined4 *)param_1[1];
  if (puVar11 < (undefined4 *)param_1[2]) {
    *puVar11 = 5;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0;
    *(undefined8 *)(puVar11 + 8) = *param_2;
    lVar6 = param_2[1];
    plVar4 = (long *)(puVar11 + 10);
    *plVar4 = lVar6;
    lVar8 = param_2[2];
    *(long *)(puVar11 + 0xc) = lVar8;
    if (lVar8 == 0) {
      *(long **)(puVar11 + 8) = plVar4;
    }
    else {
      *(long **)(lVar6 + 0x10) = plVar4;
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = param_2 + 1;
    }
    *(undefined8 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x12) = 0;
    param_1[1] = param_1[1] + 0x50;
    return;
  }
  lVar6 = (long)puVar11 - *param_1 >> 4;
  uVar10 = 0x333333333333333;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar8 * -0x3333333333333333) < 0x199999999999999) {
    uVar5 = lVar8 * -0x6666666666666666;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
      goto LAB_003e7008;
    }
  }
  lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar10 * 0x50);
LAB_003e7008:
  puVar11 = (undefined4 *)(lVar8 + lVar6 * 0x10);
  *puVar11 = 5;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0;
  *(undefined8 *)(puVar11 + 2) = 0;
  *(undefined8 *)(puVar11 + 8) = *param_2;
  lVar7 = param_2[1];
  plVar4 = (long *)(puVar11 + 10);
  *plVar4 = lVar7;
  lVar9 = param_2[2];
  *(long *)(puVar11 + 0xc) = lVar9;
  if (lVar9 == 0) {
    *(long **)(puVar11 + 8) = plVar4;
  }
  else {
    *(long **)(lVar7 + 0x10) = plVar4;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = param_2 + 1;
  }
  lVar6 = lVar8 + lVar6 * 0x10;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar6) {
    puVar3 = puVar11;
    lVar7 = lVar6;
  }
  else {
    lVar9 = 0;
    do {
                    /* try { // try from 003e70b0 to 003e70b3 has its CatchHandler @ 003e7184 */
      FUN_003eaa30((long)puVar11 + lVar9 + -0x50,lVar7 + -0x50 + lVar9);
      lVar9 = lVar9 + -0x50;
    } while (lVar6 - lVar7 != lVar9);
    lVar6 = *param_1;
    puVar3 = (undefined4 *)((long)puVar11 + lVar9);
    lVar7 = param_1[1];
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar11 + 0x14);
  param_1[2] = lVar8 + uVar10 * 0x50;
  puVar2 = PTR_LAB_04373088;
  while (lVar8 = lVar7, lVar8 != lVar6) {
    FUN_003e7200(lVar8 + -0x18);
    FUN_003e9f80(lVar8 + -0x30,*(undefined8 *)(lVar8 + -0x28));
    lVar7 = lVar8 + -0x50;
    if ((*(byte *)(lVar8 + -0x48) & 1) != 0) {
      FUN_002e2ea0(puVar2,*(undefined8 *)(lVar8 + -0x38));
    }
  }
  if (lVar6 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar6);
  return;
}


