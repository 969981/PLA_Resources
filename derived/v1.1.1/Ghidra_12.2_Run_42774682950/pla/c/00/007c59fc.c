/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007c59fc; name: FUN_007c59fc
 */


void FUN_007c59fc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_043771c0 + 0x10);
  param_1[0x2a] = (long)puVar1;
  plVar2 = (long *)param_1[0x40];
  if (param_1 + 0x3c == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_007c5a50:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_007c5a50;
  }
  plVar2 = (long *)param_1[0x36];
  if (param_1 + 0x32 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_007c5a7c:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_007c5a7c;
  }
  puVar1 = PTR_DAT_04373140;
  if (param_1[0x15] != 0) {
                    /* try { // try from 007c5a9c to 007c5a9f has its CatchHandler @ 007c5af4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  plVar2 = (long *)param_1[0xe];
  if (param_1 + 10 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_007c5acc;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_007c5acc:
  if (param_1[8] != 0) {
                    /* try { // try from 007c5ae0 to 007c5ae3 has its CatchHandler @ 007c5af0 */
    (**(code **)(**(long **)puVar1 + 0xc0))();
  }
  return;
}


