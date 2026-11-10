/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013fc234; name: FUN_013fc234
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fc234(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *local_280;
  long *local_278;
  long *local_270;
  long *local_268;
  long *local_260;
  long *local_258;
  long *local_250;
  long *local_248;
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
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  *(undefined8 *)(param_1 + 0x730) = param_2;
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x17fc6f23176b0272;
  local_f8 = (code *)0x38cc6fb;
  local_f0 = (code *)0x11;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x400000000;
  local_100 = (undefined8 *)&LAB_01406f2c;
  local_f8 = FUN_01406f40;
  local_f0 = FUN_01406f44;
  local_e8 = (code *)&LAB_01406f50;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fc36c:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fc36c;
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c37fcc594e76247;
  local_f8 = (code *)0x38fe95f;
  local_f0 = (code *)0xf;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x100;
  local_100 = (undefined8 *)&LAB_01406f5c;
  local_f8 = FUN_01406fbc;
  local_f0 = FUN_01406fc0;
  local_e8 = (code *)&LAB_01406fcc;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fc4c0:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fc4c0;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined1 **)(lVar15 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar15 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar15 + 0x310) = 0;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c37e2c594e73619;
  local_f8 = (code *)0x38e9efa;
  local_f0 = (code *)0xf;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x200;
  local_100 = (undefined8 *)&LAB_01406fd8;
  local_f8 = FUN_0140703c;
  local_f0 = FUN_01407040;
  local_e8 = (code *)&LAB_0140704c;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fc650:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fc650;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined1 **)(lVar15 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar15 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar15 + 0x310) = 0;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c9f484130998638;
  local_f8 = (code *)0x3991ec2;
  local_f0 = (code *)0xe;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 8;
  local_100 = (undefined8 *)&LAB_01407058;
  local_f8 = FUN_0140709c;
  local_f0 = FUN_014070a0;
  local_e8 = (code *)&LAB_014070ac;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fc7c8:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fc7c8;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0xd0b2f45304bc4f2f;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_SORT";
  *(undefined8 *)(lVar15 + 0x310) = 0x13;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c9f5d413099a9e7;
  local_f8 = (code *)0x3913d61;
  local_f0 = (code *)0xe;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x288);
  *(undefined8 *)(lVar15 + 0xf8) = 0x40;
  local_100 = (undefined8 *)&LAB_014070b8;
  local_f8 = FUN_0140711c;
  local_f0 = FUN_01407120;
  local_e8 = (code *)&LAB_0140712c;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fc95c:
    (*local_f0)(&local_e0,lVar15 + 0x2a0);
    *(code **)(lVar15 + 0x288) = local_f8;
    *(code **)(lVar15 + 0x298) = local_e8;
    *(code **)(lVar15 + 0x290) = local_f0;
    *(undefined8 *)(lVar15 + 0x280) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 0x290) = 0;
    *(undefined8 *)(lVar15 + 0x298) = 0;
    *(undefined8 *)(lVar15 + 0x280) = 0;
    *(undefined8 *)(lVar15 + 0x288) = 0;
    (*pcVar10)(lVar15 + 0x2a0);
    if (local_f0 != (code *)0x0) goto LAB_013fc95c;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar15 + 0x310) = 0x12;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c9f434130997db9;
  local_f8 = (code *)0x38fe8f3;
  local_f0 = (code *)0xe;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x288);
  *(undefined8 *)(lVar15 + 0xf8) = 0x80;
  local_100 = (undefined8 *)&LAB_01407138;
  local_f8 = FUN_0140719c;
  local_f0 = FUN_014071a0;
  local_e8 = (code *)&LAB_014071ac;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fcaf0:
    (*local_f0)(&local_e0,lVar15 + 0x2a0);
    *(code **)(lVar15 + 0x288) = local_f8;
    *(code **)(lVar15 + 0x298) = local_e8;
    *(code **)(lVar15 + 0x290) = local_f0;
    *(undefined8 *)(lVar15 + 0x280) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 0x290) = 0;
    *(undefined8 *)(lVar15 + 0x298) = 0;
    *(undefined8 *)(lVar15 + 0x280) = 0;
    *(undefined8 *)(lVar15 + 0x288) = 0;
    (*pcVar10)(lVar15 + 0x2a0);
    if (local_f0 != (code *)0x0) goto LAB_013fcaf0;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar15 + 0x310) = 0x12;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x42731f2a09dc9961;
  local_f8 = (code *)0x39a4644;
  local_f0 = (code *)0x11;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x400;
  local_100 = (undefined8 *)&LAB_014071b8;
  local_f8 = FUN_01407418;
  local_f0 = FUN_0140741c;
  local_e8 = (code *)&LAB_01407428;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fcc6c:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fcc6c;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar15 + 0x310) = 0x12;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0xed6e84e657de12cb;
  local_f8 = (code *)0x399208e;
  local_f0 = (code *)0x12;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x800;
  local_100 = (undefined8 *)&LAB_01407434;
  local_f8 = FUN_01407694;
  local_f0 = FUN_01407698;
  local_e8 = (code *)&LAB_014076a4;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fcde8:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fcde8;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar15 + 0x310) = 0x12;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_013fdd40;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c9f5041309993d0;
  local_f8 = (code *)0x392904d;
  local_f0 = (code *)0xe;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x200000000;
  local_100 = (undefined8 *)&LAB_014076b0;
  local_f8 = FUN_014076c0;
  local_f0 = FUN_014076c4;
  local_e8 = (code *)&LAB_014076d0;
  local_e0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB_013fcf64:
    (*local_f0)(&local_e0,lVar15 + 0x1a0);
    *(code **)(lVar15 + 0x188) = local_f8;
    *(code **)(lVar15 + 0x198) = local_e8;
    *(code **)(lVar15 + 400) = local_f0;
    *(undefined8 *)(lVar15 + 0x180) = local_100;
  }
  else {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 != (code *)0x0) goto LAB_013fcf64;
  }
  plVar14 = *(long **)(lVar15 + 0x318);
  *(undefined8 *)(lVar15 + 0x300) = 0x99ec3ab313e9662e;
  *(char **)(lVar15 + 0x308) = "PLAY_UI_COMMON_TAB";
  *(undefined8 *)(lVar15 + 0x310) = 0x12;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  pcVar10 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_013fdd40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_100 = (undefined8 *)0x8c9f4941309987eb;
  local_f8 = (code *)0x38aed54;
  local_f0 = (code *)0xe;
  local_e8 = (code *)0x0;
  lVar15 = FUN_00d4d2c4(plVar14,*(undefined8 *)(param_1 + 8),&local_100);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  pcVar10 = *(code **)(lVar15 + 0x188);
  *(undefined8 *)(lVar15 + 0xf8) = 0x80000000;
  local_100 = (undefined8 *)&LAB_014076dc;
  local_f8 = FUN_014076f0;
  local_f0 = FUN_014076f4;
  local_e8 = (code *)&LAB_01407700;
  local_e0 = param_1;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar15 + 400) = 0;
    *(undefined8 *)(lVar15 + 0x198) = 0;
    *(undefined8 *)(lVar15 + 0x180) = 0;
    *(undefined8 *)(lVar15 + 0x188) = 0;
    (*pcVar10)(lVar15 + 0x1a0);
    if (local_f0 == (code *)0x0) goto LAB_013fd10c;
  }
  (*local_f0)(&local_e0,lVar15 + 0x1a0);
  *(code **)(lVar15 + 0x188) = local_f8;
  *(code **)(lVar15 + 0x198) = local_e8;
  *(code **)(lVar15 + 400) = local_f0;
  *(undefined8 *)(lVar15 + 0x180) = local_100;
