/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b20b14; name: FUN_01b20b14
 */


void FUN_01b20b14(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01a2bf84(&local_48,param_1 + 0xb9);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_38);
    puVar4 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
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
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 != (long *)0x0) {
    FUN_01bf4ed4(local_38,*(undefined4 *)(param_2 + 4),*(undefined1 *)(param_2 + 0xd));
    if (((*(int *)(param_2 + 4) == 3) && (FUN_01a83548(param_1), *(char *)(param_2 + 0xc) != '\0'))
       && ((char)local_38[0x246] == '\0')) {
      uVar6 = (**(code **)(*param_1 + 0x208))(param_1);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*param_1 + 0x1b0))(param_1);
        if ((uVar6 & 1) == 0) {
          FUN_01bf4fd8(local_38,1);
        }
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x228))(param_1);
        if ((uVar6 & 1) == 0) {
          (**(code **)(*param_1 + 0x220))(param_1,1);
        }
      }
    }
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


