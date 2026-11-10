/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6f2c; name: FUN_02ec6f2c
 */


float FUN_02ec6f2c(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  float fVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = 1.0;
    uVar1 = *(uint *)(param_1 + 3);
    while( true ) {
      if (uVar1 != 0) {
        lVar2 = (ulong)uVar1 * 0xc;
        puVar3 = (uint *)(param_1[2] + 8);
        do {
          if ((1L << ((ulong)*puVar3 & 0x3f) & *param_2) != 0) {
            fVar4 = ((float)puVar3[-2] + *(float *)(param_1[1] + 0x80) * (float)puVar3[-1]) * fVar4;
          }
          lVar2 = lVar2 + -0xc;
          puVar3 = puVar3 + 3;
        } while (lVar2 != 0);
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) break;
      uVar1 = *(uint *)(param_1 + 3);
    }
  }
  return fVar4;
}


