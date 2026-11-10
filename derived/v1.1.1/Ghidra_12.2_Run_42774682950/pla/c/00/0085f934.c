/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f934; name: FUN_0085f934
 */


undefined8 FUN_0085f934(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ushort *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong auStack_1d8 [51];
  __less a_Stack_38 [8];
  
  puVar9 = auStack_1d8 + 3;
  puVar11 = auStack_1d8 + 3;
  lVar18 = *(long *)(*(long *)PTR_DAT_04377550 + 0xb8);
  if (lVar18 == 0) {
    lVar18 = FUN_0086faa0();
    pbVar4 = (byte *)(lVar18 + 1);
  }
  else {
    lVar19 = *(long *)(*(long *)PTR_DAT_04377550 + 0xc0);
    pbVar4 = (byte *)FUN_0086faa0();
    if (lVar18 != lVar19) {
      pbVar4 = pbVar4 + 1;
    }
  }
  bVar2 = *pbVar4;
  uVar5 = FUN_00821c5c(&DAT_043a5840);
  if ((uint)((uVar5 & 0xffffffff) * 100 >> 0x20) < (uint)bVar2) {
LAB_0085fbf8:
    uVar6 = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc0);
    if (uVar1 == 0) {
      iVar12 = 0;
      puVar16 = *(ushort **)(*(long *)(param_1 + 0xb0) + 0x1308);
      uVar3 = *puVar16;
    }
    else {
      uVar5 = 0;
      iVar12 = 0;
      puVar13 = (ulong *)(*(long *)(param_1 + 0xb8) + 0x10);
      uVar15 = *puVar13;
      if (uVar15 != 0xffffffffffffffff) goto LAB_0085f9e4;
      while (uVar5 = uVar5 + 1, uVar5 < uVar1) {
        while( true ) {
          puVar13 = puVar13 + 0xf;
          uVar15 = *puVar13;
          if (uVar15 == 0xffffffffffffffff) break;
LAB_0085f9e4:
          auStack_1d8[(long)iVar12 + 3] = uVar15;
          iVar12 = iVar12 + 1;
          uVar5 = uVar5 + 1;
          if (uVar1 <= uVar5) goto LAB_0085fa00;
        }
      }
LAB_0085fa00:
      puVar16 = *(ushort **)(*(long *)(param_1 + 0xb0) + 0x1308);
      uVar3 = *puVar16;
    }
    if (uVar3 != 0) {
      iVar17 = 0;
      puVar13 = (ulong *)FUN_0085e904(puVar16,0);
      do {
        if (puVar13 == (ulong *)0x0) {
          if ((uint)*puVar16 <= iVar17 + 1U) break;
        }
        else {
          auStack_1d8[(long)iVar12 + 3] = *puVar13;
          iVar12 = iVar12 + 1;
          if ((uint)*puVar16 <= iVar17 + 1U) break;
        }
        iVar17 = iVar17 + 1;
        puVar13 = (ulong *)FUN_0085e904(puVar16,iVar17);
      } while( true );
    }
    puVar13 = auStack_1d8 + (long)iVar12 + 3;
    std::__sort<std::__less<unsigned_long,unsigned_long>&,unsigned_long*>
              (auStack_1d8 + 3,puVar13,a_Stack_38);
    if (iVar12 != 0) {
      lVar18 = (long)iVar12 * 8;
      puVar7 = auStack_1d8 + 2;
      do {
        lVar18 = lVar18 + -8;
        if (lVar18 == 0) goto LAB_0085fb84;
        puVar9 = puVar7 + 1;
        puVar10 = puVar7 + 2;
        puVar7 = puVar9;
      } while (*puVar9 != *puVar10);
    }
    if (puVar9 != puVar13) {
      puVar7 = puVar9 + 2;
      if (puVar7 != puVar13) {
        uVar5 = *puVar9;
        puVar8 = (ulong *)((long)auStack_1d8 + ((long)iVar12 * 8 - (long)puVar9) + 0x18);
        puVar14 = puVar8 + -3;
        puVar10 = puVar9;
        if (((uint)puVar14 >> 3 & 1) == 0) {
          uVar15 = *puVar7;
          puVar8 = puVar9;
          if (uVar5 != uVar15) {
            puVar8 = puVar9 + 1;
            *puVar8 = uVar15;
          }
          puVar7 = puVar9 + 3;
          uVar5 = uVar15;
          puVar10 = puVar8;
        }
        puVar9 = puVar8;
        if (&DAT_00000007 < puVar14) {
          uVar15 = *puVar7;
          puVar9 = puVar10;
          if (uVar5 == uVar15) goto LAB_0085fb44;
LAB_0085fb54:
          puVar9 = puVar10 + 1;
          *puVar9 = uVar15;
          uVar5 = puVar7[1];
          if (uVar15 == uVar5) goto LAB_0085fb2c;
          do {
            puVar9 = puVar9 + 1;
            *puVar9 = uVar5;
LAB_0085fb2c:
            do {
              puVar7 = puVar7 + 2;
              if (puVar7 == puVar13) goto LAB_0085fb80;
              uVar15 = *puVar7;
              puVar10 = puVar9;
              if (uVar5 != uVar15) goto LAB_0085fb54;
LAB_0085fb44:
              uVar5 = puVar7[1];
            } while (uVar15 == uVar5);
          } while( true );
        }
      }
LAB_0085fb80:
      puVar13 = puVar9 + 1;
    }
LAB_0085fb84:
    iVar12 = (int)((ulong)((long)puVar13 - (long)(auStack_1d8 + 3)) >> 3);
    if (iVar12 == 0) {
      iVar12 = 0;
LAB_0085fbe8:
      lVar18 = FUN_0086faa0();
      if (*(char *)(lVar18 + iVar12 + 0x18) != '\0') goto LAB_0085fbf8;
    }
    else {
      lVar18 = (((long)puVar13 - (long)(auStack_1d8 + 3)) * 0x20000000 >> 0x20) << 3;
      do {
        if (*puVar11 == param_2) goto LAB_0085fbc0;
        puVar11 = puVar11 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
      puVar11 = auStack_1d8 + (long)iVar12 + 3;
LAB_0085fbc0:
      iVar12 = (int)((ulong)((long)puVar11 - (long)(auStack_1d8 + 3)) >> 3);
      if (iVar12 < 0x18) goto LAB_0085fbe8;
    }
    uVar6 = 0;
  }
  return uVar6;
}


