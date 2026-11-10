/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2440; name: FUN_02ea2440
 */


void FUN_02ea2440(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x120);
  do {
    if (plVar1 == (long *)0x0) {
LAB_02ea248c:
      plVar1 = *(long **)(param_1 + 0x148);
joined_r0x02ea24f0:
      while( true ) {
        if (plVar1 == (long *)0x0) {
          return;
        }
        if (*(int *)(plVar1 + 1) == param_2) break;
        plVar1 = (long *)*plVar1;
      }
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] == 0) {
                    /* WARNING: Could not recover jumptable at 0x02ea24cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)plVar1[2])(plVar1 + 2,5,1);
        return;
      }
      FUN_02f0f0a8(*(undefined4 *)(plVar1 + 5),DAT_0440a150,plVar1[4],5,0,4,1);
      return;
    }
    if (*(int *)(plVar1 + 1) == param_2) {
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] != 0) {
        FUN_02f0f0a8(*(undefined4 *)(plVar1 + 5),DAT_0440a150,plVar1[4],0,0,4,1);
        plVar1 = *(long **)(param_1 + 0x148);
        goto joined_r0x02ea24f0;
      }
      (**(code **)plVar1[2])(plVar1 + 2,0,1);
      goto LAB_02ea248c;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


