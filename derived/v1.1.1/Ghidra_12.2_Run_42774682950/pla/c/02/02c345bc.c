/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c345bc; name: FUN_02c345bc
 */


short * FUN_02c345bc(long param_1,long param_2,short *param_3,ulong param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  short sVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined2 uVar15;
  int iVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  
  sVar9 = *param_3;
  if ((sVar9 == 0x10) && (1 < (ushort)param_3[1])) {
    uVar26 = (ulong)(ushort)param_3[3];
  }
  else {
    uVar26 = 0;
  }
  if (*(uint *)(param_1 + 0x90) <= (uint)uVar26) goto LAB_02c359d0;
  if ((*(short *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18 + 0x10) != 0) &&
     (*(char *)(param_2 + 0x7c) != '\0')) {
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 0x10;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
      if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c34738;
    }
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 2;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
      if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c34738;
    }
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 0xbd07;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
      if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c34738;
    }
    sVar9 = *(short *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18 + 0x10);
    uVar1 = *(ushort *)(param_2 + 0x7a);
    uVar11 = (ulong)uVar1;
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(short *)(*(long *)(param_2 + 0x58) + uVar11 * 2) = sVar9;
      uVar11 = (ulong)*(ushort *)(param_2 + 0x7a);
    }
    else {
      if ((sVar9 != 0) || (uVar1 + 1 != (uint)*(ushort *)(param_2 + 0x78))) goto LAB_02c34738;
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
    }
    *(undefined2 *)(*(long *)(param_2 + 0x58) + uVar11 * 2) = 0;
  }
