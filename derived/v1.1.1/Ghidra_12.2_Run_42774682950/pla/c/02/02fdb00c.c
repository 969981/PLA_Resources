/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdb00c; name: FUN_02fdb00c
 */


void FUN_02fdb00c(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_30 [12];
  float local_24;
  
  puVar2 = PTR_DAT_04349f00;
  if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x4c) == 4)) {
    piVar1 = (int *)(param_1 + 0x48);
    puVar3 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    uVar12 = puVar3[3];
    uVar9 = puVar3[2];
    uVar7 = *(undefined8 *)(PTR_DAT_04349f00 + 8);
    uVar5 = *(undefined8 *)PTR_DAT_04349f00;
    iVar10 = CONCAT13((byte)((ulong)uVar5 >> 0x18) & (byte)((ulong)uVar9 >> 0x18),
                      CONCAT12((byte)((ulong)uVar5 >> 0x10) & (byte)((ulong)uVar9 >> 0x10),
                               CONCAT11((byte)((ulong)uVar5 >> 8) & (byte)((ulong)uVar9 >> 8),
                                        (byte)uVar5 & (byte)uVar9)));
    iVar13 = CONCAT13((byte)((ulong)uVar7 >> 0x18) & (byte)((ulong)uVar12 >> 0x18),
                      CONCAT12((byte)((ulong)uVar7 >> 0x10) & (byte)((ulong)uVar12 >> 0x10),
                               CONCAT11((byte)((ulong)uVar7 >> 8) & (byte)((ulong)uVar12 >> 8),
                                        (byte)uVar7 & (byte)uVar12)));
    iVar8 = -(uint)(iVar10 == (int)uVar5);
    iVar10 = -(uint)((int)(CONCAT17((byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)uVar9 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar5 >> 0x30) &
                                             (byte)((ulong)uVar9 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar5 >> 0x28) &
                                                      (byte)((ulong)uVar9 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                                               (byte)((ulong)uVar9 >> 0x20),iVar10))
                                            )) >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    iVar11 = -(uint)(iVar13 == (int)uVar7);
    iVar13 = -(uint)((int)(CONCAT17((byte)((ulong)uVar7 >> 0x38) & (byte)((ulong)uVar12 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar7 >> 0x30) &
                                             (byte)((ulong)uVar12 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar7 >> 0x28) &
                                                      (byte)((ulong)uVar12 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar7 >> 0x20) &
                                                               (byte)((ulong)uVar12 >> 0x20),iVar13)
                                                     ))) >> 0x20) == (int)((ulong)uVar7 >> 0x20));
    uVar4 = CONCAT13(~(byte)((uint)iVar8 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar8 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar8 >> 8),~(byte)iVar8)));
    uVar6 = CONCAT13(~(byte)((uint)iVar11 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar11 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar11 >> 8),~(byte)iVar11)));
    if ((uVar4 & (uint)(CONCAT17(~(byte)((uint)iVar10 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar10 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar10 >> 8),
                                                   CONCAT14(~(byte)iVar10,uVar4)))) >> 0x20) & uVar6
        & (uint)(CONCAT17(~(byte)((uint)iVar13 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar13 >> 8),CONCAT14(~(byte)iVar13,uVar6)
                                           ))) >> 0x20)) == 0) {
      puVar3[3] = puVar3[1];
      puVar3[2] = *puVar3;
      uVar7 = *(undefined8 *)(puVar2 + 8);
      uVar5 = *(undefined8 *)puVar2;
      puVar3 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    }
    uVar12 = puVar3[5];
    uVar9 = puVar3[4];
    iVar10 = CONCAT13((byte)((ulong)uVar9 >> 0x18) & (byte)((ulong)uVar5 >> 0x18),
                      CONCAT12((byte)((ulong)uVar9 >> 0x10) & (byte)((ulong)uVar5 >> 0x10),
                               CONCAT11((byte)((ulong)uVar9 >> 8) & (byte)((ulong)uVar5 >> 8),
                                        (byte)uVar9 & (byte)uVar5)));
    iVar13 = CONCAT13((byte)((ulong)uVar12 >> 0x18) & (byte)((ulong)uVar7 >> 0x18),
                      CONCAT12((byte)((ulong)uVar12 >> 0x10) & (byte)((ulong)uVar7 >> 0x10),
                               CONCAT11((byte)((ulong)uVar12 >> 8) & (byte)((ulong)uVar7 >> 8),
                                        (byte)uVar12 & (byte)uVar7)));
    iVar8 = -(uint)(iVar10 == (int)uVar5);
    iVar10 = -(uint)((int)(CONCAT17((byte)((ulong)uVar9 >> 0x38) & (byte)((ulong)uVar5 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar9 >> 0x30) &
                                             (byte)((ulong)uVar5 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar9 >> 0x28) &
                                                      (byte)((ulong)uVar5 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar9 >> 0x20) &
                                                               (byte)((ulong)uVar5 >> 0x20),iVar10))
                                            )) >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    iVar11 = -(uint)(iVar13 == (int)uVar7);
    iVar13 = -(uint)((int)(CONCAT17((byte)((ulong)uVar12 >> 0x38) & (byte)((ulong)uVar7 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar12 >> 0x30) &
                                             (byte)((ulong)uVar7 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                                      (byte)((ulong)uVar7 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                               (byte)((ulong)uVar7 >> 0x20),iVar13))
                                            )) >> 0x20) == (int)((ulong)uVar7 >> 0x20));
    uVar4 = CONCAT13(~(byte)((uint)iVar8 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar8 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar8 >> 8),~(byte)iVar8)));
    uVar6 = CONCAT13(~(byte)((uint)iVar11 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar11 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar11 >> 8),~(byte)iVar11)));
    if ((uVar4 & (uint)(CONCAT17(~(byte)((uint)iVar10 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar10 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar10 >> 8),
                                                   CONCAT14(~(byte)iVar10,uVar4)))) >> 0x20) & uVar6
        & (uint)(CONCAT17(~(byte)((uint)iVar13 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar13 >> 8),CONCAT14(~(byte)iVar13,uVar6)
                                           ))) >> 0x20)) == 0) {
      puVar3[5] = puVar3[3];
      puVar3[4] = puVar3[2];
      uVar7 = *(undefined8 *)(puVar2 + 8);
      uVar5 = *(undefined8 *)puVar2;
      puVar3 = (undefined8 *)((long)*piVar1 + (long)piVar1);
    }
    uVar12 = puVar3[7];
    uVar9 = puVar3[6];
    iVar8 = CONCAT13((byte)((ulong)uVar9 >> 0x18) & (byte)((ulong)uVar5 >> 0x18),
                     CONCAT12((byte)((ulong)uVar9 >> 0x10) & (byte)((ulong)uVar5 >> 0x10),
                              CONCAT11((byte)((ulong)uVar9 >> 8) & (byte)((ulong)uVar5 >> 8),
                                       (byte)uVar9 & (byte)uVar5)));
    iVar11 = CONCAT13((byte)((ulong)uVar12 >> 0x18) & (byte)((ulong)uVar7 >> 0x18),
                      CONCAT12((byte)((ulong)uVar12 >> 0x10) & (byte)((ulong)uVar7 >> 0x10),
                               CONCAT11((byte)((ulong)uVar12 >> 8) & (byte)((ulong)uVar7 >> 8),
                                        (byte)uVar12 & (byte)uVar7)));
    iVar10 = -(uint)(iVar8 == (int)uVar5);
    iVar8 = -(uint)((int)(CONCAT17((byte)((ulong)uVar9 >> 0x38) & (byte)((ulong)uVar5 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar9 >> 0x30) &
                                            (byte)((ulong)uVar5 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar9 >> 0x28) &
                                                     (byte)((ulong)uVar5 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar9 >> 0x20) &
                                                              (byte)((ulong)uVar5 >> 0x20),iVar8))))
                         >> 0x20) == (int)((ulong)uVar5 >> 0x20));
    iVar13 = -(uint)(iVar11 == (int)uVar7);
    iVar11 = -(uint)((int)(CONCAT17((byte)((ulong)uVar12 >> 0x38) & (byte)((ulong)uVar7 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar12 >> 0x30) &
                                             (byte)((ulong)uVar7 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                                      (byte)((ulong)uVar7 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                               (byte)((ulong)uVar7 >> 0x20),iVar11))
                                            )) >> 0x20) == (int)((ulong)uVar7 >> 0x20));
    uVar4 = CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar10 >> 8),~(byte)iVar10)));
    uVar6 = CONCAT13(~(byte)((uint)iVar13 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar13 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar13 >> 8),~(byte)iVar13)));
    if ((uVar4 & (uint)(CONCAT17(~(byte)((uint)iVar8 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar8 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar8 >> 8),
                                                   CONCAT14(~(byte)iVar8,uVar4)))) >> 0x20) & uVar6
        & (uint)(CONCAT17(~(byte)((uint)iVar11 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar11 >> 8),CONCAT14(~(byte)iVar11,uVar6)
                                           ))) >> 0x20)) == 0) {
      puVar3[7] = puVar3[5];
      puVar3[6] = puVar3[4];
    }
  }
  if (((float)((uint)*(ushort *)(param_1 + 0x70) << 0x10) < 0.0) &&
     ((ulong)*(byte *)(param_1 + 0x18) != 4)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xa0))
              (param_1,auStack_30);
    *(short *)(param_1 + 0x70) = (short)((uint)(local_24 * DAT_042b0ab0 * 1.0039062) >> 0x10);
  }
  return;
}


