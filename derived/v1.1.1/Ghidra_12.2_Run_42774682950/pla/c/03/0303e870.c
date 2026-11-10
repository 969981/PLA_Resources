/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303e870; name: FUN_0303e870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0303e870(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar6 = DAT_0388a748;
  uVar8 = DAT_0388a730;
  uVar16 = NEON_fmov(0x3f800000,4);
  param_1[5] = uVar16;
  param_1[0x1b] = 0xc2055555c2055555;
  param_1[0x1a] = 0x4285555542855555;
  uVar15 = _UNK_03889b48;
  uVar1 = _DAT_03889b40;
  uVar9 = _UNK_03889498;
  uVar16 = _DAT_03889490;
  *param_1 = 0x3e8000003f000000;
  param_1[0x17] = uVar15;
  param_1[0x16] = uVar1;
  param_1[0x19] = uVar9;
  param_1[0x18] = uVar16;
  param_1[0x1c] = 0x3f0e38e43fe66666;
  param_1[0x1d] = 0x3e8e38e440666666;
  param_1[1] = 0x3f6666663f666666;
  param_1[0xe] = 0x3e80000000000004;
  param_1[0xf] = 0x3f80000000000001;
  fVar2 = (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar3 = fVar2 + fVar7 + 0.0;
  uVar6 = CONCAT44(fVar2 + fVar7 + 0.0,fVar3);
  fVar7 = (float)uVar8;
  fVar10 = (float)((ulong)uVar8 >> 0x20);
  fVar2 = fVar7 + fVar10 + 0.0;
  uVar15 = CONCAT44(fVar7 + fVar10 + 0.0,fVar2);
  uVar8 = NEON_frsqrte(uVar15,4);
  param_1[2] = 0x3d0888893d088889;
  param_1[3] = 0x41efffff41efffff;
  param_1[6] = 0x3d0888893d088889;
  param_1[8] = 0x42efffff42efffff;
  param_1[7] = 0x3c0888893c088889;
  uVar1 = _DAT_0388a440;
  uVar9 = _UNK_03889928;
  uVar16 = _DAT_03889920;
  uVar12 = NEON_frsqrte(uVar6,4);
  fVar11 = (float)uVar12;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  uVar12 = NEON_frsqrts(uVar6,CONCAT44(fVar13 * fVar13,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar12;
  fVar13 = fVar13 * (float)((ulong)uVar12 >> 0x20);
  fVar7 = (float)uVar8;
  fVar10 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(uVar15,CONCAT44(fVar10 * fVar10,fVar7 * fVar7),4);
  fVar7 = fVar7 * (float)uVar8;
  fVar10 = fVar10 * (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(uVar6,CONCAT44(fVar13 * fVar13,fVar11 * fVar11),4);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar10 * fVar10,fVar7 * fVar7),4);
  fVar10 = fVar3 * (float)uVar8 * fVar11;
  iVar4 = -(uint)(fVar3 <= 0.0);
  uVar14 = (undefined4)_UNK_0388a448;
  iVar5 = -(uint)(fVar2 <= 0.0);
  fVar2 = fVar2 * (float)uVar15 * fVar7;
  fVar2 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar5)));
  param_1[4] = 0;
  param_1[0x13] = uVar9;
  param_1[0x12] = uVar16;
  param_1[0x15] =
       CONCAT44(CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                         CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                  CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                           SUB41(fVar10,0) & ~(byte)iVar4))),uVar14);
  param_1[0x14] = uVar1;
  if (fVar2 == 0.0) {
    fVar2 = 9.81;
  }
  *(float *)(param_1 + 0x10) = fVar2;
  uVar16 = NEON_frecpe(0x454ccb33454ccb33,4);
  uVar9 = NEON_frecps(0x454ccb33454ccb33,uVar16,4);
  fVar2 = (float)uVar16 * (float)uVar9;
  fVar3 = (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar9 >> 0x20);
  uVar16 = NEON_frecps(0x454ccb33454ccb33,CONCAT44(fVar3,fVar2),4);
  param_1[9] = 0x454ccb33454ccb33;
  param_1[10] = CONCAT44(fVar3 * (float)((ulong)uVar16 >> 0x20),fVar2 * (float)uVar16);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3dcccccd;
  param_1[0xb] = 0x3dcccccd3dcccccd;
  return;
}


