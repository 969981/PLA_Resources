/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01929df0; name: FUN_01929df0
 */


void FUN_01929df0(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  
  plVar6 = *(long **)(param_1 + 0xe8);
  if ((param_2 & 1) == 0) {
    FUN_02c91f14(plVar6);
    if (*(char *)(param_1 + 0x2e9) != '\0') {
      FUN_0192a0cc(param_1,0);
    }
    goto LAB_01929edc;
  }
  if (plVar6 == (long *)0x0) {
    FUN_02c90d40(0);
    plVar6 = *(long **)(param_1 + 0xf0);
joined_r0x0192a064:
    if (plVar6 != (long *)0x0) goto LAB_01929e78;
LAB_01929f84:
    FUN_02c90d40(0);
  }
  else {
    lVar7 = plVar6[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0192a06c;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02c90d40(plVar6);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar6 = *(long **)(param_1 + 0xf0);
      goto joined_r0x0192a064;
    }
    plVar6 = *(long **)(param_1 + 0xf0);
    if (plVar6 == (long *)0x0) goto LAB_01929f84;
LAB_01929e78:
    lVar7 = plVar6[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0192a06c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02c90d40(plVar6);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  if (*(char *)(param_1 + 0x2e9) != '\0') {
    if (*(long *)(param_1 + 0xa8) == 0) {
      local_48 = 0;
      uStack_44 = 0;
    }
    else {
      FUN_0192af0c(&local_48);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FUN_01f1f340(0,CONCAT44(uStack_44,local_48),3);
        plVar6 = (long *)CONCAT44(uStack_44,local_48);
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
    }
  }
LAB_01929edc:
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x2e9) = 0;
  *(undefined1 *)(param_1 + 700) = 0;
  if (((*PTR_DAT_0437a158 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  local_48 = local_48 & 0xffffff00;
  local_3c = 0;
  lVar7 = *(long *)PTR_DAT_0437a160;
  *(long *)PTR_DAT_0437a168 = lVar7;
  uStack_44 = 0x3f000000;
  uStack_40 = 0x3f000000;
  FUN_0192b080(lVar7 + 0x54,1,&local_48,0,0);
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 1;
  return;
}


