/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002c54c8; name: FUN_002c54c8
 */


void FUN_002c54c8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_043735d8 + 0x10);
  param_1[0x18] = (long)puVar1;
  plVar2 = (long *)param_1[0x2e];
  if (param_1 + 0x2a == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_002c5518:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_002c5518;
  }
  plVar2 = (long *)param_1[0x24];
  if (param_1 + 0x20 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002c5548;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_002c5548:
  if (param_1[3] != 0) {
                    /* try { // try from 002c5564 to 002c5567 has its CatchHandler @ 002c5574 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  operator_delete(param_1);
  return;
}


