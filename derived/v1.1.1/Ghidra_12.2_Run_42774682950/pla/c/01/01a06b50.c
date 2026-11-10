/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a06b50; name: FUN_01a06b50
 */


uint FUN_01a06b50(ulong param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  if (param_2 != 0) {
    FUN_00cf6d78(&local_30,param_2 + 8);
    if (local_30 != (long *)0x0) {
      if ((char)local_30[0x40] == '\0') {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_00b63974(&local_40,param_2 + 8);
        uVar7 = FUN_019ea274(param_1,&local_40);
        puVar5 = local_40;
        param_1 = uVar7 & 0xffffffff;
        uVar9 = (uint)uVar7;
        bVar4 = false;
        if (local_40 == (undefined8 *)0x0) goto LAB_01a06b8c;
        piVar1 = (int *)(local_40 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 1) {
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
        bVar4 = false;
      }
      else {
        bVar4 = true;
LAB_01a06b8c:
        uVar9 = (uint)param_1;
      }
      if (local_30 != (long *)0x0) {
        lVar8 = local_30[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      if (!bVar4) goto LAB_01a06bb8;
    }
  }
  uVar9 = 0;
LAB_01a06bb8:
  return uVar9 & 1;
}


