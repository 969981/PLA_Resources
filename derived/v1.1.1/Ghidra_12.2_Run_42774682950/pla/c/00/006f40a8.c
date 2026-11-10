/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f40a8; name: FUN_006f40a8
 */


void FUN_006f40a8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  plVar4 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar4;
  if ((*param_2 & 1) == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar11;
    *param_1 = uVar10;
  }
  else {
    uVar10 = param_2[1];
    if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = (void *)param_2[2];
    if (uVar10 < 0x17) {
      pvVar17 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_006f4144;
    }
    else {
      uVar11 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar11,1);
      *param_1 = uVar11 | 1;
      param_1[1] = uVar10;
      param_1[2] = (ulong)pvVar17;
LAB_006f4144:
      memcpy(pvVar17,pvVar16,uVar10);
    }
    *(undefined1 *)((long)pvVar17 + uVar10) = 0;
  }
  plVar4 = (long *)FUN_00612290();
  puVar15 = param_1 + 4;
  *puVar15 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar4;
  if ((param_2[4] & 1) == 0) {
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar11;
    *puVar15 = uVar10;
  }
  else {
    uVar10 = param_2[5];
    if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 006f441c to 006f4423 has its CatchHandler @ 006f4444 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = (void *)param_2[6];
    if (uVar10 < 0x17) {
      pvVar17 = (void *)((long)param_1 + 0x21);
      *(char *)puVar15 = (char)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_006f41e4;
    }
    else {
      uVar11 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar11,1);
      param_1[4] = uVar11 | 1;
      param_1[5] = uVar10;
      param_1[6] = (ulong)pvVar17;
LAB_006f41e4:
      memcpy(pvVar17,pvVar16,uVar10);
    }
    *(undefined1 *)((long)pvVar17 + uVar10) = 0;
  }
  FUN_006d9d50(param_1 + 8,param_2 + 8);
  plVar4 = (long *)FUN_00612290();
  puVar15 = param_1 + 9;
  *puVar15 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (ulong)plVar4;
  if ((param_2[9] & 1) == 0) {
    uVar11 = param_2[10];
    uVar10 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar11;
    *puVar15 = uVar10;
  }
  else {
    uVar10 = param_2[10];
    if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 006f4424 to 006f442b has its CatchHandler @ 006f442c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = (void *)param_2[0xb];
    if (uVar10 < 0x17) {
      pvVar17 = (void *)((long)param_1 + 0x49);
      *(char *)puVar15 = (char)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_006f4294;
    }
    else {
      uVar11 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar11,1);
      param_1[9] = uVar11 | 1;
      param_1[10] = uVar10;
      param_1[0xb] = (ulong)pvVar17;
LAB_006f4294:
      memcpy(pvVar17,pvVar16,uVar10);
    }
    *(undefined1 *)((long)pvVar17 + uVar10) = 0;
  }
  plVar4 = (long *)FUN_00612290();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = (ulong)plVar4;
  lVar13 = param_2[0xe] - param_2[0xd];
  if (lVar13 == 0) goto LAB_006f43ec;
  if ((ulong)(lVar13 >> 2) >> 0x3e != 0) {
                    /* try { // try from 006f440c to 006f4413 has its CatchHandler @ 006f4454 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar13,4);
  param_1[0xd] = (ulong)puVar5;
  param_1[0xe] = (ulong)puVar5;
  param_1[0xf] = (ulong)(puVar5 + (lVar13 >> 2));
  puVar6 = (undefined4 *)param_2[0xd];
  puVar2 = (undefined4 *)param_2[0xe];
  if (puVar6 == puVar2) goto LAB_006f43ec;
  uVar11 = ((long)puVar2 - (long)puVar6) - 4;
  uVar10 = (uVar11 >> 2) + 1;
  puVar7 = puVar5;
  puVar9 = puVar6;
  if ((uVar10 < 0x10) ||
     ((puVar5 < (undefined4 *)((long)puVar6 + (uVar11 & 0xfffffffffffffffc) + 4) &&
      (puVar6 < (undefined4 *)((long)puVar5 + ((long)puVar2 - (long)puVar6 & 0xfffffffffffffffcU))))
     )) {
LAB_006f4384:
    uVar10 = (long)puVar2 + (-4 - (long)puVar9);
    uVar1 = ((uint)(uVar10 >> 2) & 0x3fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar13 = -((ulong)uVar1 & 3);
      puVar6 = puVar7;
      puVar5 = puVar9;
      do {
        puVar9 = puVar5 + 1;
        bVar3 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar5;
        puVar6 = puVar7;
        puVar5 = puVar9;
      } while (bVar3);
    }
    if (0xb < uVar10) {
      do {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
        puVar6 = puVar9 + 3;
        puVar9 = puVar9 + 4;
        puVar7[3] = *puVar6;
        puVar7 = puVar7 + 4;
      } while (puVar9 != puVar2);
    }
  }
  else {
    uVar12 = uVar10 & 0x7ffffffffffffff0;
    puVar7 = puVar5 + uVar12;
    puVar9 = puVar6 + uVar12;
    puVar8 = (undefined8 *)(puVar6 + 8);
    puVar14 = (undefined8 *)(puVar5 + 8);
    uVar11 = uVar12;
    do {
      uVar18 = puVar8[-4];
      uVar20 = puVar8[-1];
      uVar19 = puVar8[-2];
      uVar11 = uVar11 - 0x10;
      uVar22 = puVar8[1];
      uVar21 = *puVar8;
      uVar24 = puVar8[3];
      uVar23 = puVar8[2];
      puVar14[-3] = puVar8[-3];
      puVar14[-4] = uVar18;
      puVar14[-1] = uVar20;
      puVar14[-2] = uVar19;
      puVar14[1] = uVar22;
      *puVar14 = uVar21;
      puVar14[3] = uVar24;
      puVar14[2] = uVar23;
      puVar8 = puVar8 + 8;
      puVar14 = puVar14 + 8;
    } while (uVar11 != 0);
    if (uVar10 != uVar12) goto LAB_006f4384;
  }
  param_1[0xe] = (ulong)puVar7;
LAB_006f43ec:
  param_1[0x11] = param_2[0x11];
  return;
}


