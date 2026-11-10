/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb8290; name: FUN_02bb8290
 */


void FUN_02bb8290(char *param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *__s1;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pcVar1 = param_3;
  if (*param_1 != '\0') {
    pcVar1 = param_1;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x6c) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x6c) != '\0' || cVar8 != '\0') goto LAB_02bb82f8;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x6d]) {
LAB_02bb82f8:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x6c] = *(undefined8 *)pcVar1;
    param_2[0x6d] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b7fdb0(*param_2);
      (*DAT_043f0be0)(param_2[2],uVar11);
    }
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 0xc) != 0)) {
    fVar12 = *(float *)(param_1 + 0x34);
    fVar13 = *(float *)(param_1 + 0x38);
    if ((*(float *)((long)param_2 + 0x45c) != *(float *)(param_1 + 0x30)) ||
       ((*(float *)(param_2 + 0x8c) != fVar12 || (*(float *)((long)param_2 + 0x464) != fVar13)))) {
      *(float *)((long)param_2 + 0x45c) = *(float *)(param_1 + 0x30);
      *(float *)(param_2 + 0x8c) = fVar12;
      *(float *)((long)param_2 + 0x464) = fVar13;
      (*DAT_043f0dc8)(param_2[2]);
    }
  }
  pcVar1 = param_3 + 0x10;
  if (param_1[0x40] != '\0') {
    pcVar1 = param_1 + 0x40;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x70) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x70) != '\0' || cVar8 != '\0') goto LAB_02bb83cc;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x71]) {
LAB_02bb83cc:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x70] = *(undefined8 *)pcVar1;
    param_2[0x71] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b80088(*param_2);
      (*DAT_043f0be8)(param_2[2],uVar11);
    }
  }
  cVar8 = param_1[0x78];
  fVar12 = *(float *)(param_1 + 0x70);
  fVar13 = *(float *)(param_1 + 0x74);
  if ((*(char *)((long)param_2 + 0x1ac) != cVar8) ||
     ((cVar8 != '\0' &&
      ((*(float *)(param_2 + 0x36) != fVar12 || (*(float *)((long)param_2 + 0x1b4) != fVar13)))))) {
    *(char *)((long)param_2 + 0x1ac) = cVar8;
    *(float *)(param_2 + 0x36) = fVar12;
    *(float *)((long)param_2 + 0x1b4) = fVar13;
    (*DAT_043f0d58)(param_2[2]);
  }
  iVar10 = *(int *)(param_1 + 0x7c);
  iVar2 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_2 + 0x72) != iVar10) {
    (*DAT_043f0d98)(param_2[2],1,iVar10);
    *(int *)(param_2 + 0x72) = iVar10;
  }
  if (*(int *)((long)param_2 + 0x39c) != iVar2) {
    (*DAT_043f0d98)(param_2[2],2,iVar2);
    *(int *)((long)param_2 + 0x39c) = iVar2;
  }
  iVar10 = *(int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x88);
  if (*(int *)((long)param_2 + 0x394) != iVar10) {
    (*DAT_043f0da0)(param_2[2],1,iVar10);
    *(int *)((long)param_2 + 0x394) = iVar10;
  }
  if (*(int *)(param_2 + 0x74) != iVar2) {
    (*DAT_043f0da0)(param_2[2],2,iVar2);
    *(int *)(param_2 + 0x74) = iVar2;
  }
  iVar10 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_2 + 0x73) != iVar10) {
    (*DAT_043f0da8)(param_2[2],1,iVar10);
    *(int *)(param_2 + 0x73) = iVar10;
  }
  if (*(int *)((long)param_2 + 0x3a4) != iVar2) {
    (*DAT_043f0da8)(param_2[2],2,iVar2);
    *(int *)((long)param_2 + 0x3a4) = iVar2;
  }
  pcVar1 = param_3 + 0x20;
  if (param_1[0x98] != '\0') {
    pcVar1 = param_1 + 0x98;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x75) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x75) != '\0' || cVar8 != '\0') goto LAB_02bb8590;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x76]) {
LAB_02bb8590:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x75] = *(undefined8 *)pcVar1;
    param_2[0x76] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b801f4(*param_2);
      (*DAT_043f0bd0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x30;
  if (param_1[0xd0] != '\0') {
    pcVar1 = param_1 + 0xd0;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x77) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x77) != '\0' || cVar8 != '\0') goto LAB_02bb860c;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x78]) {
LAB_02bb860c:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x77] = *(undefined8 *)pcVar1;
    param_2[0x78] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b80360(*param_2);
      (*DAT_043f0bc8)(param_2[2],uVar11);
    }
  }
  fVar14 = *(float *)(param_1 + 0x18c);
  fVar12 = *(float *)(param_1 + 400);
  fVar13 = *(float *)(param_1 + 0x194);
  if ((((*(float *)(param_2 + 0x89) != *(float *)(param_1 + 0x188)) ||
       (*(float *)((long)param_2 + 0x44c) != fVar14)) || (*(float *)(param_2 + 0x8a) != fVar12)) ||
     (*(float *)((long)param_2 + 0x454) != fVar13)) {
    *(float *)(param_2 + 0x89) = *(float *)(param_1 + 0x188);
    *(float *)((long)param_2 + 0x44c) = fVar14;
    *(float *)(param_2 + 0x8a) = fVar12;
    *(float *)((long)param_2 + 0x454) = fVar13;
    (*DAT_043f0db0)(param_2[2],param_2 + 0x89);
  }
  if (*(float *)(param_2 + 0x8b) != *(float *)(param_1 + 200)) {
    *(float *)(param_2 + 0x8b) = *(float *)(param_1 + 200);
    (*DAT_043f0dd0)(param_2[2]);
  }
  pcVar1 = param_3 + 0x40;
  if (param_1[0x108] != '\0') {
    pcVar1 = param_1 + 0x108;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x79) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x79) != '\0' || cVar8 != '\0') goto LAB_02bb8710;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x7a]) {
LAB_02bb8710:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x79] = *(undefined8 *)pcVar1;
    param_2[0x7a] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x50;
  if (param_1[0x118] != '\0') {
    pcVar1 = param_1 + 0x118;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x7b) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x7b) != '\0' || cVar8 != '\0') goto LAB_02bb878c;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x7c]) {
LAB_02bb878c:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x7b] = *(undefined8 *)pcVar1;
    param_2[0x7c] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x60;
  if (param_1[0x128] != '\0') {
    pcVar1 = param_1 + 0x128;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x7d) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x7d) != '\0' || cVar8 != '\0') goto LAB_02bb8808;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x7e]) {
LAB_02bb8808:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x7d] = *(undefined8 *)pcVar1;
    param_2[0x7e] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x70;
  if (param_1[0x138] != '\0') {
    pcVar1 = param_1 + 0x138;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x7f) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x7f) != '\0' || cVar8 != '\0') goto LAB_02bb8884;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x80]) {
LAB_02bb8884:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x7f] = *(undefined8 *)pcVar1;
    param_2[0x80] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x80;
  if (param_1[0x148] != '\0') {
    pcVar1 = param_1 + 0x148;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x81) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x81) != '\0' || cVar8 != '\0') goto LAB_02bb8900;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x82]) {
LAB_02bb8900:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x81] = *(undefined8 *)pcVar1;
    param_2[0x82] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0x90;
  if (param_1[0x158] != '\0') {
    pcVar1 = param_1 + 0x158;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x83) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x83) != '\0' || cVar8 != '\0') goto LAB_02bb897c;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x84]) {
LAB_02bb897c:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x83] = *(undefined8 *)pcVar1;
    param_2[0x84] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0xa0;
  if (param_1[0x168] != '\0') {
    pcVar1 = param_1 + 0x168;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x85) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x85) != '\0' || cVar8 != '\0') goto LAB_02bb89f8;
  }
  else if (*(long *)(pcVar1 + 8) != param_2[0x86]) {
LAB_02bb89f8:
    uVar11 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x85] = *(undefined8 *)pcVar1;
    param_2[0x86] = uVar11;
    if (cVar8 != '\0') {
      uVar11 = FUN_02b804cc(*param_2);
      (*DAT_043f0bc0)(param_2[2],uVar11);
    }
  }
  pcVar1 = param_3 + 0xb0;
  if (param_1[0x178] != '\0') {
    pcVar1 = param_1 + 0x178;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x87) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x87) == '\0' && cVar8 == '\0') goto LAB_02bb8aa0;
  }
  else if (*(long *)(pcVar1 + 8) == param_2[0x88]) goto LAB_02bb8aa0;
  uVar11 = *(undefined8 *)(pcVar1 + 8);
  param_2[0x87] = *(undefined8 *)pcVar1;
  param_2[0x88] = uVar11;
  if (cVar8 != '\0') {
    uVar11 = FUN_02b804cc(*param_2);
    (*DAT_043f0bc0)(param_2[2],uVar11);
  }
