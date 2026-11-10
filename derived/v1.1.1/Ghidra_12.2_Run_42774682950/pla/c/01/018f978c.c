/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f978c; name: FUN_018f978c
 */


uint FUN_018f978c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar6 = PTR_DAT_04381fc8;
  puVar5 = PTR_DAT_04381fc0;
  puVar4 = PTR_DAT_0437a1e8;
  lVar9 = *(long *)(param_1 + 0xf0);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0xc) == 0)) {
LAB_018f97ac:
    uVar7 = 0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_01900910();
        *(undefined **)puVar6 = puVar4;
        __cxa_guard_release(puVar5);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_018f97ac;
      while (puVar12 != (undefined8 *)puVar6) {
        puVar12 = (undefined8 *)*puVar12;
        uVar7 = 0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_018f97b0;
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
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            plVar10 = (long *)(lVar9 + -0x50);
            uVar7 = FUN_01a4a984(plVar10);
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
          goto LAB_018f97ac;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = 0;
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
LAB_018f97b0:
  return uVar7 & 1;
}


