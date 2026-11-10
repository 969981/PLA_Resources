/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051de60; name: FUN_0051de60
 */


void FUN_0051de60(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar14 = param_2[1];
    uVar13 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar14;
    *puVar2 = uVar13;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[1] = param_1[1] + 0x18;
    return;
  }
  lVar8 = (long)puVar2 - *param_1 >> 3;
  uVar12 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      lVar6 = 0;
      goto LAB_0051df18;
    }
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x18);
LAB_0051df18:
  puVar9 = (undefined8 *)(lVar6 + lVar8 * 8);
  uVar14 = param_2[1];
  uVar13 = *param_2;
  puVar9[2] = param_2[2];
  lVar6 = lVar6 + uVar12 * 0x18;
  puVar9[1] = uVar14;
  *puVar9 = uVar13;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  pbVar11 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  puVar2 = puVar9 + 3;
  if (pbVar10 == pbVar11) {
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar2;
    param_1[2] = lVar6;
  }
  else {
    do {
      uVar14 = *(undefined8 *)(pbVar10 + -0x10);
      uVar13 = *(undefined8 *)(pbVar10 + -0x18);
      puVar9[-1] = *(undefined8 *)(pbVar10 + -8);
      puVar9[-2] = uVar14;
      puVar9[-3] = uVar13;
      pbVar10[-0x18] = 0;
      pbVar10[-0x17] = 0;
      pbVar10[-0x16] = 0;
      pbVar10[-0x15] = 0;
      pbVar10[-0x14] = 0;
      pbVar10[-0x13] = 0;
      pbVar10[-0x12] = 0;
      pbVar10[-0x11] = 0;
      pbVar10[-0x10] = 0;
      pbVar10[-0xf] = 0;
      pbVar10[-0xe] = 0;
      pbVar10[-0xd] = 0;
      pbVar10[-0xc] = 0;
      pbVar10[-0xb] = 0;
      pbVar10[-10] = 0;
      pbVar10[-9] = 0;
      pbVar10[-8] = 0;
      pbVar10[-7] = 0;
      pbVar10[-6] = 0;
      pbVar10[-5] = 0;
      pbVar10[-4] = 0;
      pbVar10[-3] = 0;
      pbVar10[-2] = 0;
      pbVar10[-1] = 0;
      pbVar10 = pbVar10 + -0x18;
      puVar9 = puVar9 + -3;
    } while (pbVar11 != pbVar10);
    pbVar11 = (byte *)*param_1;
    pbVar10 = (byte *)param_1[1];
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar2;
    param_1[2] = lVar6;
    puVar5 = PTR_LAB_04373088;
    if (pbVar10 != pbVar11) {
      bVar3 = pbVar10[-0x18];
      pbVar4 = pbVar10 + -0x18;
      while( true ) {
        if ((bVar3 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar10 + -8));
        }
        if (pbVar11 == pbVar4) break;
        bVar3 = pbVar4[-0x18];
        pbVar10 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
    }
  }
  if (pbVar11 == (byte *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar11);
  return;
}


