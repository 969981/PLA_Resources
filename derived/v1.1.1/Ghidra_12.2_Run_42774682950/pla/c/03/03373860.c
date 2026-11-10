/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373860; name: FUN_03373860
 */


void FUN_03373860(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_2;
  uVar3 = *param_3;
  *param_1 = uVar3 + uVar1;
  uVar2 = param_2[1];
  uVar4 = param_3[1];
  uVar3 = (ulong)CARRY8(uVar3,uVar1);
  uVar1 = uVar4 + uVar2;
  param_1[1] = uVar1 + uVar3;
  uVar2 = (ulong)(CARRY8(uVar4,uVar2) || CARRY8(uVar1,uVar3));
  uVar3 = param_2[2];
  uVar4 = param_3[2];
  uVar1 = uVar4 + uVar3;
  param_1[2] = uVar1 + uVar2;
  param_1[3] = param_3[3] + param_2[3] + (ulong)(CARRY8(uVar4,uVar3) || CARRY8(uVar1,uVar2));
  return;
}


