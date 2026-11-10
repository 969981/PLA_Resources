/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026314b8; name: FUN_026314b8
 */


void FUN_026314b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [24];
  long *local_48;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar8 = *(long *)(param_1 + 0x318);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar9 = *(int *)(lVar8 + 0xc);
    do {
      plVar10 = *(long **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) {
          return;
        }
        if (plVar10 == (long *)puVar5) break;
        plVar10 = (long *)*plVar10;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar9) {
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
          FUN_026b7cf0(auStack_90,&DAT_03a7db10);
          FUN_02c90b20(plVar10,auStack_90);
          FUN_02c91f74(plVar10,auStack_60);
          FUN_02c90b44(plVar10);
          FUN_02c90b50(plVar10,1);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          FUN_00984b00(auStack_90);
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
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


