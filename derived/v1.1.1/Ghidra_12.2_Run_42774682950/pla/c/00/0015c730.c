/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015c730; name: FUN_0015c730
 */


void FUN_0015c730(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 10) != '\0') {
    uVar2 = 0;
    do {
      plVar1 = (long *)FUN_00161510(param_1,0,0,0x20);
      *plVar1 = (long)(plVar1 + 2);
      plVar1[1] = 1;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(long **)(param_2 + 0x20 + uVar2 * 8) = plVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_2 + 10));
  }
  return;
}


