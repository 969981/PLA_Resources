/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d9f0; name: FUN_02c2d9f0
 */


void FUN_02c2d9f0(float param_1,short *param_2,undefined2 *param_3,int param_4)

{
  float fVar1;
  float local_28;
  float local_24;
  
  if (param_4 == 2) {
    fVar1 = modff(param_1 * 100.0 * 0.0022046,&local_28);
    *param_2 = (short)(int)local_28;
    *param_3 = (short)(int)(fVar1 * 10.0);
    if ((uint)(int)(fVar1 * 10.0) < 10) {
      return;
    }
  }
  else {
    fVar1 = modff(param_1 * 0.1,&local_24);
    *param_2 = (short)(int)local_24;
    *param_3 = (short)(int)(fVar1 * 100.0);
    if ((uint)(int)(fVar1 * 100.0) < 100) {
      return;
    }
  }
  *param_3 = 0;
  *param_2 = *param_2 + 1;
  return;
}


