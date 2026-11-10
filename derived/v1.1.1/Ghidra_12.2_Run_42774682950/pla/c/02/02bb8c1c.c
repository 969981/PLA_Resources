/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb8c1c; name: FUN_02bb8c1c
 */


void FUN_02bb8c1c(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_3;
  if ((*(char *)(param_2 + 0x6c) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x6c) != '\0' || cVar1 != '\0') goto LAB_02bb8c6c;
  }
  else if (*(long *)(param_3 + 8) != param_2[0x6d]) {
LAB_02bb8c6c:
    uVar2 = *(undefined8 *)(param_3 + 8);
    param_2[0x6c] = *(undefined8 *)param_3;
    param_2[0x6d] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b7fdb0(*param_2,param_3);
      (*DAT_043f0be0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x10];
  if ((*(char *)(param_2 + 0x70) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x70) != '\0' || cVar1 != '\0') goto LAB_02bb8cdc;
  }
  else if (*(long *)(param_3 + 0x18) != param_2[0x71]) {
LAB_02bb8cdc:
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    param_2[0x70] = *(undefined8 *)(param_3 + 0x10);
    param_2[0x71] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b80088(*param_2);
      (*DAT_043f0be8)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x20];
  if ((*(char *)(param_2 + 0x75) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x75) != '\0' || cVar1 != '\0') goto LAB_02bb8d48;
  }
  else if (*(long *)(param_3 + 0x28) != param_2[0x76]) {
LAB_02bb8d48:
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    param_2[0x75] = *(undefined8 *)(param_3 + 0x20);
    param_2[0x76] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b801f4(*param_2);
      (*DAT_043f0bd0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x30];
  if ((*(char *)(param_2 + 0x77) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x77) != '\0' || cVar1 != '\0') goto LAB_02bb8db4;
  }
  else if (*(long *)(param_3 + 0x38) != param_2[0x78]) {
LAB_02bb8db4:
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    param_2[0x77] = *(undefined8 *)(param_3 + 0x30);
    param_2[0x78] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b80360(*param_2);
      (*DAT_043f0bc8)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x40];
  if ((*(char *)(param_2 + 0x79) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x79) != '\0' || cVar1 != '\0') goto LAB_02bb8e20;
  }
  else if (*(long *)(param_3 + 0x48) != param_2[0x7a]) {
LAB_02bb8e20:
    uVar2 = *(undefined8 *)(param_3 + 0x48);
    param_2[0x79] = *(undefined8 *)(param_3 + 0x40);
    param_2[0x7a] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x50];
  if ((*(char *)(param_2 + 0x7b) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x7b) != '\0' || cVar1 != '\0') goto LAB_02bb8e8c;
  }
  else if (*(long *)(param_3 + 0x58) != param_2[0x7c]) {
LAB_02bb8e8c:
    uVar2 = *(undefined8 *)(param_3 + 0x58);
    param_2[0x7b] = *(undefined8 *)(param_3 + 0x50);
    param_2[0x7c] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x60];
  if ((*(char *)(param_2 + 0x7d) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x7d) != '\0' || cVar1 != '\0') goto LAB_02bb8ef8;
  }
  else if (*(long *)(param_3 + 0x68) != param_2[0x7e]) {
LAB_02bb8ef8:
    uVar2 = *(undefined8 *)(param_3 + 0x68);
    param_2[0x7d] = *(undefined8 *)(param_3 + 0x60);
    param_2[0x7e] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x70];
  if ((*(char *)(param_2 + 0x7f) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x7f) != '\0' || cVar1 != '\0') goto LAB_02bb8f64;
  }
  else if (*(long *)(param_3 + 0x78) != param_2[0x80]) {
LAB_02bb8f64:
    uVar2 = *(undefined8 *)(param_3 + 0x78);
    param_2[0x7f] = *(undefined8 *)(param_3 + 0x70);
    param_2[0x80] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x80];
  if ((*(char *)(param_2 + 0x81) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x81) != '\0' || cVar1 != '\0') goto LAB_02bb8fd0;
  }
  else if (*(long *)(param_3 + 0x88) != param_2[0x82]) {
LAB_02bb8fd0:
    uVar2 = *(undefined8 *)(param_3 + 0x88);
    param_2[0x81] = *(undefined8 *)(param_3 + 0x80);
    param_2[0x82] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0x90];
  if ((*(char *)(param_2 + 0x83) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x83) != '\0' || cVar1 != '\0') goto LAB_02bb903c;
  }
  else if (*(long *)(param_3 + 0x98) != param_2[0x84]) {
LAB_02bb903c:
    uVar2 = *(undefined8 *)(param_3 + 0x98);
    param_2[0x83] = *(undefined8 *)(param_3 + 0x90);
    param_2[0x84] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0xa0];
  if ((*(char *)(param_2 + 0x85) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x85) != '\0' || cVar1 != '\0') goto LAB_02bb90a8;
  }
  else if (*(long *)(param_3 + 0xa8) != param_2[0x86]) {
LAB_02bb90a8:
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
    param_2[0x85] = *(undefined8 *)(param_3 + 0xa0);
    param_2[0x86] = uVar2;
    if (cVar1 != '\0') {
      uVar2 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar2);
    }
  }
  cVar1 = param_3[0xb0];
  if ((*(char *)(param_2 + 0x87) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x87) == '\0' && cVar1 == '\0') goto LAB_02bb9140;
  }
  else if (*(long *)(param_3 + 0xb8) == param_2[0x88]) goto LAB_02bb9140;
  uVar2 = *(undefined8 *)(param_3 + 0xb8);
  param_2[0x87] = *(undefined8 *)(param_3 + 0xb0);
  param_2[0x88] = uVar2;
  if (cVar1 != '\0') {
    uVar2 = FUN_02b804cc(*param_2);
    (*DAT_043f0bc0)(param_2[2],uVar2);
  }
LAB_02bb9140:
  cVar1 = param_3[0x148];
  if ((*(char *)(param_2 + 0x6e) == '\0') || (cVar1 == '\0')) {
    if (*(char *)(param_2 + 0x6e) == '\0' && cVar1 == '\0') {
      return;
    }
  }
  else if (*(long *)(param_3 + 0x150) == param_2[0x6f]) {
    return;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x150);
  param_2[0x6e] = *(undefined8 *)(param_3 + 0x148);
  param_2[0x6f] = uVar2;
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_02b7ff1c(*param_2);
                    /* WARNING: Could not recover jumptable at 0x02bb91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_043f0bd8)(param_2[2],uVar2);
  return;
}


