/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c40f4; name: FUN_008c40f4
 */


void FUN_008c40f4(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  
  if (*param_3 != 0) {
    bVar8 = *(byte *)((long *)*param_1 + 0x11);
    (**(code **)(*(long *)*param_1 + 0x28))();
    if (param_2 == 0) {
      return;
    }
    uVar7 = FUN_02c6917c(*(undefined8 *)(*param_3 + 0x98));
    param_2 = param_2 + (ulong)bVar8 * 0x80;
    *(undefined1 *)(param_2 + 0x20) = uVar7;
    lVar13 = *(long *)(*param_3 + 0x98);
    lVar11 = nn::os::GetCurrentThread();
    plVar14 = (long *)(lVar13 + 0x30);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x24));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_008c4198;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_008c4198:
    uVar9 = FUN_02c69ba8(lVar13);
    *(undefined8 *)(lVar13 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x24));
    puVar4 = PTR_DAT_04379558;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar6 = PTR_DAT_04379568;
    puVar5 = PTR_DAT_04379560;
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar14 = *(long **)(lVar11 + 0x268);
    if (plVar14 == (long *)0x0) {
      *(bool *)(param_2 + 0x21) = uVar9 != DAT_0000007f;
      bVar8 = *puVar4;
    }
    else {
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_008c43d4;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(bool *)(param_2 + 0x21) = uVar9 != *(byte *)((long)plVar14 + 0x7f);
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        bVar8 = *puVar4;
      }
      else {
        bVar8 = *puVar4;
      }
    }
    if (((bVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)puVar5;
    *(long *)puVar6 = lVar11;
    plVar14 = *(long **)(lVar11 + 0x268);
    if (plVar14 == (long *)0x0) {
      bVar8 = FUN_01123e40(0,*param_3);
      *(byte *)(param_2 + 0x22) = bVar8 & 1;
    }
    else {
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_008c43d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar8 = FUN_01123e40(plVar14,*param_3);
      *(byte *)(param_2 + 0x22) = bVar8 & 1;
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x008c435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return;
      }
    }
  }
  return;
}


