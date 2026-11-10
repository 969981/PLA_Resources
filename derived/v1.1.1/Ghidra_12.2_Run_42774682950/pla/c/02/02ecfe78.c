/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecfe78; name: FUN_02ecfe78
 */


void FUN_02ecfe78(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_042aa3e0;
  param_1[3] = &PTR_FUN_042aa648;
  param_1[6] = &PTR_FUN_042aa6e0;
  if (param_1[0xe] == 0) {
    plVar1 = (long *)param_1[0x17];
  }
  else {
    FUN_02eb25e0();
    plVar1 = (long *)param_1[0x17];
  }
  if (plVar1 == (long *)0x0) {
LAB_02ecfeb4:
    lVar2 = param_1[0x16];
  }
  else {
    if (*plVar1 != 0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      (*DAT_0442d150)(0,*plVar1);
      *plVar1 = 0;
      *(undefined4 *)((long)plVar1 + 0xc) = 0;
      if (param_1[0x17] == 0) goto LAB_02ecfeb4;
    }
    (*DAT_0442d150)(2);
    lVar2 = param_1[0x16];
  }
  if (lVar2 != 0) {
    (*DAT_0442d150)(2);
  }
  param_1[0x16] = 0;
  FUN_02ed41a8(param_1);
  return;
}


