/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22440; name: FUN_02e22440
 */


void FUN_02e22440(uint param_1,void *param_2)

{
  int iVar1;
  byte *pbVar2;
  float *pfVar3;
  ulong uVar4;
  
  param_1 = param_1 & 0xff;
  uVar4 = (ulong)param_1;
  iVar1 = (param_1 + 3 & 0x1fc) * param_1;
  if (iVar1 != 0) {
    memset(param_2,0,(ulong)(uint)(iVar1 * 4));
  }
  if (param_1 != 0) {
    pbVar2 = &DAT_0388a1d0;
    pfVar3 = (float *)&DAT_03a9e768;
    do {
      uVar4 = uVar4 - 1;
      *(float *)((long)param_2 + (ulong)*pbVar2 * 4) = 0.70710677 / *pfVar3;
      param_2 = (void *)((long)param_2 + ((ulong)(param_1 * 4 + 0xc) & 0x7f0));
      pbVar2 = pbVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar4 != 0);
  }
  return;
}


