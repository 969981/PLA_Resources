/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a8d10; name: FUN_025a8d10
 */


void FUN_025a8d10(undefined4 param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined4 *local_68;
  undefined4 local_54;
  
  puVar7 = PTR_DAT_04380750;
  puVar6 = PTR_DAT_04380748;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *(long *)(param_2 + 0x90);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    local_54 = param_1;
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (plVar12 == (long *)puVar7) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          plVar12 = (long *)(lVar10 + -0x50);
          local_68 = &local_54;
          FUN_025a8ed0(plVar12,param_3,&local_68);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


