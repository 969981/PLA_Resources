/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2987c; name: FUN_00d2987c
 */


void FUN_00d2987c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)*param_1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar4 = param_1[2];
    uVar3 = *(ulong *)(lVar2 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar3 = uVar4 - 1 & uVar3;
    }
    else if (uVar4 <= uVar3) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar1 * uVar4;
    }
    if (uVar3 != param_1[1]) {
      *param_1 = 0;
    }
  }
  return;
}


