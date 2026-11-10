/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01915c94; name: FUN_01915c94
 */


void FUN_01915c94(long *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  if ((*param_1 != 0) && (FUN_00b911c4(&local_28), local_28 != (long *)0x0)) {
    local_50 = (undefined8 *)0x0;
    pcStack_48 = (char *)0x0;
    FUN_01ba7324(&local_50,local_28 + 300);
    if (local_50 == (undefined8 *)0x0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_019174ac(&local_30);
      puVar4 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_50 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_18 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_18);
        }
      }
    }
    if (local_30 != (long *)0x0) {
      if ((param_2 & 1) == 0) {
        FUN_00b5283c();
      }
      else {
        local_50 = (undefined8 *)0x79479c9171128967;
        pcStack_48 = "field";
        local_40 = 5;
        local_38 = (long *)0x0;
        FUN_00b52884(local_30,&local_50);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (local_30 != (long *)0x0) {
        lVar6 = local_30[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


