/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d691c; name: FUN_017d691c
 */


bool FUN_017d691c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_58;
  
  (**(code **)(*param_2 + 0x10))(&local_70,param_2);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_017dc294(&local_90,&local_70);
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_80 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_80);
    }
  }
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  lVar12 = *(long *)(param_1 + 0x78);
joined_r0x017d69d0:
  if (lVar12 == param_1 + 0x70) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_58 = (long *)0x0;
LAB_017d69dc:
    if (local_90 != (undefined8 *)0x0) {
LAB_017d69e4:
      puVar8 = local_90;
      piVar1 = (int *)(local_90 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_70 = (undefined8 *)*puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_70);
      }
    }
LAB_017d6a3c:
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      lVar12 = local_58[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))(local_58);
      }
    }
    return plVar9 != (long *)0x0;
  }
  uVar14 = *(undefined8 *)(lVar12 + 0x10);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_017db6d4(&local_70,&local_90);
  uVar11 = FUN_017d9c14(uVar14,&local_70);
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_70[2] = 0;
      uVar11 = uVar11 & 0xffffffff;
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
        FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar4);
      }
      lVar13 = *(long *)puVar5;
      *(long *)puVar6 = lVar13;
      local_80 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_80);
    }
  }
  if ((uVar11 & 1) == 0) goto code_r0x017d6b3c;
  FUN_017d5e94(&local_80,*(undefined8 *)(lVar12 + 0x10));
  if (local_80 == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_017dce5c(&local_58);
    puVar8 = local_80;
    if (local_80 == (undefined8 *)0x0) goto LAB_017d69dc;
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 != 0) goto LAB_017d69dc;
    local_80[2] = 0;
    if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)puVar5;
    *(long *)puVar6 = lVar12;
    local_70 = (undefined8 *)*puVar8;
    FUN_02a44274(lVar12 + 0xd8,&local_70);
  }
  if (local_90 == (undefined8 *)0x0) goto LAB_017d6a3c;
  goto LAB_017d69e4;
code_r0x017d6b3c:
  lVar12 = *(long *)(lVar12 + 8);
  goto joined_r0x017d69d0;
}


