/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be4978; name: FUN_02be4978
 */


void FUN_02be4978(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x324) = param_1;
  if (*(int *)(param_2 + 0x7c) == 2) {
    lVar1 = *(long *)(param_2 + 0xd0);
    fVar2 = cosf(param_1 * 0.017453292);
    *(float *)(lVar1 + 0x118) = fVar2;
  }
  return;
}


