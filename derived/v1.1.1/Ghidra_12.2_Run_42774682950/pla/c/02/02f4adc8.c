/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4adc8; name: FUN_02f4adc8
 */


int FUN_02f4adc8(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  
  iVar8 = FUN_02f3a2d0();
  if (iVar8 == 1) {
    lVar13 = *(long *)(param_1 + 0x100);
    if (lVar13 != 0) {
      if (*(uint *)(param_1 + 0x108) != 0) {
        lVar15 = (ulong)*(uint *)(param_1 + 0x108) * 0x60;
        do {
          FUN_02f4acb4(lVar13);
          lVar13 = lVar13 + 0x60;
          lVar15 = lVar15 + -0x60;
        } while (lVar15 != 0);
        lVar13 = *(long *)(param_1 + 0x100);
      }
      *(undefined4 *)(param_1 + 0x108) = 0;
      FUN_02f59e60(0,lVar13);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    uVar3 = *(uint *)*param_2;
    uVar14 = (ulong)uVar3;
    *param_2 = (long)((uint *)*param_2 + 1);
    if (uVar3 == 0) {
LAB_02f4b1a0:
      iVar8 = 1;
    }
    else {
      lVar13 = (*DAT_0442d138)(0,uVar14 * 0x60);
      *(long *)(param_1 + 0x100) = lVar13;
      if (lVar13 != 0) {
        uVar16 = 0;
        *(uint *)(param_1 + 0x10c) = uVar3;
        do {
          uVar12 = *(uint *)(param_1 + 0x108);
          uVar11 = (uint)uVar14;
          if (uVar12 < uVar11) {
            if (uVar11 <= uVar12) goto LAB_02f4b394;
LAB_02f4ae58:
            uVar11 = *(uint *)(param_1 + 0x108);
            plVar17 = (long *)(*(long *)(param_1 + 0x100) + (ulong)uVar11 * 0x60);
            *(uint *)(param_1 + 0x108) = uVar11 + 1;
            if (plVar17 != (long *)0x0) {
              *(undefined8 *)(*(long *)(param_1 + 0x100) + (ulong)uVar11 * 0x60 + 0x50) = 0;
              plVar17[2] = 0;
              plVar17[3] = 0;
              *plVar17 = 0;
              plVar17[1] = 0;
            }
          }
          else {
            iVar8 = uVar11 + (uVar11 >> 1);
            if (uVar11 == 0) {
              iVar8 = 1;
            }
            uVar11 = uVar11 + iVar8;
            lVar13 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x100),(ulong)uVar11 * 0x60);
            if (lVar13 != 0) {
              *(long *)(param_1 + 0x100) = lVar13;
              *(uint *)(param_1 + 0x10c) = uVar11;
              if (uVar12 < uVar11) goto LAB_02f4ae58;
            }
LAB_02f4b394:
            plVar17 = (long *)0x0;
          }
          puVar10 = (uint *)*param_2;
          uVar11 = *puVar10;
          *param_2 = (long)(puVar10 + 1);
          if (uVar11 == 0) {
            uVar12 = puVar10[1];
            puVar10 = puVar10 + 2;
            *param_2 = (long)puVar10;
            if (uVar12 == 0) goto LAB_02f4b3fc;
LAB_02f4af54:
            lVar13 = (*DAT_0442d138)(0,(ulong)uVar12 << 2);
            plVar17[2] = lVar13;
            if (lVar13 == 0) break;
            *(uint *)((long)plVar17 + 0x1c) = uVar12;
            uVar11 = *(uint *)*param_2;
            *param_2 = (long)((uint *)*param_2 + 1);
            do {
              uVar2 = *(uint *)(plVar17 + 3);
              uVar1 = *(uint *)((long)plVar17 + 0x1c);
              if (uVar2 < uVar1) {
joined_r0x02f4b198:
                if (uVar2 < uVar1) {
                  puVar10 = (uint *)(plVar17[2] + (ulong)*(uint *)(plVar17 + 3) * 4);
                  *(uint *)(plVar17 + 3) = *(uint *)(plVar17 + 3) + 1;
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = uVar11;
                  }
                }
              }
              else {
                iVar8 = uVar1 + (uVar1 >> 1);
                if (uVar1 == 0) {
                  iVar8 = 1;
                }
                uVar1 = iVar8 + uVar1;
                lVar13 = (*DAT_0442d148)(0,plVar17[2],(ulong)uVar1 << 2);
                if (lVar13 != 0) {
                  plVar17[2] = lVar13;
                  *(uint *)((long)plVar17 + 0x1c) = uVar1;
                  goto joined_r0x02f4b198;
                }
              }
              uVar12 = uVar12 - 1;
              uVar11 = *(uint *)*param_2;
              *param_2 = (long)((uint *)*param_2 + 1);
            } while (uVar12 != 0);
          }
          else {
            lVar13 = (*DAT_0442d138)(0,(ulong)uVar11 << 2);
            *plVar17 = lVar13;
            if (lVar13 == 0) break;
            *(uint *)((long)plVar17 + 0xc) = uVar11;
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            uVar1 = *(uint *)(plVar17 + 1);
            uVar12 = *(uint *)((long)plVar17 + 0xc);
            if (uVar1 < uVar12) {
joined_r0x02f4b1fc:
              if (uVar1 < uVar12) {
                puVar9 = (undefined4 *)(*plVar17 + (ulong)*(uint *)(plVar17 + 1) * 4);
                *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) + 1;
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = uVar4;
                }
              }
            }
            else {
              iVar8 = uVar12 + (uVar12 >> 1);
              if (uVar12 == 0) {
                iVar8 = 1;
              }
              uVar12 = iVar8 + uVar12;
              lVar13 = (*DAT_0442d148)(0,*plVar17,(ulong)uVar12 << 2);
              if (lVar13 != 0) {
                *plVar17 = lVar13;
                *(uint *)((long)plVar17 + 0xc) = uVar12;
                goto joined_r0x02f4b1fc;
              }
            }
            puVar10 = (uint *)*param_2;
            uVar12 = *puVar10;
            *param_2 = (long)(puVar10 + 1);
            while (uVar11 = uVar11 - 1, uVar11 != 0) {
              uVar2 = *(uint *)(plVar17 + 1);
              uVar1 = *(uint *)((long)plVar17 + 0xc);
              if (uVar2 < uVar1) {
joined_r0x02f4b23c:
                if (uVar2 < uVar1) {
                  puVar10 = (uint *)(*plVar17 + (ulong)*(uint *)(plVar17 + 1) * 4);
                  *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) + 1;
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = uVar12;
                  }
                }
              }
              else {
                iVar8 = uVar1 + (uVar1 >> 1);
                if (uVar1 == 0) {
                  iVar8 = 1;
                }
                uVar1 = iVar8 + uVar1;
                lVar13 = (*DAT_0442d148)(0,*plVar17,(ulong)uVar1 << 2);
                if (lVar13 != 0) {
                  *plVar17 = lVar13;
                  *(uint *)((long)plVar17 + 0xc) = uVar1;
                  goto joined_r0x02f4b23c;
                }
              }
              puVar10 = (uint *)*param_2;
              uVar12 = *puVar10;
              *param_2 = (long)(puVar10 + 1);
            }
            puVar10 = puVar10 + 1;
            if (uVar12 != 0) goto LAB_02f4af54;
