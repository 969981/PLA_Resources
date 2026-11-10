/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196b5cc; name: FUN_0196b5cc
 */


void FUN_0196b5cc(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  if ((*(int *)(*(long *)(param_1 + 0x70) + 0x210) == 2) && (*(char *)(param_1 + 0x78) == '\0')) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x70) + 0x160) + 0x10))(local_70);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_0096a7f4(&local_80,local_70);
    puVar3 = local_70[0];
    if (local_70[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70[0] + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_70[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar3 = local_80;
    puVar7 = PTR_DAT_04379f80;
    puVar6 = PTR_DAT_04379f78;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    if (local_80 != (undefined8 *)0x0) {
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar9 = *(int *)((long)local_80 + 0xc);
        do {
          plVar14 = (long *)puVar3[2];
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar12;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar7 = puVar5;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_0196b984;
            if (plVar14 == (long *)puVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar10 = *piVar1;
          if (iVar10 == iVar9) {
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = puVar3[3];
              plVar14 = (long *)0x0;
              puVar3 = local_80;
              if (lVar13 != 0) {
                plVar14 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x0196b880;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar10;
        } while (iVar10 != 0);
      }
LAB_0196b984:
      plVar14 = (long *)0x0;
      puVar3 = local_80;
joined_r0x0196b880:
      local_80 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar3 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar3[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_70[0] = (undefined8 *)*puVar3;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      if (plVar14 != (long *)0x0) {
        uVar11 = FUN_01f629bc(plVar14,1);
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar8 = iVar9 == 1;
        if (bVar8) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
        }
        if ((uVar11 & 1) != 0) {
          if (bVar8) {
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
        if (bVar8) {
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
    }
    FUN_0256adf0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0));
    FUN_01843d88(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb8));
    FUN_02598b04(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xf0));
    FUN_0258f864(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x100));
    FUN_017deacc(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x130));
    FUN_01917b58(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x178));
    FUN_0190ba2c(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    FUN_01e80640(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x260));
    FUN_01f90bc0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x1f8));
    lVar13 = *(long *)(*(long *)(param_1 + 0x70) + 0x2e0);
    if (((*(char *)(lVar13 + 0x70) != '\0') || (*(char *)(lVar13 + 0x71) != '\0')) &&
       (*(int *)(lVar13 + 0x74) == 0)) {
      FUN_01f58598(lVar13);
      FUN_01f59e20(lVar13);
    }
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar13 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar13;
    FUN_00da9704(lVar13 + 0x4d0);
  }
  return;
}


