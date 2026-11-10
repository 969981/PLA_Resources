/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e205cc; name: FUN_01e205cc
 */


void FUN_01e205cc(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  
  puVar5 = PTR_DAT_04382230;
  puVar4 = PTR_DAT_04382228;
  lVar8 = *param_2;
  lVar9 = 0;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0xc) == 0) {
LAB_01e20630:
      lVar9 = 0;
    }
    else {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar10 = *(int *)(lVar8 + 0xc);
      do {
        puVar11 = *(undefined8 **)(lVar8 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_018cf5f0();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        if (puVar11 == (undefined8 *)0x0) goto LAB_01e20630;
        while (puVar11 != (undefined8 *)puVar5) {
          puVar11 = (undefined8 *)*puVar11;
          lVar9 = 0;
          if (puVar11 == (undefined8 *)0x0) goto LAB_01e205ec;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar9 = 0;
            if (*(long *)(lVar8 + 0x18) != 0) {
              lVar9 = *(long *)(lVar8 + 0x18) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar9 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
  }
LAB_01e205ec:
  *param_1 = lVar9;
  return;
}


