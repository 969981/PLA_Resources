/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5106c; name: FUN_01a5106c
 */


void FUN_01a5106c(long param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  FUN_01a50188(uVar1,param_1,param_1 + 0x558);
  return;
}


