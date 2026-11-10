/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef3758; name: FUN_02ef3758
 */


void FUN_02ef3758(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int local_18;
  undefined1 local_14;
  
  uVar1 = *(uint *)(param_2 + 0xaa) >> 0x11 & 1;
  local_18 = *(int *)(param_2 + 0x10);
  local_14 = (undefined1)uVar1;
  plVar2 = (long *)*param_1;
  while( true ) {
    if (plVar2 == (long *)0x0) {
      FUN_02eefc88(param_1,&local_18);
      return;
    }
    if ((local_18 == *(int *)(plVar2 + 1)) && (uVar1 == *(byte *)((long)plVar2 + 0xc))) break;
    plVar2 = (long *)*plVar2;
  }
  return;
}


