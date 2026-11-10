/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143794c; name: FUN_0143794c
 */


undefined8 FUN_0143794c(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x688));
  if (((*param_2 != 0) && (*(int *)(*param_2 + 0xc) != 0)) && (*param_2 != 0)) {
    FUN_00b907c8(&local_38);
    plVar6 = local_38;
    if (local_38 != (long *)0x0) {
      FUN_01b39678(&local_38,local_38);
      uVar8 = FUN_02c628e4(local_38);
      if (local_38 == (long *)0x0) {
LAB_01437a04:
        if ((uVar8 & 1) == 0) goto LAB_01437b14;
LAB_01437a08:
        FUN_01437578(param_1);
        FUN_01440094(&local_48);
        plVar1 = local_48;
        if (local_48 == (long *)0x0) goto LAB_01437b14;
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_009ab200(&local_58,param_2);
        FUN_01435cd4(plVar1,&local_58);
        puVar5 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_58 + 1);
          do {
            iVar7 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            local_58[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_38 = (long *)*puVar5;
            FUN_02a44274(lVar9 + 0xd8,&local_38);
          }
        }
        FUN_01435db4(local_48);
        if (local_48 != (long *)0x0) {
          lVar9 = local_48[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar7 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 1) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        uVar10 = 1;
      }
      else {
        plVar1 = local_38 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 != 0) goto LAB_01437a04;
        (**(code **)(*local_38 + 0x10))();
        if ((uVar8 & 1) != 0) goto LAB_01437a08;
LAB_01437b14:
        uVar10 = 0;
      }
      lVar9 = plVar6[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      goto LAB_01437998;
    }
  }
  uVar10 = 0;
LAB_01437998:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x688));
  return uVar10;
}


