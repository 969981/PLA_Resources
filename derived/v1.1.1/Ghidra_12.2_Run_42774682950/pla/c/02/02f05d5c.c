/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05d5c; name: FUN_02f05d5c
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02f05d5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    while( true ) {
      plVar2 = (long *)*plVar2;
      param_1[1] = (long)plVar2;
      if ((long *)*param_1 == plVar1) {
        *param_1 = 0;
      }
      if (plVar1 != (long *)0x0) {
        plVar1[4] = 0;
        plVar1[5] = 0;
        if (plVar1[1] != 0) {
          *(undefined4 *)(plVar1 + 2) = 0;
          (*DAT_0442d150)(0);
          plVar1[1] = 0;
          *(undefined4 *)((long)plVar1 + 0x14) = 0;
        }
        (*DAT_0442d150)(2,plVar1);
      }
      if (plVar2 == (long *)0x0) break;
      plVar1 = (long *)param_1[1];
      if (plVar1 != plVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