LAB_02f4b3fc:
            uVar11 = *puVar10;
            *param_2 = (long)(puVar10 + 1);
          }
          *(uint *)(plVar17 + 4) = uVar11;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar17 + 0x24) = uVar4;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          uVar14 = (ulong)DAT_042ab258;
          auVar7 = SEXT816((long)(uVar14 * (long)iVar8)) * SEXT816(0x20c49ba5e353f7cf);
          *(int *)(plVar17 + 5) = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
          bVar5 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 4);
          *(byte *)(plVar17 + 6) = *(byte *)(plVar17 + 6) & 0xe0 | bVar5 & 0x1f;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar17 + 0x2c) = uVar4;
          bVar5 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar17 + 6) = *(byte *)(plVar17 + 6) & 0xdf | (bVar5 & 1) << 5;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar17 + 0x34) = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar17 + 7) = uVar4;
          iVar8 = *(int *)*param_2;
          *param_2 = (long)((int *)*param_2 + 1);
          auVar7 = SEXT816((long)((long)iVar8 * uVar14)) * SEXT816(0x20c49ba5e353f7cf);
          *(int *)((long)plVar17 + 0x3c) = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(plVar17 + 8) = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (long)((undefined4 *)*param_2 + 1);
          *(undefined4 *)((long)plVar17 + 0x44) = uVar4;
          bVar5 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 2);
          *(byte *)(plVar17 + 9) = *(byte *)(plVar17 + 9) & 0xf8 | bVar5 & 7;
          bVar5 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 2);
          *(byte *)(plVar17 + 9) = *(byte *)(plVar17 + 9) & 199 | (bVar5 & 7) << 3;
          bVar5 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          *(byte *)(plVar17 + 9) = *(byte *)(plVar17 + 9) & 0xbf | (bVar5 & 1) << 6;
          cVar6 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          *(byte *)(plVar17 + 9) = *(byte *)(plVar17 + 9) & 0x7f | cVar6 << 7;
          cVar6 = *(char *)*param_2;
          *param_2 = (long)((char *)*param_2 + 1);
          if (cVar6 != '\0') {
            puVar9 = (undefined4 *)(*DAT_0442d138)(2,0x20);
            plVar17[10] = (long)puVar9;
            if (puVar9 == (undefined4 *)0x0) {
              return 2;
            }
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            *puVar9 = uVar4;
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[1] = uVar4;
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[2] = uVar4;
            iVar8 = *(int *)*param_2;
            *param_2 = (long)((int *)*param_2 + 1);
            uVar14 = (ulong)DAT_042ab258;
            auVar7 = SEXT816((long)(uVar14 * (long)iVar8)) * SEXT816(0x20c49ba5e353f7cf);
            puVar9[3] = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[4] = uVar4;
            uVar4 = *(undefined4 *)*param_2;
            *param_2 = (long)((undefined4 *)*param_2 + 1);
            puVar9[5] = uVar4;
            iVar8 = *(int *)*param_2;
            *param_2 = (long)((int *)*param_2 + 1);
            auVar7 = SEXT816((long)((long)iVar8 * uVar14)) * SEXT816(0x20c49ba5e353f7cf);
            puVar9[6] = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
            bVar5 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 1);
            *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0xfe | bVar5 & 1;
            bVar5 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 1);
            *(byte *)(puVar9 + 7) = *(byte *)(puVar9 + 7) & 0xfd | (bVar5 & 1) << 1;
          }
          *(uint *)(plVar17 + 0xb) = uVar16;
          uVar16 = uVar16 + 1;
          if (uVar16 == uVar3) goto LAB_02f4b1a0;
          uVar14 = (ulong)*(uint *)(param_1 + 0x10c);
        } while( true );
      }
      iVar8 = 2;
    }
  }
  return iVar8;
}


