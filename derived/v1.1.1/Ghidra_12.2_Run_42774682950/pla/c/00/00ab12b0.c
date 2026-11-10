/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab12b0; name: FUN_00ab12b0
 */


void FUN_00ab12b0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar13 = FUN_0095992c(*param_1 + 0xf0,&local_78);
  if (lVar13 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_01a2bf84(&local_78,lVar13 + 0x5c8);
    puVar4 = local_78;
    puVar10 = PTR_DAT_0437a3d0;
    puVar9 = PTR_DAT_0437a3c8;
    puVar8 = PTR_DAT_043795e0;
    puVar7 = PTR_DAT_043795d8;
    puVar6 = PTR_DAT_043794d8;
    puVar5 = PTR_DAT_043794d0;
    if (local_78 != (undefined8 *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar12 = *(int *)((long)local_78 + 0xc);
        do {
          plVar16 = (long *)puVar4[2];
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
                uVar15 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar15;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar8 = puVar6;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_00ab1500;
            if (plVar16 == (long *)puVar10) break;
            plVar16 = (long *)*plVar16;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar12) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = puVar4[3];
              plVar16 = (long *)0x0;
              puVar4 = local_78;
              if (lVar13 != 0) {
                plVar16 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x00ab13b8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00ab1500:
      plVar16 = (long *)0x0;
      puVar4 = local_78;
joined_r0x00ab13b8:
      local_78 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *puVar4;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      if (plVar16 != (long *)0x0) {
        plVar14 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
        if (((*PTR_DAT_0437a5c8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a5c8), iVar12 != 0)) {
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a3c8), iVar12 != 0))
          {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                uVar15 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a3c8);
          }
          *(undefined **)PTR_DAT_0437a5d0 = puVar10;
          __cxa_guard_release(PTR_DAT_0437a5c8);
        }
        for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          if (plVar14 == (long *)PTR_DAT_0437a5d0) {
            FUN_01c017f8(plVar16,0);
            FUN_01c01f50(plVar16);
            FUN_01c02b20(plVar16);
            FUN_01c036a0(plVar16);
            FUN_01c04044(plVar16);
            FUN_01c03dc4(plVar16);
            FUN_01c042c4(plVar16);
            FUN_01c04544(plVar16);
            break;
          }
        }
        lVar13 = plVar16[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
    }
  }
  return;
}


