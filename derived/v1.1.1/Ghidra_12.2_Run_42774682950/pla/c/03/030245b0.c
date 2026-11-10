/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030245b0; name: FUN_030245b0
 */


void FUN_030245b0(float *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  
  *(float *)(param_3 + 0xc) = *param_1 * *(float *)(param_2 + 8);
  puVar1 = (undefined1 *)*param_4;
  *puVar1 = 9;
  *(float *)(puVar1 + 0x30) = param_1[2] * *(float *)(param_2 + 4);
  *(float *)(puVar1 + 0x34) = param_1[3] * *(float *)(param_2 + 4);
  *(float *)(puVar1 + 0x38) = param_1[1];
  *(float *)(puVar1 + 0x3c) = param_1[4];
  *(float *)(puVar1 + 0x40) = param_1[5];
  *param_4 = puVar1 + 0x50;
  return;
}


