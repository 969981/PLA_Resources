/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048f60; name: FUN_03048f60
 */


void FUN_03048f60(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined2 uVar12;
  undefined8 uVar11;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  
  bVar1 = *(byte *)(param_2 + 0x20);
  if (*(byte *)(param_2 + 0x20) <= *(byte *)(param_3 + 0x20)) {
    bVar1 = *(byte *)(param_3 + 0x20);
  }
  uVar6 = NEON_fmax((ulong)CONCAT42((uint)*(ushort *)(param_2 + 0x1c) << 0x10,
                                    *(ushort *)(param_2 + 0x1c)) << 0x10,
                    (ulong)CONCAT42((uint)*(ushort *)(param_3 + 0x1c) << 0x10,
                                    *(ushort *)(param_3 + 0x1c)) << 0x10,4);
  fVar9 = (float)((uint)*(ushort *)(param_2 + 0x1a) << 0x10);
  fVar7 = (float)((uint)*(ushort *)(param_3 + 0x1a) << 0x10);
  lVar2 = (ulong)CONCAT42(fVar9,*(ushort *)(param_2 + 0x1a)) << 0x10;
  lVar5 = (ulong)CONCAT42(fVar7,*(ushort *)(param_3 + 0x1a)) << 0x10;
  if (bVar1 == 1) {
    uVar4 = NEON_fmin(lVar2,lVar5,4);
  }
  else if (bVar1 == 0) {
    fVar8 = (float)lVar2 * (float)lVar5;
    fVar9 = fVar9 * fVar7;
    uVar4 = NEON_frsqrte(CONCAT44(fVar9,fVar8),4);
    fVar7 = (float)uVar4;
    fVar14 = (float)((ulong)uVar4 >> 0x20);
    uVar4 = NEON_frsqrts(CONCAT44(fVar9,fVar8),CONCAT44(fVar14 * fVar14,fVar7 * fVar7),4);
    iVar10 = -(uint)(fVar8 <= 0.0);
    iVar13 = -(uint)(fVar9 <= 0.0);
    fVar8 = fVar8 * fVar7 * (float)uVar4;
    fVar9 = fVar9 * fVar14 * (float)((ulong)uVar4 >> 0x20);
    uVar4 = CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                     CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                              CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                       CONCAT14(SUB41(fVar9,0) & ~(byte)iVar13,
                                                CONCAT13((byte)((uint)fVar8 >> 0x18) &
                                                         ~(byte)((uint)iVar10 >> 0x18),
                                                         CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                                                  ~(byte)((uint)iVar10 >> 0x10),
                                                                  CONCAT11((byte)((uint)fVar8 >> 8)
                                                                           & ~(byte)((uint)iVar10 >>
                                                                                    8),
                                                                           SUB41(fVar8,0) &
                                                                           ~(byte)iVar10)))))));
  }
  else {
    uVar4 = NEON_fmax(lVar2,lVar5,4);
    if (bVar1 != 2) {
      uVar4 = CONCAT44((fVar9 + fVar7) * 0.5,((float)lVar2 + (float)lVar5) * 0.5);
    }
  }
  bVar1 = *(byte *)(param_2 + 0x21);
  if (*(byte *)(param_2 + 0x21) <= *(byte *)(param_3 + 0x21)) {
    bVar1 = *(byte *)(param_3 + 0x21);
  }
  uVar6 = NEON_fmax(CONCAT44((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                             (float)uVar6 - (float)uVar4),0,4);
  fVar9 = (float)((uint)*(ushort *)(param_2 + 0x1e) << 0x10);
  fVar7 = (float)((uint)*(ushort *)(param_3 + 0x1e) << 0x10);
  lVar2 = (ulong)CONCAT42(fVar9,*(ushort *)(param_2 + 0x1e)) << 0x10;
  lVar5 = (ulong)CONCAT42(fVar7,*(ushort *)(param_3 + 0x1e)) << 0x10;
  if (bVar1 == 2) {
    uVar11 = NEON_fmax(lVar2,lVar5,4);
    uVar12 = (undefined2)((ulong)uVar11 >> 0x10);
  }
  else if (bVar1 == 1) {
    uVar11 = NEON_fmin(lVar2,lVar5,4);
    uVar12 = (undefined2)((ulong)uVar11 >> 0x10);
  }
  else if (bVar1 == 0) {
    fVar8 = (float)lVar2 * (float)lVar5;
    uVar11 = CONCAT44(fVar9 * fVar7,fVar8);
    uVar15 = NEON_frsqrte(uVar11,4);
    fVar9 = (float)uVar15;
    fVar7 = (float)((ulong)uVar15 >> 0x20);
    uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar7 * fVar7,fVar9 * fVar9),4);
    fVar9 = fVar8 * fVar9 * (float)uVar11;
    uVar12 = CONCAT11((byte)((uint)fVar9 >> 0x18) & ~(byte)(-(uint)(fVar8 <= 0.0) >> 0x18),
                      (byte)((uint)fVar9 >> 0x10) & ~(byte)(-(uint)(fVar8 <= 0.0) >> 0x10));
  }
  else {
    uVar12 = (undefined2)((uint)(((float)lVar2 + (float)lVar5) * 0.5) >> 0x10);
  }
  *(undefined2 *)(param_1 + 0x34) = uVar12;
  *(short *)(param_1 + 0x30) = (short)((ulong)uVar4 >> 0x10);
  *(short *)(param_1 + 0x32) = (short)((ulong)uVar6 >> 0x10);
  lVar2 = 0;
  if ((*(byte *)(param_5 + 0x1a) & 1) != 0) {
    lVar2 = param_5;
  }
  if ((param_4 == 0) || ((*(ushort *)(param_4 + 0x1a) & 1) == 0)) {
    if (*(char *)(param_4 + 0x18) == '\x11') {
      lVar3 = *(long *)(param_4 + 0x40);
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar5 = lVar3 + param_4 + 0x40;
      }
      param_4 = 0;
      if ((*(byte *)(lVar5 + 0x1a) & 1) != 0) {
        param_4 = lVar5;
      }
      goto LAB_0304906c;
    }
    lVar5 = 0x7f7fffee7f7fffee;
  }
  else {
LAB_0304906c:
    lVar5 = (ulong)CONCAT42((uint)*(ushort *)(param_4 + 0x70) << 0x10,*(ushort *)(param_4 + 0x70))
            << 0x10;
  }
  if (lVar2 == 0) {
    if (*(char *)(param_5 + 0x18) != '\x11') {
      lVar2 = 0x7f7fffee7f7fffee;
      goto LAB_030490b8;
    }
    lVar2 = *(long *)(param_5 + 0x40);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2 + param_5 + 0x40;
    }
    lVar2 = 0;
    if ((*(byte *)(lVar3 + 0x1a) & 1) != 0) {
      lVar2 = lVar3;
    }
  }
  lVar2 = (ulong)CONCAT42((uint)*(ushort *)(lVar2 + 0x70) << 0x10,*(ushort *)(lVar2 + 0x70)) << 0x10
  ;
LAB_030490b8:
  uVar6 = NEON_fmin(lVar5,lVar2,4);
  uVar4 = NEON_fmax(CONCAT44(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x24)),
                    CONCAT44(*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x24)),4);
  uVar6 = NEON_fmin(uVar4,uVar6,4);
  *(short *)(param_1 + 0x38) = (short)((uint)((float)uVar6 * 1.0039062) >> 0x10);
  return;
}


