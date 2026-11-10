/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96a0c; name: FUN_02e96a0c
 */


undefined8 FUN_02e96a0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    uVar4 = FUN_02e96ab4(param_1,param_2);
    return uVar4;
  }
  puVar3 = (undefined8 *)FUN_02e96a6c(param_1 + 0xe0,*param_2,param_2[1]);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0x34;
  }
  else {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar2;
    *puVar3 = uVar4;
    puVar3[1] = uVar1;
    uVar4 = 1;
  }
  return uVar4;
}


