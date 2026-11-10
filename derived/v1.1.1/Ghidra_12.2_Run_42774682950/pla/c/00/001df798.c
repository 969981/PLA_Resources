/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df798; name: FUN_001df798
 */


undefined8 FUN_001df798(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_28 [24];
  
  FUN_001e0ebc(param_1,auStack_28);
  do {
    lVar1 = FUN_001e0ecc(auStack_28);
    if (lVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18) + 0x10);
  } while (puVar2 == (undefined8 *)0x0);
  return *puVar2;
}


