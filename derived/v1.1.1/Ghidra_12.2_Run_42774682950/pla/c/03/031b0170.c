/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b0170; name: FUN_031b0170
 */


undefined4 FUN_031b0170(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtfindDirectPath";
      uVar16 = nn::os::GetSystemTick();
      puVar1[1] = uVar16;
    }
  }
  uVar9 = param_2[0xf];
  uVar16 = param_2[0xe];
  uVar15 = *(undefined8 *)(PTR_DAT_04349f00 + 8);
  uVar12 = *(undefined8 *)PTR_DAT_04349f00;
  iVar13 = CONCAT13((byte)((ulong)uVar12 >> 0x18) & (byte)((ulong)uVar16 >> 0x18),
                    CONCAT12((byte)((ulong)uVar12 >> 0x10) & (byte)((ulong)uVar16 >> 0x10),
                             CONCAT11((byte)((ulong)uVar12 >> 8) & (byte)((ulong)uVar16 >> 8),
                                      (byte)uVar12 & (byte)uVar16)));
  iVar10 = -(uint)(iVar13 == (int)uVar12);
  iVar13 = -(uint)((int)(CONCAT17((byte)((ulong)uVar12 >> 0x38) & (byte)((ulong)uVar16 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar12 >> 0x30) &
                                           (byte)((ulong)uVar16 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                                    (byte)((ulong)uVar16 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                             (byte)((ulong)uVar16 >> 0x20),iVar13)))
                                 ) >> 0x20) == (int)((ulong)uVar12 >> 0x20));
  iVar14 = -(uint)(CONCAT13((byte)((ulong)uVar15 >> 0x18) & (byte)((ulong)uVar9 >> 0x18),
                            CONCAT12((byte)((ulong)uVar15 >> 0x10) & (byte)((ulong)uVar9 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar15 >> 8) & (byte)((ulong)uVar9 >> 8)
                                              ,(byte)uVar15 & (byte)uVar9))) == (int)uVar15);
  uVar11 = CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar10 >> 8),~(byte)iVar10)));
  if ((uVar11 & (uint)(CONCAT17(~(byte)((uint)iVar13 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar13 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar13 >> 8),
                                                  CONCAT14(~(byte)iVar13,uVar11)))) >> 0x20) &
      CONCAT13(~(byte)((uint)iVar14 >> 0x18),
               CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)))) != 0) {
    fVar6 = (float)uVar16;
    fVar7 = (float)((ulong)uVar16 >> 0x20);
    fVar8 = (float)uVar9;
    uVar16 = NEON_fmov(0xbf800000,4);
    if (ABS(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 + (float)uVar16) < 0.0001) {
      local_50 = CONCAT44((float)((ulong)*param_2 >> 0x20) + fVar7,(float)*param_2 + fVar6);
      uStack_48 = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)uVar9 >> 0x20),
                           (float)param_2[1] + fVar8);
      uVar2 = FUN_031ad0c8(param_2 + 0xe,&local_50,0xffffffff,param_1,param_2,param_3);
      goto joined_r0x031b02d8;
    }
  }
  uVar2 = 0;
joined_r0x031b02d8:
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar16 = nn::os::GetSystemTick();
      puVar1[1] = uVar16;
    }
  }
  return uVar2;
}


