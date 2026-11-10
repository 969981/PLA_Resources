/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131b824; name: FUN_0131b824
 */


float FUN_0131b824(long param_1)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_4;
  
  if (6 < *(int *)(param_1 + 0xc)) {
    return 0.0;
  }
  lVar1 = (long)*(int *)(param_1 + 0xc) * 0x10;
  fVar4 = *(float *)(&DAT_03a7ac58 + lVar1);
  fVar5 = *(float *)(&DAT_03a7ac50 + lVar1);
  local_4 = (float)*(undefined8 *)(param_1 + 0x10);
  pfVar2 = (float *)(&DAT_03a7ac58 + lVar1);
  if (local_4 <= fVar4) {
    pfVar2 = &local_4;
  }
  pfVar3 = (float *)(&DAT_03a7ac50 + lVar1);
  if (fVar5 <= local_4) {
    pfVar3 = pfVar2;
  }
  return ((*pfVar3 - fVar5) / (fVar4 - fVar5)) * 2000.0 + -1000.0;
}


