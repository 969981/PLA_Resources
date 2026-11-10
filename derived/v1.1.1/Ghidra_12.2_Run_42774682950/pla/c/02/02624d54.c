/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624d54; name: FUN_02624d54
 */


void FUN_02624d54(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0262241c(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_02624db8(param_1,0);
  }
  else {
    FUN_02622448(param_2);
    FUN_0095dd00(param_1);
  }
  return;
}


