/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339aa58; name: FUN_0339aa58
 */


undefined8 FUN_0339aa58(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_032c4900(param_2);
  cVar1 = FUN_0339a9a4(param_1,param_2,iVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (iVar2 <= (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) -
                 (int)*(long *)(param_1 + 0x20)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)iVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}


