/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e4f4; name: FUN_0315e4f4
 */


void FUN_0315e4f4(long param_1,long param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  lVar7 = (long)*param_3;
  iVar8 = *(int *)(*(long *)(param_1 + 0x28) + lVar7 * 4);
  if (iVar8 != -1) {
    lVar7 = 0;
    do {
      pcVar1 = (char *)(*(long *)(param_1 + 0x38) + (long)iVar8 + lVar7);
      lVar7 = lVar7 + 1;
    } while (*pcVar1 != -1);
    piVar12 = (int *)(param_1 + 0x48);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = (int)lVar7 + *piVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = (long)*param_3;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar7 * 4) = 0xffffffff;
  lVar7 = *(long *)(param_2 + 0x20);
  iVar8 = *param_3;
  if (iVar8 < *(int *)(lVar7 + 0x20)) {
    lVar9 = *(long *)(lVar7 + 0x18);
    iVar5 = iVar8;
    if (*(int *)(lVar7 + 0x98) != 0) {
      iVar5 = *(int *)(*(long *)(lVar7 + 0x90) + (long)iVar8 * 4);
    }
    if (iVar5 == -1) goto LAB_0315e5b0;
    plVar4 = (long *)(lVar7 + 0xb0);
    iVar8 = iVar5;
  }
  else {
    plVar4 = (long *)(lVar7 + 0xd0);
    iVar8 = iVar8 - *(int *)(lVar7 + 0x20);
  }
  lVar9 = *plVar4;
LAB_0315e5b0:
  piVar12 = (int *)(lVar9 + (long)iVar8 * 0x10);
  iVar8 = (int)(short)piVar12[2];
  if (iVar8 != 0) {
    iVar5 = *piVar12;
    lVar7 = (long)iVar5;
    lVar10 = lVar7 << 1;
    lVar9 = lVar7 * 0x14;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar10) = 0xff00;
      lVar11 = *(long *)(param_2 + 0x20);
      if (lVar7 < *(int *)(lVar11 + 0x30)) {
        if (*(int *)(lVar11 + 0x78) == 0) {
          iVar6 = (int)lVar7;
        }
        else {
          iVar6 = *(int *)(*(long *)(lVar11 + 0x70) + lVar7 * 4);
        }
        if (iVar6 == -1) {
          piVar12 = (int *)(*(long *)(lVar11 + 0x28) + lVar7 * 0x14);
        }
        else {
          piVar12 = (int *)(*(long *)(lVar11 + 0xc0) + (long)iVar6 * 0x14);
        }
      }
      else {
        piVar12 = (int *)(*(long *)(lVar11 + 0xe0) + (long)*(int *)(lVar11 + 0x30) * -0x14 + lVar9);
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x14;
      lVar10 = lVar10 + 2;
      *(undefined1 *)(*(long *)(param_1 + 0x60) + (long)*piVar12) = 0xff;
    } while (iVar5 + iVar8 != lVar7);
  }
  iVar8 = *(int *)(param_1 + 0x70);
  if (*param_3 <= *(int *)(param_1 + 0x70)) {
    iVar8 = *param_3;
  }
  *(int *)(param_1 + 0x70) = iVar8;
  return;
}


