/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bedb6c; name: FUN_01bedb6c
 */


bool FUN_01bedb6c(long param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_01a50dc8(param_1,param_1 + 0xdb8);
  return 0xff < uVar1 && (uVar1 & 0xff) != 0;
}


