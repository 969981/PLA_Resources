/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd6700; name: FUN_01cd6700
 */


void FUN_01cd6700(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  
  FUN_01cd60a0(param_1,param_1 + 2,param_1 + 4);
  plVar11 = param_1 + 4;
  plVar5 = param_1 + 6;
  do {
    if (plVar5 == param_2) {
      return;
    }
    fVar12 = *(float *)(plVar5 + 1);
    if (*(float *)(plVar11 + 1) < fVar12) {
      lVar10 = *plVar5;
      *plVar5 = 0;
      *plVar5 = 0;
      plVar7 = plVar5;
      while( true ) {
        plVar9 = plVar11;
        lVar8 = *plVar9;
        *plVar9 = 0;
        *plVar7 = lVar8;
        *(int *)(plVar7 + 1) = (int)plVar9[1];
        if (plVar9 == param_1) break;
        plVar11 = plVar9;
        if (fVar12 <= *(float *)(plVar9 + -1)) goto LAB_01cd67c4;
        plVar11 = plVar9 + -2;
        plVar6 = (long *)*plVar9;
        *plVar9 = 0;
        plVar7 = plVar9;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
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
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
      plVar11 = param_1;
LAB_01cd67c4:
      plVar7 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      *plVar11 = lVar10;
      *(float *)(plVar9 + 1) = fVar12;
    }
    plVar11 = plVar5;
    plVar5 = plVar5 + 2;
  } while( true );
}


