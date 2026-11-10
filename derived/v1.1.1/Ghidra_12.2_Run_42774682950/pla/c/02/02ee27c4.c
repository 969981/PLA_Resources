/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee27c4; name: FUN_02ee27c4
 */


void FUN_02ee27c4(long *param_1,long param_2,int param_3,int param_4,undefined1 *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 == 0) {
LAB_02ee282c:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return;
  }
  uVar2 = (int)param_2 + param_3;
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar2 / uVar3;
  }
  plVar13 = *(long **)(param_1[3] + (ulong)(uVar2 - uVar9 * uVar3) * 8);
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_02ee282c;
    if ((*plVar13 == param_2) && ((int)plVar13[1] == param_3)) break;
    plVar13 = (long *)plVar13[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = (int)plVar13[0xb] != 0;
  }
  if (*(uint *)(plVar13 + 0xb) == 0) {
    return;
  }
  piVar14 = (int *)plVar13[10];
  lVar6 = (ulong)*(uint *)(plVar13 + 0xb) << 5;
  while (*piVar14 != param_4) {
    piVar14 = piVar14 + 8;
    lVar6 = lVar6 + -0x20;
    if (lVar6 == 0) {
      return;
    }
  }
  uVar3 = piVar14[1];
  if (*(long *)(piVar14 + 2) != 0) {
    (*DAT_0442d150)(0);
    piVar14[2] = 0;
    piVar14[3] = 0;
  }
  piVar14[4] = 0;
  piVar14[5] = 0;
  uVar9 = *(uint *)(plVar13 + 0xb);
  piVar7 = (int *)(plVar13[10] + (ulong)uVar9 * 0x20 + -0x20);
  if (piVar14 < piVar7) {
    do {
      piVar10 = piVar14 + 8;
      *(undefined8 *)(piVar14 + 6) = *(undefined8 *)(piVar14 + 0xe);
      *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar14 + 0xc);
      *(undefined8 *)(piVar14 + 2) = *(undefined8 *)(piVar14 + 10);
      *(undefined8 *)piVar14 = *(undefined8 *)piVar10;
      piVar14 = piVar10;
    } while (piVar10 < piVar7);
    uVar9 = *(uint *)(plVar13 + 0xb);
  }
  *(uint *)(plVar13 + 0xb) = uVar9 - 1;
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 != 0) {
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = uVar3 / uVar9;
    }
    for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar3 - uVar4 * uVar9) * 8); puVar5 != (uint *)0x0;
        puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == uVar3) {
        FUN_02ee16f8(puVar5,plVar13);
        break;
      }
    }
  }
  FUN_02ec55d0(DAT_0440a180,plVar13,uVar3);
  if ((int)plVar13[0xb] != 0) {
    return;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != 0) {
    uVar9 = 0;
    if (uVar3 != 0) {
      uVar9 = uVar2 / uVar3;
    }
    plVar8 = (long *)(param_1[3] + (ulong)(uVar2 - uVar9 * uVar3) * 8);
    if ((long *)*plVar8 != (long *)0x0) {
      plVar11 = (long *)0x0;
      plVar12 = (long *)*plVar8;
      do {
        if ((*plVar12 == param_2) && ((int)plVar12[1] == param_3)) {
          if (plVar11 != (long *)0x0) {
            plVar8 = plVar11 + 2;
          }
          *plVar8 = plVar12[2];
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          break;
        }
        plVar1 = plVar12 + 2;
        plVar11 = plVar12;
        plVar12 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
    }
  }
  if (plVar13[10] != 0) {
    *(undefined4 *)(plVar13 + 0xb) = 0;
    (*DAT_0442d150)(0);
    plVar13[10] = 0;
    *(undefined4 *)((long)plVar13 + 0x5c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02ee2a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,plVar13);
  return;
}


