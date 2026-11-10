/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3f9d8; name: FUN_02f3f9d8
 */


void FUN_02f3f9d8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  FUN_02ecd51c(param_1 + 0x160,param_2,param_3 & 1);
  if (*(uint *)(param_1 + 0x168) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    fVar3 = 1.0;
    lVar1 = (ulong)*(uint *)(param_1 + 0x168) * 0x18;
    pfVar2 = (float *)(*(long *)(param_1 + 0x160) + 0x10);
    do {
      fVar3 = *pfVar2 * fVar3;
      lVar1 = lVar1 + -0x18;
      pfVar2 = pfVar2 + 6;
    } while (lVar1 != 0);
    *(bool *)(param_1 + 0x50) = fVar3 == 0.0;
    if (fVar3 == 0.0) {
      FUN_02e7ab9c(*(undefined8 *)(param_1 + 0xb8),param_1);
      return;
    }
  }
  return;
}


