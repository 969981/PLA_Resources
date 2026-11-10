/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e453e4; name: FUN_02e453e4
 */


long * FUN_02e453e4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_02f59e30(9,0x50);
  if (plVar2 != (long *)0x0) {
    plVar2[8] = 0;
    plVar2[1] = (long)&PTR_LAB_042a5db8;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 9) = 0;
    *(undefined1 *)((long)plVar2 + 0x4c) = 1;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    iVar1 = FUN_02e55168(plVar2);
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 0x70) == 0) {
        *(long **)(param_1 + 0x70) = plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar2;
      }
    }
    else {
      FUN_02e480dc(plVar2);
      FUN_02f59e60(9,plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


