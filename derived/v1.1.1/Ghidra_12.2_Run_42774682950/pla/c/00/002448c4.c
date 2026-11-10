/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002448c4; name: FUN_002448c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002448c4(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  float local_38;
  float local_34;
  
  (**(code **)(*param_1 + 0x60))(param_1,&local_90);
  (**(code **)(*param_1 + 0x68))(param_1,&local_38);
  fVar8 = local_34;
  fVar6 = (float)local_90;
  fVar7 = local_90._4_4_;
  FUN_00251180(&local_90,param_2);
  if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) != 0) {
    (**(code **)(*param_1 + 0x60))(param_1,&local_38);
    bVar11 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    fVar21 = 0.0;
    if (bVar11 != 0) {
      if (bVar11 == 2) {
        fVar21 = local_34;
      }
      else {
        fVar21 = -local_34;
      }
    }
    fVar17 = (float)local_90 * 0.0;
    fVar22 = (float)(local_90 >> 0x20);
    fVar18 = fVar22 * 0.0;
    fVar19 = (float)uStack_88 * 0.0;
    fVar23 = (float)(uStack_88 >> 0x20);
    fVar20 = fVar23 * 0.0;
    fVar28 = (float)uStack_80;
    fVar29 = (float)(uStack_80 >> 0x20);
    fVar30 = (float)uStack_78;
    fVar31 = (float)(uStack_78 >> 0x20);
    fVar24 = (float)local_70;
    fVar25 = (float)(local_70 >> 0x20);
    fVar26 = (float)uStack_68;
    fVar27 = (float)(uStack_68 >> 0x20);
    local_90 = CONCAT44(fVar22 + fVar29 * 0.0 + fVar25 * 0.0 + 0.0,
                        (float)local_90 + fVar28 * 0.0 + fVar24 * 0.0 + 0.0);
    uStack_88 = CONCAT44(fVar23 + fVar31 * 0.0 + fVar27 * 0.0 + 0.0,
                         (float)uStack_88 + fVar30 * 0.0 + fVar26 * 0.0 + 0.0);
    uStack_80 = CONCAT44(fVar29 + fVar18 + fVar25 * 0.0 + 0.0,fVar28 + fVar17 + fVar24 * 0.0 + 0.0);
    uStack_78 = CONCAT44(fVar21 + fVar31 + fVar20 + fVar27 * 0.0,
                         fVar30 + fVar19 + fVar26 * 0.0 + 0.0);
    local_70 = CONCAT44(fVar25 + fVar18 + fVar29 * 0.0 + 0.0,fVar24 + fVar17 + fVar28 * 0.0 + 0.0);
    uStack_68 = CONCAT44(fVar27 + fVar20 + fVar31 * 0.0 + 0.0,fVar26 + fVar19 + fVar30 * 0.0 + 0.0);
  }
  bVar11 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar5 = _UNK_0388a138;
  uVar4 = _DAT_0388a130;
  uVar3 = _UNK_038899f8;
  uVar2 = _DAT_038899f0;
  if (bVar11 != 0) {
    fVar21 = 1.0 / ((local_38 + fVar6) - local_38);
    fVar17 = 1.0 / ((fVar8 - fVar7) - fVar8);
    uVar16 = 0;
    do {
      uVar12 = (**(code **)(*param_1 + 0x58))(param_1,uVar16);
      puVar13 = (ulong *)FUN_0023e82c(uVar12,param_2);
      puVar13[1] = (ulong)(uint)-((local_38 + local_38 + fVar6) * fVar21) << 0x20;
      *puVar13 = (ulong)(uint)(fVar21 + fVar21);
      puVar13[3] = (ulong)(uint)-((fVar8 + (fVar8 - fVar7)) * fVar17) << 0x20;
      puVar13[2] = (ulong)(uint)(fVar17 + fVar17) << 0x20;
      puVar13[5] = uVar3;
      puVar13[4] = uVar2;
      puVar13[7] = uVar5;
      puVar13[6] = uVar4;
      puVar13[0xd] = uStack_68;
      puVar13[0xc] = local_70;
      puVar13[9] = uStack_88;
      puVar13[8] = local_90;
      puVar13[0xb] = uStack_78;
      puVar13[10] = uStack_80;
      if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) == 0) {
        bVar9 = false;
LAB_00244ac8:
        if (bVar9) goto LAB_00244a58;
      }
      else {
        lVar14 = param_1[0x15];
        uVar1 = *(uint *)(lVar14 + 0x10);
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0xc +
                                                    (ulong)uVar1 + 4 +
                                                    (long)*(char *)(lVar14 + (ulong)(*(int *)(lVar14
                                                                                              + 0xc 
                                                  + (ulong)uVar1 + 4) + uVar1) + 0x18) * 4) + uVar1)
                          + 0x14);
        if (*(long *)(lVar14 + 0x58) == 0) {
LAB_00244b20:
          bVar10 = false;
          lVar15 = *(long *)(lVar14 + 8);
          if (lVar15 != 0) goto LAB_00244b28;
LAB_00244b58:
          bVar9 = false;
        }
        else {
          if ((*(byte *)(lVar14 + 0x228) >> 2 & 1) == 0) {
            if ((*(byte *)(*(long *)(lVar14 + 0x58) + 8) >> 5 & 1) == 0) goto LAB_00244b20;
            bVar10 = *(char *)(lVar14 + 0x98) == '\0';
            lVar15 = *(long *)(lVar14 + 8);
          }
          else {
            bVar10 = false;
            lVar15 = *(long *)(lVar14 + 8);
          }
          if (lVar15 == 0) goto LAB_00244b58;
LAB_00244b28:
          if (((*(byte *)(lVar14 + 0x228) >> 2 & 1) != 0) || ((*(byte *)(lVar15 + 4) >> 1 & 1) == 0)
             ) goto LAB_00244b58;
          bVar9 = *(char *)(lVar14 + 0x54) == '\0';
        }
        if (!bVar10) goto LAB_00244ac8;
LAB_00244a58:
        *(undefined4 *)((long)puVar13 + 0xdc) = 0x3b808081;
      }
      uVar16 = uVar16 + 1;
    } while (bVar11 != uVar16);
  }
  return;
}


