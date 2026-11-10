/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337380c; name: FUN_0337380c
 */


void FUN_0337380c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = -uVar1;
  *param_1 = uVar2;
  uVar3 = param_2[1];
  uVar1 = (ulong)(uVar2 < ~uVar1);
  param_1[1] = ~uVar3 + uVar1;
  uVar2 = param_2[2];
  uVar3 = (ulong)CARRY8(~uVar3,uVar1);
  param_1[2] = uVar3 + ~uVar2;
  uVar1 = -param_2[3];
  if (!CARRY8(uVar3,~uVar2)) {
    uVar1 = ~param_2[3];
  }
  param_1[3] = uVar1;
  return;
}


