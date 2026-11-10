/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71e10; name: FUN_02e71e10
 */


void FUN_02e71e10(void)

{
  undefined8 *puVar1;
  
  if (DAT_0440a0f0 != (undefined *)0x0) {
    DAT_0440a0f8 = 0;
    if (DAT_0440a0f0 != &DAT_0440a0e8) {
      FUN_02f59e70(4);
    }
    DAT_0440a0f0 = (undefined *)0x0;
    DAT_0440a0fc = 0;
  }
  puVar1 = DAT_0440a410;
  if (DAT_0440a410 != (undefined8 *)0x0) {
    (**(code **)*DAT_0440a410)(DAT_0440a410);
    FUN_02f59e60(4,puVar1);
    DAT_0440a410 = (undefined8 *)0x0;
  }
  return;
}


