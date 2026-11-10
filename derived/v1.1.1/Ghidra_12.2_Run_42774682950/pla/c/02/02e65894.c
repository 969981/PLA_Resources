/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65894; name: FUN_02e65894
 */


undefined8 FUN_02e65894(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  local_24[0] = '\x01';
  puVar1 = (undefined8 *)0x0;
  if ((*(byte *)((long)param_1 + 0x34) & 2) != 0) {
    puVar1 = param_1 + 1;
  }
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    iVar2 = (**(code **)(*DAT_0440a0a0 + 0x18))
                      (DAT_0440a0a0,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 6),puVar1,
                       local_24,param_2);
  }
  else {
    iVar2 = (**(code **)(*DAT_0440a0a0 + 0x10))
                      (DAT_0440a0a0,*param_1,*(undefined4 *)(param_1 + 6),puVar1,local_24,param_2);
  }
  if ((iVar2 == 1) && (((0 < *param_2 || (*(int *)(param_1 + 6) != 0)) && (local_24[0] != '\0')))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


