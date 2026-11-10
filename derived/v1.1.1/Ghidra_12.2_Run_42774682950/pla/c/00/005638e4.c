/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005638e4; name: FUN_005638e4
 */


void FUN_005638e4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar2 = *param_3;
    *puVar8 = *param_2;
    *(undefined4 *)(puVar8 + 1) = uVar2;
    *(undefined8 *)((long)puVar8 + 0xc) = 0;
    *(undefined8 *)((long)puVar8 + 0x1c) = 0;
    *(undefined8 *)((long)puVar8 + 0x14) = 0;
    *(undefined4 *)((long)puVar8 + 0x24) = 0;
    param_1[1] = param_1[1] + 0x30;
    return;
  }
  lVar5 = (long)puVar8 - *param_1 >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      lVar6 = 0;
      goto LAB_005639a8;
    }
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x30);
LAB_005639a8:
  puVar8 = (undefined8 *)(lVar6 + lVar5 * 0x10);
  uVar2 = *param_3;
  *puVar8 = *param_2;
  *(undefined4 *)(puVar8 + 1) = uVar2;
  *(undefined8 *)((long)puVar8 + 0xc) = 0;
  *(undefined8 *)((long)puVar8 + 0x1c) = 0;
  *(undefined8 *)((long)puVar8 + 0x14) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  lVar6 = lVar6 + uVar12 * 0x30;
  lVar5 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar5) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)(puVar8 + 6);
    param_1[2] = lVar6;
  }
  else {
    lVar4 = 0;
    do {
      lVar11 = lVar9 + lVar4;
      uVar14 = *(undefined8 *)(lVar11 + -0x28);
      uVar13 = *(undefined8 *)(lVar11 + -0x30);
      lVar10 = lVar4 + -0x30;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x20) = 0;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x28) = uVar14;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x30) = uVar13;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x18) = 0;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x10) = 0;
      uVar13 = *(undefined8 *)(lVar11 + -0x20);
      *(undefined8 *)((long)puVar8 + lVar4 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
      *(undefined8 *)((long)puVar8 + lVar4 + -0x20) = uVar13;
      *(undefined8 *)((long)puVar8 + lVar4 + -0x10) = *(undefined8 *)(lVar11 + -0x10);
      *(undefined8 *)(lVar11 + -0x20) = 0;
      *(undefined8 *)(lVar11 + -0x18) = 0;
      *(undefined8 *)(lVar11 + -0x10) = 0;
      *(undefined4 *)((long)puVar8 + lVar4 + -8) = *(undefined4 *)(lVar11 + -8);
      lVar4 = lVar10;
    } while (lVar5 - lVar9 != lVar10);
    lVar5 = *param_1;
    lVar9 = param_1[1];
    *param_1 = (long)puVar8 + lVar10;
    param_1[1] = (long)(puVar8 + 6);
    param_1[2] = lVar6;
    puVar3 = PTR_LAB_04373088;
    if (lVar9 != lVar5) {
      lVar4 = *(long *)(lVar9 + -0x20);
      lVar6 = lVar9 + -0x30;
      if (lVar4 != 0) goto LAB_00563a8c;
      while (lVar5 != lVar6) {
        while( true ) {
          lVar4 = *(long *)(lVar6 + -0x20);
          lVar11 = lVar6 + -0x30;
          lVar9 = lVar6;
          lVar6 = lVar11;
          if (lVar4 == 0) break;
LAB_00563a8c:
          *(long *)(lVar9 + -0x18) = lVar4;
          FUN_002e2ea0(puVar3);
          if (lVar5 == lVar6) goto LAB_00563aa4;
        }
      }
    }
  }
LAB_00563aa4:
  if (lVar5 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar5);
  return;
}


