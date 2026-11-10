/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01590dc4; name: FUN_01590dc4
 */


void FUN_01590dc4(long param_1,long *param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar6;
  int *piVar5;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x138);
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)plVar9[3];
  do {
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
      }
      piVar5 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((int *)*param_2 != (int *)param_2[1]) {
      piVar5 = (int *)*param_2;
      do {
        piVar6 = piVar5 + 1;
        if (*(int *)(plVar8[0xe] + 0x220) == *piVar5) {
          FUN_015916d0(plVar8[0xe],param_3 & 1,param_4,param_5);
          break;
        }
        piVar5 = piVar6;
      } while ((int *)param_2[1] != piVar6);
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      piVar5 = (int *)(lVar7 + 0xc);
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar8 = (long *)plVar9[3];
  } while( true );
}


