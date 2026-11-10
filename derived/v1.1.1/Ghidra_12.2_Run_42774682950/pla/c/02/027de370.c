/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de370; name: FUN_027de370
 */


bool FUN_027de370(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_02c2f268(param_2);
  uVar4 = FUN_027de770(uVar3,param_3,param_4);
  if ((uVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_02c2f268(param_2);
    iVar2 = FUN_00d12460(uVar3,1);
    bVar1 = iVar2 < 1;
  }
  return bVar1;
}


