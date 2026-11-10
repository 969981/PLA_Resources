/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eecd4; name: FUN_003eecd4
 */


void FUN_003eecd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    FUN_002ef6d0(puVar1);
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = puVar1 + 5;
    puVar1[7] = 0;
  }
  DAT_0439c468 = puVar1;
  return;
}


