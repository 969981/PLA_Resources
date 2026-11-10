/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94234; name: FUN_02e94234
 */


undefined8 FUN_02e94234(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint local_34;
  
  puVar8 = (uint *)(param_1 + 8 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x18);
  uVar5 = *puVar8;
  if (uVar5 < param_2) {
    uVar2 = param_2;
    if ((uVar5 & 0x1f) != 0) {
      uVar2 = param_2 + 0x1f;
    }
    lVar9 = (*DAT_0442d140)(0,uVar2,0x20);
    *(long *)(param_1 + 0x40) = lVar9;
    if (lVar9 != 0) {
      uVar2 = 0;
      if ((uVar5 & 0x1f) != 0) {
        uVar2 = 0x20 - (uVar5 & 0x1f);
      }
      piVar12 = (int *)(lVar9 + (ulong)uVar2);
      iVar6 = FUN_02e9b7a4(param_1 + 8,piVar12,param_2,&local_34);
      if (iVar6 != 1 || local_34 != param_2) {
        (*DAT_0442d158)(0,*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
        return 2;
      }
      goto LAB_02e94280;
    }
LAB_02e94418:
    uVar7 = 2;
  }
  else {
    *puVar8 = uVar5 - param_2;
    piVar12 = *(int **)(param_1 + 0x58);
    if (piVar12 == (int *)0x0) {
      piVar12 = *(int **)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = (long)piVar12 + (ulong)param_2;
LAB_02e94280:
      if (piVar12 == (int *)0x0) goto LAB_02e94418;
      iVar6 = *piVar12;
    }
    else {
      *(ulong *)(param_1 + 0x58) = (long)piVar12 + (ulong)param_2;
      iVar6 = *piVar12;
    }
    if (iVar6 != 0) {
      piVar12 = piVar12 + 1;
      do {
        while( true ) {
          iVar4 = *piVar12;
          uVar5 = piVar12[1];
          piVar10 = piVar12 + 2;
          piVar12 = piVar10;
          if (uVar5 != 0) {
            piVar12 = (int *)((long)piVar10 + (ulong)uVar5);
          }
          piVar3 = (int *)0x0;
          if (uVar5 != 0) {
            piVar3 = piVar10;
          }
          if ((DAT_0440a430 == 0) || (*DAT_0440a428 == iVar4)) {
            piVar10 = DAT_0440a428;
          }
          else {
            lVar9 = (ulong)DAT_0440a430 * 0x20;
            piVar11 = DAT_0440a428;
            do {
              lVar9 = lVar9 + -0x20;
              if (lVar9 == 0) goto LAB_02e9431c;
              piVar1 = piVar11 + 8;
              piVar10 = piVar11 + 8;
              piVar11 = piVar11 + 8;
            } while (*piVar1 != iVar4);
          }
          if (piVar10 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) break;
LAB_02e94308:
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_02e94378;
        }
LAB_02e9431c:
        if ((DAT_0440a440 == 0) || (*DAT_0440a438 == iVar4)) {
          piVar10 = DAT_0440a438;
        }
        else {
          lVar9 = (ulong)DAT_0440a440 * 0x28;
          piVar11 = DAT_0440a438;
          do {
            lVar9 = lVar9 + -0x28;
            if (lVar9 == 0) goto LAB_02e94368;
            piVar1 = piVar11 + 10;
            piVar10 = piVar11 + 10;
            piVar11 = piVar11 + 10;
          } while (*piVar1 != iVar4);
        }
        if (piVar10 != DAT_0440a438 + (ulong)DAT_0440a440 * 10) goto LAB_02e94308;
LAB_02e94368:
        FUN_02f33210(piVar3,0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
LAB_02e94378:
    uVar7 = 1;
  }
  return uVar7;
}


