/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a8688; name: FUN_009a8688
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_009a8688(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_009630f4(&local_68,param_1 + 0x510);
  puVar4 = local_68;
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar11 = *(int *)((long)local_68 + 0xc);
      do {
        plVar14 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_009a8880;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = puVar4[3];
            plVar14 = (long *)0x0;
            puVar4 = local_68;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x009a8764;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_009a8880:
    plVar14 = (long *)0x0;
    puVar4 = local_68;
joined_r0x009a8764:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        puVar4[2] = 0;
        local_68 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (plVar14 != (long *)0x0) {
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_01901488(&local_68,plVar14 + 0x1c);
      if (local_68 == (undefined8 *)0x0) {
        local_70 = (long *)0x0;
      }
      else {
        FUN_009ac698(&local_70);
        puVar4 = local_68;
        if (local_68 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68 + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            local_68[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
      }
      if (local_70 == (long *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = (char)local_70[0x1df6] != '\0';
        lVar13 = local_70[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return bVar9;
      }
      return bVar9;
    }
  }
  return false;
}


