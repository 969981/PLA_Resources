/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056457c; name: FUN_0056457c
 */


void FUN_0056457c(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  pbVar6 = *(byte **)(param_1 + 8);
  if (pbVar6 == (byte *)0x0) {
    uVar8 = 0;
  }
  else {
    if (*pbVar6 < 0x16) {
      uVar8 = 0;
      pbVar10 = *(byte **)(pbVar6 + 0x10);
      pbVar7 = pbVar6;
      if (param_2 != *pbVar6) goto LAB_00564610;
      while (uVar8 = *(ushort *)(pbVar7 + 6) + uVar8, pbVar7 = pbVar10, pbVar10 != (byte *)0x0) {
        while( true ) {
          pbVar10 = pbVar7;
          if (0x15 < *pbVar7) goto joined_r0x0056461c;
          pbVar10 = *(byte **)(pbVar7 + 0x10);
          if (param_2 == *pbVar7) break;
LAB_00564610:
          uVar8 = uVar8 + 1;
          pbVar7 = pbVar10;
          if (pbVar10 == (byte *)0x0) goto joined_r0x0056461c;
        }
      }
    }
    else {
      uVar8 = 0;
      pbVar10 = (byte *)0x0;
    }
joined_r0x0056461c:
    if ((pbVar6 != (byte *)0x0) && (*(byte **)(pbVar6 + 0x10) == pbVar10)) {
      return;
    }
  }
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,(ulong)uVar8 << 3);
  pbVar6 = *(byte **)(param_1 + 8);
  if ((pbVar6 == (byte *)0x0) || (uVar5 = (uint)*pbVar6, 0x15 < *pbVar6)) {
    pbVar10 = (byte *)0x0;
  }
  else {
    uVar11 = uVar8;
    do {
      pbVar10 = *(byte **)(pbVar6 + 0x10);
      if (param_2 == uVar5) {
        uVar9 = (ulong)*(ushort *)(pbVar6 + 6);
        pbVar7 = pbVar6 + 8;
        if (uVar9 < 2) {
          if (*(ushort *)(pbVar6 + 6) != 0) goto LAB_0056475c;
        }
        else {
          pbVar7 = *(byte **)pbVar7;
LAB_0056475c:
          puVar12 = (undefined8 *)(lVar2 + -8 + (long)(int)uVar11 * 8);
          do {
                    /* try { // try from 00564768 to 0056476b has its CatchHandler @ 005647b4 */
            uVar4 = FUN_0055dbac(*(undefined8 *)(pbVar7 + uVar9 * 8 + -8));
            uVar9 = uVar9 - 1;
            uVar11 = uVar11 - 1;
            *puVar12 = uVar4;
            puVar12 = puVar12 + -1;
          } while (0 < (long)uVar9);
        }
                    /* try { // try from 00564780 to 00564787 has its CatchHandler @ 005647a8 */
        FUN_0055de34(pbVar6);
      }
      else {
        pbVar6[0x10] = 0;
        pbVar6[0x11] = 0;
        pbVar6[0x12] = 0;
        pbVar6[0x13] = 0;
        pbVar6[0x14] = 0;
        pbVar6[0x15] = 0;
        pbVar6[0x16] = 0;
        pbVar6[0x17] = 0;
        if ((uVar5 == 0x14) && (lVar3 = *(long *)(pbVar6 + 0x20), lVar3 != 0)) {
          pbVar6[0x20] = 0;
          pbVar6[0x21] = 0;
          pbVar6[0x22] = 0;
          pbVar6[0x23] = 0;
          pbVar6[0x24] = 0;
          pbVar6[0x25] = 0;
          pbVar6[0x26] = 0;
          pbVar6[0x27] = 0;
                    /* try { // try from 00564710 to 00564717 has its CatchHandler @ 00564790 */
          uVar4 = FUN_00560ab0(lVar3);
          *(undefined8 *)(pbVar6 + 0x18) = uVar4;
          FUN_00560e20(lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x18));
          FUN_002e2ea0(PTR_LAB_04373088,lVar3);
        }
        uVar11 = uVar11 - 1;
        *(byte **)(lVar2 + (long)(int)uVar11 * 8) = pbVar6;
      }
    } while ((pbVar10 != (byte *)0x0) && (uVar5 = (uint)*pbVar10, pbVar6 = pbVar10, uVar5 < 0x16));
  }
                    /* try { // try from 00564654 to 0056466f has its CatchHandler @ 0056479c */
  lVar3 = FUN_0055e598(param_2,lVar2,uVar8,*param_1,1);
  bVar1 = FUN_00567000();
  *(byte *)(lVar3 + 1) = bVar1 & 1;
  *(byte **)(lVar3 + 0x10) = pbVar10;
  *(long *)(param_1 + 8) = lVar3;
  if (lVar2 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  return;
}


