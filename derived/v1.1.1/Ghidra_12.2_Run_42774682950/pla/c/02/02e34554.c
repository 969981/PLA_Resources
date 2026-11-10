/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34554; name: FUN_02e34554
 */


undefined4
FUN_02e34554(undefined8 param_1,long *param_2,long param_3,uint param_4,uint param_5,uint param_6,
            long param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined4 local_e4;
  
  fVar28 = *(float *)((long)param_2 + 0x44);
  uVar26 = *(uint *)(param_2 + 9);
  bVar13 = *(char *)((long)param_2 + 0x4c) != '\0';
  if (param_4 == 0) {
    local_e4 = 0x2d;
  }
  else {
    uVar8 = *(uint *)(param_2 + 8);
    fVar27 = *(float *)((long)param_2 + 0x14);
    lVar22 = *param_2;
    uVar10 = uVar8 >> 2;
    uVar21 = (ulong)param_6;
    plVar1 = param_2 + 1;
    lVar19 = lVar22 + uVar21 * 0x78;
    pcVar2 = (char *)(lVar19 + 100);
    pbVar3 = (byte *)(lVar19 + 0x70);
    piVar4 = (int *)(lVar19 + 0x18);
    uVar25 = 0;
    iVar18 = 0;
    uVar24 = 0;
    local_e4 = 0x2d;
    uVar23 = param_4;
    do {
      uVar6 = uVar23;
      if (uVar26 <= uVar23) {
        uVar6 = uVar26;
      }
      uVar15 = 0;
      iVar12 = uVar23 - uVar6;
      if ((param_3 != 0) && (iVar12 != 0)) {
        uVar15 = FUN_02e34b44(param_1,param_2[10] + uVar21 * 0x20,
                              param_3 + (ulong)(uVar6 + iVar18) * 4,iVar12);
      }
      if ((*(char *)(lVar22 + uVar21 * 0x78 + ((ulong)*pbVar3 & 1) * 0x10 + 0x44) == '\0') &&
         (uVar20 = FUN_02e073d0(param_2[10] + uVar21 * 0x20,param_8,uVar8,param_5 & 1),
         (uVar20 & 1) != 0)) {
        FUN_02e07498(param_2[10] + uVar21 * 0x20,uVar10);
        FUN_02e067d0(0x3f800000,plVar1,param_8,uVar8);
        lVar5 = lVar22 + uVar21 * 0x78 + 0x38;
        FUN_02e06d7c(lVar5 + ((ulong)*pbVar3 & 1) * 0x10,param_8,uVar8,param_2[3]);
        FUN_02e06a24(lVar5 + ((ulong)*pbVar3 & 1) * 0x10);
      }
      uVar26 = uVar26 - uVar6;
      if ((*(char *)(lVar22 + uVar21 * 0x78 + ((ulong)~(uint)*pbVar3 & 1) * 0x10 + 0x44) == '\0') &&
         (uVar20 = FUN_02e073d0(param_2[10] + uVar21 * 0x20,param_8,uVar8,param_5 & 1),
         (uVar20 & 1) != 0)) {
        FUN_02e07498(param_2[10] + uVar21 * 0x20,uVar10);
        FUN_02e067d0(0x3f800000,plVar1,param_8,uVar8);
        lVar5 = lVar22 + uVar21 * 0x78 + 0x38;
        FUN_02e06d7c(lVar5 + ((ulong)~(uint)*pbVar3 & 1) * 0x10,param_8,uVar8,param_2[3]);
        FUN_02e06a24(lVar5 + ((ulong)~(uint)*pbVar3 & 1) * 0x10);
      }
      uVar20 = (ulong)*pbVar3 & 1;
      if ((*(char *)(lVar22 + uVar21 * 0x78 + (uVar20 ^ 1) * 0x10 + 0x44) == '\0') ||
         (*(char *)(lVar22 + uVar21 * 0x78 + uVar20 * 0x10 + 0x44) == '\0')) {
LAB_02e348cc:
        if (*pcVar2 != '\0') goto LAB_02e348dc;
LAB_02e348f4:
        if ((param_5 & 1) == 0) goto LAB_02e34a28;
LAB_02e348fc:
        if ((*(int *)(param_2[10] + uVar21 * 0x20 + 0xc) != 0) || (*pcVar2 != '\0'))
        goto LAB_02e34a28;
        bVar14 = *(int *)(lVar19 + 0x24) == 0;
      }
      else {
        if (*pcVar2 == '\0') {
          lVar5 = lVar22 + uVar21 * 0x78 + 0x38;
          FUN_02e06e20(fVar28,lVar19 + 0x58,*(undefined8 *)(lVar5 + uVar20 * 0x10),
                       *(undefined8 *)(lVar5 + (uVar20 ^ 1) * 0x10),*(undefined8 *)(lVar19 + 0x68),
                       uVar10,bVar13);
          bVar13 = false;
          goto LAB_02e348cc;
        }
LAB_02e348dc:
        if ((uint)(*piVar4 - *(int *)(lVar19 + 0x24)) < uVar8) goto LAB_02e348f4;
        FUN_02e06dac(lVar19 + 0x58,param_8,uVar8,param_2[4]);
        FUN_02e067d0((float)uVar8 / (fVar27 * 4.0),plVar1,param_8,uVar8);
        FUN_02e0750c(piVar4,param_8,uVar10);
        fVar28 = fVar28 + 1.0 / (float)param_1;
        *pcVar2 = '\0';
        if (1.0 <= fVar28) {
          bVar9 = *pbVar3;
          uVar20 = (ulong)bVar9 & 1;
          *(undefined1 *)(lVar22 + uVar21 * 0x78 + uVar20 * 0x10 + 0x44) = 0;
          if ((uint)(int)fVar28 < 2) {
            *pbVar3 = bVar9 + 1;
          }
          else {
            *(undefined1 *)(lVar22 + uVar21 * 0x78 + (ulong)((uint)uVar20 ^ 1) * 0x10 + 0x44) = 0;
            iVar11 = ((int)fVar28 - 2U) * uVar10;
            iVar16 = FUN_02e07498(param_2[10] + uVar21 * 0x20,iVar11);
            uVar26 = iVar11 - iVar16;
          }
          fVar28 = fVar28 - (float)(int)fVar28;
        }
        if ((param_5 & 1) != 0) goto LAB_02e348fc;
LAB_02e34a28:
        bVar14 = false;
      }
      uVar23 = iVar12 - (uVar15 & 0xffff);
      uVar17 = FUN_02e0765c(piVar4,param_7 + (ulong)uVar25 * 4,param_4 - uVar25,bVar14);
      uVar25 = uVar25 + (uVar17 & 0xffff);
      if (bVar14 != false) {
        uVar20 = FUN_02e074c8(piVar4);
        uVar7 = 0x11;
        if ((uVar20 & 1) == 0) {
          uVar7 = local_e4;
        }
        local_e4 = uVar7;
      }
      if (0x62 < uVar24) break;
      uVar24 = uVar24 + 1;
      iVar18 = uVar15 + uVar6 + iVar18;
    } while (uVar23 != 0 || uVar25 < param_4);
  }
  if ((int)param_2[7] - 1U == param_6) {
    *(float *)((long)param_2 + 0x44) = fVar28;
    *(uint *)(param_2 + 9) = uVar26;
    *(bool *)((long)param_2 + 0x4c) = bVar13;
  }
  return local_e4;
}


