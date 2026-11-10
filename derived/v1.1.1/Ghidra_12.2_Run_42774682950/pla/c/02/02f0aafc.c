/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0aafc; name: FUN_02f0aafc
 */


void FUN_02f0aafc(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    plVar2 = *(long **)(param_1 + 0x178);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      if (lVar3 == 0) {
        do {
          if ((int)plVar2[0xe] != 0) {
            *(undefined4 *)(plVar2 + 0xe) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          while ((plVar2[4] != lVar3 || ((int)plVar2[0xe] == 0))) {
            plVar2 = (long *)*plVar2;
            if (plVar2 == (long *)0x0) goto LAB_02f0ab84;
          }
          *(undefined4 *)(plVar2 + 0xe) = 0;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  else if (iVar1 == 1) {
    plVar2 = *(long **)(param_1 + 0x178);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      if (lVar3 == 0) {
        do {
          if ((int)plVar2[0xe] != 1) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[4] == lVar3) && ((int)plVar2[0xe] != 1)) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  else if (iVar1 == 0) {
    FUN_02f0a90c(param_1,*(undefined8 *)(param_2 + 2),0);
  }
LAB_02f0ab84:
  FUN_02e990a8(param_1,param_2);
  return;
}


