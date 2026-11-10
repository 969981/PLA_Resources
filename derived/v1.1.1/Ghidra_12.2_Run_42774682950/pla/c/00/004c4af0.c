/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4af0; name: FUN_004c4af0
 */


undefined8 FUN_004c4af0(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (((*(byte *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x238) + 0x20) >> 3 & 1) == 0) ||
     (uVar1 = FUN_00457530(), (uVar1 >> 7 & 1) != 0)) {
    return 1;
  }
  FUN_004014b0(0x14,0x117,0x13e,"external/openssl/ssl/ssl_lib.c",0xd1d);
  return 0;
}


