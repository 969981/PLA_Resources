/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061a7ec; name: FUN_0061a7ec
 */


void FUN_0061a7ec(long *param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  ulong *puVar10;
  void *__dest;
  long lVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar10 = (ulong *)param_1[1];
  if (puVar10 < (ulong *)param_1[2]) {
    uVar15 = *param_3;
    plVar7 = (long *)FUN_00612290();
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = (ulong)plVar7;
    bVar2 = *param_2;
    uVar14 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar14 = *(ulong *)(param_2 + 8);
    }
    uVar16 = uVar14 - uVar15;
    if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar16 < 0x17) {
      __dest = (void *)((long)puVar10 + 1);
      *(char *)puVar10 = (char)((int)uVar16 << 1);
      if (uVar16 == 0) goto LAB_0061a96c;
    }
    else {
      uVar14 = uVar16 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar14,1);
      puVar10[1] = uVar16;
      puVar10[2] = (ulong)__dest;
      *puVar10 = uVar14 | 1;
    }
    memcpy(__dest,pbVar9 + uVar15,uVar16);
LAB_0061a96c:
    *(undefined1 *)((long)__dest + uVar16) = 0;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  lVar11 = (long)puVar10 - *param_1 >> 5;
  uVar14 = lVar11 + 1;
  if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 5) < 0x3ffffffffffffff) {
    uVar15 = lVar8 >> 4;
    if (uVar14 <= uVar15) {
      uVar14 = uVar15;
    }
    if (uVar14 != 0) goto LAB_0061a8b4;
    lVar8 = 0;
  }
  else {
    uVar14 = 0x7ffffffffffffff;
LAB_0061a8b4:
    lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 5,8);
  }
  uVar16 = *param_3;
  puVar10 = (ulong *)(lVar8 + lVar11 * 0x20);
  plVar7 = (long *)FUN_00612290();
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = (ulong)plVar7;
  bVar2 = *param_2;
  uVar15 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar15 = *(ulong *)(param_2 + 8);
  }
  uVar17 = uVar15 - uVar16;
  if (uVar15 < uVar16) {
                    /* try { // try from 0061ab10 to 0061ab1f has its CatchHandler @ 0061ab20 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar17 < 0x17) {
    pbVar13 = (byte *)((long)puVar10 + 1);
    *(byte *)puVar10 = (byte)((int)uVar17 << 1);
    if (uVar17 == 0) goto LAB_0061a9bc;
  }
  else {
    uVar15 = uVar17 + 0x10 & 0xfffffffffffffff0;
    pbVar13 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar15,1);
    *puVar10 = uVar15 | 1;
    puVar10[1] = uVar17;
    puVar10[2] = (ulong)pbVar13;
  }
  memcpy(pbVar13,pbVar9 + uVar16,uVar17);
LAB_0061a9bc:
  pbVar13[uVar17] = 0;
  pbVar9 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  puVar1 = puVar10 + 4;
  puVar3 = (ulong *)(pbVar13 + -(long)pbVar9);
  if (puVar3 == (ulong *)0x0) {
    pbVar13 = pbVar9;
  }
  else {
    puVar12 = puVar10;
    puVar6 = puVar3;
    if (((uint)(puVar3 + -4) >> 5 & 1) == 0) {
      uVar15 = *(ulong *)(pbVar13 + -0x20);
      uVar17 = *(ulong *)(pbVar13 + -8);
      uVar16 = *(ulong *)(pbVar13 + -0x10);
      puVar10[-3] = *(ulong *)(pbVar13 + -0x18);
      puVar10[-4] = uVar15;
      puVar10[-1] = uVar17;
      puVar10[-2] = uVar16;
      pbVar13[-0x20] = 0;
      pbVar13[-0x1f] = 0;
      pbVar13[-0x1e] = 0;
      pbVar13[-0x1d] = 0;
      pbVar13[-0x1c] = 0;
      pbVar13[-0x1b] = 0;
      pbVar13[-0x1a] = 0;
      pbVar13[-0x19] = 0;
      pbVar13[-0x18] = 0;
      pbVar13[-0x17] = 0;
      pbVar13[-0x16] = 0;
      pbVar13[-0x15] = 0;
      pbVar13[-0x14] = 0;
      pbVar13[-0x13] = 0;
      pbVar13[-0x12] = 0;
      pbVar13[-0x11] = 0;
      pbVar13[-0x10] = 0;
      pbVar13[-0xf] = 0;
      pbVar13[-0xe] = 0;
      pbVar13[-0xd] = 0;
      pbVar13[-0xc] = 0;
      pbVar13[-0xb] = 0;
      pbVar13[-10] = 0;
      pbVar13[-9] = 0;
      pbVar13 = pbVar13 + -0x20;
      puVar12 = puVar10 + -4;
      puVar6 = puVar10 + -4;
    }
    puVar10 = puVar6;
    if ((ulong *)0x1f < puVar3 + -4) {
      do {
        uVar15 = *(ulong *)(pbVar13 + -0x20);
        uVar17 = *(ulong *)(pbVar13 + -8);
        uVar16 = *(ulong *)(pbVar13 + -0x10);
        puVar12[-3] = *(ulong *)(pbVar13 + -0x18);
        puVar12[-4] = uVar15;
        puVar12[-1] = uVar17;
        puVar12[-2] = uVar16;
        puVar10 = puVar12 + -8;
        uVar15 = *(ulong *)(pbVar13 + -0x40);
        uVar17 = *(ulong *)(pbVar13 + -0x28);
        uVar16 = *(ulong *)(pbVar13 + -0x30);
        pbVar13[-0x18] = 0;
        pbVar13[-0x17] = 0;
        pbVar13[-0x16] = 0;
        pbVar13[-0x15] = 0;
        pbVar13[-0x14] = 0;
        pbVar13[-0x13] = 0;
        pbVar13[-0x12] = 0;
        pbVar13[-0x11] = 0;
        pbVar13[-0x10] = 0;
        pbVar13[-0xf] = 0;
        pbVar13[-0xe] = 0;
        pbVar13[-0xd] = 0;
        pbVar13[-0xc] = 0;
        pbVar13[-0xb] = 0;
        pbVar13[-10] = 0;
        pbVar13[-9] = 0;
        pbVar13[-0x20] = 0;
        pbVar13[-0x1f] = 0;
        pbVar13[-0x1e] = 0;
        pbVar13[-0x1d] = 0;
        pbVar13[-0x1c] = 0;
        pbVar13[-0x1b] = 0;
        pbVar13[-0x1a] = 0;
        pbVar13[-0x19] = 0;
        puVar12[-7] = *(ulong *)(pbVar13 + -0x38);
        puVar12[-8] = uVar15;
        puVar12[-5] = uVar17;
        puVar12[-6] = uVar16;
        pbVar13[-0x40] = 0;
        pbVar13[-0x3f] = 0;
        pbVar13[-0x3e] = 0;
        pbVar13[-0x3d] = 0;
        pbVar13[-0x3c] = 0;
        pbVar13[-0x3b] = 0;
        pbVar13[-0x3a] = 0;
        pbVar13[-0x39] = 0;
        pbVar13[-0x38] = 0;
        pbVar13[-0x37] = 0;
        pbVar13[-0x36] = 0;
        pbVar13[-0x35] = 0;
        pbVar13[-0x34] = 0;
        pbVar13[-0x33] = 0;
        pbVar13[-0x32] = 0;
        pbVar13[-0x31] = 0;
        pbVar13[-0x30] = 0;
        pbVar13[-0x2f] = 0;
        pbVar13[-0x2e] = 0;
        pbVar13[-0x2d] = 0;
        pbVar13[-0x2c] = 0;
        pbVar13[-0x2b] = 0;
        pbVar13[-0x2a] = 0;
        pbVar13[-0x29] = 0;
        pbVar13 = pbVar13 + -0x40;
        puVar12 = puVar10;
      } while (pbVar9 != pbVar13);
    }
    pbVar9 = (byte *)param_1[1];
    pbVar13 = (byte *)*param_1;
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  lVar11 = param_1[2];
  param_1[2] = lVar8 + uVar14 * 0x20;
  if (pbVar9 != pbVar13) {
    bVar2 = pbVar9[-0x20];
    pbVar5 = pbVar9 + -0x20;
    while( true ) {
      pbVar4 = pbVar5;
      if ((bVar2 & 1) != 0) {
        (**(code **)(**(long **)(pbVar9 + -8) + 0x18))
                  (*(long **)(pbVar9 + -8),*(undefined8 *)(pbVar9 + -0x10),
                   *(ulong *)(pbVar9 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (pbVar13 == pbVar4) break;
      bVar2 = pbVar4[-0x20];
      pbVar5 = pbVar4 + -0x20;
      pbVar9 = pbVar4;
    }
  }
  if (pbVar13 == (byte *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061aadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar13,lVar11 - (long)pbVar13,8);
  return;
}


