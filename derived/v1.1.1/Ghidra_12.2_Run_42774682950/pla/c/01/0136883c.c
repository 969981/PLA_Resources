/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136883c; name: FUN_0136883c
 */


undefined8 * FUN_0136883c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)*puVar2)(puVar2);
    FUN_013688a4();
    if (puVar1 != (undefined8 *)0x0) {
      do {
        if (puVar1 == &DAT_043c24d8) {
          return puVar2 + -10;
        }
        puVar1 = (undefined8 *)*puVar1;
      } while (puVar1 != (undefined8 *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


