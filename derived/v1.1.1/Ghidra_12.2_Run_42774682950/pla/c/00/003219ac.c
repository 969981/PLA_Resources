/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003219ac; name: FUN_003219ac
 */


ulong * FUN_003219ac(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  void *__dest;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar7;
  undefined1 *puVar6;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *__src;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_68;
  ulong local_60;
  undefined1 *local_58;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar11 = (ulong)(bVar1 >> 1);
    uVar12 = 0x16;
    uVar5 = (ulong)bVar1;
  }
  else {
    uVar5 = *param_1;
    uVar11 = param_1[1];
    uVar12 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar2 = (long)param_3 - (long)param_2;
  if (uVar2 == 0) {
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = param_1[1];
    puVar3 = (undefined1 *)param_1[2];
  }
  if ((puVar3 <= param_2) && (param_2 < puVar3 + uVar8)) {
    local_60 = 0;
    local_58 = (undefined1 *)0x0;
    local_68 = 0;
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      local_68 = (ulong)(byte)((int)uVar2 << 1);
      puVar3 = (undefined1 *)((ulong)&local_68 | 1);
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      puVar3 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_68 = uVar5 | 1;
      local_58 = puVar3;
      local_60 = uVar2;
    }
    if (param_2 == param_3) {
      puVar4 = puVar3;
    }
    else {
      if ((uVar2 < 0x40) || ((puVar3 < param_3 && (param_2 < puVar3 + uVar2)))) {
        puVar7 = param_2;
      }
      else {
        uVar11 = uVar2 & 0xffffffffffffffc0;
        puVar7 = param_2 + uVar11;
        puVar4 = puVar3 + uVar11;
        puVar9 = (undefined8 *)(puVar3 + 0x20);
        puVar10 = (undefined8 *)(param_2 + 0x20);
        uVar5 = uVar11;
        do {
          uVar14 = puVar10[-3];
          uVar13 = puVar10[-4];
          uVar16 = puVar10[-1];
          uVar15 = puVar10[-2];
          uVar5 = uVar5 - 0x40;
          uVar17 = *puVar10;
          uVar19 = puVar10[3];
          uVar18 = puVar10[2];
          puVar9[1] = puVar10[1];
          *puVar9 = uVar17;
          puVar9[3] = uVar19;
          puVar9[2] = uVar18;
          puVar9[-3] = uVar14;
          puVar9[-4] = uVar13;
          puVar9[-1] = uVar16;
          puVar9[-2] = uVar15;
          puVar9 = puVar9 + 8;
          puVar10 = puVar10 + 8;
        } while (uVar5 != 0);
        puVar3 = puVar4;
        if (uVar2 == uVar11) goto LAB_00321b0c;
      }
      do {
        puVar6 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar6;
      } while (param_3 != puVar6);
    }
LAB_00321b0c:
    *puVar4 = 0;
    uVar5 = local_68 >> 1 & 0x7f;
    puVar3 = (undefined1 *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      uVar5 = local_60;
      puVar3 = local_58;
    }
                    /* try { // try from 00321b30 to 00321b37 has its CatchHandler @ 00321d0c */
    FUN_002e4094(param_1,puVar3,uVar5);
    if ((local_68 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
    return param_1;
  }
  if (uVar12 - uVar11 < uVar2) {
    uVar5 = uVar11 + uVar2;
    if (-uVar12 - 0x11 < uVar5 - uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar1 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
      if (uVar12 < 0x7fffffffffffffe7) goto LAB_00321b68;
LAB_00321ad4:
      uVar5 = 0xffffffffffffffef;
    }
    else {
      __src = (void *)param_1[2];
      if (0x7fffffffffffffe6 < uVar12) goto LAB_00321ad4;
LAB_00321b68:
      uVar8 = uVar12 << 1;
      if (uVar12 << 1 <= uVar5) {
        uVar8 = uVar5;
      }
      uVar5 = 0x17;
      if (0x16 < uVar8) {
        uVar5 = uVar8 + 0x10 & 0xfffffffffffffff0;
      }
    }
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    if (uVar11 != 0) {
      memcpy(__dest,__src,uVar11);
    }
    if (uVar12 != 0x16) {
      FUN_002e2ea0(PTR_LAB_04373088,__src);
    }
    uVar5 = uVar5 | 1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5;
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = (long)param_1 + 1;
  }
  else {
    uVar5 = param_1[2];
  }
  puVar3 = (undefined1 *)(uVar5 + uVar11);
  if (param_2 != param_3) {
    if (uVar2 < 0x40) {
      puVar4 = puVar3;
      puVar7 = param_2;
    }
    else if ((puVar3 < param_3) && (param_2 < param_3 + uVar5 + (uVar11 - (long)param_2))) {
      puVar4 = puVar3;
      puVar7 = param_2;
    }
    else {
      uVar12 = uVar2 & 0xffffffffffffffc0;
      puVar3 = puVar3 + uVar12;
      puVar7 = param_2 + uVar12;
      puVar9 = (undefined8 *)(uVar11 + uVar5 + 0x20);
      puVar10 = (undefined8 *)(param_2 + 0x20);
      uVar5 = uVar12;
      do {
        uVar13 = puVar10[-4];
        uVar15 = puVar10[-1];
        uVar14 = puVar10[-2];
        uVar5 = uVar5 - 0x40;
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        uVar19 = puVar10[3];
        uVar18 = puVar10[2];
        puVar9[-3] = puVar10[-3];
        puVar9[-4] = uVar13;
        puVar9[-1] = uVar15;
        puVar9[-2] = uVar14;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9[3] = uVar19;
        puVar9[2] = uVar18;
        puVar9 = puVar9 + 8;
        puVar10 = puVar10 + 8;
      } while (uVar5 != 0);
      puVar4 = puVar3;
      if (uVar2 == uVar12) goto LAB_00321c7c;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar3 = puVar4 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar3;
      puVar7 = puVar6;
    } while (param_3 != puVar6);
  }
LAB_00321c7c:
  *puVar3 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)(uVar11 + uVar2) << 1);
    return param_1;
  }
  param_1[1] = uVar11 + uVar2;
  return param_1;
}


