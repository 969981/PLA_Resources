/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb11cc; name: FUN_02bb11cc
 */


void FUN_02bb11cc(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int local_38;
  int iStack_34;
  
  local_38 = param_2;
  iStack_34 = param_3;
  if (*param_4 != 0) {
    FUN_02ba48cc(param_1 + 0x230,*(undefined4 *)(*param_4 + 0xa0));
  }
  piVar9 = *(int **)(param_1 + 0x78);
joined_r0x02bb1218:
  if (piVar9 == *(int **)(param_1 + 0x80)) {
    FUN_02bb232c((undefined8 *)(param_1 + 0x78),&local_38,&iStack_34,param_4);
LAB_02bb12e4:
    lVar7 = *(long *)(param_1 + 0x240);
    for (lVar5 = *(long *)(param_1 + 0x238); lVar5 != lVar7; lVar5 = lVar5 + 0x18) {
      *(undefined1 *)(lVar5 + 0x10) = 1;
    }
  }
  else {
    if ((*piVar9 != param_2) || (piVar9[1] != param_3)) goto LAB_02bb1220;
    param_4 = (long *)*param_4;
    uVar8 = (*(long *)(param_1 + 0x240) - *(long *)(param_1 + 0x238) >> 3) * -0x5555555555555555;
    uVar6 = (ulong)*(uint *)(param_4 + 0x14);
    if (((char)piVar9[4] == '\0') || (uVar6 <= uVar8)) {
      plVar4 = *(long **)(piVar9 + 2);
      if (plVar4 == param_4) {
        bVar3 = false;
      }
      else {
        if (param_4 != (long *)0x0) {
          plVar4 = param_4 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *(int *)plVar4 = (int)*plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar4 = *(long **)(piVar9 + 2);
        }
        *(long **)(piVar9 + 2) = param_4;
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 10;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        bVar3 = true;
      }
      if ((bool)(char)piVar9[4] == uVar8 < uVar6) {
        if (!bVar3) {
          return;
        }
      }
      else {
        *(bool *)(piVar9 + 4) = uVar8 < uVar6;
      }
      goto LAB_02bb12e4;
    }
  }
  return;
LAB_02bb1220:
  piVar9 = piVar9 + 6;
  goto joined_r0x02bb1218;
}


