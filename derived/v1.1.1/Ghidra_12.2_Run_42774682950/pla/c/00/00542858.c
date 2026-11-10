/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542858; name: FUN_00542858
 */


ulong * FUN_00542858(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *local_68;
  ulong *local_60;
  ulong *local_58;
  ulong *local_50;
  ulong *puStack_48;
  
  puVar4 = param_1;
  puVar10 = DAT_0439ecd0;
  if (DAT_0439ecd0 == (ulong *)0x0) {
    puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    puVar10 = puVar4;
    if (puVar4 != (ulong *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
  }
  DAT_0439ecd0 = puVar10;
  if (((ulong)param_1 & 1) == 0) {
    puVar5 = (ulong *)puVar10[1];
    if (puVar5 < (ulong *)puVar10[2]) {
      uVar7 = *param_2;
      *param_2 = 0;
      *puVar5 = uVar7;
      puVar10[1] = puVar10[1] + 8;
      return puVar4;
    }
    lVar8 = (long)((long)puVar5 - *puVar10) >> 3;
    uVar7 = lVar8 + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)puVar10[2] - *puVar10;
    if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
      uVar16 = lVar11 >> 2;
      if (uVar7 <= uVar16) {
        uVar7 = uVar16;
      }
      if (uVar7 == 0) {
        puVar4 = (ulong *)0x0;
        goto LAB_0054293c;
      }
    }
    else {
      uVar7 = 0x1fffffffffffffff;
    }
    puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar7 << 3);
LAB_0054293c:
    uVar16 = *param_2;
    puVar5 = puVar4 + lVar8;
    *param_2 = 0;
    puVar13 = puVar5 + 1;
    *puVar5 = uVar16;
    puVar6 = (ulong *)*puVar10;
    puVar9 = (ulong *)puVar10[1];
    if ((long)puVar9 - (long)puVar6 == 0) {
      *puVar10 = (ulong)puVar5;
      puVar10[1] = (ulong)puVar13;
      puVar10[2] = (ulong)(puVar4 + uVar7);
    }
    else {
      uVar16 = ((long)puVar9 - (long)puVar6) - 8;
      uVar1 = ((uint)(uVar16 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar8 = -((ulong)uVar1 & 3);
        do {
          puVar9 = puVar9 + -1;
          uVar14 = *puVar9;
          *puVar9 = 0;
          puVar5 = puVar5 + -1;
          *puVar5 = uVar14;
          bVar3 = lVar8 != -1;
          lVar8 = lVar8 + 1;
        } while (bVar3);
      }
      if (0x17 < uVar16) {
        do {
          uVar16 = puVar9[-1];
          puVar9[-1] = 0;
          puVar5[-1] = uVar16;
          uVar16 = puVar9[-2];
          puVar9[-2] = 0;
          puVar5[-2] = uVar16;
          uVar16 = puVar9[-3];
          puVar9[-3] = 0;
          puVar5[-3] = uVar16;
          puVar9 = puVar9 + -4;
          uVar16 = *puVar9;
          *puVar9 = 0;
          puVar5 = puVar5 + -4;
          *puVar5 = uVar16;
        } while (puVar6 != puVar9);
      }
      puVar6 = (ulong *)*puVar10;
      puVar9 = (ulong *)puVar10[1];
      *puVar10 = (ulong)puVar5;
      puVar10[1] = (ulong)puVar13;
      puVar10[2] = (ulong)(puVar4 + uVar7);
      puVar2 = PTR_LAB_04373088;
      if (puVar9 != puVar6) {
        puVar9 = puVar9 + -1;
        puVar15 = (undefined8 *)*puVar9;
        *puVar9 = 0;
        if (puVar15 != (undefined8 *)0x0) goto LAB_00542a20;
        while (puVar6 != puVar9) {
          while( true ) {
            puVar9 = puVar9 + -1;
            puVar15 = (undefined8 *)*puVar9;
            *puVar9 = 0;
            if (puVar15 == (undefined8 *)0x0) break;
LAB_00542a20:
            (**(code **)*puVar15)(puVar15);
            puVar4 = (ulong *)FUN_002e2ea0(puVar2,puVar15);
            if (puVar6 == puVar9) goto LAB_00542a44;
          }
        }
      }
    }
LAB_00542a44:
    if (puVar6 == (ulong *)0x0) {
      return puVar4;
    }
    puVar4 = (ulong *)FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    return puVar4;
  }
  puVar5 = (ulong *)*puVar10;
  uVar7 = *puVar10;
  puVar4 = (ulong *)puVar10[1];
  uVar16 = (long)((long)puVar5 - uVar7) >> 3;
  if (puVar4 < (ulong *)puVar10[2]) {
    if (puVar5 == puVar4) {
      uVar7 = *param_2;
      *param_2 = 0;
      *puVar5 = uVar7;
      puVar10[1] = puVar10[1] + 8;
    }
    else {
      lVar11 = (long)puVar4 + (-8 - (long)puVar5);
      puVar6 = puVar4 + -1;
      lVar8 = lVar11 >> 3;
      if (puVar6 < puVar4) {
        uVar14 = (long)puVar4 + ~uVar7 + (lVar8 + uVar16) * -8;
        puVar13 = puVar4;
        puVar9 = puVar6;
        if (((uint)uVar14 >> 3 & 1) == 0) {
          uVar12 = *puVar6;
          *puVar6 = 0;
          *puVar4 = uVar12;
          uVar12 = puVar10[1];
          puVar10[1] = uVar12 + 8;
          puVar13 = (ulong *)(uVar12 + 8);
          puVar9 = puVar4;
        }
        if (7 < uVar14) {
          do {
            uVar14 = *puVar9;
            *puVar9 = 0;
            *puVar13 = uVar14;
            uVar14 = puVar10[1];
            puVar10[1] = uVar14 + 8;
            uVar12 = puVar9[1];
            puVar9[1] = 0;
            *(ulong *)(uVar14 + 8) = uVar12;
            puVar9 = puVar9 + 2;
            puVar13 = (ulong *)(puVar10[1] + 8);
            puVar10[1] = (ulong)puVar13;
          } while (puVar9 < puVar4);
        }
      }
      puVar2 = PTR_LAB_04373088;
      if (lVar11 != 0) {
        lVar8 = lVar8 << 3;
        lVar11 = uVar7 + uVar16 * 8 + -8;
        do {
          uVar7 = *(ulong *)(lVar11 + lVar8);
          *(undefined8 *)(lVar11 + lVar8) = 0;
          puVar15 = (undefined8 *)*puVar6;
          *puVar6 = uVar7;
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15);
            FUN_002e2ea0(puVar2,puVar15);
          }
          puVar6 = puVar6 + -1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      uVar7 = *param_2;
      *param_2 = 0;
      puVar15 = (undefined8 *)*puVar5;
      *puVar5 = uVar7;
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        FUN_002e2ea0(PTR_LAB_04373088,puVar15);
      }
    }
    return puVar5;
  }
  uVar14 = ((long)((long)puVar4 - uVar7) >> 3) + 1;
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = (long)puVar10[2] - uVar7;
  puStack_48 = puVar10 + 2;
  if ((ulong)(lVar8 >> 3) < 0xfffffffffffffff) {
    uVar12 = lVar8 >> 2;
    if (uVar14 <= uVar12) {
      uVar14 = uVar12;
    }
    if (uVar14 == 0) {
      local_68 = (ulong *)0x0;
      goto LAB_00542b7c;
    }
  }
  else {
    uVar14 = 0x1fffffffffffffff;
  }
  local_50 = (ulong *)0x0;
  local_68 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar14 << 3);
