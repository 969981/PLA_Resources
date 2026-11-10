/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4290c; name: FUN_00d4290c
 */


long * FUN_00d4290c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x19;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_28;
  
  plVar9 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x580) + 0x10))();
  if (plVar9[1] != *plVar9) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00d45370(&local_40);
    if (local_40 != (undefined8 *)0x0) {
      if (*(int *)((long)local_40 + 0xc) == 0) {
        bVar3 = true;
        puVar5 = local_40;
      }
      else {
        if (local_40 == (undefined8 *)0x0) {
          local_28 = (long *)0x0;
        }
        else {
          FUN_00d45fa4(&local_28);
        }
        unaff_x19 = local_28;
        plVar9 = (long *)(**(code **)local_28[10])(local_28 + 10);
        puVar7 = PTR_DAT_0437b330;
        if (((*PTR_DAT_0437b328 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar6 = PTR_DAT_043794d8, iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(PTR_DAT_0437b328);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar7) goto joined_r0x00d429e0;
        }
        unaff_x19 = (long *)0x0;
joined_r0x00d429e0:
        if (local_28 != (long *)0x0) {
          lVar11 = local_28[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
        bVar3 = false;
        puVar5 = local_40;
      }
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar5[2] = 0;
          local_40 = puVar5;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_28 = (long *)*puVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_28);
        }
      }
      if (!bVar3) {
        return unaff_x19;
      }
    }
  }
  return (long *)0x0;
}


