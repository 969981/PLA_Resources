/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd8978; name: FUN_00cd8978
 */


undefined4 FUN_00cd8978(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *param_1;
  uVar3 = 3;
  if (lVar2 == 0x3f127c36d8e07a66) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (lVar2 != -0x5db0e11b106fbe20) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (lVar2 != -0x6ded4195f635c366) {
    uVar3 = uVar1;
  }
  return uVar3;
}