LAB_02c34738:
  if ((*param_3 != 0x10) || (*(char *)((long)param_3 + 5) != '\x02')) {
    if ((param_4 & 1) == 0) {
      *(uint *)(param_1 + 0x124) = (uint)uVar26;
      FUN_02c33414(param_1,*(undefined8 *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18));
      if ((*param_3 == 0x10) && ((param_3[2] & 0xff00U) == 0x100)) {
        uVar1 = param_3[2] & 0xff;
        if (uVar1 == 0xcd) {
          lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
          uVar1 = *(ushort *)(lVar25 + 0x78);
        }
        else {
          lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
          if (uVar1 != 0xce) goto LAB_02c349bc;
          uVar1 = *(ushort *)(lVar25 + 0x78);
        }
        if ((uVar1 != 0) && (*(char *)(lVar25 + 0x7c) != '\0')) {
          puVar13 = *(ushort **)(param_1 + 0xd8);
          iVar16 = 0;
          puVar19 = *(ushort **)(lVar25 + 0x58);
          uVar10 = (uint)uVar1;
          do {
            while( true ) {
              uVar2 = *puVar19;
              *puVar13 = uVar2;
              if (uVar2 == 0x10) break;
              if (uVar2 == 0) goto LAB_02c35458;
              puVar13 = puVar13 + 1;
              puVar19 = puVar19 + 1;
              iVar16 = iVar16 + 1;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_02c3536c;
            }
            uVar2 = puVar19[1];
            uVar20 = uVar2 + 2;
            bVar5 = uVar10 < uVar20;
            uVar10 = uVar10 - uVar20;
            if (bVar5 || uVar10 == 0) {
              *puVar13 = 0;
              goto LAB_02c35458;
            }
            uVar21 = uVar2 + 1;
            uVar24 = uVar21 & 7;
            puVar17 = puVar13 + 1;
            *puVar17 = uVar2;
            puVar18 = puVar19 + 1;
            puVar14 = puVar19;
            if (uVar24 != 0) {
              lVar25 = 0;
              do {
                lVar12 = lVar25;
                uVar21 = uVar21 - 1;
                uVar24 = uVar24 - 1;
                *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                     *(undefined2 *)((long)puVar19 + lVar12 + 4);
                lVar25 = lVar12 + 2;
              } while (uVar24 != 0);
              puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
              puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
              puVar18 = puVar14 + 1;
              puVar13 = puVar17;
            }
            puVar19 = puVar18;
            if (6 < uVar2) {
              puVar13 = puVar17;
              do {
                puVar13[1] = puVar14[2];
                puVar13[2] = puVar19[2];
                puVar13[3] = puVar19[3];
                puVar13[4] = puVar19[4];
                puVar13[5] = puVar19[5];
                puVar13[6] = puVar19[6];
                puVar14 = puVar19 + 7;
                puVar13[7] = *puVar14;
                puVar19 = puVar19 + 8;
                uVar21 = uVar21 - 8;
                puVar13 = puVar13 + 8;
                *puVar13 = *puVar19;
              } while (uVar21 != 0);
            }
            iVar16 = uVar20 + iVar16;
          } while (uVar10 != 0);
LAB_02c3536c:
          if (iVar16 != 0) {
            puVar13[-1] = 0;
          }
        }
LAB_02c35458:
        puVar7 = (undefined8 *)FUN_00d1603c();
        uVar8 = *puVar7;
        *(undefined8 *)PTR_DAT_0437b198 = uVar8;
        FUN_02c2d3fc(uVar8,*(undefined8 *)(param_1 + 0xd8),(uint)uVar1);
        lVar25 = *(long *)(param_1 + 0x80);
        if (*(char *)(lVar25 + 0x7c) != '\0') {
          uVar10 = (uint)*(ushort *)(lVar25 + 0x78);
          if (*(ushort *)(lVar25 + 0x78) == 0) {
            iVar16 = 0;
          }
          else {
            puVar19 = *(ushort **)(param_1 + 0xd8);
            iVar16 = 0;
            puVar13 = *(ushort **)(lVar25 + 0x58);
            do {
              while( true ) {
                uVar1 = *puVar19;
                *puVar13 = uVar1;
                if (uVar1 == 0x10) break;
                if (uVar1 == 0) goto LAB_02c355c4;
                puVar13 = puVar13 + 1;
                puVar19 = puVar19 + 1;
                iVar16 = iVar16 + 1;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_02c355a4;
              }
              uVar1 = puVar19[1];
              uVar20 = uVar1 + 2;
              bVar5 = uVar10 < uVar20;
              uVar10 = uVar10 - uVar20;
              if (bVar5 || uVar10 == 0) {
                *puVar13 = 0;
                goto LAB_02c355c4;
              }
              uVar21 = uVar1 + 1;
              uVar24 = uVar21 & 7;
              puVar17 = puVar13 + 1;
              *puVar17 = uVar1;
              puVar18 = puVar19 + 1;
              puVar14 = puVar19;
              if (uVar24 != 0) {
                lVar12 = 0;
                do {
                  lVar23 = lVar12;
                  uVar21 = uVar21 - 1;
                  uVar24 = uVar24 - 1;
                  *(undefined2 *)((long)puVar13 + lVar23 + 4) =
                       *(undefined2 *)((long)puVar19 + lVar23 + 4);
                  lVar12 = lVar23 + 2;
                } while (uVar24 != 0);
                puVar17 = (ushort *)((long)puVar13 + lVar23 + 4);
                puVar14 = (ushort *)((long)puVar19 + lVar23 + 2);
                puVar18 = puVar14 + 1;
                puVar13 = puVar17;
              }
              puVar19 = puVar18;
              if (6 < uVar1) {
                puVar13 = puVar17;
                do {
                  puVar13[1] = puVar14[2];
                  puVar13[2] = puVar19[2];
                  puVar13[3] = puVar19[3];
                  puVar13[4] = puVar19[4];
                  puVar13[5] = puVar19[5];
                  puVar13[6] = puVar19[6];
                  puVar14 = puVar19 + 7;
                  puVar13[7] = *puVar14;
                  puVar19 = puVar19 + 8;
                  uVar21 = uVar21 - 8;
                  puVar13 = puVar13 + 8;
                  *puVar13 = *puVar19;
                } while (uVar21 != 0);
              }
              iVar16 = uVar20 + iVar16;
            } while (uVar10 != 0);
LAB_02c355a4:
            if (iVar16 != 0) {
              iVar16 = iVar16 + -1;
              puVar13[-1] = 0;
            }
          }
LAB_02c355c4:
          *(short *)(lVar25 + 0x7a) = (short)iVar16;
          lVar25 = *(long *)(param_1 + 0x80);
        }
      }
      else {
        lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
      }
LAB_02c349bc:
      FUN_02c338a4(param_1,param_2,lVar25,1,param_5 & 1);
      goto LAB_02c35890;
    }
    if ((param_5 & 1) != 0) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
      puVar13 = *(ushort **)(param_1 + 0xd8);
      uVar10 = (uint)*(ushort *)(lVar25 + 0x78);
      if ((*(ushort *)(lVar25 + 0x78) != 0) && (*(char *)(lVar25 + 0x7c) != '\0')) {
        puVar17 = *(ushort **)(lVar25 + 0x58);
        iVar16 = 0;
        puVar19 = puVar13;
        do {
          while( true ) {
            uVar1 = *puVar17;
            *puVar19 = uVar1;
            if (uVar1 == 0x10) break;
            if (uVar1 == 0) goto LAB_02c350b4;
            puVar19 = puVar19 + 1;
            puVar17 = puVar17 + 1;
            iVar16 = iVar16 + 1;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_02c34de0;
          }
          uVar1 = puVar17[1];
          uVar20 = uVar1 + 2;
          bVar5 = uVar10 < uVar20;
          uVar10 = uVar10 - uVar20;
          if (bVar5 || uVar10 == 0) {
            *puVar19 = 0;
            goto LAB_02c350b4;
          }
          uVar21 = uVar1 + 1;
          uVar24 = uVar21 & 7;
          puVar14 = puVar19 + 1;
          *puVar14 = uVar1;
          puVar4 = puVar17 + 1;
          puVar18 = puVar17;
          if (uVar24 != 0) {
            lVar25 = 0;
            do {
              lVar12 = lVar25;
              uVar21 = uVar21 - 1;
              uVar24 = uVar24 - 1;
              *(undefined2 *)((long)puVar19 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar17 + lVar12 + 4);
              lVar25 = lVar12 + 2;
            } while (uVar24 != 0);
            puVar14 = (ushort *)((long)puVar19 + lVar12 + 4);
            puVar18 = (ushort *)((long)puVar17 + lVar12 + 2);
            puVar4 = puVar18 + 1;
            puVar19 = puVar14;
          }
          puVar17 = puVar4;
          if (6 < uVar1) {
            puVar19 = puVar14;
            do {
              puVar19[1] = puVar18[2];
              puVar19[2] = puVar17[2];
              puVar19[3] = puVar17[3];
              puVar19[4] = puVar17[4];
              puVar19[5] = puVar17[5];
              puVar19[6] = puVar17[6];
              puVar18 = puVar17 + 7;
              puVar19[7] = *puVar18;
              puVar17 = puVar17 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar17;
            } while (uVar21 != 0);
          }
          iVar16 = uVar20 + iVar16;
        } while (uVar10 != 0);
LAB_02c34de0:
        if (iVar16 != 0) {
          puVar19[-1] = 0;
        }
      }
LAB_02c350b4:
      do {
        uVar1 = *puVar13;
LAB_02c350d0:
        if (uVar1 == 0) goto LAB_02c350fc;
        if (uVar1 != 0x10) goto code_r0x02c350dc;
        puVar13 = puVar13 + (ulong)puVar13[1] + 2;
      } while( true );
    }
    if ((*param_3 == 0x10) && ((param_3[2] & 0xff00U) == 0x100)) {
      uVar1 = param_3[2] & 0xff;
      if (uVar1 == 0xcd) {
        lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
        uVar1 = *(ushort *)(lVar25 + 0x78);
      }
      else {
        lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
        if (uVar1 != 0xce) goto LAB_02c34b60;
        uVar1 = *(ushort *)(lVar25 + 0x78);
      }
      if ((uVar1 != 0) && (*(char *)(lVar25 + 0x7c) != '\0')) {
        puVar13 = *(ushort **)(param_1 + 0xd8);
        iVar16 = 0;
        puVar19 = *(ushort **)(lVar25 + 0x58);
        uVar10 = (uint)uVar1;
        do {
          while( true ) {
            uVar2 = *puVar19;
            *puVar13 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c355d4;
            puVar13 = puVar13 + 1;
            puVar19 = puVar19 + 1;
            iVar16 = iVar16 + 1;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_02c355b4;
          }
          uVar2 = puVar19[1];
          uVar20 = uVar2 + 2;
          bVar5 = uVar10 < uVar20;
          uVar10 = uVar10 - uVar20;
          if (bVar5 || uVar10 == 0) {
            *puVar13 = 0;
            goto LAB_02c355d4;
          }
          uVar21 = uVar2 + 1;
          uVar24 = uVar21 & 7;
          puVar17 = puVar13 + 1;
          *puVar17 = uVar2;
          puVar18 = puVar19 + 1;
          puVar14 = puVar19;
          if (uVar24 != 0) {
            lVar25 = 0;
            do {
              lVar12 = lVar25;
              uVar21 = uVar21 - 1;
              uVar24 = uVar24 - 1;
              *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar19 + lVar12 + 4);
              lVar25 = lVar12 + 2;
            } while (uVar24 != 0);
            puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
            puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
            puVar18 = puVar14 + 1;
            puVar13 = puVar17;
          }
          puVar19 = puVar18;
          if (6 < uVar2) {
            puVar13 = puVar17;
            do {
              puVar13[1] = puVar14[2];
              puVar13[2] = puVar19[2];
              puVar13[3] = puVar19[3];
              puVar13[4] = puVar19[4];
              puVar13[5] = puVar19[5];
              puVar13[6] = puVar19[6];
              puVar14 = puVar19 + 7;
              puVar13[7] = *puVar14;
              puVar19 = puVar19 + 8;
              uVar21 = uVar21 - 8;
              puVar13 = puVar13 + 8;
              *puVar13 = *puVar19;
            } while (uVar21 != 0);
          }
          iVar16 = uVar20 + iVar16;
        } while (uVar10 != 0);
LAB_02c355b4:
        if (iVar16 != 0) {
          puVar13[-1] = 0;
        }
      }
