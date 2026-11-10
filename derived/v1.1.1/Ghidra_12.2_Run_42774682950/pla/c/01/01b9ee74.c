/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9ee74; name: FUN_01b9ee74
 */


void FUN_01b9ee74(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00b63974(&local_78,param_1 + 0x600);
  puVar10 = local_78;
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((local_78 != (undefined8 *)0x0) && (*(int *)((long)local_78 + 0xc) != 0)) {
    piVar1 = (int *)((long)local_78 + 0xc);
    iVar11 = *(int *)((long)local_78 + 0xc);
    do {
      plVar15 = (long *)puVar10[2];
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar4), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01b9eeac;
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01b9efb8;
        lVar14 = puVar10[3];
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_01836814(plVar15,0);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 != 0) goto LAB_01b9eeb8;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
          if (local_78 == (undefined8 *)0x0) {
            return;
          }
          goto LAB_01b9eec0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01b9efb8:
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01b9eeac:
  FUN_01836814(0,0);
LAB_01b9eeb8:
  if (local_78 != (undefined8 *)0x0) {
LAB_01b9eec0:
    puVar10 = local_78;
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar10;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  return;
}


