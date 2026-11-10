/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f9df4; name: FUN_018f9df4
 */


void FUN_018f9df4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_0437a1e8;
  lVar9 = *(long *)(param_2 + 0xc0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar8 = *(int *)(lVar9 + 0xc);
    do {
      plVar10 = *(long **)(lVar9 + 0x10);
      FUN_01900910();
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_018f9e10;
        if (plVar10 == (long *)puVar5) break;
        plVar10 = (long *)*plVar10;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            uVar7 = *(undefined8 *)(lVar9 + 0x328);
            param_1[5] = *(undefined8 *)(lVar9 + 0x318);
            param_1[7] = uVar7;
            uVar7 = *(undefined8 *)(lVar9 + 0x308);
            param_1[1] = *(undefined8 *)(lVar9 + 0x2f8);
            param_1[3] = uVar7;
            uVar7 = *(undefined8 *)(lVar9 + 0x2f0);
            param_1[2] = *(undefined8 *)(lVar9 + 0x300);
            *param_1 = uVar7;
            uVar7 = *(undefined8 *)(lVar9 + 0x310);
            param_1[6] = *(undefined8 *)(lVar9 + 800);
            param_1[4] = uVar7;
            lVar6 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar6 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018f9f28. Too many branches */
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
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_018f9e10:
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


