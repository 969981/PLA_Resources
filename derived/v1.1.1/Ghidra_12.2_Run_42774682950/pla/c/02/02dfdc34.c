/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfdc34; name: FUN_02dfdc34
 */


void FUN_02dfdc34(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x390) = 0x41000000;
  if (*(int *)(param_2 + 0xc) == 1) {
    fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x396));
    fVar1 = exp2f(fVar1 * 0.083333336 + -5.75);
    fVar1 = fVar1 * 440.0;
LAB_02dfdcb8:
    fVar2 = 8.0;
    *(float *)(param_1 + 0x390) = fVar1;
    if (8.0 <= fVar1) goto LAB_02dfdcd4;
  }
  else {
    if (*(int *)(param_2 + 0xc) == 0) {
      fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x10),0x469c4000);
      if (8.0 <= fVar1) goto LAB_02dfdcb8;
      *(undefined4 *)(param_1 + 0x390) = 0x41000000;
      fVar1 = 8.0;
    }
    else {
      fVar1 = 8.0;
    }
LAB_02dfdcd4:
    if (fVar1 < *(float *)(param_1 + 0x10)) goto LAB_02dfdcec;
    fVar2 = *(float *)(param_1 + 0x10) + -1.0;
  }
  *(float *)(param_1 + 0x390) = fVar2;
LAB_02dfdcec:
  *(bool *)(param_1 + 0x15) = *(int *)(param_2 + 8) == 0;
  *(bool *)(param_1 + 0x54) = (*(char *)(param_2 + 0x2c) != '\0') != (*(int *)(param_2 + 0x28) == 3)
  ;
  *(bool *)(param_1 + 0x94) = (*(char *)(param_2 + 0x40) != '\0') != (*(int *)(param_2 + 0x3c) == 3)
  ;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x3c);
  return;
}


