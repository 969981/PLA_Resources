/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e31ffc; name: FUN_02e31ffc
 */


void FUN_02e31ffc(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 + 1;
    *param_1 = uVar3;
  }
  uVar2 = (ulong)uVar3;
  if (2 < (int)SQRT((double)uVar2)) {
    uVar4 = 3;
    do {
      while( true ) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar3 / uVar4;
        }
        uVar1 = uVar1 * uVar4;
        uVar4 = uVar4 + 2;
        if (uVar3 != uVar1) break;
        uVar3 = uVar3 + 2;
        *param_1 = uVar3;
        uVar4 = 3;
      }
    } while ((int)uVar4 <= (int)SQRT((double)uVar2));
  }
  return;
}


