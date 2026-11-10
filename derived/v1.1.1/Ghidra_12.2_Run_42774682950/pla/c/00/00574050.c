/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00574050; name: FUN_00574050
 */


void FUN_00574050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_041898b8;
    puVar1[1] = 0;
    puVar1[2] = 1;
    puVar1[3] = "FakeTransportSecurity";
  }
  return;
}


