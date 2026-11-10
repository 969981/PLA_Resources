/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1d460; name: FUN_02e1d460
 */


void FUN_02e1d460(float param_1,float *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  
  if (param_1 != 1.0) {
    pfVar4 = param_2;
    if ((3 < param_3) && ((param_3 & 0xfffffffc) != 0)) {
      pfVar3 = param_2;
      do {
        pfVar4 = pfVar3 + 4;
        *(ulong *)(pfVar3 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar3 + 2) * param_1);
        *(ulong *)pfVar3 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar3 * param_1);
        pfVar3 = pfVar4;
      } while (pfVar4 < param_2 + (param_3 & 0xfffffffc));
    }
    if (pfVar4 < param_2 + param_3) {
      uVar2 = (long)param_2 + ~(ulong)pfVar4 + (ulong)param_3 * 4;
      uVar1 = ((uint)(uVar2 >> 2) & 0x3fffffff) + 1;
      uVar5 = (ulong)uVar1 & 3;
      pfVar3 = pfVar4;
      if ((uVar1 & 3) != 0) {
        do {
          uVar5 = uVar5 - 1;
          pfVar4 = pfVar3 + 1;
          *pfVar3 = *pfVar3 * param_1;
          pfVar3 = pfVar4;
        } while (uVar5 != 0);
      }
      if (0xb < uVar2) {
        do {
          *pfVar4 = *pfVar4 * param_1;
          pfVar4[1] = pfVar4[1] * param_1;
          pfVar4[2] = pfVar4[2] * param_1;
          pfVar4[3] = pfVar4[3] * param_1;
          pfVar4 = pfVar4 + 4;
        } while (pfVar4 < param_2 + param_3);
      }
    }
  }
  return;
}


