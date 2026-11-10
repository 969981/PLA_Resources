/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd64c0; name: FUN_01cd64c0
 */


int FUN_01cd64c0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  iVar5 = FUN_01cd6310();
  fVar9 = *(float *)(param_4 + 1);
  if (fVar9 < *(float *)(param_5 + 1)) {
    lVar8 = *param_4;
    *param_4 = 0;
    lVar7 = *param_5;
    *param_5 = 0;
    *param_4 = lVar7;
    *(int *)(param_4 + 1) = (int)param_5[1];
    plVar6 = (long *)*param_5;
    *param_5 = 0;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *param_5 = lVar8;
    *(float *)(param_5 + 1) = fVar9;
    fVar9 = *(float *)(param_3 + 1);
    if (*(float *)(param_4 + 1) <= fVar9) {
      iVar5 = iVar5 + 1;
    }
    else {
      lVar8 = *param_3;
      *param_3 = 0;
      lVar7 = *param_4;
      *param_4 = 0;
      *param_3 = lVar7;
      *(int *)(param_3 + 1) = (int)param_4[1];
      plVar6 = (long *)*param_4;
      *param_4 = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      *param_4 = lVar8;
      *(float *)(param_4 + 1) = fVar9;
      fVar9 = *(float *)(param_2 + 1);
      if (*(float *)(param_3 + 1) <= fVar9) {
        iVar5 = iVar5 + 2;
      }
      else {
        lVar8 = *param_2;
        *param_2 = 0;
        lVar7 = *param_3;
        *param_3 = 0;
        *param_2 = lVar7;
        *(int *)(param_2 + 1) = (int)param_3[1];
        plVar6 = (long *)*param_3;
        *param_3 = 0;
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        *param_3 = lVar8;
        *(float *)(param_3 + 1) = fVar9;
        fVar9 = *(float *)(param_1 + 1);
        if (*(float *)(param_2 + 1) <= fVar9) {
          iVar5 = iVar5 + 3;
        }
        else {
          lVar8 = *param_1;
          *param_1 = 0;
          lVar7 = *param_2;
          *param_2 = 0;
          *param_1 = lVar7;
          *(int *)(param_1 + 1) = (int)param_2[1];
          plVar6 = (long *)*param_2;
          *param_2 = 0;
          if (plVar6 != (long *)0x0) {
            lVar7 = plVar6[0xb];
            piVar1 = (int *)(lVar7 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar7 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))();
            }
          }
          iVar5 = iVar5 + 4;
          *param_2 = lVar8;
          *(float *)(param_2 + 1) = fVar9;
        }
      }
    }
  }
  return iVar5;
}


