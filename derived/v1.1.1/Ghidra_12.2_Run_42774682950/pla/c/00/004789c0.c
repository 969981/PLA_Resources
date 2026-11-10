/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004789c0; name: FUN_004789c0
 */


undefined8 FUN_004789c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = param_1[0xd];
  uVar10 = param_4 >> 4;
  uVar1 = uVar7 + uVar10;
  if ((uVar10 == 0) || (param_1[4] == 0)) {
    while (uVar7 = uVar7 + 1, uVar7 <= uVar1) {
      iVar6 = 0;
      if ((uVar7 & 1) == 0) {
        uVar10 = uVar7;
        do {
          uVar2 = (uint)uVar10;
          uVar10 = uVar10 >> 1;
          iVar6 = iVar6 + 1;
        } while ((uVar2 >> 1 & 1) == 0);
      }
      puVar4 = (ulong *)FUN_00478870(param_1,iVar6);
      if (puVar4 == (ulong *)0x0) {
        return 0;
      }
      uVar10 = *puVar4 ^ param_1[0x12];
      param_1[0x12] = uVar10;
      uVar8 = puVar4[1] ^ param_1[0x13];
      param_1[0x13] = uVar8;
      uVar19 = param_2[1];
      uVar11 = *param_2;
      uVar28 = param_1[0x15];
      uVar27 = param_1[0x14];
      bVar12 = (byte)((ulong)uVar11 >> 8);
      bVar13 = (byte)((ulong)uVar11 >> 0x10);
      bVar14 = (byte)((ulong)uVar11 >> 0x18);
      bVar15 = (byte)((ulong)uVar11 >> 0x20);
      bVar16 = (byte)((ulong)uVar11 >> 0x28);
      bVar17 = (byte)((ulong)uVar11 >> 0x30);
      bVar18 = (byte)((ulong)uVar11 >> 0x38);
      bVar20 = (byte)((ulong)uVar19 >> 8);
      bVar21 = (byte)((ulong)uVar19 >> 0x10);
      bVar22 = (byte)((ulong)uVar19 >> 0x18);
      bVar23 = (byte)((ulong)uVar19 >> 0x20);
      bVar24 = (byte)((ulong)uVar19 >> 0x28);
      bVar25 = (byte)((ulong)uVar19 >> 0x30);
      bVar26 = (byte)((ulong)uVar19 >> 0x38);
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ bVar26,
                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ bVar25,
                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ bVar24,
                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^ bVar23,
                                               CONCAT13((byte)((ulong)uVar28 >> 0x18) ^ bVar22,
                                                        CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                 bVar21,CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ bVar20,(byte)uVar28 ^ (byte)uVar19)
                                                  ))))));
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ bVar18,
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ bVar17,
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ bVar16,
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^ bVar15,
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) ^ bVar14,
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                 bVar13,CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ bVar12,(byte)uVar27 ^ (byte)uVar11)
                                                  ))))));
      local_50 = CONCAT17(bVar18 ^ (byte)(uVar10 >> 0x38),
                          CONCAT16(bVar17 ^ (byte)(uVar10 >> 0x30),
                                   CONCAT15(bVar16 ^ (byte)(uVar10 >> 0x28),
                                            CONCAT14(bVar15 ^ (byte)(uVar10 >> 0x20),
                                                     CONCAT13(bVar14 ^ (byte)(uVar10 >> 0x18),
                                                              CONCAT12(bVar13 ^ (byte)(uVar10 >>
                                                                                      0x10),
                                                                       CONCAT11(bVar12 ^ (byte)(
                                                  uVar10 >> 8),(byte)uVar11 ^ (byte)uVar10)))))));
      uStack_48 = CONCAT17(bVar26 ^ (byte)(uVar8 >> 0x38),
                           CONCAT16(bVar25 ^ (byte)(uVar8 >> 0x30),
                                    CONCAT15(bVar24 ^ (byte)(uVar8 >> 0x28),
                                             CONCAT14(bVar23 ^ (byte)(uVar8 >> 0x20),
                                                      CONCAT13(bVar22 ^ (byte)(uVar8 >> 0x18),
                                                               CONCAT12(bVar21 ^ (byte)(uVar8 >> 
                                                  0x10),CONCAT11(bVar20 ^ (byte)(uVar8 >> 8),
                                                                 (byte)uVar19 ^ (byte)uVar8)))))));
      (*(code *)*param_1)(&local_50,&local_50,param_1[2]);
      uVar19 = param_1[0x13];
      uVar11 = param_1[0x12];
      local_50 = CONCAT17((byte)((ulong)local_50 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                          CONCAT16((byte)((ulong)local_50 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                   CONCAT15((byte)((ulong)local_50 >> 0x28) ^
                                            (byte)((ulong)uVar11 >> 0x28),
                                            CONCAT14((byte)((ulong)local_50 >> 0x20) ^
                                                     (byte)((ulong)uVar11 >> 0x20),
                                                     CONCAT13((byte)((ulong)local_50 >> 0x18) ^
                                                              (byte)((ulong)uVar11 >> 0x18),
                                                              CONCAT12((byte)((ulong)local_50 >>
                                                                             0x10) ^
                                                                       (byte)((ulong)uVar11 >> 0x10)
                                                                       ,CONCAT11((byte)((ulong)
                                                  local_50 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)local_50 ^ (byte)uVar11)))))));
      uStack_48 = CONCAT17((byte)((ulong)uStack_48 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                           CONCAT16((byte)((ulong)uStack_48 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                    ,CONCAT15((byte)((ulong)uStack_48 >> 0x28) ^
                                              (byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14((byte)((ulong)uStack_48 >> 0x20) ^
                                                       (byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13((byte)((ulong)uStack_48 >> 0x18) ^
                                                                (byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12((byte)((ulong)uStack_48 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uStack_48 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uStack_48 ^ (byte)uVar19)))))));
      param_3[1] = uStack_48;
      *param_3 = local_50;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar3 = FUN_00478870(param_1,0x40 - LZCOUNT(uVar1 >> 1));
    if (lVar3 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,uVar10,param_1[2],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  if ((param_4 & 0xf) != 0) {
    uVar7 = param_4 & 0xf;
    puVar5 = param_1 + 0x12;
    uVar19 = param_1[0x13];
    uVar11 = *puVar5;
    uVar28 = param_1[8];
    uVar27 = param_1[7];
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                  CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                           CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                             (byte)((ulong)uVar19 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                      (byte)((ulong)uVar19 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                               (byte)((ulong)uVar19 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                                        (byte)((ulong)uVar19 >> 8),
                                                                        (byte)uVar28 ^ (byte)uVar19)
                                                              ))))));
    *puVar5 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                       CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                         (byte)((ulong)uVar11 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                  (byte)((ulong)uVar11 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                           (byte)((ulong)uVar11 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                    (byte)((ulong)uVar11 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar27 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   8),(byte)uVar27 ^
                                                                                      (byte)uVar11))
                                                          )))));
    (*(code *)*param_1)(puVar5,&local_50,param_1[2]);
    if (uVar7 == 1) {
      lVar9 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar9 = lVar3 + 2;
        *(byte *)((long)param_3 + lVar3) =
             *(byte *)((long)&local_50 + lVar3) ^ *(byte *)((long)param_2 + lVar3);
        ((byte *)((long)param_3 + lVar3))[1] =
             *(byte *)((long)&local_50 + lVar3 + 1) ^ ((byte *)((long)param_2 + lVar3))[1];
        lVar3 = lVar9;
      } while (uVar7 - (param_4 & 1) != lVar9);
    }
    if ((param_4 & 1) != 0) {
      *(byte *)((long)param_3 + lVar9) =
           *(byte *)((long)&local_50 + lVar9) ^ *(byte *)((long)param_2 + lVar9);
    }
    memset((undefined1 *)((ulong)&local_50 | uVar7),0,0x10 - uVar7);
    memcpy(&local_50,param_2,uVar7);
    *(undefined1 *)((ulong)&local_50 | uVar7) = 0x80;
    uVar19 = param_1[0x15];
    uVar11 = param_1[0x14];
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uStack_48 >> 0x38),
                  CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uStack_48 >> 0x30),
                           CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uStack_48 >> 0x28)
                                    ,CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                              (byte)((ulong)uStack_48 >> 0x20),
                                              CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                       (byte)((ulong)uStack_48 >> 0x18),
                                                       CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                (byte)((ulong)uStack_48 >> 0x10),
                                                                CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                         ^ (byte)((ulong)uStack_48
                                                                                 >> 8),
                                                                         (byte)uVar19 ^
                                                                         (byte)uStack_48)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ (byte)((ulong)local_50 >> 0x38),
                  CONCAT16((byte)((ulong)uVar11 >> 0x30) ^ (byte)((ulong)local_50 >> 0x30),
                           CONCAT15((byte)((ulong)uVar11 >> 0x28) ^ (byte)((ulong)local_50 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar11 >> 0x20) ^
                                             (byte)((ulong)local_50 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar11 >> 0x18) ^
                                                      (byte)((ulong)local_50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar11 >> 0x10) ^
                                                               (byte)((ulong)local_50 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar11 >> 8) ^
                                                                        (byte)((ulong)local_50 >> 8)
                                                                        ,(byte)uVar11 ^
                                                                         (byte)local_50)))))));
  }
  param_1[0xd] = uVar1;
  return 1;
}


