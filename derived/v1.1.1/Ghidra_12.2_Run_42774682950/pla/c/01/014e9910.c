/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9910; name: FUN_014e9910
 */


undefined8 FUN_014e9910(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x5b0) + 0x80);
  if (*(char *)(param_1 + 0x110) == '\0') {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5c0);
    if (lVar4 == 0) {
      bVar3 = 1;
    }
    else {
      bVar3 = *(byte *)(lVar4 + 0x58) ^ 1;
    }
    if ((bVar3 & iVar1 == 6) != 0) goto LAB_014e9954;
  }
  else if (iVar1 == 7) {
LAB_014e9954:
                    /* WARNING: Could not recover jumptable at 0x014e995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x10))(param_1 + 0x30);
    return uVar2;
  }
  return 0;
}


