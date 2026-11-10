/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d42690; name: FUN_00d42690
 */


void FUN_00d42690(long param_1,uint param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_00d2d44c(param_1 + 0x180,param_2 & 1);
  if ((param_3 & 1) != 0) {
    plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x580) + 0x10))();
    puVar9 = PTR_DAT_0437b330;
    puVar8 = PTR_DAT_0437b328;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    lVar13 = *plVar11;
    lVar2 = plVar11[1];
    if (lVar13 != lVar2) {
      do {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00d45370(&local_78);
        if ((local_78 != (undefined8 *)0x0) &&
           (puVar15 = (undefined8 *)local_78[3], puVar15 != (undefined8 *)0x0)) {
          plVar11 = (long *)(**(code **)*puVar15)(puVar15);
          if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar8);
          }
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)puVar9) {
              puVar15 = puVar15 + -10;
              goto LAB_00d4278c;
            }
          }
        }
        puVar15 = (undefined8 *)0x0;
LAB_00d4278c:
        FUN_00d42690(puVar15,param_2 & 1,1);
        puVar15 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_78[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar14 = *(long *)puVar6;
            *(long *)puVar7 = lVar14;
            local_68 = *puVar15;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        lVar13 = lVar13 + 0x10;
      } while (lVar13 != lVar2);
    }
  }
  return;
}


