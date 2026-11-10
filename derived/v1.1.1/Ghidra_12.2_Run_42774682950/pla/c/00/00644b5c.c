/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00644b5c; name: FUN_00644b5c
 */


void FUN_00644b5c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_04375718 + 0x10);
  param_1[0x2a] = (long)puVar1;
  plVar2 = (long *)param_1[0x40];
  if (param_1 + 0x3c == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00644bb0:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00644bb0;
  }
  plVar2 = (long *)param_1[0x36];
  if (param_1 + 0x32 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00644bdc:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00644bdc;
  }
  puVar1 = PTR_DAT_04373140;
  if (param_1[0x15] != 0) {
                    /* try { // try from 00644bfc to 00644bff has its CatchHandler @ 00644c54 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  plVar2 = (long *)param_1[0xe];
  if (param_1 + 10 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00644c2c;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00644c2c:
  if (param_1[8] != 0) {
                    /* try { // try from 00644c40 to 00644c43 has its CatchHandler @ 00644c50 */
    (**(code **)(**(long **)puVar1 + 0xc0))();
  }
  return;
}


