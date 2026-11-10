/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e964c; name: FUN_025e964c
 */


void FUN_025e964c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 600) & 0xf) == 0)) {
    fVar3 = *(float *)(lVar1 + 0x6c);
    fVar4 = fVar3 - *(float *)(lVar1 + 0x68);
    if ((fVar4 < *(float *)(param_1 + 0x20c)) ||
       (fVar2 = (float)FUN_025e974c(), fVar4 < fVar2 + -1.0)) {
      if (fVar3 < 1.1920929e-07) {
        return;
      }
    }
    else {
      fVar2 = (float)FUN_025e974c();
      if (fVar3 < 1.1920929e-07) {
        return;
      }
      if (fVar2 <= fVar4) {
        return;
      }
    }
    lVar1 = *(long *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x21c) = 0;
    fVar3 = *(float *)(lVar1 + 0x68) - fVar3;
    fVar4 = *(float *)(lVar1 + 0x6c);
    if (fVar3 <= *(float *)(lVar1 + 0x6c)) {
      fVar4 = fVar3;
    }
    *(undefined1 *)(lVar1 + 0x70) = 1;
    if (fVar3 < 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(lVar1 + 0x68) = fVar4;
  }
  return;
}


