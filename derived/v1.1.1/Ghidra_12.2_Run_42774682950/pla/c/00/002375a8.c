/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002375a8; name: FUN_002375a8
 */


/* WARNING: Removing unreachable block (ram,0x0023774c) */

void FUN_002375a8(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  ushort uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ushort *puVar21;
  long lVar22;
  uint *puVar23;
  ushort *puVar24;
  
  if (*(short *)(param_3 + 0x7a) != 0) {
    uVar19 = 0;
    plVar1 = (long *)(param_2 + 0x70);
    do {
      lVar22 = *(long *)(param_3 + 0x70);
      plVar9 = (long *)(**(code **)PTR_DAT_04372ba8)(0x40,4,*(undefined8 *)PTR_DAT_04372bb8);
      if (plVar9 != (long *)0x0) {
        *plVar9 = (long)plVar9;
        plVar9[1] = (long)plVar9;
        plVar9[4] = 0;
        *(undefined4 *)((long)plVar9 + 0x27) = 0;
        plVar9[2] = 0;
        plVar9[3] = 0;
        plVar9[6] = 0;
        plVar9[7] = 0;
      }
      lVar11 = lVar22 + uVar19 * 0xa0;
      FUN_0023839c(plVar9,lVar11 + 0x18,lVar11 + 0x38,lVar11 + 0x58,
                   *(char *)(lVar11 + 0x10) == '\x01',*(char *)(lVar11 + 0x11) == '\x01',
                   *(char *)(lVar11 + 0x13) == '\x01');
      puVar10 = (undefined8 *)(**(code **)PTR_DAT_04372ba8)(0x10,4,*(undefined8 *)PTR_DAT_04372bb8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
      }
      lVar11 = lVar22 + uVar19 * 0xa0;
      plVar9[7] = (long)puVar10;
      *(undefined4 *)puVar10 = *(undefined4 *)(lVar11 + 8);
      puVar21 = (ushort *)(lVar11 + 0x80);
      uVar8 = *puVar21;
      uVar18 = (ulong)uVar8;
      *(uint *)((long)puVar10 + 4) = (uint)uVar8;
      lVar11 = (**(code **)PTR_DAT_04372ba8)(uVar18 << 5,4,*(undefined8 *)PTR_DAT_04372bb8);
      if ((lVar11 != 0) && (uVar8 != 0)) {
        if (uVar8 == 1) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          puVar15 = (undefined8 *)(lVar11 + 0x20);
          do {
            lVar13 = lVar13 + 2;
            *(undefined8 *)((long)puVar15 + -0x14) = 0;
            puVar15[-4] = 0;
            *(undefined1 *)(puVar15 + -3) = 0;
            *(undefined8 *)((long)puVar15 + 0xc) = 0;
            *(undefined1 *)(puVar15 + 1) = 0;
            puVar15[3] = 0;
            puVar15[-1] = 0;
            *puVar15 = 0;
            puVar15 = puVar15 + 8;
          } while (uVar18 - (uVar18 & 1) != lVar13);
          if ((uVar8 & 1) == 0) goto LAB_002377a0;
        }
        puVar15 = (undefined8 *)(lVar11 + lVar13 * 0x20);
        *(undefined8 *)((long)puVar15 + 0xc) = 0;
        *puVar15 = 0;
        *(undefined1 *)(puVar15 + 1) = 0;
        puVar15[3] = 0;
      }
LAB_002377a0:
      puVar10[1] = lVar11;
      if (*puVar21 != 0) {
        uVar18 = 0;
        do {
          lVar13 = *(long *)(lVar22 + uVar19 * 0xa0 + 0x78) + uVar18 * 0x40;
          uVar6 = *(undefined1 *)(lVar13 + 0x2c);
          uVar4 = *(undefined4 *)(lVar13 + 0x24);
          uVar5 = *(undefined4 *)(lVar13 + 0x28);
          puVar2 = (undefined4 *)(lVar11 + uVar18 * 0x20);
          *puVar2 = *(undefined4 *)(lVar13 + 0x20);
          puVar2[1] = uVar4;
          *(undefined1 *)(puVar2 + 2) = uVar6;
          puVar2[3] = uVar5;
          puVar24 = (ushort *)(lVar13 + 0x38);
          uVar8 = *puVar24;
          uVar20 = (ulong)uVar8;
          puVar23 = puVar2 + 4;
          *puVar23 = (uint)uVar8;
          lVar11 = (**(code **)PTR_DAT_04372ba8)(uVar20 * 0x38,4,*(undefined8 *)PTR_DAT_04372bb8);
          if ((lVar11 != 0) && (uVar8 != 0)) {
            uVar12 = uVar20 & 3;
            if (uVar20 - 1 < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              puVar16 = (undefined1 *)(lVar11 + 0xd8);
              do {
                lVar14 = lVar14 + 4;
                *(undefined4 *)(puVar16 + -0xcc) = 0;
                *(undefined8 *)(puVar16 + -0xd8) = 0;
                puVar16[-0xd0] = 0;
                puVar16[-0xa8] = 0;
                *(undefined4 *)(puVar16 + -0x94) = 0;
                *(undefined8 *)(puVar16 + -0xa0) = 0;
                puVar16[-0x98] = 0;
                puVar16[-0x70] = 0;
                *(undefined4 *)(puVar16 + -0x5c) = 0;
                *(undefined8 *)(puVar16 + -0x68) = 0;
                puVar16[-0x60] = 0;
                puVar16[-0x38] = 0;
                *(undefined4 *)(puVar16 + -0x24) = 0;
                *(undefined8 *)(puVar16 + -0x30) = 0;
                puVar16[-0x28] = 0;
                *puVar16 = 0;
                puVar16 = puVar16 + 0xe0;
              } while (uVar20 - uVar12 != lVar14);
            }
            if ((uVar8 & 3) != 0) {
              puVar15 = (undefined8 *)(lVar11 + lVar14 * 0x38);
              do {
                *(undefined4 *)((long)puVar15 + 0xc) = 0;
                uVar12 = uVar12 - 1;
                *puVar15 = 0;
                *(undefined1 *)(puVar15 + 1) = 0;
                *(undefined1 *)(puVar15 + 6) = 0;
                puVar15 = puVar15 + 7;
              } while (uVar12 != 0);
            }
          }
          *(long *)(puVar2 + 6) = lVar11;
          if (*puVar24 != 0) {
            lVar14 = 0;
            lVar11 = 0;
            uVar20 = 0;
            if (0 < (int)*puVar23) goto LAB_00237930;
            do {
              puVar17 = (undefined4 *)0x0;
              while( true ) {
                puVar3 = (undefined4 *)(*(long *)(lVar13 + 0x30) + lVar11);
                *puVar17 = *puVar3;
                puVar17[1] = 0x3f800000;
                *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(puVar3 + 2);
                puVar17[3] = puVar3[1];
                cVar7 = *(char *)(puVar3 + 0x12);
                *(bool *)(puVar17 + 0xc) = cVar7 != '\0';
                if (cVar7 == '\0') {
                  puVar17[4] = puVar3[0xc];
                  puVar17[5] = puVar3[0xd];
                  puVar17[6] = puVar3[0xe];
                  puVar17[7] = puVar3[0xf];
                }
                else {
                  puVar17[4] = puVar3[0x11];
                  puVar17[5] = (uint)*(byte *)(puVar3 + 0x12);
                  *(undefined4 **)(puVar17 + 6) = puVar3 + 0x13;
                  *(undefined4 **)(puVar17 + 8) = puVar3 + 0x1b;
                  *(undefined4 **)(puVar17 + 10) = puVar3 + 0x23;
                }
                uVar20 = uVar20 + 1;
                lVar11 = lVar11 + 0xac;
                lVar14 = lVar14 + 0x38;
                if (*puVar24 <= uVar20) goto LAB_0023799c;
                if ((long)(int)*puVar23 <= (long)uVar20) break;
LAB_00237930:
                puVar17 = (undefined4 *)(*(long *)(puVar2 + 6) + lVar14);
              }
            } while( true );
          }
LAB_0023799c:
          uVar18 = uVar18 + 1;
          if (*puVar21 <= uVar18) break;
          lVar11 = puVar10[1];
        } while( true );
      }
      lVar11 = *plVar9;
      *plVar9 = *plVar1;
      *(long **)(lVar11 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar9;
      *plVar1 = lVar11;
      FUN_00238ad8(param_1,plVar9,param_3,lVar22 + uVar19 * 0xa0);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ushort *)(param_3 + 0x7a));
  }
  return;
}


