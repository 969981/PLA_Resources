/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01224a7c; name: FUN_01224a7c
 */


undefined8 FUN_01224a7c(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar10 = *(long **)(lVar13 + 0xd0);
  if (plVar10 != (long *)0x0) {
    plVar14 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)plVar10[0xb];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
    cVar3 = (char)plVar14[0x11];
  }
  else {
    cVar3 = (char)plVar14[0x11];
  }
  if (cVar3 != '\0') {
    uVar15 = 0;
    do {
      uVar11 = FUN_012246e0(param_1,1,0,uVar15);
      if ((uVar11 & 1) != 0) {
        bVar4 = false;
        goto LAB_01224b54;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(byte *)(plVar14 + 0x11));
  }
  bVar4 = true;
LAB_01224b54:
  plVar10 = plVar14 + 10;
  do {
    iVar9 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pbVar6 = PTR_DAT_04379558;
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    pbVar6 = PTR_DAT_04379558;
  }
  if (!bVar4) {
    PTR_DAT_04379558 = pbVar6;
    return 1;
  }
  PTR_DAT_04379558 = pbVar6;
  if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar6), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar10 = *(long **)(lVar13 + 0x248);
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_012250f0;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  plVar14 = *(long **)(lVar13 + 0x240);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_012250f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((char)plVar10[0x95] == ' ') {
    iVar9 = FUN_010e630c();
    if (iVar9 == -0x1d) goto LAB_01225030;
  }
  else if ((char)plVar10[0x95] == '\0') {
LAB_01225030:
    uVar12 = 0;
    goto joined_r0x01224f9c;
  }
  uVar15 = 0;
  uVar12 = 1;
LAB_01224c54:
  do {
    uVar11 = FUN_012246e0(param_1,0,uVar15,0);
    if ((uVar11 & 1) != 0) {
LAB_01224f98:
      uVar12 = 1;
      goto joined_r0x01224f9c;
    }
    uVar11 = FUN_012246e0(param_1,0,uVar15,1);
    if ((uVar11 & 1) != 0) goto joined_r0x01224f9c;
    uVar11 = FUN_012246e0(param_1,0,uVar15,2);
    if ((((((((uVar11 & 1) != 0) || (uVar11 = FUN_012246e0(param_1,0,uVar15,3), (uVar11 & 1) != 0))
           || (uVar11 = FUN_012246e0(param_1,0,uVar15,4), (uVar11 & 1) != 0)) ||
          ((uVar11 = FUN_012246e0(param_1,0,uVar15,5), (uVar11 & 1) != 0 ||
           (uVar11 = FUN_012246e0(param_1,0,uVar15,6), (uVar11 & 1) != 0)))) ||
         (uVar11 = FUN_012246e0(param_1,0,uVar15,7), (uVar11 & 1) != 0)) ||
        (((((uVar11 = FUN_012246e0(param_1,0,uVar15,8), (uVar11 & 1) != 0 ||
            (uVar11 = FUN_012246e0(param_1,0,uVar15,9), (uVar11 & 1) != 0)) ||
           ((uVar11 = FUN_012246e0(param_1,0,uVar15,10), (uVar11 & 1) != 0 ||
            (((uVar11 = FUN_012246e0(param_1,0,uVar15,0xb), (uVar11 & 1) != 0 ||
              (uVar11 = FUN_012246e0(param_1,0,uVar15,0xc), (uVar11 & 1) != 0)) ||
             (uVar11 = FUN_012246e0(param_1,0,uVar15,0xd), (uVar11 & 1) != 0)))))) ||
          ((uVar11 = FUN_012246e0(param_1,0,uVar15,0xe), (uVar11 & 1) != 0 ||
           (uVar11 = FUN_012246e0(param_1,0,uVar15,0xf), (uVar11 & 1) != 0)))) ||
         (uVar11 = FUN_012246e0(param_1,0,uVar15,0x10), (uVar11 & 1) != 0)))) ||
       ((((uVar11 = FUN_012246e0(param_1,0,uVar15,0x11), (uVar11 & 1) != 0 ||
          (uVar11 = FUN_012246e0(param_1,0,uVar15,0x12), (uVar11 & 1) != 0)) ||
         ((uVar11 = FUN_012246e0(param_1,0,uVar15,0x13), (uVar11 & 1) != 0 ||
          (((uVar11 = FUN_012246e0(param_1,0,uVar15,0x14), (uVar11 & 1) != 0 ||
            (uVar11 = FUN_012246e0(param_1,0,uVar15,0x15), (uVar11 & 1) != 0)) ||
           (uVar11 = FUN_012246e0(param_1,0,uVar15,0x16), (uVar11 & 1) != 0)))))) ||
        (((uVar11 = FUN_012246e0(param_1,0,uVar15,0x17), (uVar11 & 1) != 0 ||
          (uVar11 = FUN_012246e0(param_1,0,uVar15,0x18), (uVar11 & 1) != 0)) ||
         ((uVar11 = FUN_012246e0(param_1,0,uVar15,0x19), (uVar11 & 1) != 0 ||
          (((uVar11 = FUN_012246e0(param_1,0,uVar15,0x1a), (uVar11 & 1) != 0 ||
            (uVar11 = FUN_012246e0(param_1,0,uVar15,0x1b), (uVar11 & 1) != 0)) ||
           ((uVar11 = FUN_012246e0(param_1,0,uVar15,0x1c), (uVar11 & 1) != 0 ||
            (uVar11 = FUN_012246e0(param_1,0,uVar15,0x1d), (uVar11 & 1) != 0))))))))))))
    goto LAB_01224f98;
    uVar15 = uVar15 + 1;
    if (*(byte *)(plVar10 + 0x95) != 0x20) {
      if (*(byte *)(plVar10 + 0x95) <= uVar15) break;
      goto LAB_01224c54;
    }
    iVar9 = FUN_010e630c();
  } while (uVar15 < iVar9 + 0x1dU);
  uVar12 = 0;
joined_r0x01224f9c:
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return uVar12;
}


