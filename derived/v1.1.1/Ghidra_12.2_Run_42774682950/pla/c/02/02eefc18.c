/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eefc18; name: FUN_02eefc18
 */


undefined4 FUN_02eefc18(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  int local_18;
  undefined1 local_14;
  
  uVar1 = *(uint *)(param_2 + 0xaa) >> 0x11 & 1;
  local_18 = *(int *)(param_2 + 0x10);
  local_14 = (undefined1)uVar1;
  plVar4 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      lVar2 = FUN_02eefc88((long *)(param_1 + 0x20),&local_18);
      uVar3 = 1;
      if (lVar2 == 0) {
        uVar3 = 2;
      }
      return uVar3;
    }
    if ((local_18 == *(int *)(plVar4 + 1)) && (uVar1 == *(byte *)((long)plVar4 + 0xc))) break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


