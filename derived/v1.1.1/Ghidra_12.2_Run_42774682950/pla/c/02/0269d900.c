/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269d900; name: FUN_0269d900
 */


void FUN_0269d900(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_58 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_00ad52f4(&local_60);
  puVar10 = local_60;
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  if (local_60 != (undefined8 *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar7 = *(int *)((long)local_60 + 0xc);
      do {
        plVar12 = (long *)puVar10[2];
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_0269da1c;
          if (plVar12 == (long *)puVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_0269d978;
          lVar11 = puVar10[3];
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + -0x50);
            FUN_02c90b50(plVar12,1);
            if (*(int *)*param_1 == 1) {
              lVar8 = FUN_02c90d14(plVar12);
              if (lVar8 != 0) {
                puVar10 = &DAT_043e9c70;
LAB_0269d9fc:
                FUN_002669b0(lVar8,puVar10);
              }
            }
            else if ((*(int *)*param_1 == 2) && (lVar8 = FUN_02c90d14(plVar12), lVar8 != 0)) {
              if (*(char *)(*param_1 + 4) == '\0') {
                puVar10 = &DAT_043e9cc8;
              }
              else {
                puVar10 = &DAT_043e9d20;
              }
              goto LAB_0269d9fc;
            }
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 != 0) break;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            if (local_60 == (undefined8 *)0x0) {
              return;
            }
            goto LAB_0269da24;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0269d978:
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_0269da1c:
    if (local_60 != (undefined8 *)0x0) {
LAB_0269da24:
      puVar10 = local_60;
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  return;
}


