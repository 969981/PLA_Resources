/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b917c8; name: FUN_01b917c8
 */


undefined1  [16] FUN_01b917c8(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  piVar1 = (int *)(param_1 + 0x500);
  if (*(int *)(param_1 + 0x714) != 1) {
    piVar1 = (int *)(param_1 + 0x2f0);
  }
  if (*piVar1 == 2) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01b6a890(&local_48,piVar1 + 0x78);
    puVar6 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      if (*(int *)((long)local_48 + 0xc) != 0) {
        piVar1 = (int *)((long)local_48 + 0xc);
        iVar7 = *(int *)((long)local_48 + 0xc);
        do {
          plVar14 = (long *)puVar6[2];
          lVar8 = FUN_01b925ec();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01b918b8;
            if (plVar14 == (long *)lVar8) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar8 = puVar6[3];
              plVar14 = (long *)0x0;
              puVar6 = local_48;
              if (lVar8 != 0) {
                plVar14 = (long *)(lVar8 + -0x50);
              }
              goto joined_r0x01b918b0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar3;
        } while (iVar3 != 0);
      }
LAB_01b918b8:
      plVar14 = (long *)0x0;
      puVar6 = local_48;
joined_r0x01b918b0:
      local_48 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = *puVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      if (plVar14 != (long *)0x0) {
        plVar9 = (long *)plVar14[0xb8];
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar12 = (ulong)*(uint *)(plVar14 + 0x86);
        uVar13 = (ulong)*(ushort *)((long)plVar9 + 0x54);
        uVar10 = (ulong)*(uint *)((long)plVar14 + 0x434);
        uVar11 = (ulong)*(uint *)(plVar14 + 0x7d);
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        lVar8 = plVar14[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        goto LAB_01b91810;
      }
    }
  }
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 1;
LAB_01b91810:
  auVar15._8_8_ = uVar10 | uVar11 << 0x20;
  auVar15._0_8_ = uVar13 | uVar12 << 0x20;
  return auVar15;
}


