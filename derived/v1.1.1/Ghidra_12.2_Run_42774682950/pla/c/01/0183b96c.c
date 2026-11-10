/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183b96c; name: FUN_0183b96c
 */


undefined8 FUN_0183b96c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_0437a5f0;
  puVar4 = PTR_DAT_0437a5e8;
  if (*(char *)(param_1 + 0x200) == '\0') {
LAB_0183ba4c:
    uVar7 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x280);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar10 = *(int *)(lVar9 + 0xc);
      do {
        plVar11 = *(long **)(lVar9 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_018415dc();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0183b990;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_0183b9cc;
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            plVar11 = (long *)(lVar9 + -0x50);
            uVar8 = FUN_01c35a98(plVar11);
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 != 0) {
              if ((uVar8 & 1) == 0) break;
              goto LAB_0183ba4c;
            }
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            if ((uVar8 & 1) != 0) goto LAB_0183ba4c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0183b9cc:
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_0183b990:
    uVar7 = 1;
  }
  return uVar7;
}


