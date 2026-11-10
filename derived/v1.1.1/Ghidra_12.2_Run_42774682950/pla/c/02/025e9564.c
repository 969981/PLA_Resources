/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e9564; name: FUN_025e9564
 */


void FUN_025e9564(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined8 local_18;
  
  if ((((*(long *)(param_2 + 0x1f8) != 0) && ((*(byte *)(param_2 + 600) & 0xf) == 0)) &&
      (1.1920929e-07 <= param_1)) &&
     (fVar2 = *(float *)(*(long *)(param_2 + 0x1f8) + 0x68), 1.0 < fVar2)) {
    local_18 = 0;
    fVar1 = fVar2 + -1.0;
    if (1.0 <= fVar2 - param_1) {
      fVar1 = param_1;
    }
    FUN_025e9444(fVar1,param_2,1,&local_18);
  }
  return;
}


