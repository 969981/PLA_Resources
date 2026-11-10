/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6089c; name: FUN_00d6089c
 */


void FUN_00d6089c(undefined8 param_1,undefined4 param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    lVar1 = FUN_00d57364(param_1,param_2,iVar2);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x2a8) = param_3 & 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x30);
  return;
}


