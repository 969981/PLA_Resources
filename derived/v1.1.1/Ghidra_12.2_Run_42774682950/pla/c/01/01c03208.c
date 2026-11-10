/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c03208; name: FUN_01c03208
 */


undefined4 FUN_01c03208(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 local_5c;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_58);
  puVar4 = local_58[0];
  puVar6 = PTR_DAT_0437a408;
  puVar5 = PTR_DAT_0437a400;
  if (local_58[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_58[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_58[0] + 0xc);
    iVar8 = *(int *)((long)local_58[0] + 0xc);
    do {
      plVar12 = (long *)puVar4[2];
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01c03504;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = puVar4[3];
          plVar12 = (long *)0x0;
          puVar4 = local_58[0];
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + -0x50);
          }
          goto joined_r0x01c032bc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01c03504:
  plVar12 = (long *)0x0;
  puVar4 = local_58[0];
joined_r0x01c032bc:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
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
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  local_58[0] = (undefined8 *)FUN_028dd088(plVar12);
  plVar9 = (long *)FUN_028edf8c(local_58);
  lVar11 = *plVar9;
  plVar9 = (long *)plVar9[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_5c = 0;
  if (lVar11 < -0x29af1be309ddca69) {
    if (lVar11 < -0x3aea46b34802fd0d) {
      if ((lVar11 != -0x71436cbed025ee97) && (lVar11 != -0x630f4edfc957d124)) goto LAB_01c03474;
    }
    else if ((lVar11 != -0x3aea46b34802fd0d) && (lVar11 != -0x33d1fb2fd7a84ad2)) goto LAB_01c03474;
  }
  else if (lVar11 < 0xd36e79814247125) {
    if ((lVar11 != -0x29af1be309ddca69) && (lVar11 != -0x1341aa7dcfb0a06c)) goto LAB_01c03474;
  }
  else if ((lVar11 != 0xd36e79814247125) &&
          ((lVar11 != 0x6424f3c3e3bc628e && (lVar11 != 0x58c1b415456320ba)))) goto LAB_01c03474;
  local_5c = 1;
LAB_01c03474:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  lVar11 = plVar12[0xb];
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
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return local_5c;
}


