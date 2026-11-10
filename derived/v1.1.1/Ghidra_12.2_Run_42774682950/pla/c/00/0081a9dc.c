/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081a9dc; name: FUN_0081a9dc
 */


void FUN_0081a9dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04377b20 + 0x10);
  plVar3 = (long *)param_1[2];
  while (plVar3 != param_1 + 1) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar3 = plVar1;
    if (*(char *)(lVar2 + 0x68) != '\0') {
      lVar4 = *(long *)(lVar2 + 0x38);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_0081aac8(lVar2 + 0x20);
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
      }
      *(undefined1 *)(lVar2 + 0x68) = 0;
    }
  }
  operator_delete(param_1);
  return;
}


