/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f62f0; name: FUN_031f62f0
 */


bool FUN_031f62f0(uint *param_1,float *param_2,undefined8 *param_3,uint *param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  
  uVar8 = param_1[6];
  uVar9 = FUN_031f6230();
  bVar1 = (uVar9 & 1) != 0;
  if (bVar1) {
    fVar13 = (float)((ulong)local_38 >> 0x20);
    uVar3 = *(undefined8 *)(param_1 + 2);
    uVar6 = *param_1;
    uVar7 = param_1[1];
    fVar10 = *param_2 + ((float)*param_3 - *param_2) * (float)local_38;
    fVar11 = param_2[1] + ((float)((ulong)*param_3 >> 0x20) - param_2[1]) * fVar13;
    fVar12 = param_2[2] + ((float)param_3[1] - param_2[2]) * (float)local_38;
    fVar13 = param_2[3] + ((float)((ulong)param_3[1] >> 0x20) - param_2[3]) * fVar13;
    puVar2 = (uint *)(PTR_DAT_043723a0 +
                     (ulong)(uint)(1 << (ulong)((int)((uint)(byte)uVar8 << 0x18) >> 0x19 & 0x1f)) *
                     0x10);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[3];
    param_4[2] = (uint)fVar12 ^ ((uint)fVar12 ^ param_1[2]) & puVar2[2];
    param_4[3] = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)((ulong)uVar3 >> 0x20)) & uVar5;
    *param_4 = (uint)fVar10 ^ ((uint)fVar10 ^ uVar6) & uVar8;
    param_4[1] = (uint)fVar11 ^ ((uint)fVar11 ^ uVar7) & uVar4;
  }
  return bVar1;
}


