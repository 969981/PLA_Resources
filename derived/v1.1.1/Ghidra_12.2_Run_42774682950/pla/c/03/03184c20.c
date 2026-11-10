/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03184c20; name: FUN_03184c20
 */


void FUN_03184c20(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 local_70 [2];
  uint local_68 [2];
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x60);
  lVar11 = *(long *)(param_2 + 0x38) + (long)iVar4 * 0xf0;
  iVar5 = *(int *)(lVar11 + 200);
  if (iVar5 != 0) {
    piVar13 = *(int **)(lVar11 + 0xc0);
    piVar3 = piVar13 + (long)iVar5 * 4;
    iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x5c);
    uVar6 = iVar4 << 0x16;
    do {
      lVar11 = *(long *)(piVar13 + 2);
      if (*(int *)(lVar11 + 0x18) == iVar5) {
        lVar8 = *(long *)(*(long *)(param_2 + 0x38) + (long)*piVar13 * 0xf0 + 0x10);
        if (lVar8 == 0) {
          lVar8 = 0;
          iVar4 = *(int *)(lVar11 + 0x38);
        }
        else if (*(char *)(lVar8 + 0x30) == '\x01') {
          lVar8 = *(long *)(lVar8 + 0x20);
          iVar4 = *(int *)(lVar11 + 0x38);
        }
        else {
          lVar8 = FUN_02898d80();
          iVar4 = *(int *)(lVar11 + 0x38);
        }
        if (iVar4 != 0) {
          puVar14 = *(uint **)(lVar11 + 0x30);
          puVar15 = puVar14 + (long)iVar4 * 5;
          iVar4 = *(int *)(lVar8 + 0x78);
          uVar7 = local_68[0];
          do {
            if (iVar4 != 0) {
              local_68[0] = puVar14[1];
              iVar4 = *(int *)(*(long *)(lVar8 + 0x70) + (long)(int)local_68[0] * 4);
              if (iVar4 != -1) {
                uVar9 = *(ulong *)(*(long *)(lVar8 + 0x80) + (long)iVar4 * 8);
                uVar10 = uVar9 >> 0x20;
                if (0 < (int)(uVar9 >> 0x20)) {
                  lVar11 = *(long *)(lVar8 + 0x90) +
                           ((long)(int)uVar9 * 2 + (long)*(int *)(lVar8 + 0x30) * -2) * 4;
                  puVar12 = (uint *)(lVar11 + 4);
                  if ((*(byte *)(lVar11 + 2) >> 6 & 1) != 0) goto LAB_03184d70;
                  do {
                    do {
                      uVar9 = (ulong)((int)uVar9 + 1);
                      puVar2 = puVar12 + 2;
                      uVar10 = uVar10 - 1;
                      if (uVar10 == 0) goto LAB_03184cec;
                      pbVar1 = (byte *)((long)puVar12 + 6);
                      puVar12 = puVar2;
                    } while ((*pbVar1 >> 6 & 1) == 0);
LAB_03184d70:
                  } while (*puVar12 != (*puVar14 | uVar6));
                  local_70[0] = (undefined4)uVar9;
                  FUN_0315c2f4(lVar8,local_68,local_70);
                  uVar7 = local_68[0];
                }
              }
            }
LAB_03184cec:
            local_68[0] = uVar7;
            puVar14 = puVar14 + 5;
            if (puVar14 == puVar15) break;
            iVar4 = *(int *)(lVar8 + 0x78);
            uVar7 = local_68[0];
          } while( true );
        }
      }
      else if (*(int *)(lVar11 + 0x1c) == iVar5) {
        lVar8 = *(long *)(*(long *)(param_2 + 0x38) + (long)*piVar13 * 0xf0 + 0x10);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (*(char *)(lVar8 + 0x30) == '\x01') {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        else {
          lVar8 = FUN_02898d80();
        }
        if (*(int *)(lVar11 + 0x38) != 0) {
          puVar14 = *(uint **)(lVar11 + 0x30);
          puVar15 = puVar14 + (long)*(int *)(lVar11 + 0x38) * 5;
          iVar4 = *(int *)(lVar8 + 0x78);
          uVar7 = local_68[0];
          do {
            if (iVar4 != 0) {
              local_68[0] = *puVar14;
              iVar4 = *(int *)(*(long *)(lVar8 + 0x70) + (long)(int)local_68[0] * 4);
              if (iVar4 != -1) {
                uVar9 = *(ulong *)(*(long *)(lVar8 + 0x80) + (long)iVar4 * 8);
                uVar10 = uVar9 >> 0x20;
                if (0 < (int)(uVar9 >> 0x20)) {
                  lVar11 = *(long *)(lVar8 + 0x90) +
                           ((long)(int)uVar9 * 2 + (long)*(int *)(lVar8 + 0x30) * -2) * 4;
                  puVar12 = (uint *)(lVar11 + 4);
                  if ((*(byte *)(lVar11 + 2) >> 6 & 1) != 0) goto LAB_03184e1c;
                  do {
                    do {
                      uVar9 = (ulong)((int)uVar9 + 1);
                      puVar2 = puVar12 + 2;
                      uVar10 = uVar10 - 1;
                      if (uVar10 == 0) goto LAB_03184d98;
                      pbVar1 = (byte *)((long)puVar12 + 6);
                      puVar12 = puVar2;
                    } while ((*pbVar1 >> 6 & 1) == 0);
LAB_03184e1c:
                  } while (*puVar12 != (puVar14[1] | uVar6));
                  local_70[0] = (undefined4)uVar9;
                  FUN_0315c2f4(lVar8,local_68,local_70);
                  uVar7 = local_68[0];
                }
              }
            }
LAB_03184d98:
            local_68[0] = uVar7;
            puVar14 = puVar14 + 5;
            if (puVar14 == puVar15) break;
            iVar4 = *(int *)(lVar8 + 0x78);
            uVar7 = local_68[0];
          } while( true );
        }
      }
      piVar13 = piVar13 + 4;
    } while (piVar13 != piVar3);
  }
  return;
}


