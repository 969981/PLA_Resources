/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6fa8; name: FUN_02ec6fa8
 */


float FUN_02ec6fa8(long *param_1,ulong *param_2)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  float fVar6;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = 1.0;
    uVar2 = *(uint *)(param_1 + 3);
    while( true ) {
      if (uVar2 != 0) {
        lVar3 = (ulong)uVar2 * 0xc;
        puVar4 = (uint *)(param_1[2] + 8);
        do {
          if ((1L << ((ulong)*puVar4 & 0x3f) & *param_2) != 0) {
            lVar5 = *(long *)(param_1[1] + 0x60);
            pfVar1 = (float *)(param_1[1] + 0x80);
            if (lVar5 != 0) {
              pfVar1 = (float *)(lVar5 + 0x10);
            }
            fVar6 = ((float)puVar4[-2] + *pfVar1 * (float)puVar4[-1]) * fVar6;
          }
          lVar3 = lVar3 + -0xc;
          puVar4 = puVar4 + 3;
        } while (lVar3 != 0);
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) break;
      uVar2 = *(uint *)(param_1 + 3);
    }
  }
  return fVar6;
}


