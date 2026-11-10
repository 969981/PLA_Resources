/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab55ec; name: FUN_01ab55ec
 */


void FUN_01ab55ec(float param_1,long param_2)

{
  float fVar1;
  
  if (0.0 < param_1) {
    fVar1 = *(float *)(param_2 + 0x1f8);
    if (param_1 <= *(float *)(param_2 + 0x1f8)) {
      fVar1 = param_1;
    }
    FUN_01ab5308(param_2);
    *(float *)(param_2 + 0x204) = fVar1;
    *(undefined1 *)(param_2 + 0x20c) = 1;
  }
  return;
}


