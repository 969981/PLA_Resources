/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03189640; name: FUN_03189640
 */


undefined8 FUN_03189640(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar4;
    lVar3 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
  }
  if (lVar3 != 0) {
    FUN_032d5af0(lVar3,"TtcalcBary",10);
  }
  uVar8 = param_3[1];
  uVar2 = *param_3;
  fVar5 = (float)uVar2;
  fVar9 = (float)*param_4;
  fVar21 = fVar9 * fVar5;
  fVar6 = (float)((ulong)uVar2 >> 0x20);
  fVar13 = (float)((ulong)*param_4 >> 0x20);
  fVar25 = fVar13 * fVar6;
  fVar7 = (float)uVar8;
  fVar15 = (float)param_4[1];
  fVar28 = fVar15 * fVar7;
  fVar22 = fVar21 + fVar25 + fVar28;
  fVar28 = fVar21 + fVar25 + fVar28;
  fVar21 = (float)((ulong)uVar8 >> 0x20);
  uVar12 = CONCAT44(fVar13 - fVar6 * fVar28,fVar9 - fVar5 * fVar22);
  uVar19 = CONCAT44((float)((ulong)param_4[1] >> 0x20) - fVar21 * fVar28,fVar15 - fVar7 * fVar22);
  uVar11 = (int)((ulong)(param_2 - (long)param_1) >> 4) - 2;
  fVar15 = (float)*param_1;
  fVar22 = (float)((ulong)*param_1 >> 0x20);
  fVar25 = (float)param_1[1];
  fVar9 = fVar5 * fVar15 + fVar6 * fVar22 + fVar7 * fVar25;
  fVar13 = fVar5 * fVar15 + fVar6 * fVar22 + fVar7 * fVar25;
  local_70 = CONCAT44(fVar22 - fVar6 * fVar13,fVar15 - fVar5 * fVar9);
  fVar5 = (float)((ulong)param_1[1] >> 0x20);
  uStack_68 = CONCAT44(fVar5 - fVar21 * fVar13,fVar25 - fVar7 * fVar9);
  local_50 = uVar12;
  uStack_48 = uVar19;
  if (1 < (int)uVar11) {
    lVar4 = (ulong)uVar11 - 2;
    param_1 = param_1 + 4;
    while( true ) {
      fVar6 = (float)uVar2;
      fVar13 = (float)param_1[-2];
      fVar9 = fVar6 * fVar13;
      fVar7 = (float)((ulong)uVar2 >> 0x20);
      fVar28 = (float)((ulong)param_1[-2] >> 0x20);
      fVar26 = fVar7 * fVar28;
      fVar21 = (float)uVar8;
      fVar16 = (float)param_1[-1];
      fVar29 = fVar21 * fVar16;
      fVar23 = fVar9 + fVar26 + fVar29;
      fVar29 = fVar9 + fVar26 + fVar29;
      fVar9 = (float)((ulong)uVar8 >> 0x20);
      local_80 = CONCAT44(fVar28 - fVar7 * fVar29,fVar13 - fVar6 * fVar23);
      uStack_78 = CONCAT44((float)((ulong)param_1[-1] >> 0x20) - fVar9 * fVar29,
                           fVar16 - fVar21 * fVar23);
      fVar13 = (float)*param_1;
      fVar23 = fVar6 * fVar13;
      fVar28 = (float)((ulong)*param_1 >> 0x20);
      fVar29 = fVar7 * fVar28;
      fVar16 = (float)param_1[1];
      fVar30 = fVar21 * fVar16;
      fVar26 = fVar23 + fVar29 + fVar30;
      fVar30 = fVar23 + fVar29 + fVar30;
      local_90 = CONCAT44(fVar28 - fVar7 * fVar30,fVar13 - fVar6 * fVar26);
      uStack_88 = CONCAT44((float)((ulong)param_1[1] >> 0x20) - fVar9 * fVar30,
                           fVar16 - fVar21 * fVar26);
      uVar1 = FUN_03189530(&local_50,&local_80,&local_90,&local_70,&local_60);
      if ((uVar1 & 1) != 0) {
        fVar6 = (float)local_60;
        iVar10 = -(uint)(-1e-05 <= fVar6);
        fVar7 = (float)((ulong)local_60 >> 0x20);
        iVar14 = -(uint)(-1e-05 <= fVar7);
        fVar21 = (float)uStack_58;
        iVar17 = -(uint)(-1e-05 <= fVar21);
        fVar9 = (float)((ulong)uStack_58 >> 0x20);
        iVar20 = -(uint)(-1e-05 <= fVar9);
        iVar24 = -(uint)(fVar6 <= 1.00001);
        iVar27 = -(uint)(fVar7 <= 1.00001);
        iVar31 = -(uint)(fVar21 <= 1.00001);
        iVar32 = -(uint)(fVar9 <= 1.00001);
        uVar11 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                          CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                                   CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar10 >> 8),
                                            (byte)iVar24 & (byte)iVar10)));
        uVar18 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar17 >> 8),
                                            (byte)iVar31 & (byte)iVar17)));
        if ((uVar11 & (uint)(CONCAT17((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                                      CONCAT16((byte)((uint)iVar27 >> 0x10) &
                                               (byte)((uint)iVar14 >> 0x10),
                                               CONCAT15((byte)((uint)iVar27 >> 8) &
                                                        (byte)((uint)iVar14 >> 8),
                                                        CONCAT14((byte)iVar27 & (byte)iVar14,uVar11)
                                                       ))) >> 0x20) & uVar18 &
            (uint)(CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                            CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                     CONCAT15((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar20 >> 8),
                                              CONCAT14((byte)iVar32 & (byte)iVar20,uVar18)))) >>
                  0x20)) != 0) {
          uVar2 = 1;
          local_50 = CONCAT44(fVar22 * fVar21 +
                              (float)((ulong)param_1[-2] >> 0x20) * fVar6 +
                              (float)((ulong)*param_1 >> 0x20) * fVar7,
                              fVar15 * fVar21 + (float)param_1[-2] * fVar6 + (float)*param_1 * fVar7
                             );
          uStack_48 = CONCAT44(fVar5 * fVar21 +
                               (float)((ulong)param_1[-1] >> 0x20) * fVar6 +
                               (float)((ulong)param_1[1] >> 0x20) * fVar7,
                               fVar25 * fVar21 +
                               (float)param_1[-1] * fVar6 + (float)param_1[1] * fVar7);
          param_4[1] = uStack_48;
          *param_4 = local_50;
          goto joined_r0x03189878;
        }
      }
      if (lVar4 == 0) break;
      uVar8 = param_3[1];
      uVar2 = *param_3;
      lVar4 = lVar4 + -1;
      param_1 = param_1 + 2;
    }
  }
  uVar2 = 0;
  param_4[1] = uVar19;
  *param_4 = uVar12;
joined_r0x03189878:
  if (lVar3 != 0) {
    FUN_032d5b34(lVar3,&DAT_0390f40e);
  }
  return uVar2;
}


