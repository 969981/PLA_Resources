/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203e3c; name: FUN_00203e3c
 */


undefined8 FUN_00203e3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1158) == 0) {
    lVar2 = FUN_00204504(param_2,0xb8);
    if (lVar2 == 0) {
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(long *)(param_1 + 0x1158) = lVar2;
      *(undefined8 *)(param_1 + 0xbf8) = param_2;
      *(undefined8 *)(param_1 + 0x1160) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


