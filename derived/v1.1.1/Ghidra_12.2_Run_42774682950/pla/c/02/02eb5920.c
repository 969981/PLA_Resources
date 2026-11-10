/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5920; name: FUN_02eb5920
 */


void FUN_02eb5920(undefined4 *param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 2) != 0) {
    FUN_02ed2818();
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  if (*(long *)(param_1 + 4) != 0) {
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  plVar1 = *(long **)(param_1 + 10);
  *(undefined8 *)(param_1 + 6) = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    *(undefined4 *)(plVar1 + 1) = 0;
    (*DAT_0442d150)(0);
    *plVar1 = 0;
    *(undefined4 *)((long)plVar1 + 0xc) = 0;
    plVar1 = *(long **)(param_1 + 10);
    if (plVar1 == (long *)0x0) goto LAB_02eb599c;
  }
  (*DAT_0442d150)(2,plVar1);
LAB_02eb599c:
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}


