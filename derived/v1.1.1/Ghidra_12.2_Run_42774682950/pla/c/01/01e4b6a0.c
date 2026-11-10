/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4b6a0; name: FUN_01e4b6a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e4b6a0(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  int local_9c;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88 [2];
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  lVar7 = *param_1;
  lVar4 = *(long *)(lVar7 + 0x1f8) - *(long *)(lVar7 + 0x1f0);
  if (lVar4 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    FUN_02be8650(local_88,lVar7,uVar10 & 0xffffffff);
    puVar5 = local_88[0];
    if ((local_88[0] != (undefined8 *)0x0) && (*(int *)((long)local_88[0] + 0xc) != 0)) {
      piVar1 = (int *)((long)local_88[0] + 0xc);
      local_9c = *(int *)((long)local_88[0] + 0xc);
      do {
        plVar11 = (long *)puVar5[2];
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar8 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar8;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01e4b704;
          if (plVar11 == (long *)PTR_DAT_0437a588) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == local_9c) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = local_9c + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01e4b9ac;
          lVar7 = puVar5[3];
          if (lVar7 != 0) {
            puVar12 = *(undefined4 **)(lVar7 + 0x70);
            lVar9 = *(long *)(lVar7 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*(long *)(lVar7 + -0x50) + 0x20))();
            }
            goto LAB_01e4b70c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01e4b9ac:
        local_9c = iVar6;
      } while (iVar6 != 0);
    }
LAB_01e4b704:
    puVar12 = _DAT_000000c0;
LAB_01e4b70c:
    *puVar12 = *param_2;
    FUN_00b63974(puVar12 + 2,param_2 + 2);
    FUN_00cfa028(puVar12 + 6,param_2 + 6);
    FUN_0095aa3c(puVar12 + 10,param_2 + 10);
    *(undefined8 *)(puVar12 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    FUN_00bd10a0(puVar12 + 0x10,param_2 + 0x10);
    *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    (**(code **)(*(long *)*param_1 + 0x10))(local_78);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_018fed88(&local_98,local_78);
    puVar5 = local_78[0];
    if (local_78[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78[0] + 1);
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
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_68 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_68);
      }
    }
    FUN_019fa21c(puVar12 + 0x10,&local_98);
    puVar5 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_98 + 1);
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
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_78[0] = (undefined8 *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,local_78);
      }
    }
    puVar5 = local_88[0];
    if (local_88[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88[0] + 1);
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
        local_88[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_78[0] = (undefined8 *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,local_78);
      }
    }
    uVar10 = uVar10 + 1;
    if ((ulong)(lVar4 >> 4) <= uVar10) {
      return;
    }
    lVar7 = *param_1;
  } while( true );
}


