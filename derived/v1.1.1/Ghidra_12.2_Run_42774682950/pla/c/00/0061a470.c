/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061a470; name: FUN_0061a470
 */


void FUN_0061a470(long *param_1,byte *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong __n;
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
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar10 = (ulong *)param_1[1];
  if (puVar10 < (ulong *)param_1[2]) {
    uVar16 = *param_3;
    uVar13 = *param_4;
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
    if (uVar14 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    uVar17 = uVar14 - uVar16;
    if (uVar13 <= uVar14 - uVar16) {
      uVar17 = uVar13;
    }
    if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar17 < 0x17) {
      __dest = (void *)((long)puVar10 + 1);
      *(char *)puVar10 = (char)((int)uVar17 << 1);
      if (uVar17 == 0) goto LAB_0061a60c;
    }
    else {
      uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar14,1);
      puVar10[1] = uVar17;
      puVar10[2] = (ulong)__dest;
      *puVar10 = uVar14 | 1;
    }
    memcpy(__dest,pbVar9 + uVar16,uVar17);
LAB_0061a60c:
    *(undefined1 *)((long)__dest + uVar17) = 0;
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
    uVar13 = lVar8 >> 4;
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
    }
    if (uVar14 != 0) goto LAB_0061a548;
    lVar8 = 0;
  }
  else {
    uVar14 = 0x7ffffffffffffff;
LAB_0061a548:
    lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 5,8);
  }
  uVar17 = *param_3;
  puVar10 = (ulong *)(lVar8 + lVar11 * 0x20);
  uVar16 = *param_4;
  plVar7 = (long *)FUN_00612290();
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = (ulong)plVar7;
  bVar2 = *param_2;
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = *(ulong *)(param_2 + 8);
  }
  if (uVar13 < uVar17) {
                    /* try { // try from 0061a7b0 to 0061a7bf has its CatchHandler @ 0061a7c0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  __n = uVar13 - uVar17;
  if (uVar16 <= uVar13 - uVar17) {
    __n = uVar16;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pbVar15 = (byte *)((long)puVar10 + 1);
    *(byte *)puVar10 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_0061a65c;
  }
  else {
    uVar13 = __n + 0x10 & 0xfffffffffffffff0;
    pbVar15 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar13,1);
    *puVar10 = uVar13 | 1;
    puVar10[1] = __n;
    puVar10[2] = (ulong)pbVar15;
  }
  memcpy(pbVar15,pbVar9 + uVar17,__n);
LAB_0061a65c:
  pbVar15[__n] = 0;
  pbVar9 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  puVar1 = puVar10 + 4;
  puVar3 = (ulong *)(pbVar15 + -(long)pbVar9);
  if (puVar3 == (ulong *)0x0) {
    pbVar15 = pbVar9;
  }
  else {
    puVar12 = puVar10;
    puVar6 = puVar3;
    if (((uint)(puVar3 + -4) >> 5 & 1) == 0) {
      uVar13 = *(ulong *)(pbVar15 + -0x20);
      uVar17 = *(ulong *)(pbVar15 + -8);
      uVar16 = *(ulong *)(pbVar15 + -0x10);
      puVar10[-3] = *(ulong *)(pbVar15 + -0x18);
      puVar10[-4] = uVar13;
      puVar10[-1] = uVar17;
      puVar10[-2] = uVar16;
      pbVar15[-0x20] = 0;
      pbVar15[-0x1f] = 0;
      pbVar15[-0x1e] = 0;
      pbVar15[-0x1d] = 0;
      pbVar15[-0x1c] = 0;
      pbVar15[-0x1b] = 0;
      pbVar15[-0x1a] = 0;
      pbVar15[-0x19] = 0;
      pbVar15[-0x18] = 0;
      pbVar15[-0x17] = 0;
      pbVar15[-0x16] = 0;
      pbVar15[-0x15] = 0;
      pbVar15[-0x14] = 0;
      pbVar15[-0x13] = 0;
      pbVar15[-0x12] = 0;
      pbVar15[-0x11] = 0;
      pbVar15[-0x10] = 0;
      pbVar15[-0xf] = 0;
      pbVar15[-0xe] = 0;
      pbVar15[-0xd] = 0;
      pbVar15[-0xc] = 0;
      pbVar15[-0xb] = 0;
      pbVar15[-10] = 0;
      pbVar15[-9] = 0;
      pbVar15 = pbVar15 + -0x20;
      puVar12 = puVar10 + -4;
      puVar6 = puVar10 + -4;
    }
    puVar10 = puVar6;
    if ((ulong *)0x1f < puVar3 + -4) {
      do {
        uVar13 = *(ulong *)(pbVar15 + -0x20);
        uVar17 = *(ulong *)(pbVar15 + -8);
        uVar16 = *(ulong *)(pbVar15 + -0x10);
        puVar12[-3] = *(ulong *)(pbVar15 + -0x18);
        puVar12[-4] = uVar13;
        puVar12[-1] = uVar17;
        puVar12[-2] = uVar16;
        puVar10 = puVar12 + -8;
        uVar13 = *(ulong *)(pbVar15 + -0x40);
        uVar17 = *(ulong *)(pbVar15 + -0x28);
        uVar16 = *(ulong *)(pbVar15 + -0x30);
        pbVar15[-0x18] = 0;
        pbVar15[-0x17] = 0;
        pbVar15[-0x16] = 0;
        pbVar15[-0x15] = 0;
        pbVar15[-0x14] = 0;
        pbVar15[-0x13] = 0;
        pbVar15[-0x12] = 0;
        pbVar15[-0x11] = 0;
        pbVar15[-0x10] = 0;
        pbVar15[-0xf] = 0;
        pbVar15[-0xe] = 0;
        pbVar15[-0xd] = 0;
        pbVar15[-0xc] = 0;
        pbVar15[-0xb] = 0;
        pbVar15[-10] = 0;
        pbVar15[-9] = 0;
        pbVar15[-0x20] = 0;
        pbVar15[-0x1f] = 0;
        pbVar15[-0x1e] = 0;
        pbVar15[-0x1d] = 0;
        pbVar15[-0x1c] = 0;
        pbVar15[-0x1b] = 0;
        pbVar15[-0x1a] = 0;
        pbVar15[-0x19] = 0;
        puVar12[-7] = *(ulong *)(pbVar15 + -0x38);
        puVar12[-8] = uVar13;
        puVar12[-5] = uVar17;
        puVar12[-6] = uVar16;
        pbVar15[-0x40] = 0;
        pbVar15[-0x3f] = 0;
        pbVar15[-0x3e] = 0;
        pbVar15[-0x3d] = 0;
        pbVar15[-0x3c] = 0;
        pbVar15[-0x3b] = 0;
        pbVar15[-0x3a] = 0;
        pbVar15[-0x39] = 0;
        pbVar15[-0x38] = 0;
        pbVar15[-0x37] = 0;
        pbVar15[-0x36] = 0;
        pbVar15[-0x35] = 0;
        pbVar15[-0x34] = 0;
        pbVar15[-0x33] = 0;
        pbVar15[-0x32] = 0;
        pbVar15[-0x31] = 0;
        pbVar15[-0x30] = 0;
        pbVar15[-0x2f] = 0;
        pbVar15[-0x2e] = 0;
        pbVar15[-0x2d] = 0;
        pbVar15[-0x2c] = 0;
        pbVar15[-0x2b] = 0;
        pbVar15[-0x2a] = 0;
        pbVar15[-0x29] = 0;
        pbVar15 = pbVar15 + -0x40;
        puVar12 = puVar10;
      } while (pbVar9 != pbVar15);
    }
    pbVar9 = (byte *)param_1[1];
    pbVar15 = (byte *)*param_1;
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  lVar11 = param_1[2];
  param_1[2] = lVar8 + uVar14 * 0x20;
  if (pbVar9 != pbVar15) {
    bVar2 = pbVar9[-0x20];
    pbVar5 = pbVar9 + -0x20;
    while( true ) {
      pbVar4 = pbVar5;
      if ((bVar2 & 1) != 0) {
        (**(code **)(**(long **)(pbVar9 + -8) + 0x18))
                  (*(long **)(pbVar9 + -8),*(undefined8 *)(pbVar9 + -0x10),
                   *(ulong *)(pbVar9 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (pbVar15 == pbVar4) break;
      bVar2 = pbVar4[-0x20];
      pbVar5 = pbVar4 + -0x20;
      pbVar9 = pbVar4;
    }
  }
  if (pbVar15 == (byte *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061a77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar15,lVar11 - (long)pbVar15,8);
  return;
}


