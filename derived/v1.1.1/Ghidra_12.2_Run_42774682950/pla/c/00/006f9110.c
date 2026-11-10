/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f9110; name: FUN_006f9110
 */


void FUN_006f9110(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar14 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar14;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  lVar12 = (long)puVar1 - *param_1 >> 5;
  uVar13 = lVar12 + 1;
  if (uVar13 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  if ((ulong)(lVar6 >> 5) < 0x3ffffffffffffff) {
    uVar7 = lVar6 >> 4;
    if (uVar13 <= uVar7) {
      uVar13 = uVar7;
    }
    if (uVar13 == 0) {
      lVar6 = 0;
      goto LAB_006f91ac;
    }
  }
  else {
    uVar13 = 0x7ffffffffffffff;
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 << 5,8);
LAB_006f91ac:
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  pbVar10 = (byte *)(lVar6 + lVar12 * 0x20);
  pbVar4 = pbVar10 + 0x20;
  *(undefined8 *)(pbVar10 + 8) = param_2[1];
  *(undefined8 *)pbVar10 = uVar14;
  *(undefined8 *)(pbVar10 + 0x18) = uVar16;
  *(undefined8 *)(pbVar10 + 0x10) = uVar15;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pbVar8 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  pbVar3 = pbVar11 + -(long)pbVar8;
  if (pbVar3 == (byte *)0x0) {
    pbVar11 = pbVar8;
  }
  else {
    pbVar9 = pbVar10;
    pbVar5 = pbVar3;
    if (((uint)(pbVar3 + -0x20) >> 5 & 1) == 0) {
      uVar14 = *(undefined8 *)(pbVar11 + -0x20);
      uVar16 = *(undefined8 *)(pbVar11 + -8);
      uVar15 = *(undefined8 *)(pbVar11 + -0x10);
      *(undefined8 *)(pbVar10 + -0x18) = *(undefined8 *)(pbVar11 + -0x18);
      *(undefined8 *)(pbVar10 + -0x20) = uVar14;
      *(undefined8 *)(pbVar10 + -8) = uVar16;
      *(undefined8 *)(pbVar10 + -0x10) = uVar15;
      pbVar11[-0x20] = 0;
      pbVar11[-0x1f] = 0;
      pbVar11[-0x1e] = 0;
      pbVar11[-0x1d] = 0;
      pbVar11[-0x1c] = 0;
      pbVar11[-0x1b] = 0;
      pbVar11[-0x1a] = 0;
      pbVar11[-0x19] = 0;
      pbVar11[-0x18] = 0;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      pbVar11[-0x10] = 0;
      pbVar11[-0xf] = 0;
      pbVar11[-0xe] = 0;
      pbVar11[-0xd] = 0;
      pbVar11[-0xc] = 0;
      pbVar11[-0xb] = 0;
      pbVar11[-10] = 0;
      pbVar11[-9] = 0;
      pbVar11 = pbVar11 + -0x20;
      pbVar9 = pbVar10 + -0x20;
      pbVar5 = pbVar10 + -0x20;
    }
    pbVar10 = pbVar5;
    if ((byte *)0x1f < pbVar3 + -0x20) {
      do {
        uVar14 = *(undefined8 *)(pbVar11 + -0x20);
        uVar16 = *(undefined8 *)(pbVar11 + -8);
        uVar15 = *(undefined8 *)(pbVar11 + -0x10);
        *(undefined8 *)(pbVar9 + -0x18) = *(undefined8 *)(pbVar11 + -0x18);
        *(undefined8 *)(pbVar9 + -0x20) = uVar14;
        *(undefined8 *)(pbVar9 + -8) = uVar16;
        *(undefined8 *)(pbVar9 + -0x10) = uVar15;
        pbVar10 = pbVar9 + -0x40;
        uVar14 = *(undefined8 *)(pbVar11 + -0x40);
        uVar16 = *(undefined8 *)(pbVar11 + -0x28);
        uVar15 = *(undefined8 *)(pbVar11 + -0x30);
        pbVar11[-0x18] = 0;
        pbVar11[-0x17] = 0;
        pbVar11[-0x16] = 0;
        pbVar11[-0x15] = 0;
        pbVar11[-0x14] = 0;
        pbVar11[-0x13] = 0;
        pbVar11[-0x12] = 0;
        pbVar11[-0x11] = 0;
        pbVar11[-0x10] = 0;
        pbVar11[-0xf] = 0;
        pbVar11[-0xe] = 0;
        pbVar11[-0xd] = 0;
        pbVar11[-0xc] = 0;
        pbVar11[-0xb] = 0;
        pbVar11[-10] = 0;
        pbVar11[-9] = 0;
        pbVar11[-0x20] = 0;
        pbVar11[-0x1f] = 0;
        pbVar11[-0x1e] = 0;
        pbVar11[-0x1d] = 0;
        pbVar11[-0x1c] = 0;
        pbVar11[-0x1b] = 0;
        pbVar11[-0x1a] = 0;
        pbVar11[-0x19] = 0;
        *(undefined8 *)(pbVar9 + -0x38) = *(undefined8 *)(pbVar11 + -0x38);
        *(undefined8 *)(pbVar9 + -0x40) = uVar14;
        *(undefined8 *)(pbVar9 + -0x28) = uVar16;
        *(undefined8 *)(pbVar9 + -0x30) = uVar15;
        pbVar11[-0x40] = 0;
        pbVar11[-0x3f] = 0;
        pbVar11[-0x3e] = 0;
        pbVar11[-0x3d] = 0;
        pbVar11[-0x3c] = 0;
        pbVar11[-0x3b] = 0;
        pbVar11[-0x3a] = 0;
        pbVar11[-0x39] = 0;
        pbVar11[-0x38] = 0;
        pbVar11[-0x37] = 0;
        pbVar11[-0x36] = 0;
        pbVar11[-0x35] = 0;
        pbVar11[-0x34] = 0;
        pbVar11[-0x33] = 0;
        pbVar11[-0x32] = 0;
        pbVar11[-0x31] = 0;
        pbVar11[-0x30] = 0;
        pbVar11[-0x2f] = 0;
        pbVar11[-0x2e] = 0;
        pbVar11[-0x2d] = 0;
        pbVar11[-0x2c] = 0;
        pbVar11[-0x2b] = 0;
        pbVar11[-0x2a] = 0;
        pbVar11[-0x29] = 0;
        pbVar11 = pbVar11 + -0x40;
        pbVar9 = pbVar10;
      } while (pbVar8 != pbVar11);
    }
    pbVar8 = (byte *)param_1[1];
    pbVar11 = (byte *)*param_1;
  }
  lVar12 = param_1[2];
  param_1[2] = lVar6 + uVar13 * 0x20;
  *param_1 = (long)pbVar10;
  param_1[1] = (long)pbVar4;
  if (pbVar8 != pbVar11) {
    bVar2 = pbVar8[-0x20];
    pbVar4 = pbVar8 + -0x20;
    while( true ) {
      pbVar10 = pbVar4;
      if ((bVar2 & 1) != 0) {
        (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                  (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                   *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (pbVar11 == pbVar10) break;
      bVar2 = pbVar10[-0x20];
      pbVar4 = pbVar10 + -0x20;
      pbVar8 = pbVar10;
    }
  }
  if (pbVar11 == (byte *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f92d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar11,lVar12 - (long)pbVar11,8);
  return;
}


