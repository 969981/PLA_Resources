/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166b008; name: FUN_0166b008
 */


undefined8 FUN_0166b008(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *piVar18;
  
  piVar18 = (int *)*param_2;
  puVar17 = (undefined1 *)param_1[2];
  lVar10 = *param_1;
  lVar2 = param_1[1];
  puVar8 = (ushort *)((long)piVar18 - (long)*piVar18);
  if (*puVar8 < 5) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)0x0;
    if ((ulong)puVar8[2] != 0) {
      puVar1 = (uint *)((long)piVar18 + (ulong)puVar8[2]);
      piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 9) ||
     (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4], uVar13 == 0)) {
    lVar9 = 0;
    cVar3 = DAT_00000004;
  }
  else {
    puVar1 = (uint *)((long)piVar12 + uVar13);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
    cVar3 = *(char *)(lVar9 + 4);
  }
  if (cVar3 != '\0') {
    pcVar11 = (char *)(lVar9 + 5);
    do {
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
  }
  uVar5 = puVar8[2];
  puVar1 = (uint *)((long)piVar18 + (ulong)uVar5);
  uVar13 = (ulong)*puVar1;
  piVar12 = (int *)((long)puVar1 + uVar13);
  puVar8 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar6 = *puVar8;
  if (uVar6 < 9) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if ((ulong)puVar8[4] != 0) {
      puVar1 = (uint *)((long)piVar12 + (ulong)puVar8[4]);
      lVar9 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  iVar7 = atoi((char *)(lVar9 + 4));
  if (lVar10 == iVar7) {
    if (uVar6 < 0xb) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if ((ulong)puVar8[5] != 0) {
        puVar1 = (uint *)((long)piVar12 + (ulong)puVar8[5]);
        lVar10 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    iVar7 = atoi((char *)(lVar10 + 4));
    if ((iVar7 < 0) || (lVar2 == iVar7)) {
      puVar1 = (uint *)((long)piVar12 + (ulong)puVar8[6]);
      uVar15 = (ulong)*puVar1;
      bVar4 = *(byte *)((long)puVar1 + uVar15 + 4);
      if (bVar4 != 0) {
        puVar16 = &DAT_cbf29ce484222645;
        pbVar14 = (byte *)((long)piVar18 + uVar15 + puVar8[6] + uVar13 + (ulong)uVar5 + 5);
        do {
          puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar4 != 0);
        if (puVar16 != &DAT_cbf29ce484222645 && puVar16 != puVar17) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


