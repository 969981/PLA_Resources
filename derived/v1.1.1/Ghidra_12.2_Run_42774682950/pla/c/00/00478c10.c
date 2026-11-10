/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00478c10; name: FUN_00478c10
 */


undefined8 FUN_00478c10(undefined8 *param_1,ulong *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar14;
  byte bVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_50;
  ulong uStack_48;
  
  uVar8 = param_1[0xd];
  uVar12 = param_4 >> 4;
  uVar1 = uVar8 + uVar12;
  if ((uVar12 == 0) || (param_1[4] == 0)) {
    while (uVar8 = uVar8 + 1, uVar8 <= uVar1) {
      iVar7 = 0;
      if ((uVar8 & 1) == 0) {
        uVar12 = uVar8;
        do {
          uVar3 = (uint)uVar12;
          uVar12 = uVar12 >> 1;
          iVar7 = iVar7 + 1;
        } while ((uVar3 >> 1 & 1) == 0);
      }
      puVar5 = (ulong *)FUN_00478870(param_1,iVar7);
      if (puVar5 == (ulong *)0x0) {
        return 0;
      }
      uVar9 = *puVar5;
      uVar12 = param_1[0x12];
      uVar2 = param_1[0x13];
      param_1[0x12] = uVar9 ^ uVar12;
      uVar10 = puVar5[1];
      param_1[0x13] = uVar10 ^ uVar2;
      local_50 = *param_2 ^ uVar9 ^ uVar12;
      uStack_48 = param_2[1] ^ uVar10 ^ uVar2;
      (*(code *)param_1[1])(&local_50,&local_50,param_1[3]);
      uVar23 = param_1[0x13];
      uVar14 = param_1[0x12];
      bVar13 = (byte)local_50 ^ (byte)uVar14;
      bVar15 = (byte)(local_50 >> 8) ^ (byte)((ulong)uVar14 >> 8);
      bVar16 = (byte)(local_50 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10);
      bVar17 = (byte)(local_50 >> 0x18) ^ (byte)((ulong)uVar14 >> 0x18);
      bVar18 = (byte)(local_50 >> 0x20) ^ (byte)((ulong)uVar14 >> 0x20);
      bVar19 = (byte)(local_50 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28);
      bVar20 = (byte)(local_50 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30);
      bVar21 = (byte)(local_50 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38);
      local_50 = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar13)))))));
      bVar22 = (byte)uStack_48 ^ (byte)uVar23;
      bVar24 = (byte)(uStack_48 >> 8) ^ (byte)((ulong)uVar23 >> 8);
      bVar25 = (byte)(uStack_48 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10);
      bVar26 = (byte)(uStack_48 >> 0x18) ^ (byte)((ulong)uVar23 >> 0x18);
      bVar27 = (byte)(uStack_48 >> 0x20) ^ (byte)((ulong)uVar23 >> 0x20);
      bVar28 = (byte)(uStack_48 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28);
      bVar29 = (byte)(uStack_48 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30);
      bVar30 = (byte)(uStack_48 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38);
      uStack_48 = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,
                                                  CONCAT12(bVar25,CONCAT11(bVar24,bVar22)))))));
      uVar23 = param_1[0x15];
      uVar14 = param_1[0x14];
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ bVar30,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ bVar29,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ bVar28,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^ bVar27,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) ^ bVar26,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                 bVar25,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ bVar24,(byte)uVar23 ^ bVar22)))))))
      ;
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ bVar21,
                    CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ bVar20,
                             CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ bVar19,
                                      CONCAT14((byte)((ulong)uVar14 >> 0x20) ^ bVar18,
                                               CONCAT13((byte)((ulong)uVar14 >> 0x18) ^ bVar17,
                                                        CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                                 bVar16,CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) ^ bVar15,(byte)uVar14 ^ bVar13)))))))
      ;
      param_3[1] = uStack_48;
      *param_3 = local_50;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar4 = FUN_00478870(param_1,0x40 - LZCOUNT(uVar1 >> 1));
    if (lVar4 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,uVar12,param_1[3],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  if ((param_4 & 0xf) != 0) {
    uVar8 = param_4 & 0xf;
    puVar6 = param_1 + 0x12;
    uVar23 = param_1[0x13];
    uVar14 = *puVar6;
    uVar32 = param_1[8];
    uVar31 = param_1[7];
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                  CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                           CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                             (byte)((ulong)uVar23 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                      (byte)((ulong)uVar23 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                               (byte)((ulong)uVar23 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                        (byte)((ulong)uVar23 >> 8),
                                                                        (byte)uVar32 ^ (byte)uVar23)
                                                              ))))));
    *puVar6 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                       CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                         (byte)((ulong)uVar14 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                  (byte)((ulong)uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar31 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar31 ^
                                                                                      (byte)uVar14))
                                                          )))));
    (*(code *)*param_1)(puVar6,&local_50,param_1[2]);
    if (uVar8 == 1) {
      lVar11 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar11 = lVar4 + 2;
        *(byte *)((long)param_3 + lVar4) =
             *(byte *)((long)&local_50 + lVar4) ^ *(byte *)((long)param_2 + lVar4);
        ((byte *)((long)param_3 + lVar4))[1] =
             *(byte *)((long)&local_50 + lVar4 + 1) ^ ((byte *)((long)param_2 + lVar4))[1];
        lVar4 = lVar11;
      } while (uVar8 - (param_4 & 1) != lVar11);
    }
    if ((param_4 & 1) != 0) {
      *(byte *)((long)param_3 + lVar11) =
           *(byte *)((long)&local_50 + lVar11) ^ *(byte *)((long)param_2 + lVar11);
    }
    memset((undefined1 *)((ulong)&local_50 | uVar8),0,0x10 - uVar8);
    memcpy(&local_50,param_3,uVar8);
    *(undefined1 *)((ulong)&local_50 | uVar8) = 0x80;
    uVar23 = param_1[0x15];
    uVar14 = param_1[0x14];
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(uStack_48 >> 0x38),
                  CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(uStack_48 >> 0x30),
                           CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)(uStack_48 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                             (byte)(uStack_48 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                      (byte)(uStack_48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                               (byte)(uStack_48 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                        (byte)(uStack_48 >> 8),
                                                                        (byte)uVar23 ^
                                                                        (byte)uStack_48)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(local_50 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(local_50 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)(local_50 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)(local_50 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)(local_50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)(local_50 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                        (byte)(local_50 >> 8),
                                                                        (byte)uVar14 ^
                                                                        (byte)local_50)))))));
  }
  param_1[0xd] = uVar1;
  return 1;
}


