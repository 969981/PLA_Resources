/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3b60; name: FUN_032b3b60
 */


void FUN_032b3b60(long param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float __y;
  
  if (0 < param_2) {
    pbVar1 = (byte *)(param_1 + 3);
    do {
      fVar2 = (float)NEON_ucvtf((uint)pbVar1[-3]);
      __y = (float)(int)(*pbVar1 - 0x80);
      param_2 = param_2 + -1;
      fVar3 = powf(2.0,__y);
      *param_3 = fVar3 * fVar2 * 0.00390625;
      fVar2 = (float)NEON_ucvtf((uint)pbVar1[-2]);
      fVar3 = powf(2.0,__y);
      param_3[1] = fVar3 * fVar2 * 0.00390625;
      fVar2 = (float)NEON_ucvtf((uint)pbVar1[-1]);
      fVar3 = powf(2.0,__y);
      param_3[2] = fVar3 * fVar2 * 0.00390625;
      pbVar1 = pbVar1 + 4;
      param_3 = param_3 + 3;
    } while (0 < param_2);
  }
  return;
}


