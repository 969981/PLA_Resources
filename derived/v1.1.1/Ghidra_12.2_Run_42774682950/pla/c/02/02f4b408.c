/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4b408; name: FUN_02f4b408
 */


undefined8 *
FUN_02f4b408(long param_1,long param_2,uint param_3,long param_4,uint param_5,long param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x108);
  puVar7 = *(undefined8 **)(param_1 + 0x100);
  if (0 < (int)*(uint *)(param_1 + 0x108)) {
    do {
      uVar3 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar3;
      puVar4 = puVar7 + uVar8 * 0xc;
      uVar15 = *(uint *)(puVar4 + 1);
      uVar10 = (ulong)uVar15;
      if (uVar15 != 0) {
        uVar13 = *(uint *)(puVar7 + uVar8 * 0xc + 3);
        uVar9 = (ulong)uVar13;
        if (uVar13 != 0) {
          puVar11 = (uint *)*puVar4;
          if (*puVar11 != 0xffffffff) {
            puVar5 = puVar11;
            do {
              puVar12 = puVar5 + (uVar15 >> 1);
              uVar2 = *puVar12;
              if (uVar2 == param_3) goto LAB_02f4b4b8;
              puVar12 = puVar12 + 1;
              if (uVar2 >= param_3) {
                puVar12 = puVar5;
              }
              uVar15 = uVar15 - (uVar2 < param_3) >> 1;
              puVar5 = puVar12;
            } while (uVar15 != 0);
            puVar12 = puVar11 + uVar10;
LAB_02f4b4b8:
            if (puVar12 == puVar11 + uVar10) {
              if (param_4 != 0 && param_4 != param_2) {
                lVar14 = param_4;
                do {
                  uVar15 = *(uint *)(lVar14 + 0x10);
                  puVar5 = puVar11;
                  uVar6 = uVar10;
                  do {
                    puVar1 = puVar5 + (uVar6 >> 1);
                    uVar2 = *puVar1;
                    if (uVar2 == uVar15) {
                      if (puVar1 != puVar12) {
                        if (lVar14 != 0) goto LAB_02f4b524;
                        goto LAB_02f4b44c;
                      }
                      break;
                    }
                    puVar1 = puVar1 + 1;
                    if (uVar2 >= uVar15) {
                      puVar1 = puVar5;
                    }
                    uVar2 = (int)uVar6 - (uint)(uVar2 < uVar15) >> 1;
                    uVar6 = (ulong)uVar2;
                    puVar5 = puVar1;
                  } while (uVar2 != 0);
                  lVar14 = *(long *)(lVar14 + 0x80);
                } while ((lVar14 != 0) && (lVar14 != param_2));
              }
              goto LAB_02f4b44c;
            }
          }
LAB_02f4b524:
          puVar11 = (uint *)puVar7[uVar8 * 0xc + 2];
          if (*puVar11 == 0xffffffff) {
            return puVar4;
          }
          puVar5 = puVar11;
          do {
            puVar12 = puVar5 + (uVar13 >> 1);
            uVar15 = *puVar12;
            if (uVar15 == param_5) goto LAB_02f4b570;
            puVar12 = puVar12 + 1;
            if (uVar15 >= param_5) {
              puVar12 = puVar5;
            }
            uVar13 = uVar13 - (uVar15 < param_5) >> 1;
            puVar5 = puVar12;
          } while (uVar13 != 0);
          puVar12 = puVar11 + uVar9;
LAB_02f4b570:
          if (puVar12 != puVar11 + uVar9) {
            return puVar4;
          }
          if (param_6 != 0 && param_6 != param_2) {
            lVar14 = param_6;
            do {
              uVar15 = *(uint *)(lVar14 + 0x10);
              uVar10 = uVar9;
              puVar5 = puVar11;
              do {
                puVar1 = puVar5 + (uVar10 >> 1);
                uVar13 = *puVar1;
                if (uVar13 == uVar15) {
                  if (puVar1 != puVar12) {
                    if (lVar14 != 0) {
                      return puVar4;
                    }
                    goto LAB_02f4b44c;
                  }
                  break;
                }
                puVar1 = puVar1 + 1;
                if (uVar13 >= uVar15) {
                  puVar1 = puVar5;
                }
                uVar13 = (int)uVar10 - (uint)(uVar13 < uVar15) >> 1;
                uVar10 = (ulong)uVar13;
                puVar5 = puVar1;
              } while (uVar13 != 0);
              lVar14 = *(long *)(lVar14 + 0x80);
            } while ((lVar14 != 0) && (lVar14 != param_2));
          }
        }
      }
LAB_02f4b44c:
    } while (0 < (int)uVar3);
  }
  return puVar7;
}


