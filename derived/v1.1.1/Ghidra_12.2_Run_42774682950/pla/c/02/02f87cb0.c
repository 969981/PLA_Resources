/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f87cb0; name: FUN_02f87cb0
 */


void FUN_02f87cb0(long *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar4 = (long)(int)param_1[1];
  if (0 < (int)param_1[1]) {
    uVar8 = 0;
    pfVar5 = (float *)*param_1;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    do {
      lVar4 = lVar4 + -1;
      fVar15 = *pfVar5;
      fVar16 = pfVar5[1];
      pfVar1 = pfVar5 + 4;
      pfVar3 = pfVar5 + 6;
      pfVar5 = pfVar5 + 0x14;
      fVar7 = (float)uVar8 + fVar16;
      uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar16,fVar7);
      fVar9 = fVar9 + (float)*(undefined8 *)pfVar1 * fVar16;
      fVar10 = fVar10 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * fVar16;
      fVar11 = fVar11 + (float)*(undefined8 *)pfVar3 * fVar16;
      fVar12 = fVar12 + (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar16;
      fVar13 = fVar13 + fVar15;
    } while (lVar4 != 0);
    if (0.0 < fVar7) {
      uVar14 = NEON_frecpe(uVar8,4);
      uVar17 = NEON_frecps(uVar8,uVar14,4);
      param_2[1] = fVar7;
      *param_2 = fVar13;
      param_2[8] = 0.0;
      param_2[9] = 0.0;
      param_2[10] = 0.0;
      param_2[0xb] = 0.0;
      param_2[0xc] = 0.0;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      param_2[0xf] = 0.0;
      fVar13 = (float)uVar14 * (float)uVar17;
      fVar15 = (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar17 >> 0x20);
      param_2[0x10] = 0.0;
      param_2[0x11] = 0.0;
      param_2[0x12] = 0.0;
      param_2[0x13] = 0.0;
      uVar8 = NEON_frecps(uVar8,CONCAT44(fVar15,fVar13),4);
      fVar13 = fVar13 * (float)uVar8;
      fVar15 = fVar15 * (float)((ulong)uVar8 >> 0x20);
      fVar9 = fVar9 * fVar13;
      fVar10 = fVar10 * fVar15;
      fVar11 = fVar11 * fVar13;
      fVar12 = fVar12 * fVar15;
      *(ulong *)(param_2 + 6) = CONCAT44(fVar12,fVar11);
      *(ulong *)(param_2 + 4) = CONCAT44(fVar10,fVar9);
      if (0 < (int)param_1[1]) {
        lVar6 = 0;
        lVar4 = 0;
        do {
          lVar2 = *param_1 + lVar6;
          uStack_58 = *(undefined8 *)(lVar2 + 0x28);
          local_60 = *(undefined8 *)(lVar2 + 0x20);
          uStack_48 = *(undefined8 *)(lVar2 + 0x38);
          local_50 = *(undefined8 *)(lVar2 + 0x30);
          uStack_38 = *(undefined8 *)(lVar2 + 0x48);
          local_40 = *(undefined8 *)(lVar2 + 0x40);
          local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) - fVar10,
                              (float)*(undefined8 *)(lVar2 + 0x10) - fVar9);
          uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar12,
                               (float)*(undefined8 *)(lVar2 + 0x18) - fVar11);
          local_78 = CONCAT44(*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 4));
          FUN_032906cc(&local_70,&local_78,&local_60);
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + 0x50;
          *(ulong *)(param_2 + 10) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) +
                        (float)((ulong)uStack_58 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 10) + (float)uStack_58);
          *(ulong *)(param_2 + 8) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) +
                        (float)((ulong)local_60 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 8) + (float)local_60);
          *(ulong *)(param_2 + 0xe) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) +
                        (float)((ulong)uStack_48 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0xe) + (float)uStack_48);
          *(ulong *)(param_2 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
                        (float)((ulong)local_50 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0xc) + (float)local_50);
          *(ulong *)(param_2 + 0x12) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
                        (float)((ulong)uStack_38 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0x12) + (float)uStack_38);
          *(ulong *)(param_2 + 0x10) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                        (float)((ulong)local_40 >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0x10) + (float)local_40);
        } while (lVar4 < (int)param_1[1]);
      }
    }
  }
  return;
}


