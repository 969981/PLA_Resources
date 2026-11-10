/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc40bc; name: FUN_00dc40bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc40bc(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_60 = &DAT_6723799257d05608;
  puStack_58 = &DAT_03a82288;
  local_50 = 0x1f;
  uStack_48 = 0;
  lVar2 = FUN_02b11e64(DAT_043ef5a8,&local_60);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    bVar9 = (byte)_DAT_038897c0;
    bVar10 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar11 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar12 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar13 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar14 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar15 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar16 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    local_60 = (undefined1 *)
               CONCAT17((byte)((ulong)uVar3 >> 0x38) & bVar16,
                        CONCAT16((byte)((ulong)uVar3 >> 0x30) & bVar15,
                                 CONCAT15((byte)((ulong)uVar3 >> 0x28) & bVar14,
                                          CONCAT14((byte)((ulong)uVar3 >> 0x20) & bVar13,
                                                   CONCAT13((byte)((ulong)uVar3 >> 0x18) & bVar12,
                                                            CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                     bVar11,CONCAT11((byte)((ulong)
                                                  uVar3 >> 8) & bVar10,(byte)uVar3 & bVar9)))))));
    bVar17 = (byte)_UNK_038897c8;
    bVar18 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar19 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar20 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    bVar21 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar22 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar23 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar24 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    puStack_58 = (undefined *)
                 CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar24,
                          CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar23,
                                   CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar22,
                                            CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar21,
                                                     CONCAT13((byte)((ulong)uVar4 >> 0x18) & bVar20,
                                                              CONCAT12((byte)((ulong)uVar4 >> 0x10)
                                                                       & bVar19,CONCAT11((byte)((
                                                  ulong)uVar4 >> 8) & bVar18,(byte)uVar4 & bVar17)))
                                                  ))));
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    uVar3 = *(undefined8 *)(lVar2 + 0x70);
    uVar8 = *(undefined8 *)(lVar2 + 0x88);
    uVar7 = *(undefined8 *)(lVar2 + 0x80);
    local_50 = CONCAT17((byte)((ulong)uVar5 >> 0x38) & bVar16,
                        CONCAT16((byte)((ulong)uVar5 >> 0x30) & bVar15,
                                 CONCAT15((byte)((ulong)uVar5 >> 0x28) & bVar14,
                                          CONCAT14((byte)((ulong)uVar5 >> 0x20) & bVar13,
                                                   CONCAT13((byte)((ulong)uVar5 >> 0x18) & bVar12,
                                                            CONCAT12((byte)((ulong)uVar5 >> 0x10) &
                                                                     bVar11,CONCAT11((byte)((ulong)
                                                  uVar5 >> 8) & bVar10,(byte)uVar5 & bVar9)))))));
    uStack_48 = CONCAT17((byte)((ulong)uVar6 >> 0x38) & bVar24,
                         CONCAT16((byte)((ulong)uVar6 >> 0x30) & bVar23,
                                  CONCAT15((byte)((ulong)uVar6 >> 0x28) & bVar22,
                                           CONCAT14((byte)((ulong)uVar6 >> 0x20) & bVar21,
                                                    CONCAT13((byte)((ulong)uVar6 >> 0x18) & bVar20,
                                                             CONCAT12((byte)((ulong)uVar6 >> 0x10) &
                                                                      bVar19,CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) & bVar18,(byte)uVar6 & bVar17)))))));
    local_40 = CONCAT17((byte)((ulong)uVar3 >> 0x38) & bVar16,
                        CONCAT16((byte)((ulong)uVar3 >> 0x30) & bVar15,
                                 CONCAT15((byte)((ulong)uVar3 >> 0x28) & bVar14,
                                          CONCAT14((byte)((ulong)uVar3 >> 0x20) & bVar13,
                                                   CONCAT13((byte)((ulong)uVar3 >> 0x18) & bVar12,
                                                            CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                     bVar11,CONCAT11((byte)((ulong)
                                                  uVar3 >> 8) & bVar10,(byte)uVar3 & bVar9)))))));
    uStack_38 = CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar24,
                         CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar23,
                                  CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar22,
                                           CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar21,
                                                    CONCAT13((byte)((ulong)uVar4 >> 0x18) & bVar20,
                                                             CONCAT12((byte)((ulong)uVar4 >> 0x10) &
                                                                      bVar19,CONCAT11((byte)((ulong)
                                                  uVar4 >> 8) & bVar18,(byte)uVar4 & bVar17)))))));
    uStack_30 = CONCAT17((byte)((ulong)uVar7 >> 0x38) & bVar16,
                         CONCAT16((byte)((ulong)uVar7 >> 0x30) & bVar15,
                                  CONCAT15((byte)((ulong)uVar7 >> 0x28) & bVar14,
                                           CONCAT14((byte)((ulong)uVar7 >> 0x20) & bVar13,
                                                    CONCAT13((byte)((ulong)uVar7 >> 0x18) & bVar12,
                                                             CONCAT12((byte)((ulong)uVar7 >> 0x10) &
                                                                      bVar11,CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) & bVar10,(byte)uVar7 & bVar9)))))));
    uStack_28 = CONCAT17((byte)((ulong)uVar8 >> 0x38) & bVar24,
                         CONCAT16((byte)((ulong)uVar8 >> 0x30) & bVar23,
                                  CONCAT15((byte)((ulong)uVar8 >> 0x28) & bVar22,
                                           CONCAT14((byte)((ulong)uVar8 >> 0x20) & bVar21,
                                                    CONCAT13((byte)((ulong)uVar8 >> 0x18) & bVar20,
                                                             CONCAT12((byte)((ulong)uVar8 >> 0x10) &
                                                                      bVar19,CONCAT11((byte)((ulong)
                                                  uVar8 >> 8) & bVar18,(byte)uVar8 & bVar17)))))));
    uVar1 = **(uint **)(*(long *)(*param_1 + 0x238) + 0x310);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 >> 1 & 1) != 0) {
        FUN_0026467c(param_1,&local_60);
      }
    }
    else {
      FUN_00264150(param_1,&local_60);
    }
  }
  return;
}


