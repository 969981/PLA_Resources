/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c02c80; name: FUN_01c02c80
 */


undefined8 FUN_01c02c80(void)

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
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
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
        uVar11 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01c02ef8;
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
          lVar10 = puVar4[3];
          plVar12 = (long *)0x0;
          puVar4 = local_58[0];
          if (lVar10 != 0) {
            plVar12 = (long *)(lVar10 + -0x50);
          }
          goto joined_r0x01c02d34;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01c02ef8:
  plVar12 = (long *)0x0;
  puVar4 = local_58[0];
joined_r0x01c02d34:
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  local_58[0] = (undefined8 *)FUN_028dd088(plVar12);
  plVar9 = (long *)FUN_028edf8c(local_58);
  lVar10 = *plVar9;
  plVar9 = (long *)plVar9[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  uVar11 = 0;
  if (lVar10 < -0x8fad2a84dd3dd90) {
    if (((lVar10 != -0x59ba915f4ea97a92) && (lVar10 != -0x1557bb2c89a9aeed)) &&
       (lVar10 != -0x1162f7fe61f27702)) goto LAB_01c02e68;
  }
  else if (((lVar10 != -0x8fad2a84dd3dd90) && (lVar10 != 0x5b28023d1c7fa1f1)) &&
          (lVar10 != 0x74ea7be40ed1a7d)) goto LAB_01c02e68;
  uVar11 = 1;
LAB_01c02e68:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  lVar10 = plVar12[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
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
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return uVar11;
}


