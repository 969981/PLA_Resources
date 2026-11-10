/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a378; name: FUN_02e7a378
 */


void FUN_02e7a378(long param_1,undefined4 param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = lVar8;
    do {
      puVar14 = (undefined8 *)(lVar7 + 0x10);
      if ((undefined8 *)*puVar14 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)(lVar7 + 8);
        puVar16 = (undefined8 *)*puVar14;
        puVar15 = (undefined8 *)0x0;
        do {
          while( true ) {
            puVar11 = puVar16;
            bVar4 = 1;
            if ((1 << (ulong)(*(byte *)((long)puVar11 + 0x29) & 0x1f) &
                (uint)*(ushort *)(lVar7 + 0x18)) != 0) {
              if (*(char *)(puVar11 + 5) == -0x80) {
                bVar2 = true;
              }
              else if (*(char *)(puVar11 + 5) == -0x70) {
                bVar2 = *(char *)((long)puVar11 + 0x2b) == '\0';
              }
              else {
                bVar2 = false;
              }
              bVar4 = bVar2 ^ 1;
            }
            uVar3 = FUN_02e7b834(puVar11,param_2,bVar4);
            if ((uVar3 & 1) == 0) break;
            if ((*(byte *)(puVar11 + 5) | 0x10) != 0x90) {
              FUN_02e7ad40(uVar3,puVar10,puVar11);
            }
            puVar16 = (undefined8 *)*puVar11;
            puVar6 = puVar14;
            if ((undefined8 *)*puVar14 != puVar11) {
              puVar6 = puVar15;
            }
            *puVar6 = puVar16;
            if ((undefined8 *)*puVar10 == puVar11) {
              *puVar10 = puVar15;
            }
            if ((*(char *)(puVar11 + 5) == -0x80) ||
               ((*(char *)(puVar11 + 5) == -0x70 && (*(char *)((long)puVar11 + 0x2b) == '\0')))) {
              *(long *)(puVar11[2] + 0x10) = param_1;
              *puVar11 = 0;
              puVar6 = (undefined8 *)(param_1 + 0x28);
              if (*(long *)(param_1 + 0x28) != 0) {
                puVar6 = *(undefined8 **)(param_1 + 0x20);
              }
              *puVar6 = puVar11;
              *(undefined8 **)(param_1 + 0x20) = puVar11;
            }
            else {
              FUN_02e7b5fc(puVar11);
            }
            if (puVar16 == (undefined8 *)0x0) goto LAB_02e7a4fc;
          }
          puVar16 = (undefined8 *)*puVar11;
          puVar15 = puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
LAB_02e7a4fc:
        lVar8 = *(long *)(param_1 + 0x10);
        uVar5 = *(uint *)(param_1 + 0x18);
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar8 + (ulong)uVar5 * 0x20);
  }
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
      lVar7 = plVar9[2];
      if ((*(int *)(lVar7 + 100) == 0) && (*(int *)(lVar7 + 0x8c) == 0)) {
        plVar13 = (long *)*plVar9;
        plVar1 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar9) {
          plVar1 = plVar12;
        }
        *plVar1 = (long)plVar13;
        if (*(long **)(param_1 + 0x20) == plVar9) {
          *(long **)(param_1 + 0x20) = plVar12;
        }
        *(undefined8 *)(lVar7 + 0x10) = 0;
        FUN_02e7be30(plVar9);
        FUN_02e7b5fc(plVar9);
        plVar9 = plVar13;
      }
      else {
        plVar12 = plVar9;
        plVar9 = (long *)*plVar9;
      }
    } while (plVar9 != (long *)0x0);
  }
  return;
}


