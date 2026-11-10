/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845830; name: FUN_00845830
 */


ulong FUN_00845830(int *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  ushort *puVar19;
  
  if (0x7f < param_1[0x600]) {
    return 0xffffffff;
  }
  param_1[(long)param_1[0x600] * 0xc] = param_2;
  iVar10 = param_1[0x600];
  iVar15 = iVar10 + 1;
  param_1[0x600] = iVar15;
  if (-1 < iVar10) {
    lVar16 = 0;
    puVar11 = (ushort *)(param_1 + 0xc);
    lVar13 = 1;
    lVar14 = 1;
    lVar18 = (long)iVar15;
    if (lVar18 < 2) goto LAB_00845884;
    do {
      puVar17 = (ushort *)(param_1 + lVar16 * 0xc);
      puVar19 = puVar11;
      lVar16 = lVar13;
      do {
        if (((uint)*(byte *)((long)puVar19 + 3) << 0x18 | (uint)*puVar19 << 8 |
            (uint)(byte)puVar19[1]) <
            ((uint)*(byte *)((long)puVar17 + 3) << 0x18 | (uint)*puVar17 << 8 |
            (uint)(byte)puVar17[1])) {
          uVar1 = *(undefined8 *)puVar17;
          uVar5 = *(undefined8 *)(puVar17 + 4);
          uVar2 = *(undefined8 *)(puVar17 + 8);
          uVar6 = *(undefined8 *)(puVar17 + 0xc);
          uVar3 = *(undefined8 *)(puVar17 + 0x10);
          uVar7 = *(undefined8 *)(puVar17 + 0x14);
          uVar4 = *(undefined8 *)(puVar19 + 8);
          uVar8 = *(undefined8 *)(puVar19 + 0xc);
          uVar9 = *(undefined8 *)(puVar19 + 0x14);
          *(undefined8 *)(puVar17 + 0x10) = *(undefined8 *)(puVar19 + 0x10);
          *(undefined8 *)(puVar17 + 0x14) = uVar9;
          *(undefined8 *)(puVar17 + 8) = uVar4;
          *(undefined8 *)(puVar17 + 0xc) = uVar8;
          uVar4 = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)puVar17 = *(undefined8 *)puVar19;
          *(undefined8 *)(puVar17 + 4) = uVar4;
          *(undefined8 *)puVar19 = uVar1;
          *(undefined8 *)(puVar19 + 4) = uVar5;
          *(undefined8 *)(puVar19 + 0x10) = uVar3;
          *(undefined8 *)(puVar19 + 0x14) = uVar7;
          *(undefined8 *)(puVar19 + 8) = uVar2;
          *(undefined8 *)(puVar19 + 0xc) = uVar6;
          iVar15 = param_1[0x600];
        }
        lVar16 = lVar16 + 1;
        puVar19 = puVar19 + 0x18;
      } while (lVar16 < iVar15);
      lVar18 = (long)iVar15;
LAB_00845884:
      do {
        lVar16 = lVar14;
        lVar13 = lVar13 + 1;
        puVar11 = puVar11 + 0x18;
        if (lVar18 <= lVar16) goto LAB_00845960;
        lVar14 = lVar16 + 1;
        lVar18 = (long)iVar15;
      } while (lVar18 <= lVar14);
    } while( true );
  }
LAB_00845960:
  uVar12 = 0;
  do {
    if (*param_1 == param_2) goto LAB_00845994;
    if (param_1[0xc] == param_2) {
      return uVar12 + 1 & 0xffffffff;
    }
    uVar12 = uVar12 + 2;
    param_1 = param_1 + 0x18;
  } while (uVar12 != 0x80);
  uVar12 = 0xffffffff;
LAB_00845994:
  return uVar12 & 0xffffffff;
}


