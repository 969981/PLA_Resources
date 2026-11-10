/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b77258; name: FUN_00b77258
 */


void FUN_00b77258(long *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *local_78;
  long *local_70;
  long *local_68 [3];
  long *local_48;
  
  lVar18 = *param_1;
  lVar19 = *(long *)(lVar18 + 0x198);
  lVar13 = *(long *)(lVar19 + 8);
  if (lVar13 == 0) {
    plVar20 = (long *)FUN_00b779ac();
    lVar13 = *plVar20;
    if (lVar13 == 0) goto LAB_00b77868;
LAB_00b77290:
    puVar21 = (undefined8 *)(lVar13 + 0x60);
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 != 0) goto LAB_00b77290;
LAB_00b77868:
    puVar21 = (undefined8 *)PTR_PTR_04379d00;
  }
  pcVar11 = strrchr((char *)*puVar21,0x2f);
  puVar9 = PTR_DAT_04379ce0;
  puVar8 = PTR_DAT_04379cd8;
  puVar7 = PTR_DAT_04379cd0;
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = pcVar11 + 1;
  }
  local_48 = (long *)0x0;
  if (*pcVar11 == '\0') {
    plVar20 = (long *)FUN_00938550();
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar12;
    FUN_02a47cd8(local_68,uVar12,pcVar11);
    plVar20 = local_48;
    local_48 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))();
    }
    plVar20 = local_68[0];
  }
  local_48 = plVar20;
  FUN_00b82bb0(lVar18,lVar19,&local_48,0);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  lVar13 = *(long *)(*(long *)(lVar18 + 0x198) + 8);
  if (lVar13 == 0) {
    plVar20 = (long *)FUN_00b779ac();
    lVar13 = *plVar20;
    if (lVar13 == 0) goto LAB_00b77880;
LAB_00b77348:
    puVar21 = (undefined8 *)(lVar13 + 0x60);
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 != 0) goto LAB_00b77348;
LAB_00b77880:
    puVar21 = (undefined8 *)PTR_PTR_04379d00;
  }
  pcVar11 = strrchr((char *)*puVar21,0x2f);
  local_48 = (long *)&DAT_cbf29ce484222645;
  if (pcVar11 == (char *)0x0) {
    pbVar14 = (byte *)0x0;
    bVar4 = bRam0000000000000000;
  }
  else {
    pbVar14 = (byte *)(pcVar11 + 1);
    bVar4 = *pbVar14;
  }
  while (bVar4 != 0) {
    pbVar14 = pbVar14 + 1;
    local_48 = (long *)(((ulong)local_48 ^ (ulong)bVar4) * 0x100000001b3);
    bVar4 = *pbVar14;
  }
  lVar13 = *(long *)(*(long *)(lVar18 + 0x198) + 8);
  piVar1 = (int *)((long)*(uint **)(lVar13 + 0x250) + (ulong)**(uint **)(lVar13 + 0x250));
  puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15 + 4);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
    lVar19 = 0;
    if (lVar13 == 0) goto LAB_00b775c4;
LAB_00b773fc:
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 != 0) goto LAB_00b77408;
LAB_00b775d0:
    puVar21 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar15 = (uint *)((long)piVar1 + uVar17);
    lVar19 = (long)puVar15 + (ulong)*puVar15;
    if (lVar13 != 0) goto LAB_00b773fc;
LAB_00b775c4:
    plVar20 = (long *)FUN_00b779ac();
    lVar13 = *plVar20;
    if (lVar13 == 0) goto LAB_00b775d0;
LAB_00b77408:
    puVar21 = (undefined8 *)(lVar13 + 0x60);
  }
  pcVar11 = strrchr((char *)*puVar21,0x2f);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = pcVar11 + 1;
  }
  local_78 = (long *)0x0;
  if (*pcVar11 == '\0') {
    plVar20 = (long *)FUN_00938550();
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar12;
    FUN_02a47cd8(local_68,uVar12,pcVar11);
    plVar20 = local_78;
    local_78 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))();
    }
    plVar20 = local_68[0];
  }
  local_78 = plVar20;
  FUN_00b8264c(&local_70,lVar18,&local_48,lVar19 + 4,&local_78);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  plVar20 = *(long **)(lVar18 + 0xa0);
  lVar13 = (**(code **)(*plVar20 + 0x10))(plVar20,0x60,8);
  if (lVar13 == 0) {
    plVar20 = (long *)0x0;
    uVar16 = 0;
    uVar12 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar20;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    uVar12 = *(undefined8 *)(lVar18 + 0xa0);
    local_68[0] = local_70;
    if (local_70 != (long *)0x0) {
      plVar2 = local_70 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_00c1ca3c(lVar13,uVar12,local_68);
    if (local_68[0] != (long *)0x0) {
      plVar2 = local_68[0] + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
    }
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    uVar12 = 8;
    uVar16 = 0x60;
  }
  puVar21 = *(undefined8 **)(lVar18 + 0x148);
  *(long *)(lVar18 + 0x148) = lVar13;
  if (puVar21 == (undefined8 *)0x0) {
    *(long **)(lVar18 + 0x150) = plVar20;
    *(undefined8 *)(lVar18 + 0x158) = uVar16;
    goto LAB_00b77574;
  }
  FUN_02bcbe58(local_68,0);
  (**(code **)*puVar21)(puVar21);
  plVar2 = *(long **)(lVar18 + 0x150);
  uVar3 = *(undefined8 *)(lVar18 + 0x158);
  uVar22 = *(undefined8 *)(lVar18 + 0x160);
  uVar17 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar13 = tpidr_el0;
  if ((uVar17 & 1) == 0) {
LAB_00b776d0:
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar21,uVar3,uVar22);
  }
  else {
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_00b776d0;
    FUN_02bcc824(plVar2,puVar21,uVar3,uVar22);
  }
  if (*(char *)(lVar13 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar13 + 0x38d488) = 1;
    *(undefined8 *)(lVar13 + 0x38d478) = 0;
    *(undefined8 *)(lVar13 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
  *(int *)(lVar13 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar13 + 0x38d484) = 0;
  }
  *(long **)(lVar18 + 0x150) = plVar20;
  *(undefined8 *)(lVar18 + 0x158) = uVar16;
LAB_00b77574:
  *(undefined8 *)(lVar18 + 0x160) = uVar12;
  if (local_70 != (long *)0x0) {
    plVar20 = local_70 + 10;
    do {
      iVar10 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  *(undefined4 *)(lVar18 + 0x1d0) = 0xb;
  return;
}


