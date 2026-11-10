/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb3f48; name: FUN_02eb3f48
 */


void FUN_02eb3f48(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  switch(*param_2) {
  case 0:
  case 3:
    FUN_02eb40e4(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  case 1:
    plVar2 = *(long **)(param_1 + 0x100);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            *(undefined4 *)(plVar2 + 10) = 1;
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if (*(int *)((long)plVar2 + 0x4c) == iVar1) {
              *(undefined4 *)(plVar2 + 10) = 1;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if (plVar2[1] == lVar3) {
            *(undefined4 *)(plVar2 + 10) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[1] == lVar3) && (*(int *)((long)plVar2 + 0x4c) == iVar1)) {
            *(undefined4 *)(plVar2 + 10) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    break;
  case 2:
    plVar2 = *(long **)(param_1 + 0x100);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            *(undefined4 *)(plVar2 + 10) = 0;
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if (*(int *)((long)plVar2 + 0x4c) == iVar1) {
              *(undefined4 *)(plVar2 + 10) = 0;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if (plVar2[1] == lVar3) {
            *(undefined4 *)(plVar2 + 10) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          while ((plVar2[1] != lVar3 || (*(int *)((long)plVar2 + 0x4c) != iVar1))) {
            plVar2 = (long *)*plVar2;
            if (plVar2 == (long *)0x0) {
              return;
            }
          }
          *(undefined4 *)(plVar2 + 10) = 0;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


