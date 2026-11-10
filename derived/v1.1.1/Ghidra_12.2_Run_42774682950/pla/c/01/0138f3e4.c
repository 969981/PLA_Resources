/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0138f3e4; name: FUN_0138f3e4
 */


undefined8 * FUN_0138f3e4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_0138f43c();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        return puVar3 + -10;
      }
    }
  }
  return (undefined8 *)0x0;
}


