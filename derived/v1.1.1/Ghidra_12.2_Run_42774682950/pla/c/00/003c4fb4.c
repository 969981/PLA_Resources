/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c4fb4; name: FUN_003c4fb4
 */


void FUN_003c4fb4(long *param_1,ulong param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  void *__s;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar6 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar6 >> 3) * -0x5555555555555555)) {
    uVar12 = param_2;
    if ((param_2 & 1) != 0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar12 = param_2 - 1;
      puVar6[2] = 0;
      puVar6 = (undefined8 *)(param_1[1] + 0x18);
      param_1[1] = (long)puVar6;
    }
    if (param_2 == 1) {
      return;
    }
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar12 = uVar12 - 2;
      puVar6[2] = 0;
      lVar5 = param_1[1];
      param_1[1] = lVar5 + 0x18;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      puVar6 = (undefined8 *)(param_1[1] + 0x18);
      param_1[1] = (long)puVar6;
    } while (uVar12 != 0);
    return;
  }
  lVar5 = (long)puVar6 - *param_1 >> 3;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  uVar12 = lVar5 * -0x5555555555555555 + param_2;
  if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar14 = uVar12;
    if (uVar12 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) goto LAB_003c5040;
    lVar8 = 0;
  }
  else {
LAB_003c5040:
    lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar14 * 0x18);
  }
  __s = (void *)(lVar8 + lVar5 * 8);
  memset(__s,0,param_2 * 0x18);
  if (param_2 < 4) {
    uVar10 = param_2 - 1;
    uVar9 = param_2 & 7;
    pvVar7 = __s;
    uVar12 = param_2;
  }
  else {
    uVar9 = param_2 & 0xfffffffffffffffc;
    uVar12 = (uVar9 - 4 >> 2) + 1;
    uVar10 = uVar12 & 7;
    if (0x1b < uVar9 - 4) {
      lVar5 = uVar12 - uVar10;
      do {
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    pvVar7 = (void *)((long)__s + uVar9 * 0x18);
    uVar12 = param_2 - uVar9;
    if (uVar10 != 0) {
      lVar5 = -uVar10;
      do {
        bVar4 = lVar5 != -1;
        lVar5 = lVar5 + 1;
      } while (bVar4);
    }
    if (uVar9 == param_2) goto LAB_003c516c;
    uVar10 = uVar12 - 1;
    uVar9 = uVar12 & 7;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    pvVar7 = (void *)((long)pvVar7 + 0x18);
    uVar12 = uVar12 - 1;
  }
  if (6 < uVar10) {
    do {
      pvVar7 = (void *)((long)pvVar7 + 0xc0);
      uVar12 = uVar12 - 8;
    } while (uVar12 != 0);
  }
LAB_003c516c:
  lVar8 = lVar8 + uVar14 * 0x18;
  pbVar13 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  if (pbVar11 == pbVar13) {
    *param_1 = (long)__s;
    param_1[1] = (long)pvVar7;
    param_1[2] = lVar8;
  }
  else {
    do {
      uVar16 = *(undefined8 *)(pbVar11 + -0x10);
      uVar15 = *(undefined8 *)(pbVar11 + -0x18);
      *(undefined8 *)((long)__s + -8) = *(undefined8 *)(pbVar11 + -8);
      *(undefined8 *)((long)__s + -0x10) = uVar16;
      *(undefined8 *)((long)__s + -0x18) = uVar15;
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
      pbVar11[-8] = 0;
      pbVar11[-7] = 0;
      pbVar11[-6] = 0;
      pbVar11[-5] = 0;
      pbVar11[-4] = 0;
      pbVar11[-3] = 0;
      pbVar11[-2] = 0;
      pbVar11[-1] = 0;
      pbVar11 = pbVar11 + -0x18;
      __s = (void *)((long)__s + -0x18);
    } while (pbVar13 != pbVar11);
    pbVar13 = (byte *)*param_1;
    pbVar11 = (byte *)param_1[1];
    *param_1 = (long)__s;
    param_1[1] = (long)pvVar7;
    param_1[2] = lVar8;
    puVar3 = PTR_LAB_04373088;
    if (pbVar11 != pbVar13) {
      bVar1 = pbVar11[-0x18];
      pbVar2 = pbVar11 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar11 + -8));
        }
        if (pbVar13 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar11 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
    }
  }
  if (pbVar13 == (byte *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar13);
  return;
}


