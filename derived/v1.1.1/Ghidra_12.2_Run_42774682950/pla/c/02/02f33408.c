/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f33408; name: FUN_02f33408
 */


void FUN_02f33408(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0440b298;
  if (DAT_0440b298 != (undefined8 *)0x0) {
    (**(code **)*DAT_0440b298)(DAT_0440b298);
    FUN_02f59e60(0x10,puVar1);
  }
  DAT_0440b298 = (undefined8 *)0x0;
  return;
}