LAB_02c355d4:
      puVar7 = (undefined8 *)FUN_00d1603c();
      uVar8 = *puVar7;
      *(undefined8 *)PTR_DAT_0437b198 = uVar8;
      FUN_02c2d3fc(uVar8,*(undefined8 *)(param_1 + 0xd8),(uint)uVar1);
      lVar25 = *(long *)(param_1 + 0x80);
      if (*(char *)(lVar25 + 0x7c) != '\0') {
        uVar10 = (uint)*(ushort *)(lVar25 + 0x78);
        if (*(ushort *)(lVar25 + 0x78) == 0) {
          iVar16 = 0;
        }
        else {
          puVar19 = *(ushort **)(param_1 + 0xd8);
          iVar16 = 0;
          puVar13 = *(ushort **)(lVar25 + 0x58);
          do {
            while( true ) {
              uVar1 = *puVar19;
              *puVar13 = uVar1;
              if (uVar1 == 0x10) break;
              if (uVar1 == 0) goto LAB_02c35734;
              puVar13 = puVar13 + 1;
              puVar19 = puVar19 + 1;
              iVar16 = iVar16 + 1;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_02c35720;
            }
            uVar1 = puVar19[1];
            uVar20 = uVar1 + 2;
            bVar5 = uVar10 < uVar20;
            uVar10 = uVar10 - uVar20;
            if (bVar5 || uVar10 == 0) {
              *puVar13 = 0;
              goto LAB_02c35734;
            }
            uVar21 = uVar1 + 1;
            uVar24 = uVar21 & 7;
            puVar17 = puVar13 + 1;
            *puVar17 = uVar1;
            puVar18 = puVar19 + 1;
            puVar14 = puVar19;
            if (uVar24 != 0) {
              lVar12 = 0;
              do {
                lVar23 = lVar12;
                uVar21 = uVar21 - 1;
                uVar24 = uVar24 - 1;
                *(undefined2 *)((long)puVar13 + lVar23 + 4) =
                     *(undefined2 *)((long)puVar19 + lVar23 + 4);
                lVar12 = lVar23 + 2;
              } while (uVar24 != 0);
              puVar17 = (ushort *)((long)puVar13 + lVar23 + 4);
              puVar14 = (ushort *)((long)puVar19 + lVar23 + 2);
              puVar18 = puVar14 + 1;
              puVar13 = puVar17;
            }
            puVar19 = puVar18;
            if (6 < uVar1) {
              puVar13 = puVar17;
              do {
                puVar13[1] = puVar14[2];
                puVar13[2] = puVar19[2];
                puVar13[3] = puVar19[3];
                puVar13[4] = puVar19[4];
                puVar13[5] = puVar19[5];
                puVar13[6] = puVar19[6];
                puVar14 = puVar19 + 7;
                puVar13[7] = *puVar14;
                puVar19 = puVar19 + 8;
                uVar21 = uVar21 - 8;
                puVar13 = puVar13 + 8;
                *puVar13 = *puVar19;
              } while (uVar21 != 0);
            }
            iVar16 = uVar20 + iVar16;
          } while (uVar10 != 0);
LAB_02c35720:
          if (iVar16 != 0) {
            iVar16 = iVar16 + -1;
            puVar13[-1] = 0;
          }
        }
LAB_02c35734:
        *(short *)(lVar25 + 0x7a) = (short)iVar16;
        lVar25 = *(long *)(param_1 + 0x80);
      }
      if (*(char *)(param_2 + 0x7c) != '\0') {
        uVar10 = (uint)*(ushort *)(param_2 + 0x78) - (uint)*(ushort *)(param_2 + 0x7a);
        if (uVar10 != 0) {
          puVar19 = *(ushort **)(lVar25 + 0x58);
          iVar16 = 0;
          puVar13 = (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2);
          do {
            while( true ) {
              uVar1 = *puVar19;
              *puVar13 = uVar1;
              if (uVar1 == 0x10) break;
              if (uVar1 == 0) goto LAB_02c35884;
              puVar13 = puVar13 + 1;
              puVar19 = puVar19 + 1;
              iVar16 = iVar16 + 1;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_02c35870;
            }
            uVar1 = puVar19[1];
            uVar20 = uVar1 + 2;
            bVar5 = uVar10 < uVar20;
            uVar10 = uVar10 - uVar20;
            if (bVar5 || uVar10 == 0) goto LAB_02c35880;
            uVar21 = uVar1 + 1;
            uVar24 = uVar21 & 7;
            puVar17 = puVar13 + 1;
            *puVar17 = uVar1;
            puVar18 = puVar19 + 1;
            puVar14 = puVar19;
            if (uVar24 != 0) {
              lVar25 = 0;
              do {
                lVar12 = lVar25;
                uVar21 = uVar21 - 1;
                uVar24 = uVar24 - 1;
                *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                     *(undefined2 *)((long)puVar19 + lVar12 + 4);
                lVar25 = lVar12 + 2;
              } while (uVar24 != 0);
              puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
              puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
              puVar18 = puVar14 + 1;
              puVar13 = puVar17;
            }
            puVar19 = puVar18;
            if (6 < uVar1) {
              puVar13 = puVar17;
              do {
                puVar13[1] = puVar14[2];
                puVar13[2] = puVar19[2];
                puVar13[3] = puVar19[3];
                puVar13[4] = puVar19[4];
                puVar13[5] = puVar19[5];
                puVar13[6] = puVar19[6];
                puVar14 = puVar19 + 7;
                puVar13[7] = *puVar14;
                puVar19 = puVar19 + 8;
                uVar21 = uVar21 - 8;
                puVar13 = puVar13 + 8;
                *puVar13 = *puVar19;
              } while (uVar21 != 0);
            }
            iVar16 = uVar20 + iVar16;
          } while (uVar10 != 0);
          goto LAB_02c35870;
        }
        goto LAB_02c35868;
      }
    }
    else {
      lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
LAB_02c34b60:
      if (*(char *)(param_2 + 0x7c) != '\0') {
        uVar10 = (uint)*(ushort *)(param_2 + 0x78) - (uint)*(ushort *)(param_2 + 0x7a);
        if (uVar10 == 0) goto LAB_02c34c8c;
        puVar13 = (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2);
        puVar19 = *(ushort **)(lVar25 + 0x58);
        iVar16 = 0;
        do {
          while( true ) {
            uVar1 = *puVar19;
            *puVar13 = uVar1;
            if (uVar1 == 0x10) break;
            if (uVar1 == 0) goto LAB_02c34f58;
            puVar13 = puVar13 + 1;
            puVar19 = puVar19 + 1;
            iVar16 = iVar16 + 1;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_02c34c94;
          }
          uVar1 = puVar19[1];
          uVar20 = uVar1 + 2;
          bVar5 = uVar10 < uVar20;
          uVar10 = uVar10 - uVar20;
          if (bVar5 || uVar10 == 0) goto LAB_02c34f54;
          uVar21 = uVar1 + 1;
          uVar24 = uVar21 & 7;
          puVar17 = puVar13 + 1;
          *puVar17 = uVar1;
          puVar18 = puVar19 + 1;
          puVar14 = puVar19;
          if (uVar24 != 0) {
            lVar25 = 0;
            do {
              lVar12 = lVar25;
              uVar21 = uVar21 - 1;
              uVar24 = uVar24 - 1;
              *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar19 + lVar12 + 4);
              lVar25 = lVar12 + 2;
            } while (uVar24 != 0);
            puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
            puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
            puVar18 = puVar14 + 1;
            puVar13 = puVar17;
          }
          puVar19 = puVar18;
          if (6 < uVar1) {
            puVar13 = puVar17;
            do {
              puVar13[1] = puVar14[2];
              puVar13[2] = puVar19[2];
              puVar13[3] = puVar19[3];
              puVar13[4] = puVar19[4];
              puVar13[5] = puVar19[5];
              puVar13[6] = puVar19[6];
              puVar14 = puVar19 + 7;
              puVar13[7] = *puVar14;
              puVar19 = puVar19 + 8;
              uVar21 = uVar21 - 8;
              puVar13 = puVar13 + 8;
              *puVar13 = *puVar19;
            } while (uVar21 != 0);
          }
          iVar16 = uVar20 + iVar16;
        } while (uVar10 != 0);
        goto LAB_02c34c94;
      }
    }
    goto LAB_02c35890;
  }
  if (((ushort)param_3[1] < 3) || ((ushort)param_3[1] - 1 < 2)) {
    lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
  }
  else {
    sVar9 = param_3[4];
    lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
    if ((sVar9 != 0) && (*(short *)(lVar25 + 0x7a) != 0)) {
      plVar6 = (long *)FUN_00d1603c();
      lVar12 = *plVar6;
      *(long *)PTR_DAT_0437b198 = lVar12;
      puVar13 = *(ushort **)(lVar25 + 0x58);
      puVar19 = puVar13 + -1;
      do {
        puVar19 = puVar19 + 1;
        if (*puVar19 == 0) break;
      } while (9 < (ushort)(*puVar19 - 0x30));
      lVar23 = 4;
      if (*(int *)(lVar12 + 0x238) == 6) {
        lVar23 = 5;
      }
      uVar1 = *(ushort *)(lVar25 + 0x7a);
      uVar11 = (long)puVar19 - (long)puVar13 >> 1;
      lVar25 = uVar1 - uVar11;
      if (lVar25 < lVar23) {
        if (*(char *)(param_2 + 0x7c) != '\0') {
          uVar10 = (uint)*(ushort *)(param_2 + 0x78) - (uint)*(ushort *)(param_2 + 0x7a);
          if (uVar10 == 0) goto LAB_02c35868;
          puVar19 = (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2);
          iVar16 = 0;
          do {
            while( true ) {
              uVar1 = *puVar13;
              *puVar19 = uVar1;
              if (uVar1 == 0x10) break;
              if (uVar1 == 0) goto LAB_02c35884;
              puVar19 = puVar19 + 1;
              puVar13 = puVar13 + 1;
              iVar16 = iVar16 + 1;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_02c359fc;
            }
            uVar1 = puVar13[1];
            uVar20 = uVar1 + 2;
            bVar5 = uVar10 < uVar20;
            uVar10 = uVar10 - uVar20;
            if (bVar5 || uVar10 == 0) {
              *puVar19 = 0;
              goto LAB_02c35884;
            }
            uVar21 = uVar1 + 1;
            uVar24 = uVar21 & 7;
            puVar17 = puVar19 + 1;
            *puVar17 = uVar1;
            puVar18 = puVar13 + 1;
            puVar14 = puVar13;
            if (uVar24 != 0) {
              lVar25 = 0;
              do {
                lVar12 = lVar25;
                uVar21 = uVar21 - 1;
                uVar24 = uVar24 - 1;
                *(undefined2 *)((long)puVar19 + lVar12 + 4) =
                     *(undefined2 *)((long)puVar13 + lVar12 + 4);
                lVar25 = lVar12 + 2;
              } while (uVar24 != 0);
              puVar17 = (ushort *)((long)puVar19 + lVar12 + 4);
              puVar14 = (ushort *)((long)puVar13 + lVar12 + 2);
              puVar18 = puVar14 + 1;
              puVar19 = puVar17;
            }
            puVar13 = puVar18;
            if (6 < uVar1) {
              puVar19 = puVar17;
              do {
                puVar19[1] = puVar14[2];
                puVar19[2] = puVar13[2];
                puVar19[3] = puVar13[3];
                puVar19[4] = puVar13[4];
                puVar19[5] = puVar13[5];
                puVar19[6] = puVar13[6];
                puVar14 = puVar13 + 7;
                puVar19[7] = *puVar14;
                puVar13 = puVar13 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar13;
              } while (uVar21 != 0);
            }
            iVar16 = uVar20 + iVar16;
          } while (uVar10 != 0);
LAB_02c359fc:
          if (iVar16 != 0) {
            iVar16 = iVar16 + -1;
            puVar19[-1] = 0;
          }
          goto LAB_02c35884;
        }
      }
      else {
        for (; puVar13 < puVar19; puVar13 = puVar13 + 1) {
          uVar2 = *puVar13;
          if (uVar2 == 0x10) goto LAB_02c35890;
          if (*(char *)(param_2 + 0x7c) != '\0') {
            uVar3 = *(ushort *)(param_2 + 0x7a);
            uVar22 = (ulong)uVar3;
            if (uVar3 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
              *(ushort *)(param_2 + 0x7a) = uVar3 + 1;
              *(ushort *)(*(long *)(param_2 + 0x58) + uVar22 * 2) = uVar2;
              uVar22 = (ulong)*(ushort *)(param_2 + 0x7a);
            }
            else {
              if ((uVar2 != 0) || (uVar3 + 1 != (uint)*(ushort *)(param_2 + 0x78)))
              goto LAB_02c34e08;
              *(ushort *)(param_2 + 0x7a) = uVar3 + 1;
            }
            *(undefined2 *)(*(long *)(param_2 + 0x58) + uVar22 * 2) = 0;
          }
LAB_02c34e08:
        }
        if (0 < lVar25) {
          uVar11 = ~uVar11 + (ulong)uVar1;
          do {
            uVar1 = *puVar13;
            if (uVar1 == 0x10) break;
            if (*(char *)(param_2 + 0x7c) != '\0') {
              uVar2 = *(ushort *)(param_2 + 0x7a);
              uVar22 = (ulong)uVar2;
              if (uVar2 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
                *(ushort *)(param_2 + 0x7a) = uVar2 + 1;
                *(ushort *)(*(long *)(param_2 + 0x58) + uVar22 * 2) = uVar1;
                uVar22 = (ulong)*(ushort *)(param_2 + 0x7a);
              }
              else {
                if ((uVar1 != 0) || (uVar2 + 1 != (uint)*(ushort *)(param_2 + 0x78)))
                goto LAB_02c353fc;
                *(ushort *)(param_2 + 0x7a) = uVar2 + 1;
              }
              *(undefined2 *)(*(long *)(param_2 + 0x58) + uVar22 * 2) = 0;
            }
LAB_02c353fc:
            puVar13 = puVar13 + 1;
            if (((uVar11 != 0) && ((uVar11 / 3) * 3 == uVar11)) &&
               (*(char *)(param_2 + 0x7c) != '\0')) {
              uVar1 = *(ushort *)(param_2 + 0x7a);
              if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
                *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
                *(short *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = sVar9;
                *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2)
                     = 0;
              }
            }
            bVar5 = 0 < (long)uVar11;
            uVar11 = uVar11 - 1;
          } while (bVar5);
        }
      }
      goto LAB_02c35890;
    }
  }
  if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c35890;
  uVar10 = (uint)*(ushort *)(param_2 + 0x78) - (uint)*(ushort *)(param_2 + 0x7a);
  if (uVar10 == 0) {
LAB_02c34c8c:
    iVar16 = 0;
  }
  else {
    puVar13 = (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2);
    puVar19 = *(ushort **)(lVar25 + 0x58);
    iVar16 = 0;
    do {
      while( true ) {
        uVar1 = *puVar19;
        *puVar13 = uVar1;
        if (uVar1 == 0x10) break;
        if (uVar1 == 0) goto LAB_02c34f58;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
        iVar16 = iVar16 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c34c94;
      }
      uVar1 = puVar19[1];
      uVar20 = uVar1 + 2;
      bVar5 = uVar10 < uVar20;
      uVar10 = uVar10 - uVar20;
      if (bVar5 || uVar10 == 0) goto LAB_02c34f54;
      uVar21 = uVar1 + 1;
      uVar24 = uVar21 & 7;
      puVar17 = puVar13 + 1;
      *puVar17 = uVar1;
      puVar18 = puVar19 + 1;
      puVar14 = puVar19;
      if (uVar24 != 0) {
        lVar25 = 0;
        do {
          lVar12 = lVar25;
          uVar21 = uVar21 - 1;
          uVar24 = uVar24 - 1;
          *(undefined2 *)((long)puVar13 + lVar12 + 4) = *(undefined2 *)((long)puVar19 + lVar12 + 4);
          lVar25 = lVar12 + 2;
        } while (uVar24 != 0);
        puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
        puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
        puVar18 = puVar14 + 1;
        puVar13 = puVar17;
      }
      puVar19 = puVar18;
      if (6 < uVar1) {
        puVar13 = puVar17;
        do {
          puVar13[1] = puVar14[2];
          puVar13[2] = puVar19[2];
          puVar13[3] = puVar19[3];
          puVar13[4] = puVar19[4];
          puVar13[5] = puVar19[5];
          puVar13[6] = puVar19[6];
          puVar14 = puVar19 + 7;
          puVar13[7] = *puVar14;
          puVar19 = puVar19 + 8;
          uVar21 = uVar21 - 8;
          puVar13 = puVar13 + 8;
          *puVar13 = *puVar19;
        } while (uVar21 != 0);
      }
      iVar16 = uVar20 + iVar16;
    } while (uVar10 != 0);
LAB_02c34c94:
    if (iVar16 != 0) {
      iVar16 = iVar16 + -1;
      puVar13[-1] = 0;
    }
  }
