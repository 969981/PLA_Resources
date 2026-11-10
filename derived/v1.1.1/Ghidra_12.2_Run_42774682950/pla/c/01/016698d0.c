/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016698d0; name: FUN_016698d0
 */


undefined8
FUN_016698d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined1 local_140;
  undefined8 local_138;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar13 = *(long **)(lVar12 + 0x100);
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar13[0x20];
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)plVar9[0xc];
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = plVar9 + 10;
  do {
    iVar8 = (int)*plVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar12 = *param_1;
  if (lVar12 < 0x3c6fc069b47dbf4c) {
    if (lVar12 == -0x6235008465b5e4b) goto LAB_01669cd4;
    if (lVar12 != -0x3552dfc285400b0a) {
      if (lVar12 != -0x1dd0adb5519bcc81) goto LAB_01669a48;
      goto LAB_01669cd4;
    }
    local_f0 = (code *)&LAB_0166b1f4;
    local_e8 = (code *)&LAB_0166b208;
    puStack_d8 = &LAB_0166b220;
    local_e0 = &LAB_0166b20c;
  }
  else {
    if (lVar12 == 0x7e23ecd43ce201a1) {
      local_f0 = (code *)&LAB_0166b234;
      local_e8 = (code *)&LAB_0166b2e0;
      puStack_d8 = &LAB_0166b2f0;
      local_e0 = &LAB_0166b2e4;
      goto LAB_01669a74;
    }
    if (lVar12 == 0x3c6fc069b47dbf4c) {
      puStack_d8 = &LAB_0166b41c;
      local_f0 = (code *)&LAB_0166b2fc;
      local_e8 = (code *)&LAB_0166b40c;
      local_e0 = &LAB_0166b410;
      local_c8 = param_3;
      goto LAB_01669a74;
    }
    if (lVar12 != 0x4a182f2782ffd34e) {
LAB_01669a48:
      local_f0 = (code *)&LAB_0166b428;
      local_e8 = (code *)&LAB_0166b5d8;
      puStack_d8 = &LAB_0166b5f0;
      local_e0 = &LAB_0166b5dc;
      goto LAB_01669a6c;
    }
LAB_01669cd4:
    local_f0 = FUN_0166b008;
    local_e8 = FUN_0166b1c8;
    puStack_d8 = &LAB_0166b1e0;
    local_e0 = &LAB_0166b1cc;
  }
LAB_01669a6c:
  local_c8 = param_3;
  uStack_c0 = param_4;
LAB_01669a74:
  puStack_148 = &DAT_cbf29ce484222645;
  local_140 = 0;
  puVar16 = (undefined8 *)plVar14[0xb];
  puVar2 = (undefined8 *)plVar14[0xc];
  local_150 = param_2;
  local_138 = param_6;
  local_d0 = param_2;
  if (puVar16 == puVar2) {
    uVar15 = 0;
  }
  else {
    do {
      plVar9 = (long *)*puVar16;
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = (int)*plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar10 = (long *)FUN_016718b8(plVar9,param_1);
      if (plVar10 != (long *)0x0) {
        puVar3 = (undefined8 *)plVar10[1];
        for (puVar1 = (undefined8 *)*plVar10; puVar1 != puVar3; puVar1 = puVar1 + 1) {
          local_70[0] = *puVar1;
          uVar11 = (*local_f0)(&local_d0,local_70);
          if (((uVar11 & 1) != 0) && (uVar11 = FUN_0166b604(&local_150,local_70), (uVar11 & 1) != 0)
             ) {
            bVar5 = false;
            goto joined_r0x01669c5c;
          }
        }
      }
      bVar5 = true;
joined_r0x01669c5c:
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 10;
        do {
          iVar8 = (int)*plVar10 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (!bVar5) {
        uVar15 = 1;
        goto LAB_01669ba4;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar2);
    uVar15 = 0;
  }
LAB_01669ba4:
  FUN_0166d24c(&local_150);
  pcVar7 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
  }
  else {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(&local_d0);
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return uVar15;
}


