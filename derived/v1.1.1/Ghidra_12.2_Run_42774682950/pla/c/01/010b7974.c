/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b7974; name: FUN_010b7974
 */


void FUN_010b7974(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,int param_5)

{
  long *plVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  
  lVar15 = *(long *)(*param_4 + 0x58);
  iVar10 = FUN_02c30040();
  puVar9 = PTR_DAT_0437b238;
  puVar8 = PTR_DAT_0437b230;
  puVar7 = PTR_DAT_0437b228;
  if (iVar10 != 0) {
    uVar13 = 0;
    do {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar7);
      }
      lVar12 = *(long *)puVar8;
      *(long *)puVar9 = lVar12;
      plVar14 = *(long **)(lVar12 + (long)param_5 * 0x28 + 0xe0);
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar11 = (**(code **)(plVar14[0xd] + 0xa8))
                         (plVar14 + 0xd,*(undefined2 *)(lVar15 + uVar13 * 2));
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 10;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if ((uVar11 & 1) == 0) {
        local_6c = 2;
        lVar12 = FUN_00a246f0(auStack_68,param_3,&local_6c);
        *param_1 = lVar12;
        if (lVar12 != 0) {
          piVar2 = (int *)(lVar12 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iVar10 = FUN_02c30040(*param_4);
        if (iVar10 == 0) {
          return;
        }
        uVar13 = 0;
        while( true ) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_0437b240,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar12 = *(long *)puVar8;
          *(long *)puVar9 = lVar12;
          plVar14 = *(long **)(lVar12 + (long)param_5 * 0x28 + 0xe0);
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar11 = (**(code **)(plVar14[0xd] + 0xa8))
                             (plVar14 + 0xd,*(undefined2 *)(lVar15 + uVar13 * 2));
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 10;
            do {
              iVar10 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          if ((uVar11 & 1) == 0) break;
          uVar13 = uVar13 + 1;
          uVar11 = FUN_02c30040(*param_4);
          if ((uVar11 & 0xffffffff) <= uVar13) {
            return;
          }
        }
        lVar12 = *param_1;
        if (*(char *)(lVar12 + 0x7c) == '\0') {
          return;
        }
        uVar3 = *(ushort *)(lVar12 + 0x7a);
        uVar11 = (ulong)uVar3;
        sVar4 = *(short *)(lVar15 + (uVar13 & 0xffffffff) * 2);
        if (uVar3 + 1 < (uint)*(ushort *)(lVar12 + 0x78)) {
          *(ushort *)(lVar12 + 0x7a) = uVar3 + 1;
          *(short *)(*(long *)(lVar12 + 0x58) + uVar11 * 2) = sVar4;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x7a);
        }
        else {
          if (sVar4 != 0) {
            return;
          }
          if (uVar3 + 1 != (uint)*(ushort *)(lVar12 + 0x78)) {
            return;
          }
          *(ushort *)(lVar12 + 0x7a) = uVar3 + 1;
        }
        *(undefined2 *)(*(long *)(lVar12 + 0x58) + uVar11 * 2) = 0;
        return;
      }
      uVar13 = uVar13 + 1;
      uVar11 = FUN_02c30040(*param_4);
    } while (uVar13 < (uVar11 & 0xffffffff));
  }
  *param_1 = 0;
  return;
}


