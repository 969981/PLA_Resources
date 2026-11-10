/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144cba0; name: FUN_0144cba0
 */


undefined8 * FUN_0144cba0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    plVar2 = (long *)FUN_0144cc04();
    if (plVar1 != (long *)0x0) {
      do {
        if (plVar1 == plVar2) {
          return puVar3 + -10;
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


