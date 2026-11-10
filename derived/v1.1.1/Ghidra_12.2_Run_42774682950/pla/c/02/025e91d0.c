/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e91d0; name: FUN_025e91d0
 */


undefined4 FUN_025e91d0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x1f8);
  if ((lVar2 == 0) ||
     (fVar4 = *(float *)(lVar2 + 0x6c) - *(float *)(lVar2 + 0x68),
     fVar4 < *(float *)(param_1 + 0x20c))) {
    uVar1 = 0;
  }
  else {
    fVar3 = (float)FUN_025e974c();
    if (fVar3 + -1.0 <= fVar4) {
      fVar3 = (float)FUN_025e974c();
      uVar1 = 2;
      if (fVar3 <= fVar4) {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


