/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260f998; name: FUN_0260f998
 */


void FUN_0260f998(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  long *local_58;
  
  puVar4 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar8 = *(long *)(param_1 + 0x348);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar9 = *(int *)(lVar8 + 0xc);
    do {
      plVar10 = *(long **)(lVar8 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar6), iVar5 != 0)) {
        uVar7 = FUN_00ad3750();
        *(undefined8 *)puVar4 = uVar7;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) {
          return;
        }
        if (plVar10 == (long *)puVar4) break;
        plVar10 = (long *)*plVar10;
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
          plVar10 = (long *)(lVar8 + -0x50);
          if (param_2 == 0) {
            puVar6 = &DAT_03a7da48;
          }
          else {
            if (param_2 != 1) goto LAB_0260fab8;
            puVar6 = &DAT_03a7da70;
          }
          FUN_017d3788(auStack_a0,puVar6);
          FUN_02c90b20(plVar10,auStack_a0);
          FUN_02c91f74(plVar10,auStack_70);
          FUN_02c90b50(plVar10,1);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          FUN_00984b00(auStack_a0);
LAB_0260fab8:
          lVar8 = *(long *)(lVar8 + 8);
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
  return;
}


