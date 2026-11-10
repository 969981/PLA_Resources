/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006b0628; name: FUN_006b0628
 */


void FUN_006b0628(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_04375ea8 + 0x10);
  param_1[0x18] = (long)puVar1;
  plVar2 = (long *)param_1[0x2e];
  if (param_1 + 0x2a == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_006b0678:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_006b0678;
  }
  plVar2 = (long *)param_1[0x24];
  if (param_1 + 0x20 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_006b06a8;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_006b06a8:
  if (param_1[3] != 0) {
                    /* try { // try from 006b06c4 to 006b06c7 has its CatchHandler @ 006b06d4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  operator_delete(param_1);
  return;
}


