/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d670; name: FUN_0067d670
 */


uint FUN_0067d670(char *param_1)

{
  size_t sVar1;
  char *pcVar3;
  char *pcVar2;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
    return 0;
  }
  if (sVar1 < 4) {
    uVar6 = 0;
    pcVar3 = param_1;
  }
  else {
    uVar4 = sVar1 & 0xfffffffffffffffc;
    iVar8 = 0;
    iVar9 = 0;
    iVar7 = 0;
    iVar5 = 0;
    pcVar3 = param_1 + uVar4;
    pcVar2 = param_1 + 3;
    uVar10 = uVar4;
    do {
      if (pcVar2[-3] == '/') {
        iVar8 = iVar8 + 1;
      }
      if (pcVar2[-2] == '/') {
        iVar9 = iVar9 + 1;
      }
      if (pcVar2[-1] == '/') {
        iVar7 = iVar7 + 1;
      }
      if (*pcVar2 == '/') {
        iVar5 = iVar5 + 1;
      }
      uVar10 = uVar10 - 4;
      pcVar2 = pcVar2 + 4;
    } while (uVar10 != 0);
    uVar6 = iVar5 + iVar7 + iVar9 + iVar8;
    if (sVar1 == uVar4) goto LAB_0067d718;
  }
  do {
    pcVar2 = pcVar3 + 1;
    if (*pcVar3 == '/') {
      uVar6 = uVar6 + 1;
    }
    pcVar3 = pcVar2;
  } while (param_1 + sVar1 != pcVar2);
LAB_0067d718:
  return uVar6 & 1;
}


