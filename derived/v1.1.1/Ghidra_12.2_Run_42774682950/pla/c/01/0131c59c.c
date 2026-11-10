/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131c59c; name: FUN_0131c59c
 */


void FUN_0131c59c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  lVar6 = *(long *)(param_1 + 4);
  if (lVar6 != 0) {
    if (*(long *)(param_2 + 4) == 0) {
      if (*(char *)(lVar6 + 0x7c) != '\0') {
        **(undefined2 **)(lVar6 + 0x58) = 0;
LAB_0131c6e8:
        *(undefined2 *)(lVar6 + 0x7a) = 0;
        lVar6 = *(long *)(param_1 + 6);
        goto joined_r0x0131c70c;
      }
    }
    else if (*(char *)(lVar6 + 0x7c) != '\0') {
      uVar9 = (uint)*(ushort *)(lVar6 + 0x78);
      if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_0131c6e8;
      puVar11 = *(ushort **)(*(long *)(param_2 + 4) + 0x58);
      iVar7 = 0;
      puVar10 = *(ushort **)(lVar6 + 0x58);
      do {
        while( true ) {
          uVar2 = *puVar11;
          *puVar10 = uVar2;
          iVar8 = iVar7;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_0131c718;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0131c6f8;
        }
        uVar2 = puVar11[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar5 || uVar9 == 0) {
          *puVar10 = 0;
          goto LAB_0131c718;
        }
        uVar13 = uVar2 + 1;
        uVar16 = uVar13 & 7;
        puVar15 = puVar10 + 1;
        *puVar15 = uVar2;
        puVar4 = puVar11 + 1;
        puVar12 = puVar11;
        if (uVar16 != 0) {
          lVar3 = 0;
          do {
            lVar14 = lVar3;
            uVar13 = uVar13 - 1;
            uVar16 = uVar16 - 1;
            *(undefined2 *)((long)puVar10 + lVar14 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar14 + 4);
            lVar3 = lVar14 + 2;
          } while (uVar16 != 0);
          puVar15 = (ushort *)((long)puVar10 + lVar14 + 4);
          puVar12 = (ushort *)((long)puVar11 + lVar14 + 2);
          puVar4 = puVar12 + 1;
          puVar10 = puVar15;
        }
        puVar11 = puVar4;
        if (6 < uVar2) {
          puVar10 = puVar15;
          do {
            puVar10[1] = puVar12[2];
            puVar10[2] = puVar11[2];
            puVar10[3] = puVar11[3];
            puVar10[4] = puVar11[4];
            puVar10[5] = puVar11[5];
            puVar10[6] = puVar11[6];
            puVar12 = puVar11 + 7;
            puVar10[7] = *puVar12;
            puVar11 = puVar11 + 8;
            uVar13 = uVar13 - 8;
            puVar10 = puVar10 + 8;
            *puVar10 = *puVar11;
          } while (uVar13 != 0);
        }
        iVar7 = uVar1 + iVar7;
      } while (uVar9 != 0);
LAB_0131c6f8:
      iVar8 = 0;
      if (iVar7 != 0) {
        puVar10[-1] = 0;
        *(short *)(lVar6 + 0x7a) = (short)iVar7 + -1;
        lVar6 = *(long *)(param_1 + 6);
        goto joined_r0x0131c70c;
      }
LAB_0131c718:
      *(short *)(lVar6 + 0x7a) = (short)iVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 6);
joined_r0x0131c70c:
  if (lVar6 != 0) {
    if (*(long *)(param_2 + 6) == 0) {
      if (*(char *)(lVar6 + 0x7c) != '\0') {
        **(undefined2 **)(lVar6 + 0x58) = 0;
        *(undefined2 *)(lVar6 + 0x7a) = 0;
      }
    }
    else if (*(char *)(lVar6 + 0x7c) != '\0') {
      uVar9 = (uint)*(ushort *)(lVar6 + 0x78);
      if (*(ushort *)(lVar6 + 0x78) == 0) {
        *(undefined2 *)(lVar6 + 0x7a) = 0;
      }
      else {
        puVar11 = *(ushort **)(*(long *)(param_2 + 6) + 0x58);
        iVar7 = 0;
        puVar10 = *(ushort **)(lVar6 + 0x58);
        do {
          while( true ) {
            uVar2 = *puVar11;
            *puVar10 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_0131c864;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            iVar7 = iVar7 + 1;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_0131c858;
          }
          uVar2 = puVar11[1];
          uVar1 = uVar2 + 2;
          bVar5 = uVar9 < uVar1;
          uVar9 = uVar9 - uVar1;
          if (bVar5 || uVar9 == 0) {
            *puVar10 = 0;
            goto LAB_0131c864;
          }
          uVar13 = uVar2 + 1;
          uVar16 = uVar13 & 7;
          puVar15 = puVar10 + 1;
          *puVar15 = uVar2;
          puVar4 = puVar11 + 1;
          puVar12 = puVar11;
          if (uVar16 != 0) {
            lVar3 = 0;
            do {
              lVar14 = lVar3;
              uVar13 = uVar13 - 1;
              uVar16 = uVar16 - 1;
              *(undefined2 *)((long)puVar10 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar11 + lVar14 + 4);
              lVar3 = lVar14 + 2;
            } while (uVar16 != 0);
            puVar15 = (ushort *)((long)puVar10 + lVar14 + 4);
            puVar12 = (ushort *)((long)puVar11 + lVar14 + 2);
            puVar4 = puVar12 + 1;
            puVar10 = puVar15;
          }
          puVar11 = puVar4;
          if (6 < uVar2) {
            puVar10 = puVar15;
            do {
              puVar10[1] = puVar12[2];
              puVar10[2] = puVar11[2];
              puVar10[3] = puVar11[3];
              puVar10[4] = puVar11[4];
              puVar10[5] = puVar11[5];
              puVar10[6] = puVar11[6];
              puVar12 = puVar11 + 7;
              puVar10[7] = *puVar12;
              puVar11 = puVar11 + 8;
              uVar13 = uVar13 - 8;
              puVar10 = puVar10 + 8;
              *puVar10 = *puVar11;
            } while (uVar13 != 0);
          }
          iVar7 = uVar1 + iVar7;
        } while (uVar9 != 0);
LAB_0131c858:
        if (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          puVar10[-1] = 0;
        }
LAB_0131c864:
        *(short *)(lVar6 + 0x7a) = (short)iVar7;
      }
    }
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return;
}


