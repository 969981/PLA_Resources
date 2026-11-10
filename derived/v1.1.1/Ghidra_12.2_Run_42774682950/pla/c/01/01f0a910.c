/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0a910; name: FUN_01f0a910
 */


undefined8 FUN_01f0a910(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
LAB_01f0a948:
    FUN_02b21610(DAT_043ef5b0);
    FUN_02b21610(DAT_043ef5b8);
    uVar2 = 1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar1 + 0x68) == *(long *)(lVar1 + 0x70)) {
      if (*(long *)(*(long *)(param_1 + 0x78) + 0x68) == *(long *)(*(long *)(param_1 + 0x78) + 0x70)
         ) goto LAB_01f0a948;
    }
    else {
      FUN_02b1a728(0x408f400000000000,lVar1,1);
    }
    lVar1 = *(long *)(param_1 + 0x78);
    if (*(long *)(lVar1 + 0x68) != *(long *)(lVar1 + 0x70)) {
      FUN_02b1a728(0x408f400000000000,lVar1,1);
    }
    lVar1 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar1 + 0x68) != *(long *)(lVar1 + 0x70)) {
      FUN_02b1a728(0x408f400000000000,lVar1,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


