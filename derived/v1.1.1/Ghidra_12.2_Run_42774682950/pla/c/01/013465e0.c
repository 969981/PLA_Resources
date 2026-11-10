/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013465e0; name: FUN_013465e0
 */


void FUN_013465e0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_240;
  code *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  undefined8 *local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  long local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  long *local_d8;
  long alStack_d0 [14];
  
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0x88fe927d6b3f3e86;
  local_178 = (code *)0x393ac98;
  local_170 = (code *)0x11;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  plVar12 = *(long **)(lVar13 + 0x318);
  *(undefined8 *)(lVar13 + 0xf8) = 0x400;
  *(undefined8 *)(lVar13 + 0x300) = 0x272c4b74ad214aab;
  *(char **)(lVar13 + 0x308) = "PLAY_UI_COMMON_MAP_ZOOM_IN";
  *(undefined8 *)(lVar13 + 0x310) = 0x1a;
  *(undefined8 *)(lVar13 + 0x318) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  pcVar10 = *(code **)(lVar13 + 0x288);
  local_180 = (undefined8 *)&LAB_0134cc24;
  local_178 = FUN_0134cc70;
  local_170 = FUN_0134cc74;
  local_168 = (code *)&LAB_0134cc80;
  local_160 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01346758:
    (*local_170)(&local_160,lVar13 + 0x2a0);
    *(code **)(lVar13 + 0x288) = local_178;
    *(code **)(lVar13 + 0x298) = local_168;
    *(code **)(lVar13 + 0x290) = local_170;
    *(undefined8 *)(lVar13 + 0x280) = local_180;
  }
  else {
    *(undefined8 *)(lVar13 + 0x290) = 0;
    *(undefined8 *)(lVar13 + 0x298) = 0;
    *(undefined8 *)(lVar13 + 0x280) = 0;
    *(undefined8 *)(lVar13 + 0x288) = 0;
    (*pcVar10)(lVar13 + 0x2a0);
    if (local_170 != (code *)0x0) goto LAB_01346758;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_f0 = (undefined1 *)0xeb5a15be1585388e;
  local_e8 = (code *)0x38a568a;
  local_e0 = (code *)0x17;
  local_d8 = (long *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  plVar12 = *(long **)(lVar13 + 0x318);
  *(undefined8 *)(lVar13 + 0xf8) = 0x200;
  *(undefined8 *)(lVar13 + 0x300) = 0x272c4b74ad214aab;
  *(char **)(lVar13 + 0x308) = "PLAY_UI_COMMON_MAP_ZOOM_IN";
  *(undefined8 *)(lVar13 + 0x310) = 0x1a;
  *(undefined8 *)(lVar13 + 0x318) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  pcVar10 = *(code **)(lVar13 + 0x288);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar13 + 0x290) = 0;
    *(undefined8 *)(lVar13 + 0x298) = 0;
    *(undefined8 *)(lVar13 + 0x280) = 0;
    *(undefined8 *)(lVar13 + 0x288) = 0;
    (*pcVar10)(lVar13 + 0x2a0);
  }
  if (local_170 != (code *)0x0) {
    (*local_170)(&local_160,lVar13 + 0x2a0);
    *(code **)(lVar13 + 0x288) = local_178;
    *(code **)(lVar13 + 0x298) = local_168;
    *(code **)(lVar13 + 0x290) = local_170;
    *(undefined8 *)(lVar13 + 0x280) = local_180;
  }
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    local_180 = (undefined8 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(&local_160);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0x8c9f5041309993d0;
  local_178 = (code *)0x392904d;
  local_170 = (code *)0xe;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar10 = *(code **)(lVar13 + 0x288);
  *(undefined8 *)(lVar13 + 0xf8) = 1;
  local_180 = (undefined8 *)&LAB_0134cc8c;
  local_178 = FUN_0134ce14;
  local_170 = FUN_0134ce18;
  local_168 = (code *)&LAB_0134ce24;
  local_160 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013469dc:
    (*local_170)(&local_160,lVar13 + 0x2a0);
    *(code **)(lVar13 + 0x288) = local_178;
    *(code **)(lVar13 + 0x298) = local_168;
    *(code **)(lVar13 + 0x290) = local_170;
    *(undefined8 *)(lVar13 + 0x280) = local_180;
  }
  else {
    *(undefined8 *)(lVar13 + 0x290) = 0;
    *(undefined8 *)(lVar13 + 0x298) = 0;
    *(undefined8 *)(lVar13 + 0x280) = 0;
    *(undefined8 *)(lVar13 + 0x288) = 0;
    (*pcVar10)(lVar13 + 0x2a0);
    if (local_170 != (code *)0x0) goto LAB_013469dc;
  }
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    local_180 = (undefined8 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(&local_160);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0x8c9f4941309987eb;
  local_178 = (code *)0x38aed54;
  local_170 = (code *)0xe;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  *(undefined8 *)(lVar13 + 0xf8) = 0x80;
  local_180 = (undefined8 *)&LAB_0134ce30;
  local_178 = FUN_0134ce68;
  local_170 = FUN_0134ce6c;
  local_168 = (code *)&LAB_0134ce78;
  local_160 = param_1;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  *(undefined8 *)(lVar13 + 0x300) = *(undefined8 *)PTR_DAT_0437a0d8;
  *(undefined8 *)(lVar13 + 0x308) = *(undefined8 *)(puVar4 + 8);
  plVar12 = *(long **)(puVar4 + 0x18);
  *(undefined8 *)(lVar13 + 0x310) = *(undefined8 *)(puVar4 + 0x10);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar8 = *(long **)(lVar13 + 0x318);
  *(long **)(lVar13 + 0x318) = plVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  pcVar10 = *(code **)(lVar13 + 0x188);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar13 + 400) = 0;
    *(undefined8 *)(lVar13 + 0x198) = 0;
    *(undefined8 *)(lVar13 + 0x180) = 0;
    *(undefined8 *)(lVar13 + 0x188) = 0;
    (*pcVar10)(lVar13 + 0x1a0);
  }
  if (local_170 != (code *)0x0) {
    (*local_170)(&local_160,lVar13 + 0x1a0);
    *(code **)(lVar13 + 0x188) = local_178;
    *(code **)(lVar13 + 0x198) = local_168;
    *(code **)(lVar13 + 400) = local_170;
    *(undefined8 *)(lVar13 + 0x180) = local_180;
  }
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    local_180 = (undefined8 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(&local_160);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0x8c9f484130998638;
  local_178 = (code *)0x3991ec2;
  local_170 = (code *)0xe;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar10 = *(code **)(lVar13 + 0x188);
  *(undefined8 *)(lVar13 + 0xf8) = 8;
  local_f0 = &LAB_0134ce84;
  local_e8 = FUN_0134cec8;
  local_e0 = FUN_0134cecc;
  local_d8 = (long *)&LAB_0134ced8;
  alStack_d0[0] = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01346cd0:
    (*local_e0)(alStack_d0,lVar13 + 0x1a0);
    *(code **)(lVar13 + 0x188) = local_e8;
    *(long **)(lVar13 + 0x198) = local_d8;
    *(code **)(lVar13 + 400) = local_e0;
    *(undefined8 *)(lVar13 + 0x180) = local_f0;
  }
  else {
    *(undefined8 *)(lVar13 + 400) = 0;
    *(undefined8 *)(lVar13 + 0x198) = 0;
    *(undefined8 *)(lVar13 + 0x180) = 0;
    *(undefined8 *)(lVar13 + 0x188) = 0;
    (*pcVar10)(lVar13 + 0x1a0);
    if (local_e0 != (code *)0x0) goto LAB_01346cd0;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01347148;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0x662bf4049b3fdeb1;
  local_178 = (code *)0x39290c2;
  local_170 = (code *)0x17;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar10 = *(code **)(lVar13 + 0x288);
  *(undefined8 *)(lVar13 + 0xf8) = 0x3000;
  local_180 = (undefined8 *)&LAB_0134cee4;
  local_178 = FUN_0134cef0;
  local_170 = FUN_0134cef4;
  local_168 = (code *)&LAB_0134cf00;
  local_160 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_01346e0c:
    (*local_170)(&local_160,lVar13 + 0x2a0);
    *(code **)(lVar13 + 0x288) = local_178;
    *(code **)(lVar13 + 0x298) = local_168;
    *(code **)(lVar13 + 0x290) = local_170;
    *(undefined8 *)(lVar13 + 0x280) = local_180;
  }
  else {
    *(undefined8 *)(lVar13 + 0x290) = 0;
    *(undefined8 *)(lVar13 + 0x298) = 0;
    *(undefined8 *)(lVar13 + 0x280) = 0;
    *(undefined8 *)(lVar13 + 0x288) = 0;
    (*pcVar10)(lVar13 + 0x2a0);
    if (local_170 != (code *)0x0) goto LAB_01346e0c;
  }
  plVar12 = *(long **)(lVar13 + 0x318);
  *(undefined8 *)(lVar13 + 0x300) = 0xab49936982f33827;
  *(char **)(lVar13 + 0x308) = "PLAY_UI_COMMON_SELECT";
  *(undefined8 *)(lVar13 + 0x310) = 0x15;
  *(undefined8 *)(lVar13 + 0x318) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    local_180 = (undefined8 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(&local_160);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01347148:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_180 = (undefined8 *)0xaed23f5c7b3ec6d8;
  local_178 = (code *)0x39331de;
  local_170 = (code *)0x19;
  local_168 = (code *)0x0;
  lVar13 = FUN_00d4d2c4(plVar12,*(undefined8 *)(param_1 + 8),&local_180);
  if (local_168 != (code *)0x0) {
    (**(code **)(*(long *)local_168 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar10 = *(code **)(lVar13 + 0x288);
  *(undefined8 *)(lVar13 + 0xf8) = 0xc000;
  local_180 = (undefined8 *)&LAB_0134cf0c;
  local_178 = FUN_0134cf18;
  local_170 = FUN_0134cf1c;
  local_168 = (code *)&LAB_0134cf28;
  local_160 = param_1;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar13 + 0x290) = 0;
    *(undefined8 *)(lVar13 + 0x298) = 0;
    *(undefined8 *)(lVar13 + 0x280) = 0;
    *(undefined8 *)(lVar13 + 0x288) = 0;
    (*pcVar10)(lVar13 + 0x2a0);
    if (local_170 == (code *)0x0) goto LAB_01346fcc;
  }
  (*local_170)(&local_160,lVar13 + 0x2a0);
  *(code **)(lVar13 + 0x288) = local_178;
  *(code **)(lVar13 + 0x298) = local_168;
  *(code **)(lVar13 + 0x290) = local_170;
  *(undefined8 *)(lVar13 + 0x280) = local_180;
LAB_01346fcc:
  plVar12 = *(long **)(lVar13 + 0x318);
  *(undefined8 *)(lVar13 + 0x300) = 0xab49936982f33827;
  *(char **)(lVar13 + 0x308) = "PLAY_UI_COMMON_SELECT";
  *(undefined8 *)(lVar13 + 0x310) = 0x15;
  *(undefined8 *)(lVar13 + 0x318) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (code *)0x0;
    local_180 = (undefined8 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(&local_160);
  }
  lVar9 = *(long *)(param_1 + 0x448);
  lVar13 = 0;
  do {
    local_1a0 = 0x77fd8bb8c8d2992e;
    pcStack_198 = "work_map_top_00";
    local_190 = 0xf;
    local_188 = (long *)0x0;
    local_1c0 = (&DAT_042068c0)[lVar13 * 3];
    puStack_1b8 = (&PTR_s_pane_L_icon_00_L_icon_puinfo_00__042068c8)[lVar13 * 3];
    local_1b0 = (&DAT_042068d0)[lVar13 * 3];
    local_1a8 = (long *)0x0;
    FUN_00d62910(&local_180,*(undefined8 *)(param_1 + 0x2c8),&local_1a0,&local_1c0);
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    local_238 = (code *)0x0;
    FUN_0284d5a8(lVar9 + lVar13 * 0xd0,*(undefined8 *)(param_1 + 8),&local_180,0,&local_240);
    pcVar10 = local_238;
    if (local_238 == (code *)0x0) {
      local_238 = (code *)0x0;
      pcVar10 = local_168;
    }
    else {
      local_230 = 0;
      uStack_228 = 0;
      local_240 = 0;
      local_238 = (code *)0x0;
      (*pcVar10)(&local_220);
      pcVar10 = local_168;
    }
    local_168 = pcVar10;
    if (pcVar10 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = (code *)0x0;
      local_168 = (code *)0x0;
      (*pcVar10)(auStack_150);
    }
    puVar5 = local_180;
    if (local_180 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_180 + 1);
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
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a0 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_1a0);
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 7);
  FUN_01305e3c(0x41f00000,param_1 + 0x968);
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(alStack_d0);
  }
  return;
}


