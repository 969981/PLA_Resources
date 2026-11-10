/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df080; name: FUN_001df080
 */


undefined8 FUN_001df080(long *param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_a0 [128];
  
  if (*(long *)(*param_1 + 0xe8) != 0) {
    FUN_001f43b0(*param_1,5,2);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001df0f0(param_1,acStack_a0);
    sVar1 = strlen(acStack_a0);
    uVar2 = FUN_001e0c94(param_2,acStack_a0,sVar1);
  }
  return uVar2;
}


