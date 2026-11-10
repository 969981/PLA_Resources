/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb40e4; name: FUN_02eb40e4
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02eb40e4(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 0x100);
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x100);
    if (param_2 == 0) {
      if (param_3 == 0) {
        while( true ) {
          plVar3 = (long *)*plVar2;
          *(long **)(param_1 + 0x100) = plVar3;
          FUN_02eb3774(param_1,plVar2);
          FUN_02eb382c(plVar2);
          if (plVar3 == (long *)0x0) break;
          plVar2 = plVar3;
          if ((long *)*plVar1 != plVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      else {
        plVar3 = (long *)0x0;
        do {
          plVar4 = (long *)*plVar2;
          if (*(int *)((long)plVar2 + 0x4c) == param_3) {
            plVar5 = plVar1;
            if (*(long **)(param_1 + 0x100) != plVar2) {
              plVar5 = plVar3;
            }
            *plVar5 = (long)plVar4;
            FUN_02eb3774(param_1,plVar2);
            FUN_02eb382c(plVar2);
            plVar2 = plVar3;
          }
          plVar3 = plVar2;
          plVar2 = plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else {
      plVar3 = (long *)0x0;
      do {
        while ((plVar2[1] != param_2 ||
               ((param_3 != 0 && (*(int *)((long)plVar2 + 0x4c) != param_3))))) {
          plVar4 = (long *)*plVar2;
          plVar3 = plVar2;
          plVar2 = plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
        }
        plVar5 = (long *)*plVar2;
        plVar4 = plVar1;
        if (*(long **)(param_1 + 0x100) != plVar2) {
          plVar4 = plVar3;
        }
        *plVar4 = (long)plVar5;
        FUN_02eb3774(param_1,plVar2);
        FUN_02eb382c(plVar2);
        plVar2 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


