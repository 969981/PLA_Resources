/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03184130; name: FUN_03184130
 */


void FUN_03184130(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  uint local_70 [2];
  uint local_68 [2];
  
  iVar4 = *(int *)(param_1 + 0x94);
  lVar11 = *(long *)(param_2 + 0x38) + (long)iVar4 * 0xf0;
  iVar18 = *(int *)(lVar11 + 0xa8);
  if (iVar18 != 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    piVar13 = *(int **)(lVar11 + 0xa0);
    piVar1 = piVar13 + (long)iVar18 * 2;
    lVar11 = *(long *)(param_2 + 0x48);
    do {
      iVar18 = *piVar13;
      lVar14 = *(long *)(*(long *)(lVar11 + (long)piVar13[1] * 0x18) + 0x20);
      if (*(int *)(lVar14 + 0x18) == iVar5) {
        bVar8 = iVar18 != -1;
        iVar19 = iVar18;
        iVar18 = iVar4;
        if (bVar8) {
LAB_031841fc:
          lVar10 = *(long *)(param_2 + 0x38);
          lVar12 = *(long *)(lVar10 + (long)iVar18 * 0xf0 + 8);
          if (lVar12 == 0) {
            uVar16 = 0;
          }
          else if (*(char *)(lVar12 + 0x30) == '\x01') {
            uVar16 = *(undefined8 *)(lVar12 + 0x20);
          }
          else {
            uVar16 = FUN_0317a2cc();
            lVar10 = *(long *)(param_2 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + (long)iVar19 * 0xf0 + 8);
          if (lVar10 == 0) {
            uVar17 = 0;
            iVar6 = *(int *)(lVar14 + 0x48);
          }
          else if (*(char *)(lVar10 + 0x30) == '\x01') {
            uVar17 = *(undefined8 *)(lVar10 + 0x20);
            iVar6 = *(int *)(lVar14 + 0x48);
          }
          else {
            uVar17 = FUN_0317a2cc();
            iVar6 = *(int *)(lVar14 + 0x48);
          }
          if (iVar6 != 0) {
            puVar15 = *(uint **)(lVar14 + 0x40);
            puVar2 = puVar15 + (long)iVar6 * 2;
            do {
              local_68[0] = *puVar15;
              uVar3 = puVar15[1];
              uVar7 = local_68[0] | iVar18 << 0x16;
              puVar9 = (undefined2 *)FUN_031a5298(uVar16,local_68);
              *puVar9 = 0xffff;
              *(uint *)(puVar9 + 2) = uVar3 | iVar19 << 0x16;
              *(undefined1 *)(puVar9 + 1) = 0x40;
              local_70[0] = puVar15[1];
              puVar9 = (undefined2 *)FUN_031a5298(uVar17,local_70);
              puVar15 = puVar15 + 2;
              *puVar9 = 0xffff;
              *(uint *)(puVar9 + 2) = uVar7;
              *(undefined1 *)(puVar9 + 1) = 0x40;
            } while (puVar15 != puVar2);
          }
        }
      }
      else if ((iVar18 != -1) && (*(int *)(lVar14 + 0x1c) == iVar5)) {
        iVar19 = iVar4;
        goto LAB_031841fc;
      }
      piVar13 = piVar13 + 2;
    } while (piVar13 != piVar1);
  }
  return;
}


