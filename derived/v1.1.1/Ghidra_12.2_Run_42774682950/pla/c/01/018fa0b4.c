/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fa0b4; name: FUN_018fa0b4
 */


void FUN_018fa0b4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_04381fc8;
  puVar5 = PTR_DAT_04381fc0;
  puVar4 = PTR_DAT_0437a1e8;
  lVar9 = *(long *)(param_2 + 0xf0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      plVar12 = *(long **)(lVar9 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_01900910();
        *(undefined **)puVar6 = puVar4;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_018fa0d4;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
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
            uVar10 = *(undefined8 *)(lVar9 + 0x328);
            param_1[5] = *(undefined8 *)(lVar9 + 0x318);
            param_1[7] = uVar10;
            uVar10 = *(undefined8 *)(lVar9 + 0x308);
            param_1[1] = *(undefined8 *)(lVar9 + 0x2f8);
            param_1[3] = uVar10;
            uVar10 = *(undefined8 *)(lVar9 + 0x2f0);
            param_1[2] = *(undefined8 *)(lVar9 + 0x300);
            *param_1 = uVar10;
            uVar10 = *(undefined8 *)(lVar9 + 0x310);
            param_1[6] = *(undefined8 *)(lVar9 + 800);
            param_1[4] = uVar10;
            lVar8 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar8 + 0xc);
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
              *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018fa200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))();
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_018fa0d4:
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


