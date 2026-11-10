/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e66bdc; name: FUN_02e66bdc
 */


undefined8 FUN_02e66bdc(long param_1,int param_2,char param_3,char param_4)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  
  piVar6 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 == 0) || (*piVar6 == param_2)) {
    piVar10 = piVar6;
  }
  else {
    lVar12 = (ulong)uVar3 * 0x18;
    piVar14 = piVar6;
    do {
      lVar12 = lVar12 + -0x18;
      if (lVar12 == 0) {
        return 2;
      }
      piVar10 = piVar14 + 6;
      piVar2 = piVar14 + 6;
      piVar14 = piVar10;
    } while (*piVar2 != param_2);
  }
  if (piVar10 != piVar6 + (ulong)uVar3 * 6) {
    plVar7 = *(long **)(piVar10 + 4);
    uVar8 = (ulong)*(uint *)(plVar7 + 4);
    if (*(uint *)(plVar7 + 4) != 0) {
      pcVar11 = (char *)plVar7[3];
      do {
        if (*pcVar11 == param_4) {
          *pcVar11 = param_3;
          lVar12 = 0;
          if (*plVar7 != 0) {
            lVar12 = *plVar7 + -0x70;
          }
          uVar3 = *(uint *)(plVar7 + 4);
          uVar8 = (ulong)uVar3;
          if (uVar3 == 0) {
            iVar4 = 0;
          }
          else {
            pcVar11 = (char *)plVar7[3];
            uVar9 = uVar8 & 3;
            if (uVar8 - 1 < 3) {
              iVar4 = 0;
            }
            else {
              iVar4 = 0;
              lVar13 = uVar9 - uVar8;
              do {
                iVar5 = (int)*pcVar11;
                if (*pcVar11 <= (char)iVar4) {
                  iVar5 = iVar4;
                }
                iVar4 = (int)pcVar11[1];
                if (pcVar11[1] <= (char)iVar5) {
                  iVar4 = iVar5;
                }
                iVar5 = (int)pcVar11[2];
                if (pcVar11[2] <= (char)iVar4) {
                  iVar5 = iVar4;
                }
                pcVar1 = pcVar11 + 3;
                pcVar11 = pcVar11 + 4;
                iVar4 = (int)*pcVar1;
                if (*pcVar1 <= (char)iVar5) {
                  iVar4 = iVar5;
                }
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0);
            }
            iVar5 = iVar4;
            if ((uVar3 & 3) != 0) {
              do {
                iVar4 = (int)*pcVar11;
                if (*pcVar11 <= (char)iVar5) {
                  iVar4 = iVar5;
                }
                uVar9 = uVar9 - 1;
                pcVar11 = pcVar11 + 1;
                iVar5 = iVar4;
              } while (uVar9 != 0);
            }
          }
          FUN_02e69160(*(undefined8 *)(lVar12 + 0x50),lVar12,iVar4);
          return 1;
        }
        pcVar11 = pcVar11 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return 2;
}


