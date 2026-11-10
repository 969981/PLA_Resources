/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b173c4; name: FUN_00b173c4
 */


long FUN_00b173c4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *local_68;
  
  puVar6 = PTR_DAT_0437a150;
  puVar5 = PTR_DAT_0437a148;
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar12 != plVar2) {
    plVar13 = *(long **)*param_1;
    do {
      lVar10 = *plVar12;
      if (lVar10 != 0) {
        puVar8 = (undefined8 *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009b19b4();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        if (puVar8 != (undefined8 *)0x0) {
LAB_00b17434:
          if (puVar8 != (undefined8 *)puVar6) goto code_r0x00b1743c;
          plVar11 = (long *)(lVar10 + -0x48);
          lVar14 = *plVar13;
          lVar15 = *(long *)(lVar10 + 0x10);
          local_68 = plVar11;
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar9;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_00b0bc88(&local_68,*(undefined1 *)(lVar14 + 8));
          lVar10 = *(long *)(lVar10 + 0x10);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
LAB_00b174b4:
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    if (plVar2 != (long *)param_2[1]) {
      lVar10 = 0;
      if (*plVar2 != 0) {
        lVar10 = *plVar2 + -0x48;
      }
      return lVar10;
    }
  }
  return 0;
code_r0x00b1743c:
  puVar8 = (undefined8 *)*puVar8;
  if (puVar8 == (undefined8 *)0x0) goto LAB_00b174b4;
  goto LAB_00b17434;
}


