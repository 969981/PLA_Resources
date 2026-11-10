/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c4894; name: FUN_005c4894
 */


void FUN_005c4894(long *param_1,char *param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = (ulong *)param_1[1];
  if (puVar12 < (ulong *)param_1[2]) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    sVar5 = strlen(param_2);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      pvVar11 = (void *)((long)puVar12 + 1);
      *(char *)puVar12 = (char)((int)sVar5 << 1);
      if (sVar5 == 0) goto LAB_005c49e0;
    }
    else {
      uVar13 = sVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
      puVar12[1] = sVar5;
      puVar12[2] = (ulong)pvVar11;
      *puVar12 = uVar13 | 1;
    }
    memcpy(pvVar11,param_2,sVar5);
LAB_005c49e0:
    *(undefined1 *)((long)pvVar11 + sVar5) = 0;
    param_1[1] = param_1[1] + 0x18;
    return;
  }
  lVar8 = (long)puVar12 - *param_1 >> 3;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  uVar13 = lVar8 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar14 = uVar13;
    if (uVar13 <= uVar7) {
      uVar14 = uVar7;
    }
    if (uVar14 != 0) goto LAB_005c4950;
    lVar6 = 0;
  }
  else {
LAB_005c4950:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar14 * 0x18);
  }
  puVar12 = (ulong *)(lVar6 + lVar8 * 8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  sVar5 = strlen(param_2);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 005c4b40 to 005c4b47 has its CatchHandler @ 005c4b48 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    pvVar11 = (void *)((long)puVar12 + 1);
    *(char *)puVar12 = (char)((int)sVar5 << 1);
    if (sVar5 == 0) goto LAB_005c4a34;
  }
  else {
    uVar13 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
    lVar8 = lVar6 + lVar8 * 8;
    *(size_t *)(lVar8 + 8) = sVar5;
    *(void **)(lVar8 + 0x10) = pvVar11;
    *puVar12 = uVar13 | 1;
  }
  memcpy(pvVar11,param_2,sVar5);
LAB_005c4a34:
  *(undefined1 *)((long)pvVar11 + sVar5) = 0;
  lVar6 = lVar6 + uVar14 * 0x18;
  pbVar10 = (byte *)*param_1;
  pbVar9 = (byte *)param_1[1];
  puVar1 = puVar12 + 3;
  if (pbVar9 == pbVar10) {
    *param_1 = (long)puVar12;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar6;
  }
  else {
    do {
      uVar14 = *(ulong *)(pbVar9 + -0x10);
      uVar13 = *(ulong *)(pbVar9 + -0x18);
      puVar12[-1] = *(ulong *)(pbVar9 + -8);
      puVar12[-2] = uVar14;
      puVar12[-3] = uVar13;
      pbVar9[-0x18] = 0;
      pbVar9[-0x17] = 0;
      pbVar9[-0x16] = 0;
      pbVar9[-0x15] = 0;
      pbVar9[-0x14] = 0;
      pbVar9[-0x13] = 0;
      pbVar9[-0x12] = 0;
      pbVar9[-0x11] = 0;
      pbVar9[-0x10] = 0;
      pbVar9[-0xf] = 0;
      pbVar9[-0xe] = 0;
      pbVar9[-0xd] = 0;
      pbVar9[-0xc] = 0;
      pbVar9[-0xb] = 0;
      pbVar9[-10] = 0;
      pbVar9[-9] = 0;
      pbVar9[-8] = 0;
      pbVar9[-7] = 0;
      pbVar9[-6] = 0;
      pbVar9[-5] = 0;
      pbVar9[-4] = 0;
      pbVar9[-3] = 0;
      pbVar9[-2] = 0;
      pbVar9[-1] = 0;
      pbVar9 = pbVar9 + -0x18;
      puVar12 = puVar12 + -3;
    } while (pbVar10 != pbVar9);
    pbVar10 = (byte *)*param_1;
    pbVar9 = (byte *)param_1[1];
    *param_1 = (long)puVar12;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar6;
    puVar4 = PTR_LAB_04373088;
    if (pbVar9 != pbVar10) {
      bVar2 = pbVar9[-0x18];
      pbVar3 = pbVar9 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar9 + -8));
        }
        if (pbVar10 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar9 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
    }
  }
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar10);
  return;
}


