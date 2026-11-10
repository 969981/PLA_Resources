/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eba8a4; name: FUN_02eba8a4
 */


void FUN_02eba8a4(float param_1,undefined4 param_2,long param_3,byte param_4,float *param_5)

{
  byte *pbVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  pbVar1 = *(byte **)(param_3 + 0x28);
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pfVar2 = (float *)(pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc));
    do {
      if (pbVar1[uVar3 + 1] == param_4) {
        fVar4 = *pfVar2;
        if (pfVar2[1] - fVar4 == 0.0) {
          fVar5 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar5 = (pfVar2[1] - fVar4) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21);
          fVar4 = *pfVar2;
        }
        fVar5 = fVar5 + fVar4 + *param_5;
        fVar4 = (float)NEON_fminnm(fVar5,param_2);
        if (param_1 <= fVar5) {
          param_1 = fVar4;
        }
        *param_5 = param_1;
        return;
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 2;
    } while (uVar3 < *pbVar1);
  }
  return;
}