LAB_02c34f58:
  sVar9 = *(short *)(param_2 + 0x7a) + (short)iVar16;
LAB_02c3588c:
  *(short *)(param_2 + 0x7a) = sVar9;
LAB_02c35890:
  lVar25 = *(long *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18);
  uVar11 = (ulong)*(ushort *)(lVar25 + 0x7a);
  if (uVar11 == 0) {
    uVar15 = 0;
  }
  else {
    puVar13 = *(ushort **)(lVar25 + 0x58);
    puVar19 = puVar13 + uVar11;
    uVar10 = 0;
    do {
      while( true ) {
        uVar15 = (undefined2)uVar10;
        uVar20 = (uint)*puVar13;
        if (uVar20 == 0x10) break;
        puVar13 = puVar13 + 1;
        if (9 < uVar20 - 0x11 && uVar20 != 0x1b) {
          uVar10 = uVar20;
        }
        uVar15 = (undefined2)uVar10;
        if (puVar19 <= puVar13) goto LAB_02c358fc;
      }
      puVar13 = puVar13 + (ulong)puVar13[1] + 2;
    } while (puVar13 < puVar19);
  }
LAB_02c358fc:
  *(undefined2 *)(param_1 + 0x128) = uVar15;
  if ((*(short *)(*(long *)(param_1 + 0x98) + uVar26 * 0x18 + 0x10) != 0) &&
     (*(char *)(param_2 + 0x7c) != '\0')) {
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 0x10;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
      if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c359c4;
    }
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
      if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c359c4;
    }
    uVar1 = *(ushort *)(param_2 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x78)) {
      *(ushort *)(param_2 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)uVar1 * 2) = 0xbd09;
      *(undefined2 *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2) = 0;
    }
  }
