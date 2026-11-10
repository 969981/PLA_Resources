/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002de2a8; name: FUN_002de2a8
 */


void FUN_002de2a8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_04373758 + 0x10);
  param_1[0x18] = (long)puVar1;
  plVar2 = (long *)param_1[0x2e];
  if (param_1 + 0x2a == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_002de2f8:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_002de2f8;
  }
  plVar2 = (long *)param_1[0x24];
  if (param_1 + 0x20 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002de328;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_002de328:
  if (param_1[3] != 0) {
                    /* try { // try from 002de344 to 002de347 has its CatchHandler @ 002de354 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  operator_delete(param_1);
  return;
}


