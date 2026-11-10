/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00641e38; name: FUN_00641e38
 */


void FUN_00641e38(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_043756e8 + 0x10);
  param_1[0x2a] = (long)puVar1;
  plVar2 = (long *)param_1[0x40];
  if (param_1 + 0x3c == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00641e8c:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00641e8c;
  }
  plVar2 = (long *)param_1[0x36];
  if (param_1 + 0x32 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00641eb8:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00641eb8;
  }
  puVar1 = PTR_DAT_04373140;
  if (param_1[0x14] != 0) {
                    /* try { // try from 00641ed8 to 00641edb has its CatchHandler @ 00641f30 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  plVar2 = (long *)param_1[0xe];
  if (param_1 + 10 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00641f08;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00641f08:
  if (param_1[8] != 0) {
                    /* try { // try from 00641f1c to 00641f1f has its CatchHandler @ 00641f2c */
    (**(code **)(**(long **)puVar1 + 0xc0))();
  }
  return;
}


