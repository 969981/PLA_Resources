/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb91c0; name: FUN_02bb91c0
 */


void FUN_02bb91c0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pcVar11 = *(char **)(param_1 + 0x1b0);
  cVar4 = *pcVar11;
  if ((*(char *)(param_2 + 0x67) == '\0') || (cVar4 == '\0')) {
    if (*(char *)(param_2 + 0x67) != '\0' || cVar4 != '\0') goto LAB_02bb9220;
  }
  else if (*(long *)(pcVar11 + 8) != param_2[0x68]) {
LAB_02bb9220:
    uVar7 = *(undefined8 *)(pcVar11 + 8);
    param_2[0x67] = *(undefined8 *)pcVar11;
    param_2[0x68] = uVar7;
    if (cVar4 != '\0') {
      plVar6 = (long *)FUN_02b7fad8(*param_2,pcVar11);
      (*DAT_043f0bf0)(param_2[2],(ulong)(plVar6[1] - *plVar6) >> 2);
    }
  }
  cVar4 = pcVar11[0x10];
  if ((*(char *)(param_2 + 0x69) == '\0') || (cVar4 == '\0')) {
    if (*(char *)(param_2 + 0x69) == '\0' && cVar4 == '\0') goto LAB_02bb92cc;
  }
  else if (*(long *)(pcVar11 + 0x18) == param_2[0x6a]) goto LAB_02bb92cc;
  uVar7 = *(undefined8 *)(pcVar11 + 0x18);
  param_2[0x69] = *(undefined8 *)(pcVar11 + 0x10);
  param_2[0x6a] = uVar7;
  if (cVar4 != '\0') {
    plVar6 = (long *)FUN_02b7fc44(*param_2);
    (*DAT_043f0bf8)(param_2[2],(ulong)(plVar6[1] - *plVar6) >> 3);
  }
LAB_02bb92cc:
  puVar1 = *(uint **)(pcVar11 + 0x20);
  puVar2 = *(uint **)(pcVar11 + 0x28);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    lVar8 = *(long *)(puVar1 + 2);
    uVar3 = *(uint *)(lVar8 + 0xa0);
    uVar12 = (ulong)*puVar1;
    uVar10 = *(ulong *)(*(long *)(lVar8 + 0x98) + 0x138);
    uVar9 = (uint)uVar10;
    if (uVar3 < 3) {
      uVar9 = uVar9 & uVar3 - 1;
    }
    else {
      iVar5 = 0;
      if ((ulong)uVar3 != 0) {
        iVar5 = (int)(uVar10 / uVar3);
      }
      uVar9 = uVar9 - iVar5 * uVar3;
    }
    pcVar11 = (char *)FUN_02bc0470((long)(int)uVar9,lVar8 + 0x58);
    cVar4 = *pcVar11;
    if ((*(char *)(param_2 + uVar12 * 2 + 0x37) == '\0') || (cVar4 == '\0')) {
      if (cVar4 != '\0' || *(char *)(param_2 + uVar12 * 2 + 0x37) != '\0') goto LAB_02bb935c;
    }
    else if (param_2[uVar12 * 2 + 0x38] != *(long *)(pcVar11 + 8)) {
LAB_02bb935c:
      if (cVar4 != '\0') {
        uVar14 = *(undefined8 *)(*(long *)(pcVar11 + 8) + 0x40);
        uVar13 = param_2[2];
        uVar7 = (*DAT_043f04a0)(*(undefined8 *)(*(long *)(pcVar11 + 8) + 0x20));
        (*DAT_043f0c08)(uVar13,uVar12,uVar14,uVar7);
      }
      uVar7 = *(undefined8 *)(pcVar11 + 8);
      param_2[uVar12 * 2 + 0x37] = *(undefined8 *)pcVar11;
      param_2[uVar12 * 2 + 0x38] = uVar7;
    }
    puVar1 = puVar1 + 4;
  } while( true );
}


