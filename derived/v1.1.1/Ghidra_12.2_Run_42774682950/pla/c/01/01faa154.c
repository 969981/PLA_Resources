/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01faa154; name: FUN_01faa154
 */


void FUN_01faa154(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 8);
  plVar1 = param_2 + 1;
  plVar3 = param_2;
  if (plVar1 != plVar5) {
    plVar1 = (long *)*param_2;
    *param_2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
    plVar3 = param_2 + 1;
    lVar4 = *plVar3;
    plVar1 = param_2 + 2;
    *plVar3 = 0;
    *param_2 = lVar4;
    if (plVar1 != plVar5) {
      plVar2 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      lVar4 = *plVar1;
      plVar2 = param_2 + 3;
      *plVar1 = 0;
      plVar1 = param_2 + 2;
      *plVar3 = lVar4;
      plVar3 = plVar1;
      if (plVar2 != plVar5) {
        plVar3 = (long *)*plVar1;
        *plVar1 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        lVar4 = *plVar2;
        plVar6 = param_2 + 4;
        *plVar2 = 0;
        plVar3 = param_2 + 3;
        *plVar1 = lVar4;
        if (plVar6 != plVar5) {
          plVar1 = (long *)*plVar3;
          *plVar3 = 0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x18))();
          }
          lVar4 = *plVar6;
          plVar2 = param_2 + 5;
          *plVar6 = 0;
          plVar1 = param_2 + 4;
          *plVar3 = lVar4;
          plVar3 = plVar1;
          if (plVar2 != plVar5) {
            plVar3 = (long *)*plVar1;
            *plVar1 = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x18))();
            }
            lVar4 = *plVar2;
            plVar6 = param_2 + 6;
            *plVar2 = 0;
            plVar3 = param_2 + 5;
            *plVar1 = lVar4;
            if (plVar6 != plVar5) {
              plVar1 = (long *)*plVar3;
              *plVar3 = 0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 0x18))();
              }
              lVar4 = *plVar6;
              plVar2 = param_2 + 7;
              *plVar6 = 0;
              plVar1 = param_2 + 6;
              *plVar3 = lVar4;
              plVar3 = plVar1;
              if (plVar2 != plVar5) {
                plVar3 = (long *)*plVar1;
                *plVar1 = 0;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x18))();
                }
                lVar4 = *plVar2;
                *plVar2 = 0;
                plVar3 = param_2 + 7;
                *plVar1 = lVar4;
                plVar1 = plVar3;
                if (param_2 + 8 != plVar5) {
                  do {
                    plVar3 = (long *)*plVar1;
                    *plVar1 = 0;
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x18))();
                    }
                    plVar3 = plVar1 + 1;
                    lVar4 = *plVar3;
                    *plVar3 = 0;
                    plVar2 = plVar1 + 2;
                    *plVar1 = lVar4;
                    plVar1 = plVar3;
                  } while (plVar2 != plVar5);
                }
              }
            }
          }
        }
      }
    }
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == plVar3) goto LAB_01faa248;
  }
  plVar1 = plVar1 + -1;
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x18))();
  }
  while (plVar1 != plVar3) {
    plVar1 = plVar1 + -1;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x18))();
    }
  }
LAB_01faa248:
  *(long **)(param_1 + 8) = plVar3;
  return;
}


