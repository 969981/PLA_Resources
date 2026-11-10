/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1318; name: FUN_031f1318
 */


bool FUN_031f1318(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) &&
     (fVar5 = *(float *)(param_1 + 0x20),
     ABS((float)param_3[1] - (float)*(undefined8 *)(lVar3 + 0x68)) <= fVar5 &&
     (ABS((float)*param_3 - (float)*(undefined8 *)(lVar3 + 0x60)) <= fVar5 &&
     ABS((float)((ulong)*param_3 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20))
     <= fVar5))) {
    uVar13 = *(undefined8 *)(lVar3 + 0x48);
    uVar11 = *(undefined8 *)(lVar3 + 0x40);
    fVar6 = (float)*param_2;
    fVar10 = fVar6 * (float)uVar11;
    fVar7 = (float)((ulong)*param_2 >> 0x20);
    fVar12 = fVar7 * (float)((ulong)uVar11 >> 0x20);
    uVar15 = (undefined1)((uint)fVar12 >> 8);
    uVar16 = (undefined1)((uint)fVar12 >> 0x10);
    uVar17 = (undefined1)((uint)fVar12 >> 0x18);
    fVar8 = (float)param_2[1];
    fVar4 = fVar8 * (float)uVar13;
    uVar19 = (undefined1)((uint)fVar4 >> 8);
    uVar20 = (undefined1)((uint)fVar4 >> 0x10);
    uVar21 = (undefined1)((uint)fVar4 >> 0x18);
    fVar9 = (float)((ulong)param_2[1] >> 0x20);
    fVar2 = fVar9 * (float)((ulong)uVar13 >> 0x20);
    uVar22 = (undefined1)((uint)fVar2 >> 8);
    uVar23 = (undefined1)((uint)fVar2 >> 0x10);
    uVar24 = (undefined1)((uint)fVar2 >> 0x18);
    auVar25[4] = SUB41(fVar12,0);
    auVar25._0_4_ = fVar10;
    auVar25[5] = uVar15;
    auVar25[6] = uVar16;
    auVar25[7] = uVar17;
    auVar25[8] = SUB41(fVar4,0);
    auVar25[9] = uVar19;
    auVar25[10] = uVar20;
    auVar25[0xb] = uVar21;
    auVar25[0xc] = SUB41(fVar2,0);
    auVar25[0xd] = uVar22;
    auVar25[0xe] = uVar23;
    auVar25[0xf] = uVar24;
    auVar1[4] = SUB41(fVar12,0);
    auVar1._0_4_ = fVar10;
    auVar1[5] = uVar15;
    auVar1[6] = uVar16;
    auVar1[7] = uVar17;
    auVar1[8] = SUB41(fVar4,0);
    auVar1[9] = uVar19;
    auVar1[10] = uVar20;
    auVar1[0xb] = uVar21;
    auVar1[0xc] = SUB41(fVar2,0);
    auVar1[0xd] = uVar22;
    auVar1[0xe] = uVar23;
    auVar1[0xf] = uVar24;
    auVar25 = NEON_ext(auVar25,auVar1,8,1);
    fVar4 = auVar25._0_4_ + auVar25._4_4_;
    bVar14 = (byte)((uint)(fVar10 + fVar12 + fVar4) >> 0x18);
    bVar18 = (byte)((uint)(fVar10 + fVar12 + fVar4) >> 0x18);
    fVar10 = (float)CONCAT13(bVar14 & 0x80 ^ (byte)((ulong)uVar11 >> 0x18),(int3)uVar11);
    fVar12 = (float)CONCAT13(bVar14 & 0x80 ^ (byte)((ulong)uVar13 >> 0x18),(int3)uVar13);
    if (ABS(fVar9 - (float)(CONCAT17(bVar18 & 0x80 ^ (byte)((ulong)uVar13 >> 0x38),
                                     CONCAT16((char)((ulong)uVar13 >> 0x30),
                                              CONCAT15((char)((ulong)uVar13 >> 0x28),
                                                       CONCAT14((char)((ulong)uVar13 >> 0x20),fVar12
                                                               )))) >> 0x20)) <= fVar5 &&
        (ABS(fVar8 - fVar12) <= fVar5 &&
        (ABS(fVar6 - fVar10) <= fVar5 &&
        ABS(fVar7 - (float)(CONCAT17(bVar18 & 0x80 ^ (byte)((ulong)uVar11 >> 0x38),
                                     CONCAT16((char)((ulong)uVar11 >> 0x30),
                                              CONCAT15((char)((ulong)uVar11 >> 0x28),
                                                       CONCAT14((char)((ulong)uVar11 >> 0x20),fVar10
                                                               )))) >> 0x20)) <= fVar5))) {
      return (ABS((float)param_2[2] - (float)*(undefined8 *)(lVar3 + 0x50)) <= fVar5 &&
             ABS((float)((ulong)param_2[2] >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20)) <= fVar5) &&
             ABS((float)param_2[3] - (float)*(undefined8 *)(lVar3 + 0x58)) <= fVar5;
    }
  }
  return false;
}


