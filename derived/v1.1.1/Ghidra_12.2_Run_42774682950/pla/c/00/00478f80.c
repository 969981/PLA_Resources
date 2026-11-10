/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00478f80; name: FUN_00478f80
 */


void FUN_00478f80(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00400620(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x30) << 4,
               "external/openssl/crypto/modes/ocb128.c",0x22d);
  FUN_004006a0(param_1,0xb0);
  return;
}


