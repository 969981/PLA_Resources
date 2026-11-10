/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b17250; name: FUN_00b17250
 */


long * FUN_00b17250(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_58;
  
  puVar5 = PTR_DAT_0437a150;
  puVar4 = PTR_DAT_0437a148;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar9 = *param_1;
  do {
    if (lVar9 != 0) {
      puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_009b19b4();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      if (puVar7 != (undefined8 *)0x0) {
LAB_00b172cc:
        if (puVar7 != (undefined8 *)puVar5) break;
        plVar10 = (long *)(lVar9 + -0x48);
        lVar11 = *param_3;
        lVar12 = *(long *)(lVar9 + 0x10);
        local_58 = plVar10;
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_00b0bc88(&local_58,*(undefined1 *)(lVar11 + 8));
        lVar9 = *(long *)(lVar9 + 0x10);
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
    }
LAB_00b17298:
    param_1 = param_1 + 1;
    if (param_1 == param_2) {
      return param_2;
    }
    lVar9 = *param_1;
  } while( true );
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_00b17298;
  goto LAB_00b172cc;
}


