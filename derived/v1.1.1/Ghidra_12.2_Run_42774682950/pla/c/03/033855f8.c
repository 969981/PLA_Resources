/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033855f8; name: FUN_033855f8
 */


void FUN_033855f8(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  
  puVar6 = PTR_PTR_0434a080;
  pcVar3 = *(char **)(param_1 + 8);
  pcVar4 = *(char **)(param_1 + 0x10);
  if (pcVar4 != pcVar3) {
    cVar5 = *pcVar4;
    pcVar10 = pcVar4;
    while( true ) {
      if (cVar5 == '\0') {
        iVar8 = (int)param_2[1];
        uVar7 = *(uint *)((long)param_2 + 0xc);
        uVar1 = iVar8 + 1;
        if (iVar8 < (int)(uVar7 & 0x3fffffff)) {
          lVar9 = *param_2;
        }
        else {
          lVar9 = *param_2;
          if (0x3ffffffe < iVar8) {
            FUN_032bd0a8(uVar1);
            uVar7 = *(uint *)((long)param_2 + 0xc);
          }
          uVar7 = (uVar7 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar7) {
            uVar7 = 0x3fffffff;
          }
          uVar2 = uVar1;
          if ((int)uVar1 <= (int)uVar7) {
            uVar2 = uVar7;
          }
          lVar9 = FUN_032bd1d4(puVar6,uVar2,8,lVar9,iVar8,(uint *)((long)param_2 + 0xc));
          iVar8 = (int)param_2[1];
          *param_2 = lVar9;
        }
        *(char **)(lVar9 + (long)iVar8 * 8) = pcVar10;
        pcVar10 = pcVar4 + 1;
        *(uint *)(param_2 + 1) = uVar1;
      }
      pcVar4 = pcVar4 + 1;
      if (pcVar3 == pcVar4) break;
      cVar5 = *pcVar4;
    }
  }
  iVar8 = (int)param_2[1];
  lVar9 = (long)iVar8;
  if (iVar8 != 0) {
    do {
      iVar8 = iVar8 + -1;
      if (**(char **)(*param_2 + -8 + lVar9 * 8) != '\0') {
        return;
      }
      lVar9 = lVar9 + -1;
      *(int *)(param_2 + 1) = iVar8;
    } while (lVar9 != 0);
  }
  return;
}


