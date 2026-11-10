/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337f1e8; name: FUN_0337f1e8
 */


void FUN_0337f1e8(undefined4 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [344];
  
  lVar10 = *param_2;
  lVar13 = param_2[1];
  if ((ulong)(lVar13 - lVar10) % 0xc != 0) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_0337f2d4;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1b8,&DAT_044508b0,1);
      lVar10 = FUN_03326338(auStack_1b8,"ITEMS section has the wrong size",PTR_DAT_04372528);
      *(char **)(lVar10 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar10 + 0x40) = 0x9d2;
      *(undefined4 *)(lVar10 + 0x1c) = 0x66e1b3ab;
      FUN_033269dc(auStack_1b8);
      goto LAB_0337f2d4;
    }
    FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
    lVar10 = FUN_03326338(auStack_1b8,"ITEMS section has the wrong size",PTR_DAT_04372528);
    *(char **)(lVar10 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x40) = 0x9d2;
    *(undefined4 *)(lVar10 + 0x1c) = 0x66e1b3ab;
    FUN_03326adc(auStack_1b8);
LAB_0337f2d4:
    *param_1 = 0x80040200;
    return;
  }
  lVar11 = param_2[2];
  *(long *)(param_1 + 0x14) = lVar11;
  *(long *)(param_1 + 0x16) = lVar11 + (long)(int)((ulong)(lVar13 - lVar10) / 0xc) * 0xc;
  if ((param_3 & 0x101) != 1) {
    return;
  }
  FUN_032dba50(auStack_1c0);
  iVar3 = param_1[6];
  if ((int)(param_1[0x7d] & 0x3fffffff) < iVar3) {
    uVar6 = FUN_0338e7f8(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0x7a),param_1[0x7c],
                         param_1 + 0x7d);
    *(undefined8 *)(param_1 + 0x7a) = uVar6;
  }
  iVar4 = param_1[0x7c];
  if (iVar4 < iVar3) {
    lVar10 = *(long *)(param_1 + 0x7a);
    param_1[0x7c] = iVar3;
    puVar8 = (undefined8 *)(lVar10 + (long)iVar4 * 8);
    uVar12 = ((long)iVar3 * 8 + (long)iVar4 * -8) - 8;
    uVar1 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar13 = -((ulong)uVar1 & 3);
      puVar7 = puVar8;
      do {
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = 0xfffffffe;
        puVar7 = puVar8;
      } while (bVar5);
    }
    if (0x17 < uVar12) {
      do {
        *puVar8 = 0xfffffffe;
        puVar8[1] = 0xfffffffe;
        puVar8[2] = 0xfffffffe;
        puVar8[3] = 0xfffffffe;
        puVar8 = puVar8 + 4;
      } while (puVar8 != (undefined8 *)(lVar10 + (long)iVar3 * 8));
    }
    iVar4 = param_1[0x7c];
  }
  else if (iVar3 < iVar4) {
    param_1[0x7c] = iVar3;
    iVar4 = iVar3;
  }
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_1 + 0x14);
    if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar10) >> 2) * -0x55555555) {
      lVar11 = 0;
      lVar13 = 1;
      do {
        lVar10 = lVar10 + lVar11;
        uVar1 = *(uint *)(lVar10 + 0xc) & 0xf0000000;
        if ((uVar1 == 0x10000000 || uVar1 == 0x30000000) || uVar1 == 0x20000000) {
          uVar9 = (ulong)*(uint *)(lVar10 + 0xc) & 0xffffff;
          puVar2 = (ulong *)(*(long *)(param_1 + 0x7a) + uVar9 * 8);
          uVar12 = (ulong)(uint)*puVar2;
          if ((int)(uint)*puVar2 < -1) {
            uVar12 = FUN_032dba64(auStack_1c0,*(undefined8 *)(*(long *)(param_1 + 4) + uVar9 * 8));
            *puVar2 = uVar12;
          }
          if (-1 < (int)uVar12) {
            FUN_032dbd1c(auStack_1c0,puVar2,
                         *(long *)(param_1 + 0x10) + (long)*(int *)(lVar10 + 0x10),
                         *(undefined4 *)(lVar10 + 0x14));
          }
        }
        lVar10 = *(long *)(param_1 + 0x14);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0xc;
      } while (lVar13 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar10) >> 2) * -0x55555555);
    }
    goto LAB_0337f53c;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 != '\0') goto LAB_0337f54c;
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_1b8,&DAT_044508b0,1);
    lVar10 = FUN_03326338(auStack_1b8,
                          "No types found. Was this input created for inplace loading? (Save.withTarget())"
                          ,PTR_DAT_04372528);
    *(char **)(lVar10 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x40) = 0xa44;
    FUN_033269dc(auStack_1b8);
  }
  else {
LAB_0337f54c:
    FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
    lVar10 = FUN_03326338(auStack_1b8,
                          "No types found. Was this input created for inplace loading? (Save.withTarget())"
                          ,PTR_DAT_04372528);
    *(char **)(lVar10 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x40) = 0xa44;
    FUN_03326adc(auStack_1b8);
  }
  *param_1 = 0x80040200;
LAB_0337f53c:
  FUN_032dc210(auStack_1c0);
  return;
}