LAB_02c359c4:
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  sVar9 = *param_3;
LAB_02c359d0:
  if (sVar9 == 0x10) {
    param_3 = param_3 + (ulong)(ushort)param_3[1] + 2;
  }
  return param_3;
code_r0x02c350dc:
  if (uVar1 != 0x1b && 9 < uVar1 - 0x11) {
    puVar7 = (undefined8 *)FUN_00d1603c();
    uVar8 = *puVar7;
    *(undefined8 *)PTR_DAT_0437b198 = uVar8;
    FUN_02c2d3b0(uVar8,puVar13);
LAB_02c350fc:
    lVar25 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar25 + 0x7c) == '\0') goto LAB_02c35240;
    uVar10 = (uint)*(ushort *)(lVar25 + 0x78);
    if (*(ushort *)(lVar25 + 0x78) != 0) {
      puVar19 = *(ushort **)(lVar25 + 0x58);
      iVar16 = 0;
      goto LAB_02c35128;
    }
    iVar16 = 0;
    goto LAB_02c35238;
  }
  goto LAB_02c350d0;
LAB_02c35128:
  do {
    uVar1 = *puVar13;
    *puVar19 = uVar1;
    if (uVar1 == 0x10) {
      puVar17 = puVar13 + 1;
      uVar1 = *puVar17;
      uVar20 = uVar1 + 2;
      bVar5 = uVar10 < uVar20;
      uVar10 = uVar10 - uVar20;
      if (bVar5 || uVar10 == 0) {
        *puVar19 = 0;
        goto LAB_02c35238;
      }
      uVar21 = uVar1 + 1;
      uVar24 = uVar21 & 7;
      puVar14 = puVar19 + 1;
      *puVar14 = uVar1;
      if (uVar24 != 0) {
        lVar12 = 0;
        do {
          lVar23 = lVar12;
          uVar21 = uVar21 - 1;
          uVar24 = uVar24 - 1;
          *(undefined2 *)((long)puVar19 + lVar23 + 4) = *(undefined2 *)((long)puVar13 + lVar23 + 4);
          lVar12 = lVar23 + 2;
        } while (uVar24 != 0);
        puVar14 = (ushort *)((long)puVar19 + lVar23 + 4);
        puVar13 = (ushort *)((long)puVar13 + lVar23 + 2);
        puVar17 = puVar13 + 1;
        puVar19 = puVar14;
      }
      if (6 < uVar1) {
        puVar19 = puVar14;
        do {
          puVar19[1] = puVar13[2];
          puVar19[2] = puVar17[2];
          puVar19[3] = puVar17[3];
          puVar19[4] = puVar17[4];
          puVar19[5] = puVar17[5];
          puVar19[6] = puVar17[6];
          puVar13 = puVar17 + 7;
          puVar19[7] = *puVar13;
          puVar17 = puVar17 + 8;
          uVar21 = uVar21 - 8;
          puVar19 = puVar19 + 8;
          *puVar19 = *puVar17;
        } while (uVar21 != 0);
      }
      iVar16 = uVar20 + iVar16;
      puVar13 = puVar17;
    }
    else {
      if (uVar1 == 0) goto LAB_02c35238;
      puVar19 = puVar19 + 1;
      puVar13 = puVar13 + 1;
      iVar16 = iVar16 + 1;
      uVar10 = uVar10 - 1;
    }
  } while (uVar10 != 0);
  if (iVar16 != 0) {
    iVar16 = iVar16 + -1;
    puVar19[-1] = 0;
  }
