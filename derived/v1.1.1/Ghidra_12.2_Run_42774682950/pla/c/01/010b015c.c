/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b015c; name: FUN_010b015c
 */


undefined8 FUN_010b015c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_48;
  long *local_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  FUN_02a7804c(&local_38);
  if (local_38 == (long *)0x0) {
    return 0;
  }
  FUN_02a77334(*(undefined8 *)(param_1 + 8),param_1);
  plVar7 = local_38;
  puVar9 = (undefined8 *)(**(code **)local_38[10])(local_38 + 10);
  puVar4 = (undefined8 *)PTR_DAT_04379d18;
  if (((*PTR_DAT_04379d10 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d10), puVar6 = PTR_DAT_04379d28,
     puVar4 = (undefined8 *)PTR_DAT_04379d18, iVar8 != 0)) {
    if (((*PTR_DAT_04379d20 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d20), puVar5 = PTR_DAT_043794d8, iVar8 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(PTR_DAT_04379d20);
    }
    puVar4 = (undefined8 *)PTR_DAT_04379d18;
    *(undefined **)PTR_DAT_04379d18 = puVar6;
    __cxa_guard_release(PTR_DAT_04379d10);
  }
  if (puVar9 != (undefined8 *)0x0) {
LAB_010b01d0:
    if (puVar9 != puVar4) goto LAB_010b02e4;
    local_48 = plVar7;
    lVar11 = plVar7[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_010b0218;
  }
LAB_010b02ec:
  local_48 = (long *)0x0;
LAB_010b0218:
  FUN_00939968((long *)(param_1 + 8),&local_48);
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
      lVar11 = *(long *)(param_1 + 0x18);
      goto joined_r0x010b024c;
    }
  }
  lVar11 = *(long *)(param_1 + 0x18);
joined_r0x010b024c:
  if ((lVar11 != 0) || (*(long *)(param_1 + 0x20) != 0)) {
    FUN_02a76df0(*(undefined8 *)(param_1 + 8),param_1,0);
  }
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
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
    if (iVar8 == 1) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return 1;
LAB_010b02e4:
  puVar9 = (undefined8 *)*puVar9;
  if (puVar9 == (undefined8 *)0x0) goto LAB_010b02ec;
  goto LAB_010b01d0;
}


