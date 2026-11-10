/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315a95c; name: FUN_0315a95c
 */


bool FUN_0315a95c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(PTR_DAT_04349f00 + 8);
  uVar7 = *(undefined8 *)PTR_DAT_04349f00;
  iVar4 = CONCAT13((byte)((ulong)uVar7 >> 0x18) & (byte)((ulong)uVar3 >> 0x18),
                   CONCAT12((byte)((ulong)uVar7 >> 0x10) & (byte)((ulong)uVar3 >> 0x10),
                            CONCAT11((byte)((ulong)uVar7 >> 8) & (byte)((ulong)uVar3 >> 8),
                                     (byte)uVar7 & (byte)uVar3)));
  iVar1 = -(uint)(iVar4 == (int)uVar7);
  iVar4 = -(uint)((int)(CONCAT17((byte)((ulong)uVar7 >> 0x38) & (byte)((ulong)uVar3 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar7 >> 0x30) &
                                          (byte)((ulong)uVar3 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar7 >> 0x28) &
                                                   (byte)((ulong)uVar3 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar7 >> 0x20) &
                                                            (byte)((ulong)uVar3 >> 0x20),iVar4))))
                       >> 0x20) == (int)((ulong)uVar7 >> 0x20));
  iVar5 = -(uint)(CONCAT13((byte)((ulong)uVar8 >> 0x18) & (byte)((ulong)uVar6 >> 0x18),
                           CONCAT12((byte)((ulong)uVar8 >> 0x10) & (byte)((ulong)uVar6 >> 0x10),
                                    CONCAT11((byte)((ulong)uVar8 >> 8) & (byte)((ulong)uVar6 >> 8),
                                             (byte)uVar8 & (byte)uVar6))) == (int)uVar8);
  uVar2 = CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar1 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar1 >> 8),~(byte)iVar1)));
  if ((uVar2 & (uint)(CONCAT17(~(byte)((uint)iVar4 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar4 >> 0x10),
                                        CONCAT15(~(byte)((uint)iVar4 >> 8),
                                                 CONCAT14(~(byte)iVar4,uVar2)))) >> 0x20) &
      CONCAT13(~(byte)((uint)iVar5 >> 0x18),
               CONCAT12(~(byte)((uint)iVar5 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar5 >> 8),~(byte)iVar5)))) == 0) {
    return false;
  }
  return 0.0 < (float)*(undefined8 *)(param_1 + 0x40);
}


