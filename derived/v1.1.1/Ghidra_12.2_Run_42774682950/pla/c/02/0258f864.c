/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0258f864; name: FUN_0258f864
 */


void FUN_0258f864(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 local_54;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar10 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar10;
  plVar12 = *(long **)(*(long *)(lVar10 + 0x50) + 0x30);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0258fc20;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    lVar10 = *(long *)(param_1 + 0x68);
    pbVar4 = PTR_DAT_04382228;
    puVar15 = (undefined8 *)PTR_DAT_04382230;
  }
  else {
    FUN_02592bdc();
    lVar10 = *(long *)(param_1 + 0x68);
    pbVar4 = PTR_DAT_04382228;
    puVar15 = (undefined8 *)PTR_DAT_04382230;
  }
  PTR_DAT_04382228 = pbVar4;
  PTR_DAT_04382230 = (undefined *)puVar15;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar6 = *(int *)(lVar10 + 0xc);
    do {
      plVar14 = *(long **)(lVar10 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
        uVar8 = FUN_018cf5f0();
        *puVar15 = uVar8;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_0258f904;
        if (plVar14 == puVar15) break;
        plVar14 = (long *)*plVar14;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 != 0) {
            *(undefined1 *)(lVar10 + 0x250) = 0;
            lVar11 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
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
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0258f904:
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar10 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar10;
  iVar6 = *(int *)(lVar10 + 0xf8);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar14 = *(long **)(lVar10 + 200);
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0258fc20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((iVar6 != 0) || (plVar14[0xe] != 0)) {
    FUN_0258fcec(param_1,0);
    FUN_0258fcec(param_1,1);
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    goto joined_r0x0258fa40;
  }
  lVar10 = plVar14[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
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
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  puVar15 = *(undefined8 **)(param_1 + 0x168);
  if (*(undefined8 **)(param_1 + 0x160) == puVar15) {
    FUN_0258fcec(param_1,0);
LAB_0258fa88:
    puVar15 = *(undefined8 **)(param_1 + 0x198);
    puVar16 = *(undefined8 **)(param_1 + 0x1a0);
    if (puVar15 != puVar16) {
      do {
        local_54 = 1;
        uVar9 = (*(code *)*puVar15)(puVar15 + 4,&local_54);
        if (puVar15 + 0x10 == puVar16) break;
        puVar15 = puVar15 + 0x10;
      } while ((uVar9 & 1) == 0);
      if ((uVar9 & 1) != 0) {
        FUN_0258ff74(param_1,1);
        goto joined_r0x0258fa40;
      }
    }
  }
  else {
    uVar13 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x160);
    do {
      local_54 = 0;
      uVar5 = (*(code *)*puVar16)(puVar16 + 4,&local_54);
      uVar13 = uVar13 | uVar5;
      if (puVar16 + 0x10 == puVar15) break;
      puVar16 = puVar16 + 0x10;
    } while ((uVar5 & 1) == 0);
    if ((uVar5 & 1) == 0) {
      FUN_0258fcec(param_1,0);
      if ((uVar13 & 1) == 0) goto LAB_0258fa88;
    }
    else {
      FUN_0258ff74(param_1,0);
    }
  }
  FUN_0258fcec(param_1,1);
joined_r0x0258fa40:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


