/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029565fc; name: FUN_029565fc
 */


void FUN_029565fc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *local_48;
  
  uVar11 = 0;
  do {
    uVar6 = FUN_02949cec(*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x15),
                         uVar11 & 0xffffffff);
    if ((uVar6 & 1) == 0) {
switchD_02956770_caseD_1:
      local_48 = (long *)0x0;
    }
    else {
      if (uVar11 != *(uint *)(param_1 + 0x1c)) {
        if (*(char *)(param_1 + 0x20) != '\0') {
          iVar5 = *(int *)(param_1 + 0x10);
          uVar10 = (uint)uVar11;
          if (iVar5 == 2) {
LAB_02956740:
            if ((int)uVar10 < 5) {
              if (*(char *)(param_1 + 0x14) == '\0') {
LAB_029567b8:
                if (uVar10 == 1) goto LAB_029567c0;
              }
              else {
                cVar3 = (&DAT_03a7eb14)[uVar11];
joined_r0x029567b0:
                if (cVar3 != '\0') {
LAB_029567c0:
                  uVar8 = 1;
                  goto LAB_02956674;
                }
              }
            }
          }
          else if (iVar5 == 1) {
            switch(*(undefined1 *)(param_1 + 0x15)) {
            case 0:
              if ((int)uVar10 < 5) {
                if (*(char *)(param_1 + 0x14) == '\0') goto LAB_029567b8;
                cVar3 = (&DAT_03a7eb19)[uVar11];
                goto joined_r0x029567b0;
              }
              break;
            case 2:
            case 4:
              if (((int)uVar10 < 5) && ((uVar10 | 2) == 3)) goto LAB_029567c0;
              break;
            case 3:
            case 5:
              if (((int)uVar10 < 5) && ((uVar11 & 0xfffffffb) != 0)) goto LAB_029567c0;
            }
          }
          else if (iVar5 == 0) goto LAB_02956740;
        }
        goto switchD_02956770_caseD_1;
      }
      uVar8 = 0;
LAB_02956674:
      FUN_02956978(&local_48,param_1,uVar11 & 0xffffffff,uVar8);
      if (local_48 != (long *)0x0) {
        plVar7 = local_48 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar7 = (long *)param_2[uVar11 + 1];
        param_2[uVar11 + 1] = (long)local_48;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        lVar2 = *param_2 + uVar11 * 0x10;
        lVar9 = *(long *)(*(long *)(*param_2 + 0x68) + 8);
        *(long *)(lVar2 + 0x80) = local_48[0xd];
        *(ulong *)(lVar2 + 0x88) = lVar9 + uVar11 * 0x38 + 8;
        if (local_48 != (long *)0x0) {
          plVar7 = local_48 + 10;
          do {
            iVar5 = (int)*plVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == 5) {
      return;
    }
  } while( true );
}


