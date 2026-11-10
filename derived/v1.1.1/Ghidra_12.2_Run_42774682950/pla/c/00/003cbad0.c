/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cbad0; name: FUN_003cbad0
 */


void FUN_003cbad0(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 003cbae0 to 003cbae3 has its CatchHandler @ 003cbb14 */
  free(*(void **)(param_1 + 0x600));
  puVar1 = *(undefined8 **)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x808) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 003cbaf8 to 003cbafb has its CatchHandler @ 003cbb10 */
    (**(code **)*puVar1)();
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_003d6d10(param_1 + 0x18);
  return;
}


