/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea471c; name: FUN_02ea471c
 */


void FUN_02ea471c(long param_1,float *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  byte *pbVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  byte local_8 [4];
  float local_4;
  
  local_4 = 0.0;
  pbVar2 = *(byte **)(param_1 + 0x98);
  if (pbVar2 != (byte *)0x0) {
    uVar5 = 0;
    pfVar4 = (float *)(pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc));
    do {
      if (pbVar2[uVar5 + 1] == 0x1f) goto LAB_02ea4764;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar5 < *pbVar2);
  }
  pfVar4 = (float *)0x0;
LAB_02ea4764:
  pfVar1 = &local_4;
  if (pfVar4 != (float *)0x0) {
    pfVar1 = pfVar4;
  }
  local_8[0] = 0;
  local_8[1] = 0;
  local_8[2] = 0x48;
  local_8[3] = 0x43;
  pbVar3 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    uVar5 = 0;
    pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
    do {
      if (pbVar2[uVar5 + 1] == 0x20) goto LAB_02ea47b8;
      uVar5 = uVar5 + 1;
      pbVar3 = pbVar3 + 4;
    } while (uVar5 < *pbVar2);
    pbVar3 = (byte *)0x0;
  }
LAB_02ea47b8:
  pbVar2 = local_8;
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = pbVar3;
  }
  fVar7 = (float)NEON_fminnm(*param_2,*(undefined4 *)pbVar2);
  fVar6 = *pfVar1;
  if (*pfVar1 <= *param_2) {
    fVar6 = fVar7;
  }
  *param_2 = fVar6;
  return;
}


