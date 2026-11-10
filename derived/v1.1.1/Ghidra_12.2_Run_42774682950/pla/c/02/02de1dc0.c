/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de1dc0; name: FUN_02de1dc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02de1dc0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar13 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  long *local_18;
  
  lVar6 = *(long *)(param_1 + 0x148);
  if (lVar6 == 0) {
    FUN_028a5cd4(&local_18,*(undefined8 *)(param_1 + 0x80));
    auVar13 = (**(code **)(*local_18 + 0x40))(local_18);
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))(local_18);
      }
    }
  }
  else {
    uVar17 = *(undefined8 *)(lVar6 + 0x418);
    uVar11 = *(undefined8 *)(lVar6 + 0x410);
    bVar26 = (byte)_DAT_038897c0;
    bVar27 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar28 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar29 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar8 = (float)CONCAT13((byte)((ulong)uVar11 >> 0x18) & bVar29,
                            CONCAT12((byte)((ulong)uVar11 >> 0x10) & bVar28,
                                     CONCAT11((byte)((ulong)uVar11 >> 8) & bVar27,
                                              (byte)uVar11 & bVar26)));
    bVar30 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar31 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar32 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar33 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar34 = (byte)_UNK_038897c8;
    bVar35 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar36 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar37 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((ulong)uVar17 >> 0x18) & bVar37,
                             CONCAT12((byte)((ulong)uVar17 >> 0x10) & bVar36,
                                      CONCAT11((byte)((ulong)uVar17 >> 8) & bVar35,
                                               (byte)uVar17 & bVar34)));
    bVar38 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar39 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar40 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar41 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar20 = *(undefined8 *)(lVar6 + 0x428);
    uVar19 = *(undefined8 *)(lVar6 + 0x420);
    uVar22 = *(undefined8 *)(lVar6 + 0x438);
    uVar21 = *(undefined8 *)(lVar6 + 0x430);
    fVar9 = (float)CONCAT13((byte)((ulong)uVar19 >> 0x18) & bVar29,
                            CONCAT12((byte)((ulong)uVar19 >> 0x10) & bVar28,
                                     CONCAT11((byte)((ulong)uVar19 >> 8) & bVar27,
                                              (byte)uVar19 & bVar26)));
    fVar15 = (float)CONCAT13((byte)((ulong)uVar20 >> 0x18) & bVar37,
                             CONCAT12((byte)((ulong)uVar20 >> 0x10) & bVar36,
                                      CONCAT11((byte)((ulong)uVar20 >> 8) & bVar35,
                                               (byte)uVar20 & bVar34)));
    fVar10 = (float)CONCAT13((byte)((ulong)uVar21 >> 0x18) & bVar29,
                             CONCAT12((byte)((ulong)uVar21 >> 0x10) & bVar28,
                                      CONCAT11((byte)((ulong)uVar21 >> 8) & bVar27,
                                               (byte)uVar21 & bVar26)));
    fVar16 = (float)CONCAT13((byte)((ulong)uVar22 >> 0x18) & bVar37,
                             CONCAT12((byte)((ulong)uVar22 >> 0x10) & bVar36,
                                      CONCAT11((byte)((ulong)uVar22 >> 8) & bVar35,
                                               (byte)uVar22 & bVar34)));
    sVar5 = FUN_02b68b4c(lVar6,*(undefined4 *)
                                (*(long *)(param_1 + 0x110) + (long)param_2 * 0x450 + 0x380));
    if (sVar5 < 0) {
      fVar25 = (float)_UNK_03889a88;
      uVar12 = _DAT_03889a80;
    }
    else {
      puVar7 = (undefined8 *)FUN_02b6962c(*(undefined8 *)(param_1 + 0x148));
      uVar18 = puVar7[1];
      uVar12 = *puVar7;
      fVar25 = (float)CONCAT13((byte)((ulong)uVar18 >> 0x18) & bVar37,
                               CONCAT12((byte)((ulong)uVar18 >> 0x10) & bVar36,
                                        CONCAT11((byte)((ulong)uVar18 >> 8) & bVar35,
                                                 (byte)uVar18 & bVar34)));
      uVar12 = CONCAT17((byte)((ulong)uVar12 >> 0x38) & bVar33,
                        CONCAT16((byte)((ulong)uVar12 >> 0x30) & bVar32,
                                 CONCAT15((byte)((ulong)uVar12 >> 0x28) & bVar31,
                                          CONCAT14((byte)((ulong)uVar12 >> 0x20) & bVar30,
                                                   CONCAT13((byte)((ulong)uVar12 >> 0x18) & bVar29,
                                                            CONCAT12((byte)((ulong)uVar12 >> 0x10) &
                                                                     bVar28,CONCAT11((byte)((ulong)
                                                  uVar12 >> 8) & bVar27,(byte)uVar12 & bVar26)))))))
      ;
    }
    fVar23 = (float)uVar12;
    fVar24 = (float)((ulong)uVar12 >> 0x20);
    auVar13._4_4_ =
         (float)(CONCAT17((byte)((ulong)uVar11 >> 0x38) & bVar33,
                          CONCAT16((byte)((ulong)uVar11 >> 0x30) & bVar32,
                                   CONCAT15((byte)((ulong)uVar11 >> 0x28) & bVar31,
                                            CONCAT14((byte)((ulong)uVar11 >> 0x20) & bVar30,fVar8)))
                         ) >> 0x20) * fVar23 +
         (float)(CONCAT17((byte)((ulong)uVar19 >> 0x38) & bVar33,
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) & bVar32,
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) & bVar31,
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) & bVar30,fVar9)))
                         ) >> 0x20) * fVar24 +
         (float)(CONCAT17((byte)((ulong)uVar21 >> 0x38) & bVar33,
                          CONCAT16((byte)((ulong)uVar21 >> 0x30) & bVar32,
                                   CONCAT15((byte)((ulong)uVar21 >> 0x28) & bVar31,
                                            CONCAT14((byte)((ulong)uVar21 >> 0x20) & bVar30,fVar10))
                                  )) >> 0x20) * fVar25;
    auVar13._0_4_ = fVar8 * fVar23 + fVar9 * fVar24 + fVar10 * fVar25;
    auVar13._12_4_ =
         (float)(CONCAT17((byte)((ulong)uVar17 >> 0x38) & bVar41,
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) & bVar40,
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) & bVar39,
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) & bVar38,fVar14))
                                  )) >> 0x20) * fVar23 +
         (float)(CONCAT17((byte)((ulong)uVar20 >> 0x38) & bVar41,
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) & bVar40,
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) & bVar39,
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) & bVar38,fVar15))
                                  )) >> 0x20) * fVar24 +
         (float)(CONCAT17((byte)((ulong)uVar22 >> 0x38) & bVar41,
                          CONCAT16((byte)((ulong)uVar22 >> 0x30) & bVar40,
                                   CONCAT15((byte)((ulong)uVar22 >> 0x28) & bVar39,
                                            CONCAT14((byte)((ulong)uVar22 >> 0x20) & bVar38,fVar16))
                                  )) >> 0x20) * fVar25;
    auVar13._8_4_ = fVar14 * fVar23 + fVar15 * fVar24 + fVar16 * fVar25;
  }
  return auVar13;
}


