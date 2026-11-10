/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e9714; name: FUN_025e9714
 */


void FUN_025e9714(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x6c);
    *(undefined1 *)(lVar1 + 0x70) = 1;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(lVar1 + 0x68) = fVar2;
  }
  return;
}