LAB_013fd10c:
  pcVar10 = local_f8;
  lVar15 = param_1 + 0x180;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar10)(&local_e0);
  }
  lVar16 = *(long *)(param_1 + 0x448);
  lVar9 = 0;
  do {
    local_120 = 0x4d9dfdd1cd31b970;
    pcStack_118 = "work_pokedex_detail_00";
    local_110 = 0x16;
    local_108 = (long *)0x0;
    local_140 = (&DAT_0420cd10)[lVar9 * 3];
    pcStack_138 = (&PTR_s_pane_L_list_poke_00_P_loader_ico_0420cd18)[lVar9 * 3];
    local_130 = (&DAT_0420cd20)[lVar9 * 3];
    local_128 = (long *)0x0;
    FUN_00d62910(&local_100,*(undefined8 *)(param_1 + 0x2c8),&local_120,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    FUN_0284d5a8(lVar16 + lVar9 * 0xd0,*(undefined8 *)(param_1 + 8),&local_100,0,&local_1c0);
    pcVar10 = local_1b8;
    if (local_1b8 == (code *)0x0) {
      local_1b8 = (code *)0x0;
      pcVar10 = local_e8;
    }
    else {
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = (code *)0x0;
      (*pcVar10)(&local_1a0);
      pcVar10 = local_e8;
    }
    local_e8 = pcVar10;
    if (pcVar10 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
    puVar2 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      piVar12 = (int *)(local_100 + 1);
      do {
        iVar7 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_120 = *puVar2;
        FUN_02a44274(lVar11 + 0xd8,&local_120);
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 9);
  uVar8 = *(undefined8 *)(param_1 + 0x468);
  local_120 = 0x4d9dfdd1cd31b970;
  pcStack_118 = "work_pokedex_detail_00";
  local_110 = 0x16;
  local_108 = (long *)0x0;
  local_140 = 0xca3bb63f23637717;
  pcStack_138 = "pane_P_loader_poke_00";
  local_130 = 0x15;
  local_128 = (long *)0x0;
  FUN_00d62910(&local_100,*(undefined8 *)(param_1 + 0x2c8),&local_120,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
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
  FUN_0284d5a8(uVar8,*(undefined8 *)(param_1 + 8),&local_100,0,&local_240);
  pcVar10 = local_238;
  if (local_238 == (code *)0x0) {
    local_238 = (code *)0x0;
    pcVar10 = local_e8;
  }
  else {
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    local_238 = (code *)0x0;
    (*pcVar10)(&local_220);
    pcVar10 = local_e8;
  }
  local_e8 = pcVar10;
  if (pcVar10 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(auStack_d0);
  }
  puVar2 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar12 = (int *)(local_100 + 1);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_120 = *puVar2;
      FUN_02a44274(lVar9 + 0xd8,&local_120);
    }
  }
  FUN_013fdd60(&local_100,*(undefined8 *)(param_1 + 8));
  puVar2 = local_100;
  local_100 = (undefined8 *)0x0;
  lVar9 = *(long *)(param_1 + 0x740);
  *(undefined8 **)(param_1 + 0x740) = puVar2;
  if (lVar9 != 0) {
    FUN_0140770c(param_1 + 0x748);
  }
  *(code **)(param_1 + 0x750) = local_f0;
  *(code **)(param_1 + 0x758) = local_e8;
  *(code **)(param_1 + 0x748) = local_f8;
  local_120 = *(undefined8 *)(param_1 + 8);
  local_140 = CONCAT44(local_140._4_4_,0x44c);
  FUN_013fde70(&local_100,local_120,&local_140,&local_120);
  plVar14 = *(long **)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x738) = 0;
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  *(undefined8 **)(param_1 + 0x738) = local_100;
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar3 = *(uint *)(lVar9 + 400);
  if (uVar3 != 0) {
    uVar13 = 0;
    piVar12 = (int *)(lVar9 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar12 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar12 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_304928236d5bcabe) && (*piVar12 == 10)) {
        if ((uint)uVar13 < 0x10) {
          plVar14 = *(long **)(piVar12 + -2);
          if (plVar14 == (long *)0x0) goto LAB_013fdcf4;
          lVar9 = plVar14[0xb];
          if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar9 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
              *(undefined8 *)(lVar9 + 0x10) = uVar8;
            }
            piVar12 = (int *)(lVar9 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = *piVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_013fdcf4:
            plVar6 = (long *)plVar14[0xd];
            goto joined_r0x013fdcfc;
          }
          goto LAB_013fdd40;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      piVar12 = piVar12 + 6;
    } while (uVar3 != uVar13);
  }
  plVar14 = (long *)0x0;
  plVar6 = _DAT_00000068;
