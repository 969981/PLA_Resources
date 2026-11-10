/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d1af0; name: FUN_029d1af0
 */


void FUN_029d1af0(long param_1,char *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  byte bVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  int *piVar19;
  byte *pbVar20;
  ulong uVar21;
  ushort *puVar22;
  int iVar23;
  ushort local_6c [2];
  char local_68 [4];
  ushort local_64 [2];
  
  local_68[0] = '\0';
  uVar13 = *param_3;
  puVar1 = (undefined4 *)param_3[2];
  lVar2 = param_3[3];
  param_2[0] = '\0';
  param_2[1] = '\0';
  *(undefined1 *)(param_3[1] + 0x5c) = 0;
  lVar14 = param_3[1];
  bVar6 = *(byte *)(lVar14 + 0x5c);
  if (bVar6 < *(byte *)(lVar14 + 0x5a)) {
    *(byte *)(lVar14 + 0x5c) = bVar6 + 1;
    lVar14 = *(long *)(lVar14 + (ulong)bVar6 * 8);
    if (lVar14 != 0) {
      uVar21 = 0;
      do {
        if (*(short *)(lVar14 + 0x496) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),uVar13,lVar14,*puVar1);
          bVar6 = bVar6 ^ 1;
        }
        bVar12 = *(byte *)(lVar14 + 0x7d);
        param_2[uVar21 * 0xc + 6] = bVar12;
        lVar17 = *(long *)(param_1 + 8);
        if ((*(byte *)(*(long *)(lVar17 + 0x58) + 0x1041) & 1) == 0) goto LAB_029d1bcc;
        bVar7 = *(byte *)(lVar14 + 0x7d);
        iVar23 = *(int *)(lVar17 + 0x110);
        if (bVar7 < 6) {
          lVar16 = 0;
joined_r0x029d1e34:
          if (iVar23 == 2) goto LAB_029d1e44;
LAB_029d1e38:
          if (iVar23 == 1) {
            bVar7 = *(byte *)(lVar17 + 0x130);
            if (4 < bVar7) goto LAB_029d1bcc;
            puVar18 = &DAT_03a7ebe5;
            goto LAB_029d1e98;
          }
          if (iVar23 == 0) goto LAB_029d1e44;
LAB_029d1bcc:
          bVar7 = FUN_02969f80(*(undefined8 *)(param_1 + 0x38),uVar13,lVar14,*puVar1,puVar1[8],
                               local_68);
          bVar12 = param_2[uVar21 * 0xc + 6];
        }
        else {
          if (bVar7 < 0xc) {
            lVar16 = 2;
            goto joined_r0x029d1e34;
          }
          if (bVar7 < 0x12) {
            lVar16 = 1;
            goto joined_r0x029d1e34;
          }
          if (bVar7 < 0x18) {
            lVar16 = 3;
            goto joined_r0x029d1e34;
          }
          lVar16 = (ulong)(bVar7 < 0x1e) << 2;
          if (iVar23 != 2) goto LAB_029d1e38;
LAB_029d1e44:
          bVar7 = *(byte *)(lVar17 + 0x130);
          if (4 < bVar7) goto LAB_029d1bcc;
          puVar18 = &DAT_03a7ebe0;
LAB_029d1e98:
          bVar7 = puVar18[bVar7];
          if (1 < bVar7) goto LAB_029d1bcc;
          bVar4 = puVar18[lVar16];
          if ((bVar7 != bVar4) && (bVar4 != 3)) {
            if (bVar4 == 4) {
              if (bVar7 == 0) goto LAB_029d1bcc;
            }
            else if ((bVar4 != 5) || (bVar7 == 1)) goto LAB_029d1bcc;
          }
          bVar7 = 0;
        }
        pbVar20 = (byte *)(param_2 + uVar21 * 0xc + 0xd);
        *pbVar20 = *pbVar20 & 0xfc | bVar7 & 1 | local_68[0] << 1;
        if (bVar12 < 0x1e) {
          iVar23 = *(int *)(lVar2 + (ulong)bVar12 * 8);
        }
        else {
          iVar23 = 7;
        }
        piVar19 = (int *)(param_2 + uVar21 * 0xc + 8);
        *piVar19 = iVar23;
        uVar3 = *(undefined4 *)(param_3 + 4);
        lVar17 = *(long *)(*(long *)(param_1 + 0x60) + 0xce0);
        cVar10 = *(char *)(lVar14 + 0x7d);
        uVar8 = FUN_0296eaa8(*(undefined8 *)(lVar17 + 0x38));
        if (cVar10 != '\x1f') {
          uVar8 = FUN_0296ed7c(*(undefined8 *)(lVar17 + 0x38),cVar10);
        }
        bVar9 = FUN_0296a628(*(undefined8 *)(param_1 + 0x38),uVar13,lVar14,puVar1,iVar23,uVar3,
                             bVar7 & 1,0,bVar6 & 1,uVar8,local_64);
        bVar7 = (bVar9 & 1) << 2;
        bVar4 = *pbVar20 & 0xf8;
        bVar12 = bVar4 | *pbVar20 & 3 | bVar7;
        *pbVar20 = bVar12;
        puVar22 = (ushort *)(param_2 + uVar21 * 0xc + 4);
        *puVar22 = local_64[0];
        if ((bVar9 & 1) != 0) {
          bVar12 = bVar4 | bVar7;
          *pbVar20 = bVar12;
          *piVar19 = 7;
        }
        if ((bVar12 & 1) != 0) {
          lVar17 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          *(undefined1 *)(lVar17 + (ulong)*(byte *)(lVar17 + 0x1c8) * 0x40 + 0x27) = 1;
        }
        lVar17 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        piVar15 = (int *)(lVar17 + (ulong)*(byte *)(lVar17 + 0x1c8) * 0x40 + 0x28);
        if (*piVar15 < *piVar19) {
          *piVar15 = *piVar19;
        }
        *pbVar20 = *pbVar20 & 0xf7 | (bVar6 & 1) << 3;
        if ((bVar6 & 1) == 0) {
          uVar5 = *puVar22;
          uVar11 = FUN_029506a8(lVar14,0xd);
          if (uVar5 <= uVar11) {
            uVar11 = (uint)uVar5;
          }
          local_6c[0] = (ushort)uVar11;
          cVar10 = FUN_02981a0c(*(undefined8 *)(param_1 + 0x38),uVar13,lVar14,1,local_6c);
          *puVar22 = local_6c[0];
          *param_2 = *param_2 + '\x01';
        }
        else {
          cVar10 = '\0';
          uVar5 = *(ushort *)(lVar14 + 0x496);
          if (*puVar22 <= *(ushort *)(lVar14 + 0x496)) {
            uVar5 = *puVar22;
          }
          *puVar22 = uVar5;
          param_2[1] = param_2[1] + '\x01';
        }
        param_2[uVar21 * 0xc + 0xc] = cVar10;
        if (param_3[5] != 0) {
          FUN_029633d8(param_3[5],*(undefined8 *)(param_1 + 8),uVar13,lVar14,*piVar19);
        }
        lVar14 = param_3[1];
        bVar6 = *(byte *)(lVar14 + 0x5c);
        if (*(byte *)(lVar14 + 0x5a) <= bVar6) {
          return;
        }
        *(byte *)(lVar14 + 0x5c) = bVar6 + 1;
        uVar21 = (ulong)((int)uVar21 + 1);
        lVar14 = *(long *)(lVar14 + (ulong)bVar6 * 8);
      } while (lVar14 != 0);
    }
  }
  return;
}


