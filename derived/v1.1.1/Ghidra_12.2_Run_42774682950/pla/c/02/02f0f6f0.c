/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f6f0; name: FUN_02f0f6f0
 */


undefined8 FUN_02f0f6f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  DAT_0440ad80 = (undefined8 *)FUN_02f59e30(0,0x800);
  if (DAT_0440ad80 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar3 = 0;
  DAT_0440ad88 = 0x40;
  puVar2 = DAT_0440ad80;
  DAT_0440ad78 = DAT_0440ad80;
  do {
    puVar1 = puVar2;
    *puVar1 = puVar1 + 4;
    uVar3 = uVar3 + 1;
    puVar2 = puVar1 + 4;
  } while (uVar3 < DAT_0440ad88);
  *puVar1 = 0;
  return 1;
}


