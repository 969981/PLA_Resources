/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a5218; name: FUN_009a5218
 */


void FUN_009a5218(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_009630f4(&local_78,param_2 + 0x510);
  puVar4 = local_78;
  puVar7 = PTR_DAT_04379fd0;
  puVar6 = PTR_DAT_04379fc8;
  puVar5 = PTR_DAT_043794d0;
  plVar13 = (long *)0x0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar8 = *(int *)((long)local_78 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_009a5590;
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_78;
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x009a5504;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_009a5590:
    plVar13 = (long *)0x0;
    puVar4 = local_78;
joined_r0x009a5504:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        local_78 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_01901488(&local_78,plVar13 + 0x1c);
  if (local_78 == (undefined8 *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_80);
    puVar4 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    bVar2 = (param_3 & 1) != 0;
    if (bVar2) {
      uVar11 = 0xc;
    }
    else {
      uVar11 = (undefined4)local_80[0x1df9];
    }
    FUN_01a184a0((*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * 0.0,
                 local_80,(int)local_80[0x1d9d],0,0xf,0,!bVar2,uVar11);
    if (local_80 != (long *)0x0) {
      lVar12 = local_80[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  local_78 = (undefined8 *)0x0;
  lVar12 = FUN_009bb5dc(&local_68,*(undefined8 *)(param_2 + 8),&local_78);
  *param_1 = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