LAB_02bb8aa0:
  piVar3 = *(int **)(param_1 + 0x198);
  piVar4 = *(int **)(param_1 + 0x1a0);
  if (piVar4 == piVar3) {
    if (param_3[0xc0] != '\0') {
      __s1 = (undefined8 *)((long)param_2 + 300);
      iVar10 = memcmp(__s1,param_3 + 0xc4,0x80);
      if (iVar10 != 0) {
        uVar11 = *(undefined8 *)(param_3 + 0xc4);
        uVar5 = *(undefined8 *)(param_3 + 0xcc);
        uVar6 = *(undefined8 *)(param_3 + 0xdc);
        *(undefined8 *)((long)param_2 + 0x13c) = *(undefined8 *)(param_3 + 0xd4);
        *(undefined8 *)((long)param_2 + 0x144) = uVar6;
        *__s1 = uVar11;
        *(undefined8 *)((long)param_2 + 0x134) = uVar5;
        uVar11 = *(undefined8 *)(param_3 + 0xe4);
        uVar5 = *(undefined8 *)(param_3 + 0xec);
        uVar6 = *(undefined8 *)(param_3 + 0xfc);
        *(undefined8 *)((long)param_2 + 0x15c) = *(undefined8 *)(param_3 + 0xf4);
        *(undefined8 *)((long)param_2 + 0x164) = uVar6;
        *(undefined8 *)((long)param_2 + 0x14c) = uVar11;
        *(undefined8 *)((long)param_2 + 0x154) = uVar5;
        uVar11 = *(undefined8 *)(param_3 + 0x104);
        uVar5 = *(undefined8 *)(param_3 + 0x10c);
        uVar6 = *(undefined8 *)(param_3 + 0x11c);
        *(undefined8 *)((long)param_2 + 0x17c) = *(undefined8 *)(param_3 + 0x114);
        *(undefined8 *)((long)param_2 + 0x184) = uVar6;
        *(undefined8 *)((long)param_2 + 0x16c) = uVar11;
        *(undefined8 *)((long)param_2 + 0x174) = uVar5;
        uVar11 = *(undefined8 *)(param_3 + 0x124);
        uVar5 = *(undefined8 *)(param_3 + 300);
        uVar6 = *(undefined8 *)(param_3 + 0x13c);
        *(undefined8 *)((long)param_2 + 0x19c) = *(undefined8 *)(param_3 + 0x134);
        *(undefined8 *)((long)param_2 + 0x1a4) = uVar6;
        *(undefined8 *)((long)param_2 + 0x18c) = uVar11;
        *(undefined8 *)((long)param_2 + 0x194) = uVar5;
        (*DAT_043f0d48)(param_2[2],0,8,__s1);
      }
    }
  }
  else {
    for (; piVar3 != piVar4; piVar3 = piVar3 + 5) {
      iVar7 = *piVar3;
      uVar9 = iVar7 << 2;
      iVar10 = piVar3[3];
      iVar2 = piVar3[4];
      *(undefined8 *)((long)param_2 + (ulong)uVar9 * 4 + 300) = *(undefined8 *)(piVar3 + 1);
      *(int *)((long)param_2 + (ulong)uVar9 * 4 + 0x134) = iVar10;
      *(int *)((long)param_2 + (ulong)uVar9 * 4 + 0x138) = iVar2;
      (*DAT_043f0d48)(param_2[2],iVar7,1);
    }
  }
  pcVar1 = param_3 + 0x148;
  if (param_1[0x1d0] != '\0') {
    pcVar1 = param_1 + 0x1d0;
  }
  cVar8 = *pcVar1;
  if ((*(char *)(param_2 + 0x6e) == '\0') || (cVar8 == '\0')) {
    if (*(char *)(param_2 + 0x6e) == '\0' && cVar8 == '\0') {
      return;
    }
  }
  else if (*(long *)(pcVar1 + 8) == param_2[0x6f]) {
    return;
  }
  uVar11 = *(undefined8 *)(pcVar1 + 8);
  param_2[0x6e] = *(undefined8 *)pcVar1;
  param_2[0x6f] = uVar11;
  if (cVar8 == '\0') {
    return;
  }
  uVar11 = FUN_02b7ff1c(*param_2);
                    /* WARNING: Could not recover jumptable at 0x02bb8c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_043f0bd8)(param_2[2],uVar11);
  return;
}


