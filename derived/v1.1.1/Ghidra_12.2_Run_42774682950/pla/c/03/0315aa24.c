/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315aa24; name: FUN_0315aa24
 */


bool FUN_0315aa24(long param_1)

{
  byte bVar5;
  uint uVar1;
  byte bVar3;
  byte bVar4;
  byte bVar6;
  byte bVar8;
  byte bVar9;
  undefined8 uVar2;
  byte bVar10;
  int iVar7;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar11;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(PTR_DAT_04349f00 + 8);
  uVar2 = *(undefined8 *)PTR_DAT_04349f00;
  bVar3 = (byte)((ulong)uVar2 >> 8);
  bVar4 = (byte)((ulong)uVar2 >> 0x10);
  bVar5 = (byte)((ulong)uVar2 >> 0x18);
  iVar17 = CONCAT13(bVar5 & (byte)((ulong)uVar16 >> 0x18),
                    CONCAT12(bVar4 & (byte)((ulong)uVar16 >> 0x10),
                             CONCAT11(bVar3 & (byte)((ulong)uVar16 >> 8),(byte)uVar2 & (byte)uVar16)
                            ));
  bVar6 = (byte)((ulong)uVar2 >> 0x20);
  bVar8 = (byte)((ulong)uVar2 >> 0x28);
  bVar9 = (byte)((ulong)uVar2 >> 0x30);
  bVar10 = (byte)((ulong)uVar2 >> 0x38);
  bVar12 = (byte)((ulong)uVar11 >> 8);
  bVar13 = (byte)((ulong)uVar11 >> 0x10);
  bVar14 = (byte)((ulong)uVar11 >> 0x18);
  iVar15 = -(uint)(iVar17 == (int)uVar2);
  iVar7 = (int)((ulong)uVar2 >> 0x20);
  iVar17 = -(uint)((int)(CONCAT17(bVar10 & (byte)((ulong)uVar16 >> 0x38),
                                  CONCAT16(bVar9 & (byte)((ulong)uVar16 >> 0x30),
                                           CONCAT15(bVar8 & (byte)((ulong)uVar16 >> 0x28),
                                                    CONCAT14(bVar6 & (byte)((ulong)uVar16 >> 0x20),
                                                             iVar17)))) >> 0x20) == iVar7);
  iVar18 = -(uint)(CONCAT13(bVar14 & (byte)((ulong)uVar19 >> 0x18),
                            CONCAT12(bVar13 & (byte)((ulong)uVar19 >> 0x10),
                                     CONCAT11(bVar12 & (byte)((ulong)uVar19 >> 8),
                                              (byte)uVar11 & (byte)uVar19))) == (int)uVar11);
  uVar1 = CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15)));
  if ((uVar1 & (uint)(CONCAT17(~(byte)((uint)iVar17 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar17 >> 0x10),
                                        CONCAT15(~(byte)((uint)iVar17 >> 8),
                                                 CONCAT14(~(byte)iVar17,uVar1)))) >> 0x20) &
      CONCAT13(~(byte)((uint)iVar18 >> 0x18),
               CONCAT12(~(byte)((uint)iVar18 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)))) == 0) {
    return false;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  iVar15 = CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar5,
                    CONCAT12((byte)((ulong)uVar16 >> 0x10) & bVar4,
                             CONCAT11((byte)((ulong)uVar16 >> 8) & bVar3,(byte)uVar16 & (byte)uVar2)
                            ));
  iVar17 = -(uint)(iVar15 == (int)uVar2);
  iVar7 = -(uint)((int)(CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar10,
                                 CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar9,
                                          CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar8,
                                                   CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar6,
                                                            iVar15)))) >> 0x20) == iVar7);
  iVar15 = -(uint)(CONCAT13((byte)((ulong)uVar19 >> 0x18) & bVar14,
                            CONCAT12((byte)((ulong)uVar19 >> 0x10) & bVar13,
                                     CONCAT11((byte)((ulong)uVar19 >> 8) & bVar12,
                                              (byte)uVar19 & (byte)uVar11))) == (int)uVar11);
  uVar1 = CONCAT13(~(byte)((uint)iVar17 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar17 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar17 >> 8),~(byte)iVar17)));
  return (uVar1 & (uint)(CONCAT17(~(byte)((uint)iVar7 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar7 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar7 >> 8),
                                                    CONCAT14(~(byte)iVar7,uVar1)))) >> 0x20) &
         CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15)))) != 0;
}


