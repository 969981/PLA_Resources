/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2384; name: FUN_001f2384
 */


void FUN_001f2384(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x4a8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_1) {
        FUN_001e3868(param_2 + 0x4a8,plVar1,param_2 + 0x4c8,*(undefined8 *)(param_2 + 0x4d0));
        if (*(undefined8 **)(param_2 + 0x4a8) == (undefined8 *)0x0) {
          return;
        }
        *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
        FUN_001e6b54(**(undefined8 **)(param_2 + 0x4a8),0,6);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


