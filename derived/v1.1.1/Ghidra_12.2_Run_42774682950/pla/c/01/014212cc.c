/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014212cc; name: FUN_014212cc
 */


void FUN_014212cc(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar8 = param_2[1];
  *param_1 = lVar8;
  if ((lVar8 != 0) && (lVar8 = param_2[2], param_1[1] = lVar8, lVar8 != 0)) {
    param_1[3] = param_2[4];
    param_1[4] = param_2[5];
    lVar8 = param_2[3];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = (long *)param_1[2];
    param_1[2] = lVar8;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      lVar8 = param_1[2];
    }
    if (lVar8 != 0) {
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 6);
      lVar8 = FUN_011ccc18(&local_50,*param_2);
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar7 = (long *)param_1[5];
      param_1[5] = 0;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      param_1[5] = lVar8;
      lVar8 = FUN_01422a54(&local_50,*param_2);
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar7 = (long *)param_1[6];
      param_1[6] = 0;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      lVar3 = (ulong)*(byte *)(param_1 + 7) * 0x1f8;
      param_1[6] = lVar8;
      local_50 = *(undefined8 *)(&DAT_0420e428 + lVar3);
      puStack_48 = (&PTR_s_anime_L_list_base_00_keep_0420e430)[(ulong)*(byte *)(param_1 + 7) * 0x3f]
      ;
      local_40 = *(undefined8 *)(&DAT_0420e438 + lVar3);
      uStack_38 = 0;
      FUN_0283b1e8(*param_1,&local_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


