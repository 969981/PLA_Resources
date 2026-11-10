/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02afeadc; name: FUN_02afeadc
 */


void FUN_02afeadc(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *local_30;
  long *local_28;
  
  plVar11 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = (undefined1 *)plVar11[0x27];
  if (puVar6 != (undefined1 *)0x0) {
    uVar7 = (long)puVar6 - ((ulong)puVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      puVar8 = (undefined1 *)((ulong)(puVar6 + -1) & 0x5df8a77c4b1003f0);
    }
    else {
      puVar8 = &DAT_5df8a77c4b1003f0;
      if (puVar6 < (undefined1 *)0x5df8a77c4b1003f1) {
        uVar5 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar5 = 0x5df8a77c4b1003f0 / (ulong)puVar6;
        }
        puVar8 = &DAT_5df8a77c4b1003f0 + -(uVar5 * (long)puVar6);
      }
    }
    plVar9 = *(long **)(plVar11[0x26] + (long)puVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == &DAT_5df8a77c4b1003f0) {
            if ((undefined1 *)plVar9[2] == &DAT_5df8a77c4b1003f0) goto LAB_02afed10;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar6 + -1)) != puVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar10 = (undefined1 *)plVar9[1];
          if (puVar10 == &DAT_5df8a77c4b1003f0) {
            if ((undefined1 *)plVar9[2] == &DAT_5df8a77c4b1003f0) goto LAB_02afed10;
          }
          else {
            if (puVar6 <= puVar10) {
              uVar7 = 0;
              if (puVar6 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar10 / (ulong)puVar6;
              }
              puVar10 = puVar10 + -(uVar7 * (long)puVar6);
            }
            if (puVar10 != puVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  local_28 = (long *)0x0;
joined_r0x02afed34:
  if (puVar6 != (undefined1 *)0x0) {
    uVar7 = (long)puVar6 - ((ulong)puVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      puVar8 = (undefined1 *)((ulong)(puVar6 + -1) & 0x805357d99b3be92e);
    }
    else {
      puVar8 = &DAT_805357d99b3be92e;
      if (puVar6 < (undefined1 *)0x805357d99b3be92f) {
        uVar5 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar5 = 0x805357d99b3be92e / (ulong)puVar6;
        }
        puVar8 = &DAT_805357d99b3be92e + -(uVar5 * (long)puVar6);
      }
    }
    plVar9 = *(long **)(plVar11[0x26] + (long)puVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == &DAT_805357d99b3be92e) {
            if ((undefined1 *)plVar9[2] == &DAT_805357d99b3be92e) goto LAB_02afedc8;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar6 + -1)) != puVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar10 = (undefined1 *)plVar9[1];
          if (puVar10 == &DAT_805357d99b3be92e) {
            if ((undefined1 *)plVar9[2] == &DAT_805357d99b3be92e) goto LAB_02afedc8;
          }
          else {
            if (puVar6 <= puVar10) {
              uVar7 = 0;
              if (puVar6 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar10 / (ulong)puVar6;
              }
              puVar10 = puVar10 + -(uVar7 * (long)puVar6);
            }
            if (puVar10 != puVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  local_30 = (long *)0x0;
LAB_02afed3c:
  plVar9 = local_30;
  if (local_28 == (long *)0x0) {
    if (local_30 == (long *)0x0) goto joined_r0x02afed80;
  }
  else {
    if (local_30 == (long *)0x0) goto joined_r0x02afed80;
    FUN_02afd574(param_1,&local_28,&local_30,&local_28,&local_30);
  }
  plVar1 = plVar9 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
joined_r0x02afed80:
  if (local_28 != (long *)0x0) {
    plVar9 = local_28 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02afee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))(plVar11);
      return;
    }
  }
  return;
LAB_02afed10:
  local_28 = (long *)plVar9[6];
  if (local_28 != (long *)0x0) {
    plVar9 = local_28 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined1 *)plVar11[0x27];
  }
  goto joined_r0x02afed34;
LAB_02afedc8:
  local_30 = (long *)plVar9[6];
  if (local_30 != (long *)0x0) {
    plVar9 = local_30 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  goto LAB_02afed3c;
}


