/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed250; name: FUN_002ed250
 */


void FUN_002ed250(byte *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  size_t __n;
  long lVar10;
  size_t *psVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar10 = param_3 * 0x10;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar4 = 0;
  if (param_3 != 0) {
    uVar1 = (lVar10 - 0x10U >> 4) + 1;
    if (uVar1 < 9) {
      lVar4 = 0;
      lVar5 = param_2;
    }
    else {
      lVar4 = 0;
      lVar12 = 0;
      uVar2 = 8;
      if ((uVar1 & 7) != 0) {
        uVar2 = uVar1 & 7;
      }
      lVar14 = 0;
      lVar13 = 0;
      lVar6 = uVar1 - uVar2;
      lVar16 = 0;
      lVar15 = 0;
      lVar18 = 0;
      lVar17 = 0;
      lVar5 = param_2 + lVar6 * 0x10;
      plVar8 = (long *)(param_2 + 0x48);
      do {
        lVar6 = lVar6 + -8;
        lVar4 = plVar8[-8] + lVar4;
        lVar12 = plVar8[-6] + lVar12;
        lVar13 = plVar8[-4] + lVar13;
        lVar14 = plVar8[-2] + lVar14;
        lVar15 = *plVar8 + lVar15;
        lVar16 = plVar8[2] + lVar16;
        lVar17 = plVar8[4] + lVar17;
        lVar18 = plVar8[6] + lVar18;
        plVar8 = plVar8 + 0x10;
      } while (lVar6 != 0);
      lVar4 = lVar17 + lVar15 + lVar13 + lVar4 + lVar18 + lVar16 + lVar14 + lVar12;
    }
    do {
      plVar8 = (long *)(lVar5 + 8);
      lVar5 = lVar5 + 0x10;
      lVar4 = *plVar8 + lVar4;
    } while (param_2 + param_3 * 0x10 != lVar5);
  }
                    /* try { // try from 002ed32c to 002ed333 has its CatchHandler @ 002ed400 */
  FUN_002e5a60(param_1,lVar4);
  bVar3 = *param_1;
  pbVar7 = *(byte **)(param_1 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  pbVar9 = pbVar7;
  if (param_3 != 0) {
    psVar11 = (size_t *)(param_2 + 8);
    __n = *psVar11;
    if (__n != 0) goto LAB_002ed36c;
    while (lVar10 = lVar10 + -0x10, lVar10 != 0) {
      while( true ) {
        psVar11 = psVar11 + 2;
        __n = *psVar11;
        if (__n == 0) break;
LAB_002ed36c:
        memcpy(pbVar9,(void *)psVar11[-1],__n);
        pbVar9 = pbVar9 + __n;
        lVar10 = lVar10 + -0x10;
        if (lVar10 == 0) goto LAB_002ed38c;
      }
    }
LAB_002ed38c:
    bVar3 = *param_1;
  }
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (pbVar9 != pbVar7 + uVar1) {
                    /* try { // try from 002ed3d0 to 002ed3ef has its CatchHandler @ 002ed3f0 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("out == begin + result.size()","external/com_google_absl/absl/strings/str_cat.cc",
                  0x9c,"CatPieces");
  }
  return;
}


