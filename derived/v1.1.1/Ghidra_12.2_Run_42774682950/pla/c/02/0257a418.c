/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a418; name: FUN_0257a418
 */


void FUN_0257a418(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_68;
  
  plVar12 = (long *)param_1[0x59];
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar13 = 0;
  plVar7 = param_1;
  do {
    if ((ulong *)param_1[uVar13 * 2 + 0xd5] != (ulong *)0x0) {
      uVar14 = *(ulong *)param_1[uVar13 * 2 + 0xd5];
      local_68 = uVar14;
      lVar5 = FUN_025788d4(plVar7,uVar14 & 0xffffffff);
      if (lVar5 == 0) {
        plVar7 = (long *)param_1[0x59];
        if (plVar7 != (long *)0x0) {
          plVar8 = plVar7 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar8 = (long *)plVar7[0x29];
        lVar5 = plVar7[0x2a];
        if ((lVar5 != 0) && (*plVar8 != (&DAT_0425d808)[uVar13 * 3])) {
          plVar11 = plVar8 + lVar5 * 6;
          lVar5 = lVar5 * 0x30;
          plVar9 = plVar8;
          do {
            lVar5 = lVar5 + -0x30;
            if (lVar5 == 0) {
              plVar8 = plVar11;
              break;
            }
            plVar8 = plVar9 + 6;
            plVar1 = plVar9 + 6;
            plVar9 = plVar8;
          } while (*plVar1 != (&DAT_0425d808)[uVar13 * 3]);
        }
        *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe;
        if (plVar7 != (long *)0x0) {
          plVar8 = plVar7 + 10;
          do {
            iVar4 = (int)*plVar8 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
          }
        }
        plVar8 = (long *)plVar12[0x29];
        lVar5 = plVar12[0x2a];
        if ((lVar5 != 0) && (*plVar8 != (&DAT_0425d790)[uVar13 * 3])) {
          plVar11 = plVar8 + lVar5 * 6;
          lVar5 = lVar5 * 0x30;
          plVar9 = plVar8;
          do {
            lVar5 = lVar5 + -0x30;
            if (lVar5 == 0) {
              plVar8 = plVar11;
              break;
            }
            plVar8 = plVar9 + 6;
            plVar1 = plVar9 + 6;
            plVar9 = plVar8;
          } while (*plVar1 != (&DAT_0425d790)[uVar13 * 3]);
        }
        lVar5 = plVar8[4];
        bVar10 = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      else {
        lVar6 = FUN_025788d4(lVar5,uVar14 & 0xffffffff);
        if ((lVar6 != 0) && (param_1[0x89] != 0)) {
          FUN_0284ef04(param_1[0x89] + uVar13 * 0xd0,lVar6,0,0);
        }
        FUN_0257a950(param_1,uVar13 & 0xffffffff,lVar5);
        plVar7 = (long *)FUN_02579b58(param_1,uVar13 & 0xffffffff,&local_68);
        plVar8 = (long *)plVar12[0x29];
        lVar5 = plVar12[0x2a];
        if ((lVar5 != 0) && (*plVar8 != (&DAT_0425d790)[uVar13 * 3])) {
          plVar9 = plVar8 + lVar5 * 6;
          lVar5 = lVar5 * 0x30;
          do {
            lVar5 = lVar5 + -0x30;
            if (lVar5 == 0) {
              plVar8 = plVar9;
              break;
            }
            plVar1 = plVar8 + 6;
            plVar11 = plVar8 + 6;
            plVar8 = plVar1;
          } while (*plVar11 != (&DAT_0425d790)[uVar13 * 3]);
        }
        lVar5 = plVar8[4];
        bVar10 = *(byte *)(lVar5 + 0x58) | 1;
      }
      *(byte *)(lVar5 + 0x58) = bVar10;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == 5) {
      if (plVar12 != (long *)0x0) {
        plVar7 = plVar12 + 10;
        do {
          iVar4 = (int)*plVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0257a668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x10))(plVar12);
          return;
        }
      }
      return;
    }
  } while( true );
}


