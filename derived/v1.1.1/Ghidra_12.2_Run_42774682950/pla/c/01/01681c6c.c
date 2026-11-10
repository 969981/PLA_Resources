/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01681c6c; name: FUN_01681c6c
 */


void FUN_01681c6c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x98);
  while (plVar3 != (long *)0x0) {
    plVar2 = (long *)plVar3[3];
    if (plVar2 == (long *)0x0) {
      FUN_01e9abd0(0,1);
      plVar3 = (long *)*plVar3;
    }
    else {
      FUN_02a439f4(plVar2[0xb]);
      FUN_02a439f4(plVar2[0xb]);
      FUN_01e9abd0(plVar2,1);
      uVar1 = FUN_02a43a5c(plVar2[0xb]);
      if ((uVar1 & 1) != 0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      uVar1 = FUN_02a43a5c(plVar2[0xb]);
      if ((uVar1 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      else {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        plVar3 = (long *)*plVar3;
      }
    }
  }
  return;
}


