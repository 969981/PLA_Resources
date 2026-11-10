/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa27bc; name: FUN_02fa27bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa27bc(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  
  uVar8 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = uVar8;
  *param_1 = uVar5;
  fVar4 = (float)uVar5 * (float)uVar5;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar6 = fVar6 * fVar6;
  uVar10 = (undefined1)((uint)fVar6 >> 8);
  uVar11 = (undefined1)((uint)fVar6 >> 0x10);
  uVar12 = (undefined1)((uint)fVar6 >> 0x18);
  fVar7 = (float)uVar8 * (float)uVar8;
  uVar13 = (undefined1)((uint)fVar7 >> 8);
  uVar14 = (undefined1)((uint)fVar7 >> 0x10);
  uVar15 = (undefined1)((uint)fVar7 >> 0x18);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar9 = fVar9 * fVar9;
  uVar16 = (undefined1)((uint)fVar9 >> 8);
  uVar17 = (undefined1)((uint)fVar9 >> 0x10);
  uVar18 = (undefined1)((uint)fVar9 >> 0x18);
  auVar19[4] = SUB41(fVar6,0);
  auVar19._0_4_ = fVar4;
  auVar19[5] = uVar10;
  auVar19[6] = uVar11;
  auVar19[7] = uVar12;
  auVar19[8] = SUB41(fVar7,0);
  auVar19[9] = uVar13;
  auVar19[10] = uVar14;
  auVar19[0xb] = uVar15;
  auVar19[0xc] = SUB41(fVar9,0);
  auVar19[0xd] = uVar16;
  auVar19[0xe] = uVar17;
  auVar19[0xf] = uVar18;
  auVar3[4] = SUB41(fVar6,0);
  auVar3._0_4_ = fVar4;
  auVar3[5] = uVar10;
  auVar3[6] = uVar11;
  auVar3[7] = uVar12;
  auVar3[8] = SUB41(fVar7,0);
  auVar3[9] = uVar13;
  auVar3[10] = uVar14;
  auVar3[0xb] = uVar15;
  auVar3[0xc] = SUB41(fVar9,0);
  auVar3[0xd] = uVar16;
  auVar3[0xe] = uVar17;
  auVar3[0xf] = uVar18;
  auVar19 = NEON_ext(auVar19,auVar3,8,1);
  bVar1 = *(byte *)((long)param_1 + 0x1e) | 4;
  if (auVar19._0_4_ + fVar4 + fVar6 <= 7.6154333e-07) {
    bVar1 = *(byte *)((long)param_1 + 0x1e) & 0xfb;
  }
  *(byte *)((long)param_1 + 0x1e) = bVar1;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  *(int *)(param_1 + 3) = (int)uVar5;
  bVar2 = bVar1 & 0xfd;
  if (((~-((float)param_2[2] == 0.0) & (byte)_DAT_03889700) +
       (~-((float)((ulong)param_2[2] >> 0x20) == 0.0) & (byte)((ulong)_DAT_03889700 >> 0x20)) +
       (~-((float)param_2[3] == 0.0) & (byte)_UNK_03889708) +
       (~-((float)((ulong)param_2[3] >> 0x20) == 0.0) & (byte)((ulong)_UNK_03889708 >> 0x20)) & 7)
      != 0) {
    bVar2 = bVar1 | 2;
  }
  *(byte *)((long)param_1 + 0x1e) = bVar2;
  return;
}


