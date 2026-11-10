/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006398ec; name: FUN_006398ec
 */


void FUN_006398ec(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_043734a0 + 0x10;
  *param_1 = (long)(PTR_DAT_04375668 + 0x10);
  param_1[0x2a] = (long)puVar1;
  plVar2 = (long *)param_1[0x40];
  if (param_1 + 0x3c == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00639940:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_00639940;
  }
  plVar2 = (long *)param_1[0x36];
  if (param_1 + 0x32 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_0063996c:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_0063996c;
  }
  puVar1 = PTR_DAT_04373140;
  if (param_1[0x14] != 0) {
                    /* try { // try from 0063998c to 0063998f has its CatchHandler @ 006399e4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
  }
  plVar2 = (long *)param_1[0xe];
  if (param_1 + 10 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_006399bc;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_006399bc:
  if (param_1[8] != 0) {
                    /* try { // try from 006399d0 to 006399d3 has its CatchHandler @ 006399e0 */
    (**(code **)(**(long **)puVar1 + 0xc0))();
  }
  return;
}


