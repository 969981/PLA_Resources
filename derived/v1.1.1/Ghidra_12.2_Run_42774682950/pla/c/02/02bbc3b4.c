/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbc3b4; name: FUN_02bbc3b4
 */


void FUN_02bbc3b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x1a0) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x110);
    puVar1 = *(undefined8 **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x1c0) = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_02bbc3b4(*puVar2,param_2);
    }
  }
  return;
}


