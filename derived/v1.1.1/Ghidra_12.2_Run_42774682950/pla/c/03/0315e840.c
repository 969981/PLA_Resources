/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e840; name: FUN_0315e840
 */


void FUN_0315e840(long param_1,int *param_2,long param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  piVar12 = (int *)(*(long *)(param_1 + 0x28) + (long)*param_4 * 4);
  do {
    iVar4 = *piVar12;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar3) {
      *piVar12 = -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 != -1) {
    lVar5 = 0;
    do {
      pcVar1 = (char *)(*(long *)(param_1 + 0x38) + (long)iVar4 + lVar5);
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != -1);
    *param_2 = *param_2 + (int)lVar5;
  }
  lVar5 = *(long *)(param_3 + 0x20);
  iVar4 = *param_4;
  iVar7 = iVar4 - *(int *)(lVar5 + 0x20);
  if (iVar4 < *(int *)(lVar5 + 0x20)) {
    lVar8 = *(long *)(lVar5 + 0x18);
    iVar7 = iVar4;
    if (*(int *)(lVar5 + 0x98) != 0) {
      iVar7 = *(int *)(*(long *)(lVar5 + 0x90) + (long)iVar4 * 4);
    }
    if (iVar7 == -1) {
      iVar7 = iVar4;
      goto LAB_0315e8f0;
    }
    plVar9 = (long *)(lVar5 + 0xb0);
  }
  else {
    plVar9 = (long *)(lVar5 + 0xd0);
  }
  lVar8 = *plVar9;
LAB_0315e8f0:
  piVar12 = (int *)(lVar8 + (long)iVar7 * 0x10);
  iVar7 = (int)(short)piVar12[2];
  if (iVar7 != 0) {
    iVar4 = *piVar12;
    lVar5 = (long)iVar4;
    lVar10 = lVar5 << 1;
    lVar8 = lVar5 * 0x14;
    do {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar10) = 0xff00;
      lVar11 = *(long *)(param_3 + 0x20);
      if (lVar5 < *(int *)(lVar11 + 0x30)) {
        if (*(int *)(lVar11 + 0x78) == 0) {
          iVar6 = (int)lVar5;
        }
        else {
          iVar6 = *(int *)(*(long *)(lVar11 + 0x70) + lVar5 * 4);
        }
        if (iVar6 == -1) {
          piVar12 = (int *)(*(long *)(lVar11 + 0x28) + lVar5 * 0x14);
        }
        else {
          piVar12 = (int *)(*(long *)(lVar11 + 0xc0) + (long)iVar6 * 0x14);
        }
      }
      else {
        piVar12 = (int *)(*(long *)(lVar11 + 0xe0) + (long)*(int *)(lVar11 + 0x30) * -0x14 + lVar8);
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 0x14;
      lVar10 = lVar10 + 2;
      *(undefined1 *)(*(long *)(param_1 + 0x60) + (long)*piVar12) = 0xff;
    } while (iVar4 + iVar7 != lVar5);
    iVar4 = *param_4;
  }
  iVar7 = param_2[1];
  if (iVar4 <= param_2[1]) {
    iVar7 = iVar4;
  }
  param_2[1] = iVar7;
  return;
}


