/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5500; name: FUN_02eb5500
 */


void FUN_02eb5500(void)

{
  long *plVar1;
  long lVar2;
  
  for (lVar2 = DAT_0440a550; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x3c00)) {
    if (*(long *)(lVar2 + 0x3c10) != 0) goto LAB_02eb5558;
  }
  lVar2 = (*DAT_0442d138)(0,0x3c18);
  if (lVar2 != 0) {
    FUN_02eb55a0();
    if (DAT_0440a550 == 0) {
      DAT_0440a550 = lVar2;
      *(undefined8 *)(lVar2 + 0x3c00) = 0;
      plVar1 = *(long **)(lVar2 + 0x3c10);
    }
    else {
      *(long *)(lVar2 + 0x3c00) = DAT_0440a550;
      DAT_0440a550 = lVar2;
LAB_02eb5558:
      plVar1 = *(long **)(lVar2 + 0x3c10);
    }
    if (plVar1 != (long *)0x0) {
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x3c10) = 0;
      }
      else {
        *(long *)(lVar2 + 0x3c10) = *plVar1;
      }
      *(int *)(lVar2 + 0x3c08) = *(int *)(lVar2 + 0x3c08) + -1;
    }
  }
  return;
}


