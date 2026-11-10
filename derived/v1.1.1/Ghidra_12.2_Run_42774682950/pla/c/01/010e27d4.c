/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e27d4; name: FUN_010e27d4
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_010e27d4(long param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2 < 0x20) {
    lVar10 = 0;
    iVar8 = 0;
    do {
      plVar9 = (long *)*param_3;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      plVar1 = plVar9 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      (**(code **)(*plVar9 + 0x28))
                (plVar9,param_1 + (ulong)param_2 * 0x2a30 + lVar10 * 0x168 + 0x68);
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      iVar5 = FUN_02c6849c(plVar9[0x13]);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        if ((param_4 & 1) == 0) {
          uVar7 = FUN_02c6cf3c(plVar9[0x13]);
          iVar5 = 0;
          if (((uVar7 & 1) != 0) ||
             ((*(ushort *)(*(long *)(plVar9[0x13] + 0x10) + 4) >> 2 & 1) != 0)) goto LAB_010e2880;
        }
        iVar5 = 1;
      }
LAB_010e2880:
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      lVar10 = lVar10 + 1;
      iVar8 = iVar5 + iVar8;
    } while (lVar10 != 0x1e);
  }
  else {
    iVar5 = 0;
    iVar8 = 0;
    do {
      plVar9 = (long *)*param_3;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      iVar6 = FUN_02c6849c(plVar9[0x13]);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        if ((param_4 & 1) == 0) {
          uVar7 = FUN_02c6cf3c(plVar9[0x13]);
          iVar6 = 0;
          if (((uVar7 & 1) != 0) ||
             ((*(ushort *)(*(long *)(plVar9[0x13] + 0x10) + 4) >> 2 & 1) != 0)) goto LAB_010e2958;
        }
        iVar6 = 1;
      }
LAB_010e2958:
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
      iVar5 = iVar5 + 1;
      iVar8 = iVar6 + iVar8;
    } while (iVar5 != 0x1e);
  }
  return iVar8;
}


