/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65ca4; name: FUN_02e65ca4
 */


void FUN_02e65ca4(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)DAT_0440a0b0;
  if (DAT_0440a0b0 != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(DAT_0440a0a8 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_02e69958(lVar1,lVar1 == param_1,param_2);
        uVar2 = (ulong)DAT_0440a0b0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}


