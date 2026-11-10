/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016693c0; name: FUN_016693c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_016693c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [96];
  code *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined1 **local_138;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar13 = *(long **)(lVar11 + 0x100);
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)plVar13[0x20];
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)plVar8[0xc];
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = plVar8 + 10;
  do {
    iVar7 = (int)*plVar9 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar11 = *param_1;
  if (lVar11 < 0x3c6fc069b47dbf4c) {
    if (lVar11 == -0x6235008465b5e4b) {
LAB_0166980c:
      local_f0 = FUN_0166b008;
      local_e8 = FUN_0166b1c8;
      puStack_d8 = &LAB_0166b1e0;
      local_e0 = &LAB_0166b1cc;
    }
    else {
      if (lVar11 != -0x3552dfc285400b0a) {
        if (lVar11 != -0x1dd0adb5519bcc81) goto LAB_01669538;
        goto LAB_0166980c;
      }
      local_f0 = (code *)&LAB_0166b1f4;
      local_e8 = (code *)&LAB_0166b208;
      puStack_d8 = &LAB_0166b220;
      local_e0 = &LAB_0166b20c;
    }
LAB_0166955c:
    local_c8 = param_3;
    uStack_c0 = param_4;
  }
  else if (lVar11 == 0x7e23ecd43ce201a1) {
    local_f0 = (code *)&LAB_0166b234;
    local_e8 = (code *)&LAB_0166b2e0;
    puStack_d8 = &LAB_0166b2f0;
    local_e0 = &LAB_0166b2e4;
  }
  else {
    if (lVar11 != 0x3c6fc069b47dbf4c) {
      if (lVar11 != 0x4a182f2782ffd34e) {
LAB_01669538:
        local_f0 = (code *)&LAB_0166b428;
        local_e8 = (code *)&LAB_0166b5d8;
        puStack_d8 = &LAB_0166b5f0;
        local_e0 = &LAB_0166b5dc;
        goto LAB_0166955c;
      }
      goto LAB_0166980c;
    }
    puStack_d8 = &LAB_0166b41c;
    local_f0 = (code *)&LAB_0166b2fc;
    local_e8 = (code *)&LAB_0166b40c;
    local_e0 = &LAB_0166b410;
    local_c8 = param_3;
  }
  local_1f0 = &LAB_0166d278;
  local_1e8 = FUN_0166d27c;
  local_1e0 = &LAB_0166d280;
  puStack_1d8 = &LAB_0166d284;
  local_138 = &local_1f0;
  local_140 = 1;
  pcVar12 = FUN_0166d24c;
  local_170 = FUN_0166b604;
  local_168 = FUN_0166d24c;
  local_160 = &LAB_0166d250;
  puStack_158 = &LAB_0166d264;
  puVar16 = (undefined8 *)plVar14[0xb];
  puVar2 = (undefined8 *)plVar14[0xc];
  local_150 = param_2;
  uStack_148 = param_6;
  local_d0 = param_2;
  if (puVar16 == puVar2) {
    uVar15 = 0;
  }
  else {
    do {
      plVar8 = (long *)*puVar16;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = (int)*plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar9 = (long *)FUN_016718b8(plVar8,param_1);
      if (plVar9 != (long *)0x0) {
        puVar3 = (undefined8 *)plVar9[1];
        for (puVar1 = (undefined8 *)*plVar9; puVar1 != puVar3; puVar1 = puVar1 + 1) {
          local_70[0] = *puVar1;
          uVar10 = (*local_f0)(&local_d0,local_70);
          if (((uVar10 & 1) != 0) && (uVar10 = (*local_170)(&local_150,local_70), (uVar10 & 1) != 0)
             ) {
            bVar5 = false;
            goto joined_r0x01669794;
          }
        }
      }
      bVar5 = true;
joined_r0x01669794:
      pcVar12 = local_168;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 10;
        do {
          iVar7 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          pcVar12 = local_168;
        }
      }
      local_168 = pcVar12;
      if (!bVar5) {
        uVar15 = 1;
        goto joined_r0x016696b0;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar2);
    uVar15 = 0;
joined_r0x016696b0:
    if (pcVar12 == (code *)0x0) goto LAB_016696c8;
  }
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (code *)0x0;
  local_168 = (code *)0x0;
  (*pcVar12)(&local_150);
LAB_016696c8:
  pcVar12 = local_1e8;
  if (local_1e8 == (code *)0x0) {
    local_1e8 = (code *)0x0;
    pcVar12 = local_e8;
  }
  else {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(auStack_1d0);
    pcVar12 = local_e8;
  }
  local_e8 = (code *)0x0;
  if (pcVar12 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar12)(&local_d0);
  }
  if (plVar14 != (long *)0x0) {
    plVar8 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return uVar15;
}


