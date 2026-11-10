/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e799c4; name: FUN_02e799c4
 */


undefined8 * FUN_02e799c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0440a320;
  if (DAT_0440a320 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_02f59e30(0,0x30);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_02e79ee4();
      *puVar1 = &PTR_LAB_042a71a8;
      DAT_0440a320 = puVar1;
    }
    if (DAT_0440a320 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      FUN_02e782a0(&LAB_02e79a44,0x90,0,0,0,0);
      puVar1 = DAT_0440a320;
    }
  }
  return puVar1;
}


