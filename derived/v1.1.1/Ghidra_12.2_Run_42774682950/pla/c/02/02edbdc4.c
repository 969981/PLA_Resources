/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edbdc4; name: FUN_02edbdc4
 */


long * FUN_02edbdc4(int param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)FUN_02f59e30(0,0x18);
  if (plVar1 != (long *)0x0) {
    *(undefined2 *)(plVar1 + 2) = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    if (param_1 != 0) {
      uVar2 = FUN_02edc224(plVar1,param_1);
      if ((uVar2 & 1) == 0) {
        if (*plVar1 != 0) {
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN_02f59e60(0);
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        }
        FUN_02f59e60(0,plVar1);
        plVar1 = (long *)0x0;
      }
      else if (((int)plVar1[1] != 0) && (*(undefined1 *)*plVar1 = 0, 1 < *(uint *)(plVar1 + 1))) {
        uVar2 = 1;
        do {
          *(undefined1 *)(*plVar1 + uVar2) = 0;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(plVar1 + 1));
      }
    }
  }
  return plVar1;
}


