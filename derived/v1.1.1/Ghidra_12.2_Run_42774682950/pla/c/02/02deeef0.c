/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02deeef0; name: FUN_02deeef0
 */


void FUN_02deeef0(undefined1 *param_1,long param_2,ushort param_3)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ushort uVar13;
  ulong uVar14;
  undefined1 *__src;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 auStack_d0 [128];
  
  uVar4 = (uint)param_3;
  puVar15 = auStack_d0 + (0x80 - ((ulong)(uVar4 + 0xf) & 0x1fff0));
  if (uVar4 < 2) {
    __src = param_1;
  }
  else {
    uVar16 = 1;
    puVar8 = puVar15;
    __src = param_1;
    do {
      puVar15 = __src;
      __src = puVar8;
      if (uVar16 < uVar4) {
        uVar12 = 0;
        uVar13 = 0;
        uVar6 = uVar16;
        do {
          uVar10 = (uint)uVar12;
          uVar3 = uVar10 + uVar16 * 2;
          if (uVar4 <= uVar3) {
            uVar3 = uVar4;
          }
          uVar9 = uVar6;
          if (uVar10 < uVar6) {
            if (uVar6 < uVar3) {
              uVar14 = (ulong)(int)uVar6;
              pbVar1 = puVar15 + uVar12;
              bVar5 = puVar15[uVar14];
              if (*(ushort *)(param_2 + (ulong)*pbVar1 * 2) <
                  *(ushort *)(param_2 + (ulong)bVar5 * 2)) {
                uVar12 = uVar12 + 1;
                bVar5 = *pbVar1;
              }
              else {
                uVar14 = uVar14 + 1;
              }
              uVar10 = (uint)uVar12;
              uVar9 = (uint)uVar14;
              __src[uVar13] = bVar5;
              uVar2 = uVar13 + 1;
              if (uVar10 < uVar6 && uVar9 < uVar3) {
                bVar5 = puVar15[uVar14];
                uVar13 = uVar13 + 2;
                if (*(ushort *)(param_2 + (ulong)(byte)puVar15[uVar12] * 2) <
                    *(ushort *)(param_2 + (ulong)bVar5 * 2)) {
                  uVar10 = uVar10 + 1;
                  bVar5 = puVar15[uVar12];
                }
                else {
                  uVar9 = uVar9 + 1;
                }
                __src[uVar2] = bVar5;
                while( true ) {
                  uVar12 = (ulong)uVar10;
                  if (!((int)uVar10 < (int)uVar6 && (int)uVar9 < (int)uVar3)) break;
                  bVar5 = puVar15[(int)uVar9];
                  uVar14 = (ulong)uVar13;
                  uVar13 = uVar13 + 1;
                  if (*(ushort *)(param_2 + (ulong)(byte)puVar15[uVar12] * 2) <
                      *(ushort *)(param_2 + (ulong)bVar5 * 2)) {
                    uVar10 = uVar10 + 1;
                    bVar5 = puVar15[uVar12];
                  }
                  else {
                    uVar9 = uVar9 + 1;
                  }
                  __src[uVar14] = bVar5;
                }
                goto LAB_02def038;
              }
            }
            else {
              uVar14 = (ulong)uVar6;
              uVar2 = uVar13;
            }
            uVar13 = uVar2;
            iVar11 = (int)uVar12;
            uVar9 = (uint)uVar14;
            if (uVar10 < uVar6) goto LAB_02def0b8;
          }
          else {
LAB_02def038:
            iVar11 = (int)uVar12;
            if (iVar11 < (int)uVar6) {
LAB_02def0b8:
              lVar7 = (long)(int)uVar6 - (long)iVar11;
              puVar8 = puVar15 + iVar11;
              do {
                __src[uVar13] = *puVar8;
                uVar13 = uVar13 + 1;
                lVar7 = lVar7 + -1;
                puVar8 = puVar8 + 1;
              } while (lVar7 != 0);
            }
          }
          if ((int)uVar9 < (int)uVar3) {
            lVar7 = (long)(int)uVar9;
            __src[uVar13] = puVar15[lVar7];
            while( true ) {
              lVar7 = lVar7 + 1;
              uVar13 = uVar13 + 1;
              if ((long)(ulong)uVar3 <= lVar7) break;
              __src[uVar13] = puVar15[lVar7];
            }
          }
          uVar12 = (ulong)(uint)uVar13;
          uVar6 = uVar16 + uVar13;
        } while (uVar6 < uVar4);
      }
      else {
        uVar13 = 0;
      }
      if (uVar13 < param_3) {
        memcpy(__src + uVar13,puVar15 + uVar13,(ulong)(ushort)(~uVar13 + param_3) + 1);
      }
      uVar16 = (uVar16 & 0x7fff) << 1;
      puVar8 = puVar15;
    } while (uVar16 < uVar4);
  }
  if ((param_3 != 0) && (puVar15 == param_1)) {
    memcpy(param_1,__src,(ulong)param_3);
  }
  return;
}


