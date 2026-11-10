/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f96d4; name: FUN_001f96d4
 */


undefined8 FUN_001f96d4(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  if ((param_2 == 0) || (lVar3 = *(long *)(param_1 + 0xa30), lVar3 == 0)) {
LAB_001f9718:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa28) == 2) {
      if (param_2 < lVar3) goto LAB_001f9718;
      pcVar2 = "The requested document is not old enough\n";
    }
    else {
      if (lVar3 < param_2) goto LAB_001f9718;
      pcVar2 = "The requested document is not new enough\n";
    }
    FUN_001f3934(param_1,pcVar2);
    uVar1 = 0;
    *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
  }
  return uVar1;
}


