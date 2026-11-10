/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f08570; name: FUN_02f08570
 */


void FUN_02f08570(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_02f0caf0(DAT_0440a130,param_1);
  lVar1 = DAT_0440a138;
  plVar5 = (long *)(DAT_0440a138 + 0x10);
  plVar2 = (long *)*plVar5;
  if (plVar2 != (long *)0x0) {
    plVar6 = (long *)0x0;
    do {
      while (plVar3 = plVar2, plVar3[1] != param_1) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar1 + 0x38) == '\0') {
        plVar2 = (long *)*plVar3;
        if (*(long **)(lVar1 + 0x10) == plVar3) {
          plVar4 = plVar5;
        }
        else {
          plVar4 = plVar6;
        }
        *plVar4 = (long)plVar2;
        if (*(long **)(lVar1 + 0x18) == plVar3) {
          *(long **)(lVar1 + 0x18) = plVar6;
        }
        if ((plVar3 < *(long **)(lVar1 + 0x28)) ||
           (*(long **)(lVar1 + 0x28) + (ulong)*(uint *)(lVar1 + 0x30) * 3 <= plVar3)) {
          (*DAT_0442d150)(0);
        }
        else {
          *plVar3 = *(long *)(lVar1 + 0x20);
          *(long **)(lVar1 + 0x20) = plVar3;
        }
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
      }
      else {
        plVar2 = (long *)*plVar3;
        plVar3[1] = 0;
        *(undefined1 *)(lVar1 + 0x39) = 1;
        plVar6 = plVar3;
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}


