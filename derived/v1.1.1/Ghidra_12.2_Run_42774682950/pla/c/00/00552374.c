/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552374; name: FUN_00552374
 */


undefined1 * FUN_00552374(long *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  size_t __n;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar10 = (undefined1 *)param_1[1];
  if (param_3 <= (ulong)(param_1[2] - (long)puVar10)) {
    uVar3 = (long)puVar10 - (long)param_2;
    puVar13 = puVar10;
    if (uVar3 < param_3) {
      uVar6 = param_3 - uVar3;
      if ((uVar6 & 1) != 0) {
        *puVar10 = *param_4;
        lVar12 = param_1[1];
        uVar6 = uVar6 - 1;
        param_1[1] = (long)(lVar12 + 1U);
        puVar13 = (undefined1 *)(lVar12 + 1U);
      }
      if (param_2 + param_3 != puVar10 + 1) {
        do {
          *puVar13 = *param_4;
          lVar12 = param_1[1];
          param_1[1] = lVar12 + 1;
          *(undefined1 *)(lVar12 + 1) = *param_4;
          puVar13 = (undefined1 *)(param_1[1] + 1);
          uVar6 = uVar6 - 2;
          param_1[1] = (long)puVar13;
        } while (uVar6 != 0);
      }
      if (uVar3 == 0) {
        return param_2;
      }
    }
    else {
      uVar3 = param_3;
    }
    puVar4 = param_2 + param_3;
    sVar2 = (long)puVar13 - (long)puVar4;
    if (puVar13 + -param_3 < puVar10) {
      puVar10 = puVar10 + (long)(puVar4 + (-(long)param_2 - (long)puVar13));
      puVar7 = puVar13 + (long)param_2 + -(long)puVar4;
      puVar4 = puVar13;
      do {
        *puVar4 = *puVar7;
        puVar4 = (undefined1 *)(param_1[1] + 1);
        puVar10 = puVar10 + -1;
        param_1[1] = (long)puVar4;
        puVar7 = puVar7 + 1;
      } while (puVar10 != (undefined1 *)0x0);
    }
    if (sVar2 != 0) {
      memmove(puVar13 + -sVar2,param_2,sVar2);
    }
    puVar10 = param_4;
    if ((param_2 <= param_4) && (puVar10 = param_4 + param_3, (undefined1 *)param_1[1] <= param_4))
    {
      puVar10 = param_4;
    }
    if ((uVar3 < 0x40) || ((param_2 < puVar10 + 1 && (puVar10 < param_2 + uVar3)))) {
      puVar13 = param_2;
      uVar6 = uVar3;
    }
    else {
      uVar1 = *puVar10;
      uVar9 = uVar3 & 0xffffffffffffffc0;
      puVar13 = param_2 + uVar9;
      uVar6 = uVar3 - uVar9;
      puVar8 = (undefined8 *)(param_2 + 0x20);
      uVar5 = uVar9;
      do {
        puVar8[1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        *puVar8 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8[3] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8[2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        uVar5 = uVar5 - 0x40;
        puVar8[-3] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8[-4] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8[-1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8[-2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
        puVar8 = puVar8 + 8;
      } while (uVar5 != 0);
      if (uVar3 == uVar9) {
        return param_2;
      }
    }
    uVar5 = uVar6 - 1;
    for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar6 = uVar6 - 1;
      *puVar13 = *puVar10;
      puVar13 = puVar13 + 1;
    }
    if (uVar5 < 3) {
      return param_2;
    }
    do {
      *puVar13 = *puVar10;
      puVar13[1] = *puVar10;
      puVar13[2] = *puVar10;
      puVar13[3] = *puVar10;
      uVar6 = uVar6 - 4;
      puVar13 = puVar13 + 4;
    } while (uVar6 != 0);
    return param_2;
  }
  lVar12 = *param_1;
  puVar10 = puVar10 + (param_3 - lVar12);
  if ((long)puVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar3 = param_1[2] - lVar12;
  puVar13 = param_2 + -lVar12;
  if (uVar3 < 0x3fffffffffffffff) {
    puVar4 = (undefined1 *)(uVar3 * 2);
    if (puVar10 <= puVar4) {
      puVar10 = puVar4;
    }
    if (puVar10 != (undefined1 *)0x0) goto LAB_00552430;
    lVar11 = 0;
    puVar4 = puVar13;
    if (0x3f < param_3) goto LAB_00552450;
LAB_00552470:
    uVar3 = param_3;
    puVar7 = puVar4;
  }
  else {
    puVar10 = (undefined1 *)0x7fffffffffffffff;
LAB_00552430:
    lVar11 = FUN_002e2e80(PTR_FUN_04373078,puVar10);
    puVar4 = puVar13 + lVar11;
    if (param_3 < 0x40) goto LAB_00552470;
LAB_00552450:
    if ((puVar4 < param_4 + 1) && (param_4 < param_2 + lVar11 + (param_3 - lVar12)))
    goto LAB_00552470;
    uVar1 = *param_4;
    uVar5 = param_3 & 0xffffffffffffffc0;
    puVar7 = puVar4 + uVar5;
    uVar3 = param_3 - uVar5;
    puVar8 = (undefined8 *)(puVar13 + lVar11 + 0x20);
    uVar6 = uVar5;
    do {
      puVar8[1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      *puVar8 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8[3] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8[2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      uVar6 = uVar6 - 0x40;
      puVar8[-3] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8[-4] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8[-1] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8[-2] = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,
                                                  CONCAT12(uVar1,CONCAT11(uVar1,uVar1)))))));
      puVar8 = puVar8 + 8;
    } while (uVar6 != 0);
    if (uVar5 == param_3) goto LAB_00552650;
  }
  uVar5 = uVar3 - 1;
  for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar3 = uVar3 - 1;
    *puVar7 = *param_4;
    puVar7 = puVar7 + 1;
  }
  if (2 < uVar5) {
    do {
      *puVar7 = *param_4;
      puVar7[1] = *param_4;
      puVar7[2] = *param_4;
      puVar7[3] = *param_4;
      puVar7 = puVar7 + 4;
      uVar3 = uVar3 - 4;
    } while (uVar3 != 0);
  }
LAB_00552650:
  sVar2 = (long)param_2 - *param_1;
  if (0 < (long)sVar2) {
    memcpy(puVar4 + -sVar2,(void *)*param_1,sVar2);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = puVar7 + __n;
  }
  lVar12 = *param_1;
  *param_1 = (long)(puVar4 + -sVar2);
  param_1[1] = (long)puVar7;
  param_1[2] = (long)(puVar10 + lVar11);
  if (lVar12 == 0) {
    return puVar4;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return puVar4;
}


