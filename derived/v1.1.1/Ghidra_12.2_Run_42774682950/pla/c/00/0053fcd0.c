/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053fcd0; name: FUN_0053fcd0
 */


void FUN_0053fcd0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = param_1[1];
  uVar3 = (uint)*(byte *)(*param_1 + 0x10);
  lVar4 = uVar2 * 0x18;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (long)(1 << (ulong)(uVar3 & 0x1f));
  }
  do {
    lVar4 = lVar4 + 0x18;
    uVar2 = uVar2 + 1;
    if (uVar1 <= uVar2) {
      param_1[1] = -2;
      return;
    }
  } while (*(long *)(*(long *)(*param_1 + 0x18) + lVar4) == 0);
  param_1[1] = uVar2;
  return;
}