LAB_02c35238:
  *(short *)(lVar25 + 0x7a) = (short)iVar16;
  lVar25 = *(long *)(param_1 + 0x68);
LAB_02c35240:
  if (*(char *)(param_2 + 0x7c) != '\0') {
    uVar10 = (uint)*(ushort *)(param_2 + 0x78) - (uint)*(ushort *)(param_2 + 0x7a);
    if (uVar10 == 0) {
LAB_02c35868:
      iVar16 = 0;
    }
    else {
      puVar19 = *(ushort **)(lVar25 + 0x58);
      iVar16 = 0;
      puVar13 = (ushort *)(*(long *)(param_2 + 0x58) + (ulong)*(ushort *)(param_2 + 0x7a) * 2);
      do {
        while( true ) {
          uVar1 = *puVar19;
          *puVar13 = uVar1;
          if (uVar1 == 0x10) break;
          if (uVar1 == 0) goto LAB_02c35884;
          puVar13 = puVar13 + 1;
          puVar19 = puVar19 + 1;
          iVar16 = iVar16 + 1;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02c35870;
        }
        uVar1 = puVar19[1];
        uVar20 = uVar1 + 2;
        bVar5 = uVar10 < uVar20;
        uVar10 = uVar10 - uVar20;
        if (bVar5 || uVar10 == 0) goto LAB_02c35880;
        uVar21 = uVar1 + 1;
        uVar24 = uVar21 & 7;
        puVar17 = puVar13 + 1;
        *puVar17 = uVar1;
        puVar18 = puVar19 + 1;
        puVar14 = puVar19;
        if (uVar24 != 0) {
          lVar25 = 0;
          do {
            lVar12 = lVar25;
            uVar21 = uVar21 - 1;
            uVar24 = uVar24 - 1;
            *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                 *(undefined2 *)((long)puVar19 + lVar12 + 4);
            lVar25 = lVar12 + 2;
          } while (uVar24 != 0);
          puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
          puVar14 = (ushort *)((long)puVar19 + lVar12 + 2);
          puVar18 = puVar14 + 1;
          puVar13 = puVar17;
        }
        puVar19 = puVar18;
        if (6 < uVar1) {
          puVar13 = puVar17;
          do {
            puVar13[1] = puVar14[2];
            puVar13[2] = puVar19[2];
            puVar13[3] = puVar19[3];
            puVar13[4] = puVar19[4];
            puVar13[5] = puVar19[5];
            puVar13[6] = puVar19[6];
            puVar14 = puVar19 + 7;
            puVar13[7] = *puVar14;
            puVar19 = puVar19 + 8;
            uVar21 = uVar21 - 8;
            puVar13 = puVar13 + 8;
            *puVar13 = *puVar19;
          } while (uVar21 != 0);
        }
        iVar16 = uVar20 + iVar16;
      } while (uVar10 != 0);
LAB_02c35870:
      if (iVar16 != 0) {
        iVar16 = iVar16 + -1;
        puVar13[-1] = 0;
      }
    }
    goto LAB_02c35884;
  }
  goto LAB_02c35890;
LAB_02c35880:
  *puVar13 = 0;
LAB_02c35884:
  sVar9 = *(short *)(param_2 + 0x7a) + (short)iVar16;
  goto LAB_02c3588c;
LAB_02c34f54:
  *puVar13 = 0;
  goto LAB_02c34f58;
}