joined_r0x013fdcfc:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar12 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  local_100 = (undefined8 *)0xc7b4038e14033a8a;
  local_f8 = (code *)0x392921c;
  local_f0 = (code *)0x14;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0x3137f2f148c2b56b;
  local_248 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_248,&local_120,10);
  if (local_248 != (long *)0x0) {
    plVar14 = local_248 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_248 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0xaafd0d2e4145a9fc;
  local_f8 = (code *)0x39ac8ab;
  local_f0 = (code *)0x10;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0x9a82701baaa6d49;
  local_250 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_250,&local_120,10);
  if (local_250 != (long *)0x0) {
    plVar14 = local_250 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_250 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x217bc273255948;
  local_f8 = (code *)0x39920a1;
  local_f0 = (code *)0x10;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0x9a82401baaa6830;
  local_258 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_258,&local_120,10);
  if (local_258 != (long *)0x0) {
    plVar14 = local_258 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_258 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x3a6b0eaf66d4ae93;
  local_f8 = (code *)0x389b884;
  local_f0 = (code *)0x14;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0xd6c7ebd2da63fb02;
  local_260 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_260,&local_120,10);
  if (local_260 != (long *)0x0) {
    plVar14 = local_260 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_260 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x145d799f807c1fa6;
  local_f8 = (code *)0x393ad5b;
  local_f0 = (code *)0x13;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0xd6c7ecd2da63fcb5;
  local_268 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_268,&local_120,10);
  if (local_268 != (long *)0x0) {
    plVar14 = local_268 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_268 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x2318a1a2c827c41a;
  local_f8 = (code *)0x38df8c5;
  local_f0 = (code *)0x18;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0xa52276a9212a417e;
  local_270 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_270,&local_120,10);
  if (local_270 != (long *)0x0) {
    plVar14 = local_270 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_270 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x928ebc53a76e934e;
  local_f8 = (code *)0x399b0f1;
  local_f0 = (code *)0x14;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0xa52276a9212a417e;
  local_278 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_278,&local_120,10);
  if (local_278 != (long *)0x0) {
    plVar14 = local_278 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_278 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  local_100 = (undefined8 *)0x62d0a058b069d6b6;
  local_f8 = (code *)0x39920b2;
  local_f0 = (code *)0x14;
  local_e8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_120 = 0xa52276a9212a417e;
  local_280 = plVar6;
  FUN_011845f4(lVar15,&local_100,&local_280,&local_120,10);
  if (local_280 != (long *)0x0) {
    plVar14 = local_280 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_280 + 0x10))();
    }
  }
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(long *)local_e8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