LAB_00542b7c:
  local_60 = local_68 + uVar16;
  local_50 = local_68 + uVar14;
                    /* try { // try from 00542b8c to 00542b97 has its CatchHandler @ 00542e68 */
  local_58 = local_60;
  FUN_00543048(&local_68,param_2);
  puVar4 = local_60;
  puVar6 = (ulong *)*puVar10;
  if (puVar6 != puVar5) {
    uVar14 = ((uVar7 + uVar16 * 8) - (long)puVar6) - 8;
    puVar9 = puVar5;
    if (((uint)uVar14 >> 3 & 1) == 0) {
      puVar9 = puVar5 + -1;
      uVar12 = *puVar9;
      *puVar9 = 0;
      local_60[-1] = uVar12;
      local_60 = local_60 + -1;
    }
    if (7 < uVar14) {
      do {
        uVar14 = puVar9[-1];
        puVar9[-1] = 0;
        local_60[-1] = uVar14;
        puVar9 = puVar9 + -2;
        uVar14 = *puVar9;
        *puVar9 = 0;
        local_60[-2] = uVar14;
        local_60 = local_60 + -2;
      } while (puVar6 != puVar9);
    }
  }
  puVar6 = (ulong *)puVar10[1];
  if (puVar6 == puVar5) {
    puVar5 = local_58;
  }
  else {
    uVar7 = (long)puVar6 + (~uVar16 * 8 - uVar7);
    puVar9 = puVar5;
    if (((uint)uVar7 >> 3 & 1) == 0) {
      uVar16 = *puVar5;
      puVar9 = puVar5 + 1;
      *puVar5 = 0;
      *local_58 = uVar16;
      local_58 = local_58 + 1;
    }
    if (7 < uVar7) {
      do {
        uVar7 = *puVar9;
        *puVar9 = 0;
        *local_58 = uVar7;
        uVar7 = puVar9[1];
        puVar9[1] = 0;
        local_58[1] = uVar7;
        puVar9 = puVar9 + 2;
        local_58 = local_58 + 2;
      } while (puVar9 != puVar6);
    }
    puVar6 = (ulong *)puVar10[1];
    puVar5 = local_58;
  }
  local_58 = puVar6;
  puVar6 = (ulong *)*puVar10;
  *puVar10 = (ulong)local_60;
  puVar10[1] = (ulong)puVar5;
  uVar7 = puVar10[2];
  puVar10[2] = (ulong)local_50;
  puVar2 = PTR_LAB_04373088;
  local_68 = puVar6;
  local_60 = puVar6;
  local_50 = (ulong *)uVar7;
  if (local_58 != puVar6) {
    do {
      puVar10 = local_58 + -1;
      puVar15 = (undefined8 *)local_58[-1];
      local_58[-1] = 0;
      local_58 = puVar10;
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        FUN_002e2ea0(puVar2,puVar15);
      }
    } while (local_58 != puVar6);
  }
  if (local_68 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return puVar4;
}


