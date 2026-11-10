/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d7d20; name: FUN_001d7d20
 */


uint FUN_001d7d20(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_a0;
  float fStack_9c;
  ulong local_98;
  float local_90;
  float fStack_8c;
  ulong local_88;
  undefined4 local_80;
  byte *local_78;
  float local_70;
  float fStack_6c;
  ulong local_68;
  float local_60;
  float fStack_5c;
  ulong local_58;
  undefined4 local_50;
  byte *local_48;
  
  lVar15 = param_2[5];
  if (*(char *)(lVar15 + 3) < '\0') {
    lVar1 = (long)*(int *)(param_2 + 4) + 1;
    local_80 = (undefined4)lVar1;
    lVar15 = (long)*(int *)(param_2 + 4) +
             (ulong)((uint)*(byte *)(lVar15 + 4) | (*(byte *)(lVar15 + 3) & 0x7f) << 8) * 2;
    local_50 = (undefined4)lVar15;
    local_78 = (byte *)((long)param_1 + lVar1 * 5 + *param_1);
    local_48 = (byte *)((long)param_1 + lVar15 * 5 + *param_1);
    bVar12 = *local_78 >> 4;
    fVar21 = (float)*(undefined8 *)(PTR_DAT_04372370 + 0x1e0);
    fVar17 = (float)param_2[2];
    fVar18 = (float)*param_2;
    fVar19 = (fVar17 - fVar18) * fVar21;
    fVar20 = ((float)((ulong)param_2[2] >> 0x20) - (float)((ulong)*param_2 >> 0x20)) *
             (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x1e0) >> 0x20);
    fVar21 = ((float)param_2[3] - (float)param_2[1]) * fVar21;
    bVar2 = *local_78 & 0xf;
    bVar10 = local_78[1] >> 4;
    bVar3 = local_48[1] & 0xf;
    bVar8 = local_48[1] >> 4;
    bVar4 = local_78[1] & 0xf;
    bVar5 = *local_48 & 0xf;
    bVar6 = local_78[2] & 0xf;
    bVar9 = local_78[2] >> 4;
    _local_a0 = CONCAT44((float)(byte)(bVar10 * bVar10) * fVar20 + *(float *)((long)param_2 + 4),
                         (float)(byte)(bVar12 * bVar12) * fVar19 + fVar18);
    bVar10 = *local_48 >> 4;
    bVar12 = local_48[2] & 0xf;
    bVar11 = local_48[2] >> 4;
    local_98 = (ulong)(uint)((float)(byte)(bVar9 * bVar9) * fVar21 + *(float *)(param_2 + 1));
    _local_90 = CONCAT44(*(float *)((long)param_2 + 0x14) - (float)(byte)(bVar4 * bVar4) * fVar20,
                         fVar17 - (float)(byte)(bVar2 * bVar2) * fVar19);
    _local_60 = CONCAT44(*(float *)((long)param_2 + 0x14) - (float)(byte)(bVar3 * bVar3) * fVar20,
                         fVar17 - (float)(byte)(bVar5 * bVar5) * fVar19);
    _local_70 = CONCAT44((float)(byte)(bVar8 * bVar8) * fVar20 + *(float *)((long)param_2 + 4),
                         fVar18 + (float)(byte)(bVar10 * bVar10) * fVar19);
    local_68 = (ulong)(uint)((float)(byte)(bVar11 * bVar11) * fVar21 + *(float *)(param_2 + 1));
    local_88 = (ulong)(uint)(*(float *)(param_2 + 3) - (float)(byte)(bVar6 * bVar6) * fVar21);
    local_58 = (ulong)(uint)(*(float *)(param_2 + 3) - (float)(byte)(bVar12 * bVar12) * fVar21);
    uVar13 = FUN_001d7d20(param_1,&local_a0,param_3);
    uVar14 = FUN_001d7d20(param_1,&local_70,param_3);
    uVar7 = *(uint *)(param_2 + 4);
    uVar14 = uVar14 | uVar13;
    uVar13 = uVar7 + 0x1f;
    if (-1 < (int)uVar7) {
      uVar13 = uVar7;
    }
    uVar16 = -(ulong)((uint)((int)uVar13 >> 5) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)((int)uVar13 >> 5) << 2;
    *(uint *)(param_3 + uVar16) =
         *(uint *)(param_3 + uVar16) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU) |
         (uint)(uVar14 != 0) << (ulong)(uVar7 & 0x1f);
  }
  else {
    uVar13 = *(uint *)(param_2 + 4);
    uVar14 = uVar13 + 0x1f;
    if (-1 < (int)uVar13) {
      uVar14 = uVar13;
    }
    uVar14 = *(uint *)(param_3 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1;
  }
  return uVar14;
}


