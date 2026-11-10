/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad28e0; name: FUN_00ad28e0
 */


uint FUN_00ad28e0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  if (((*(char *)(param_1 + 0x31e) == '\0') && (lVar9 = *(long *)(param_1 + 0x4c0), lVar9 != 0)) &&
     (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_00ad2904;
      while (puVar12 != (undefined8 *)puVar5) {
        puVar12 = (undefined8 *)*puVar12;
        uVar6 = 1;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00ad2908;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            plVar10 = (long *)(lVar9 + -0x50);
            uVar6 = FUN_02c90b28(plVar10);
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
            break;
          }
          goto LAB_00ad2904;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = 1;
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
  else {
LAB_00ad2904:
    uVar6 = 1;
  }
LAB_00ad2908:
  return uVar6 & 1;
}


