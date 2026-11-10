/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e7f84; name: FUN_025e7f84
 */


void FUN_025e7f84(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_18;
  float local_14;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    local_14 = (float)FUN_025e974c();
    fVar3 = *(float *)(*(long *)(param_1 + 0x1f8) + 0x6c);
    if (1.1920929e-07 <= ABS(local_14 - fVar3)) {
      local_18 = 1.0;
      fVar3 = local_14 - fVar3;
      local_24 = 3.4028235e+38;
      pfVar2 = &local_24;
      if (local_14 <= 3.4028235e+38) {
        pfVar2 = &local_14;
      }
      if (local_14 < 1.0) {
        pfVar2 = &local_18;
      }
      *(float *)(*(long *)(param_1 + 0x1f8) + 0x6c) = *pfVar2;
      lVar1 = *(long *)(param_1 + 0x1f8);
      fVar5 = fVar3 + *(float *)(lVar1 + 0x68);
      if ((fVar3 < 0.0) && (fVar5 <= 1.1920929e-07)) {
        fVar5 = 1.0;
      }
      fVar3 = *(float *)(lVar1 + 0x6c);
      if (fVar5 <= *(float *)(lVar1 + 0x6c)) {
        fVar3 = fVar5;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar3;
      }
      *(undefined1 *)(lVar1 + 0x70) = 1;
      *(float *)(lVar1 + 0x68) = fVar4;
      *(float *)(param_1 + 0x214) = local_14;
      fVar3 = (float)FUN_025e974c();
      *(float *)(param_1 + 0x210) = fVar3 + -1.0;
    }
  }
  return;
}


