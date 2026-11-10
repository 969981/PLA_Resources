/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4990; name: FUN_032c4990
 */


void FUN_032c4990(char *param_1,long *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_1);
  uVar1 = (int)sVar2 + 1;
  puVar3 = (undefined8 *)
           (**(code **)(*param_2 + 0x10))(param_2,(long)((sVar2 << 0x20) + 0x1100000000) >> 0x20,0);
  *puVar3 = param_2;
  *(uint *)(puVar3 + 1) = uVar1;
  memcpy(puVar3 + 2,param_1,(ulong)uVar1);
  return;
}


