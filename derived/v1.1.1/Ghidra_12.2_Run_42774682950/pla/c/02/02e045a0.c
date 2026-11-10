/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e045a0; name: FUN_02e045a0
 */


void FUN_02e045a0(float param_1,long *param_2,long *param_3,int param_4,long *param_5,ulong param_6,
                 undefined8 param_7)

{
  long *plVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  float fVar32;
  float fVar33;
  uint local_88;
  
  if ((param_6 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x44) = 0;
    *(undefined1 *)((long)param_2 + 0x4c) = 1;
  }
  uVar7 = *(uint *)(param_2 + 8);
  uVar11 = uVar7 >> 2;
  plVar1 = param_2 + 1;
  fVar32 = *(float *)((long)param_2 + 0x14);
  uVar26 = 0;
  do {
    bVar14 = *(char *)((long)param_2 + 0x4d) != '\0';
    lVar30 = *param_2;
    uVar27 = (uint)*(ushort *)((long)param_3 + 0x12);
    lVar23 = *param_3;
    piVar31 = (int *)(lVar30 + uVar26 * 0x78);
    uVar9 = *(ushort *)(param_3 + 2);
    lVar25 = *param_5;
    pbVar2 = (byte *)(piVar31 + 0x1c);
    bVar15 = *(char *)((long)param_2 + 0x4c) != '\0';
    uVar10 = *(ushort *)(param_5 + 2);
    piVar3 = piVar31 + 0x19;
    piVar4 = piVar31 + 6;
    fVar33 = *(float *)((long)param_2 + 0x44);
    uVar29 = (ulong)*(ushort *)((long)param_5 + 0x12);
    local_88 = *(uint *)(param_2 + 9);
    iVar22 = param_4;
    do {
      uVar28 = (uint)uVar29;
      uVar6 = uVar27;
      if (local_88 <= uVar27) {
        uVar6 = local_88;
      }
      iVar12 = uVar27 - uVar6;
      local_88 = local_88 - uVar6;
      if (((bVar14) && (iVar12 == 0)) && (*(int *)((long)param_3 + 0xc) != 0x11)) {
LAB_02e04634:
        uVar27 = 0;
        bVar14 = true;
        break;
      }
      uVar18 = FUN_02e07314(piVar31,lVar23 + uVar26 * 4 * (ulong)uVar9 + (ulong)(uVar6 + iVar22) * 4
                            ,iVar12);
      bVar14 = (bool)(bVar14 & *piVar31 != piVar31[3]);
      uVar27 = iVar12 - (uVar18 & 0xffff);
      if (((*(int *)((long)param_3 + 0xc) != 0x11) && (uVar27 == 0)) && (bVar14)) goto LAB_02e04634;
      bVar16 = *(int *)((long)param_3 + 0xc) == 0x11;
      bVar17 = uVar27 == 0;
      bVar13 = bVar17 && bVar16;
      if ((*(char *)(lVar30 + uVar26 * 0x78 + ((ulong)*pbVar2 & 1) * 0x10 + 0x44) == '\0') &&
         (uVar24 = FUN_02e073d0(piVar31,param_7,uVar7,bVar13), (uVar24 & 1) != 0)) {
        FUN_02e07498(piVar31,uVar11);
        FUN_02e067d0(0x3f800000,plVar1,param_7,uVar7);
        lVar5 = lVar30 + uVar26 * 0x78 + 0x38;
        FUN_02e06d7c(lVar5 + ((ulong)*pbVar2 & 1) * 0x10,param_7,uVar7,param_2[3]);
        FUN_02e06a24(lVar5 + ((ulong)*pbVar2 & 1) * 0x10);
      }
      if ((*(char *)(lVar30 + uVar26 * 0x78 + ((ulong)~(uint)*pbVar2 & 1) * 0x10 + 0x44) == '\0') &&
         (uVar24 = FUN_02e073d0(piVar31,param_7,uVar7,bVar13), (uVar24 & 1) != 0)) {
        FUN_02e07498(piVar31,uVar11);
        FUN_02e067d0(0x3f800000,plVar1,param_7,uVar7);
        lVar5 = lVar30 + uVar26 * 0x78 + 0x38;
        FUN_02e06d7c(lVar5 + ((ulong)~(uint)*pbVar2 & 1) * 0x10,param_7,uVar7,param_2[3]);
        FUN_02e06a24(lVar5 + ((ulong)~(uint)*pbVar2 & 1) * 0x10);
      }
      uVar24 = (ulong)*pbVar2 & 1;
      if ((*(char *)(lVar30 + uVar26 * 0x78 + (uVar24 ^ 1) * 0x10 + 0x44) == '\0') ||
         (*(char *)(lVar30 + uVar26 * 0x78 + uVar24 * 0x10 + 0x44) == '\0')) {
LAB_02e04960:
        if ((char)*piVar3 != '\0') goto LAB_02e04970;
LAB_02e04988:
        if (!bVar17 || !bVar16) goto LAB_02e04998;
LAB_02e0498c:
        if ((piVar31[3] != 0) || ((char)*piVar3 != '\0')) goto LAB_02e04998;
        bVar16 = piVar31[9] == 0;
      }
      else {
        if ((char)*piVar3 == '\0') {
          lVar5 = lVar30 + uVar26 * 0x78 + 0x38;
          FUN_02e06e20(fVar33,piVar31 + 0x16,*(undefined8 *)(lVar5 + uVar24 * 0x10),
                       *(undefined8 *)(lVar5 + (uVar24 ^ 1) * 0x10),*(undefined8 *)(piVar31 + 0x1a),
                       uVar11,bVar15);
          bVar15 = false;
          goto LAB_02e04960;
        }
LAB_02e04970:
        if ((uint)(*piVar4 - piVar31[9]) < uVar7) goto LAB_02e04988;
        FUN_02e06dac(piVar31 + 0x16,param_7,uVar7,param_2[4]);
        FUN_02e067d0((float)uVar7 / (fVar32 * 4.0),plVar1,param_7,uVar7);
        FUN_02e0750c(piVar4,param_7,uVar11);
        fVar33 = fVar33 + 100.0 / param_1;
        *(undefined1 *)piVar3 = 0;
        if (1.0 <= fVar33) {
          bVar8 = *pbVar2;
          uVar24 = (ulong)bVar8 & 1;
          *(undefined1 *)(lVar30 + uVar26 * 0x78 + uVar24 * 0x10 + 0x44) = 0;
          if ((uint)(int)fVar33 < 2) {
            *pbVar2 = bVar8 + 1;
          }
          else {
            *(undefined1 *)(lVar30 + uVar26 * 0x78 + (ulong)((uint)uVar24 ^ 1) * 0x10 + 0x44) = 0;
            iVar12 = ((int)fVar33 - 2U) * uVar11;
            iVar20 = FUN_02e07498(piVar31,iVar12);
            local_88 = iVar12 - iVar20;
          }
          fVar33 = fVar33 - (float)(int)fVar33;
          if (!(bVar17 && bVar16)) goto LAB_02e04998;
          goto LAB_02e0498c;
        }
        if (!(!bVar17 || !bVar16)) goto LAB_02e0498c;
LAB_02e04998:
        bVar16 = false;
      }
      uVar19 = FUN_02e0765c(piVar4,lVar25 + uVar26 * 4 * (ulong)uVar10 + uVar29 * 4,
                            *(ushort *)(param_5 + 2) - uVar28,bVar16);
      uVar28 = uVar28 + (uVar19 & 0xffff);
      uVar29 = (ulong)uVar28;
      if ((bVar16 != false) && (uVar24 = FUN_02e074c8(piVar4), (uVar24 & 1) != 0)) {
        uVar21 = 0x11;
        goto LAB_02e04648;
      }
      if (uVar28 == *(ushort *)(param_5 + 2)) {
        uVar21 = 0x2d;
        goto LAB_02e04648;
      }
      iVar22 = uVar18 + uVar6 + iVar22;
    } while ((uVar27 == 0) == bVar13);
    uVar21 = 0x2b;
LAB_02e04648:
    *(undefined4 *)((long)param_5 + 0xc) = uVar21;
    uVar26 = uVar26 + 1;
    if (*(uint *)(param_2 + 7) <= uVar26) {
      *(short *)((long)param_3 + 0x12) = (short)uVar27;
      *(short *)((long)param_5 + 0x12) = (short)uVar28;
      *(bool *)((long)param_2 + 0x4c) = bVar15;
      *(float *)((long)param_2 + 0x44) = fVar33;
      *(uint *)(param_2 + 9) = local_88;
      *(bool *)((long)param_2 + 0x4d) = bVar14;
      return;
    }
  } while( true );
}


