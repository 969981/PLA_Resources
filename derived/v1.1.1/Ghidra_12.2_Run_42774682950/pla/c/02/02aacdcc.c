/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aacdcc; name: FUN_02aacdcc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aacdcc(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  int extraout_var;
  uint uVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 *puVar35;
  long *plVar36;
  undefined1 *puVar37;
  int iVar38;
  long *plVar39;
  long *plVar40;
  long lVar41;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  ulong local_1f8;
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  long *local_190;
  long *local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  long *local_168;
  long *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  long *local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  long *local_98;
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  
  plVar39 = *(long **)(*param_2 + 0xd8);
  if (plVar39 != (long *)0x0) {
    plVar40 = plVar39 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar6) {
        *(int *)plVar40 = (int)*plVar40 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar4 = *(uint *)(plVar39 + 0x14);
  uVar28 = (uint)*(ulong *)(plVar39[0x13] + 0x138);
  if (uVar4 < 3) {
    uVar28 = uVar28 & uVar4 - 1;
  }
  else {
    iVar38 = 0;
    if ((ulong)uVar4 != 0) {
      iVar38 = (int)(*(ulong *)(plVar39[0x13] + 0x138) / (ulong)uVar4);
    }
    uVar28 = uVar28 - iVar38 * uVar4;
  }
  pcVar13 = (char *)FUN_02bc0470((long)(int)uVar28,plVar39 + 0xb);
  lVar29 = *(long *)(pcVar13 + 8);
  if (*pcVar13 != '\0' && lVar29 != 0) {
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(lVar29 + 0x70);
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(lVar29 + 0x78);
  }
  plVar40 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar40 != (long *)0x0) {
    plVar36 = plVar40 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = (int)*plVar36 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar31 = plVar40[0x27];
  if (uVar31 != 0) {
    uVar33 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar34 = uVar31 - 1 & 0x5fa488b600d25e24;
    }
    else {
      uVar34 = 0x5fa488b600d25e24;
      if (uVar31 < 0x5fa488b600d25e25) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = 0x5fa488b600d25e24 / uVar31;
        }
        uVar34 = 0x5fa488b600d25e24 - uVar34 * uVar31;
      }
    }
    plVar36 = *(long **)(plVar40[0x26] + uVar34 * 8);
    if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0)) {
      if (uVar33 < 2) {
        do {
          if (plVar36[1] == 0x5fa488b600d25e24) {
            if (plVar36[2] == 0x5fa488b600d25e24) goto LAB_02ab109c;
          }
          else if ((plVar36[1] & uVar31 - 1) != uVar34) break;
          plVar36 = (long *)*plVar36;
        } while (plVar36 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar36[1];
          if (uVar33 == 0x5fa488b600d25e24) {
            if (plVar36[2] == 0x5fa488b600d25e24) goto LAB_02ab109c;
          }
          else {
            if (uVar31 <= uVar33) {
              uVar8 = 0;
              if (uVar31 != 0) {
                uVar8 = uVar33 / uVar31;
              }
              uVar33 = uVar33 - uVar8 * uVar31;
            }
            if (uVar33 != uVar34) break;
          }
          plVar36 = (long *)*plVar36;
        } while (plVar36 != (long *)0x0);
      }
    }
  }
  lVar29 = 0;
LAB_02aacf9c:
  plVar14 = *(long **)(param_1 + 0x3f0);
  plVar36 = (long *)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar38 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  *plVar36 = lVar29;
  uVar31 = plVar40[0x27];
  if (uVar31 != 0) {
    uVar33 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar34 = uVar31 - 1 & 0x8d02f049ed96c471;
    }
    else {
      uVar34 = 0x8d02f049ed96c471;
      if (uVar31 < 0x8d02f049ed96c472) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = 0x8d02f049ed96c471 / uVar31;
        }
        uVar34 = 0x8d02f049ed96c471 - uVar34 * uVar31;
      }
    }
    plVar14 = *(long **)(plVar40[0x26] + uVar34 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar33 < 2) {
        do {
          if (plVar14[1] == 0x8d02f049ed96c471) {
            if (plVar14[2] == -0x72fd0fb612693b8f) goto LAB_02ab10bc;
          }
          else if ((plVar14[1] & uVar31 - 1) != uVar34) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar14[1];
          if (uVar33 == 0x8d02f049ed96c471) {
            if (plVar14[2] == -0x72fd0fb612693b8f) goto LAB_02ab10bc;
          }
          else {
            if (uVar31 <= uVar33) {
              uVar8 = 0;
              if (uVar31 != 0) {
                uVar8 = uVar33 / uVar31;
              }
              uVar33 = uVar33 - uVar8 * uVar31;
            }
            if (uVar33 != uVar34) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  lVar29 = 0;
LAB_02aad0d0:
  plVar15 = *(long **)(param_1 + 0x410);
  plVar14 = (long *)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 10;
    do {
      iVar38 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  *plVar14 = lVar29;
  uVar31 = plVar40[0x27];
  if (uVar31 != 0) {
    uVar33 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar34 = uVar31 - 1 & 0x5e1771f463b934e6;
    }
    else {
      uVar34 = 0x5e1771f463b934e6;
      if (uVar31 < 0x5e1771f463b934e7) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = 0x5e1771f463b934e6 / uVar31;
        }
        uVar34 = 0x5e1771f463b934e6 - uVar34 * uVar31;
      }
    }
    plVar15 = *(long **)(plVar40[0x26] + uVar34 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar33 < 2) {
        do {
          if (plVar15[1] == 0x5e1771f463b934e6) {
            if (plVar15[2] == 0x5e1771f463b934e6) goto LAB_02ab10dc;
          }
          else if ((plVar15[1] & uVar31 - 1) != uVar34) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar15[1];
          if (uVar33 == 0x5e1771f463b934e6) {
            if (plVar15[2] == 0x5e1771f463b934e6) goto LAB_02ab10dc;
          }
          else {
            if (uVar31 <= uVar33) {
              uVar8 = 0;
              if (uVar31 != 0) {
                uVar8 = uVar33 / uVar31;
              }
              uVar33 = uVar33 - uVar8 * uVar31;
            }
            if (uVar33 != uVar34) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  lVar29 = 0;
LAB_02aad1fc:
  plVar16 = *(long **)(param_1 + 0x418);
  plVar15 = (long *)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *plVar15 = lVar29;
  uVar31 = plVar40[0x27];
  if (uVar31 != 0) {
    uVar33 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar34 = uVar31 - 1 & 0x908e4fb6370db31d;
    }
    else {
      uVar34 = 0x908e4fb6370db31d;
      if (uVar31 < 0x908e4fb6370db31e) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = 0x908e4fb6370db31d / uVar31;
        }
        uVar34 = 0x908e4fb6370db31d - uVar34 * uVar31;
      }
    }
    plVar16 = *(long **)(plVar40[0x26] + uVar34 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar33 < 2) {
        do {
          if (plVar16[1] == 0x908e4fb6370db31d) {
            if (plVar16[2] == -0x6f71b049c8f24ce3) goto LAB_02ab10fc;
          }
          else if ((plVar16[1] & uVar31 - 1) != uVar34) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar16[1];
          if (uVar33 == 0x908e4fb6370db31d) {
            if (plVar16[2] == -0x6f71b049c8f24ce3) goto LAB_02ab10fc;
          }
          else {
            if (uVar31 <= uVar33) {
              uVar8 = 0;
              if (uVar31 != 0) {
                uVar8 = uVar33 / uVar31;
              }
              uVar33 = uVar33 - uVar8 * uVar31;
            }
            if (uVar33 != uVar34) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  lVar29 = 0;
LAB_02aad328:
  plVar16 = *(long **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x420) = lVar29;
  local_1e0 = 0;
  uStack_1d8 = 1;
  local_1d0 = 2;
  local_1c8 = 0x200000038;
  local_1c0 = 0x400000003;
  uStack_1b8 = 5;
  local_1f8 = *(ulong *)(param_1 + 0x4e0);
  local_1f0 = *(undefined8 *)(param_1 + 0x4e8);
  local_1b0 = 0x200000008;
  uStack_1e8 = 0;
  local_180 = (undefined1  [8])*param_2;
  lVar29 = FUN_01b34908(local_1a8,*(undefined8 *)((long)local_180 + 8),local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,&local_1f8,1,1,0);
  plVar16 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x3f8) = lVar29;
  local_180 = (undefined1  [8])*param_2;
  lVar29 = FUN_01b34908(local_1a8,*(undefined8 *)((long)local_180 + 8),local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,&local_1f8,1,1,0);
  plVar16 = *(long **)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x400) = lVar29;
  local_180 = (undefined1  [8])*param_2;
  lVar29 = FUN_01b34908(local_1a8,*(undefined8 *)((long)local_180 + 8),local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,&local_1f8,1,1,0);
  plVar16 = *(long **)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x408) = lVar29;
  local_1c8 = CONCAT44(local_1c8._4_4_,1);
  local_1f8 = *(ulong *)(param_1 + 0x4e0) >> 2;
  local_1f0 = *(ulong *)(param_1 + 0x4e8) >> 2;
  local_180 = (undefined1  [8])*param_2;
  lVar29 = FUN_01b34908(local_1a8,*(undefined8 *)((long)local_180 + 8),local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,&local_1f8,1,1,0);
  plVar17 = *(long **)(param_1 + 0x430);
  plVar16 = (long *)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x430) = 0;
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar38 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *plVar16 = lVar29;
  local_200 = 0;
  local_210 = 8;
  uStack_208 = 0x100;
  local_180 = (undefined1  [8])*param_2;
  lVar29 = FUN_01b34908(local_1a8,*(undefined8 *)((long)local_180 + 8),local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bbfe84(lVar29,&local_210,3,0,0);
  plVar17 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar38 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x438) = lVar29;
  local_168 = (long *)0x0;
  local_160 = (long *)0x1;
  local_158 = 2;
  local_150 = 0x200000029;
  local_148 = 0x400000003;
  uStack_140 = 5;
  local_180 = (undefined1  [8])(*(ulong *)(param_1 + 0x4e0) >> 1);
  local_138 = 0x200000008;
  local_178 = (char *)(*(ulong *)(param_1 + 0x4e8) >> 1);
  local_170 = 0;
  local_1a8._0_8_ = *param_2;
  lVar29 = FUN_01b34908(local_b0,*(undefined8 *)(local_1a8._0_8_ + 8),local_1a8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,local_180,1,1,0);
  plVar18 = *(long **)(param_1 + 0x480);
  plVar17 = (long *)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar18 != (long *)0x0) {
    plVar19 = plVar18 + 10;
    do {
      iVar38 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  *plVar17 = lVar29;
  local_1a8._0_8_ = *param_2;
  lVar29 = FUN_01b34908(local_b0,*(undefined8 *)(local_1a8._0_8_ + 8),local_1a8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,local_180,1,1,0);
  plVar19 = *(long **)(param_1 + 0x488);
  plVar18 = (long *)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  *plVar18 = lVar29;
  local_150 = CONCAT44(local_150._4_4_,1);
  local_1a8._0_8_ = *param_2;
  lVar29 = FUN_01b34908(local_b0,*(undefined8 *)(local_1a8._0_8_ + 8),local_1a8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,local_180,1,1,0);
  plVar20 = *(long **)(param_1 + 0x490);
  plVar19 = (long *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  *plVar19 = lVar29;
  local_150 = CONCAT44(local_150._4_4_,5);
  local_180 = (undefined1  [8])0x1;
  local_178 = (char *)0x1;
  local_1a8._0_8_ = *param_2;
  lVar29 = FUN_01b34908(local_b0,*(undefined8 *)(local_1a8._0_8_ + 8),local_1a8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bc011c(lVar29,local_180,1,1,0);
  plVar21 = *(long **)(param_1 + 0x4b0);
  plVar20 = (long *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  *plVar20 = lVar29;
  lVar29 = *param_2;
  local_1a8._0_8_ = 0xf0c6c66ca2fa94f;
  local_1a8._8_8_ = "ScreenBlurPrepare";
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  local_b0._0_8_ = lVar29;
  local_d0 = (long *)FUN_02ba378c(&local_f0,*(undefined8 *)(lVar29 + 8),local_b0,local_1a8);
  if (local_d0 != (long *)0x0) {
    plVar21 = local_d0 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),&local_d0);
  plVar21 = *(long **)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x470) = 0;
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  plVar21 = local_d0;
  local_d0 = (long *)0x0;
  *(long **)(param_1 + 0x470) = plVar21;
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
    plVar21 = *(long **)(param_1 + 0x470);
  }
  if (*(int *)((long)plVar21 + 0x19c) != 200) {
    *(undefined4 *)((long)plVar21 + 0x19c) = 200;
    *(undefined1 *)(*(long *)(plVar21[0xb] + 0x78) + 0xa8) = 1;
  }
  uVar31 = (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,0);
  uVar10 = (**(code **)(*DAT_043ef740 + 0x50))();
  FUN_02bbc404(*(undefined8 *)(param_1 + 0x470),uVar31 >> 0x20,uVar10);
  lVar29 = *(long *)(DAT_043ef598 + 0x80);
  if (*(char *)(lVar29 + 0x48) == '\0') {
    local_130 = FUN_02b5b7f0(lVar29,0,4);
    *(undefined1 (*) [16])(lVar29 + 0x48) = local_130;
  }
  else {
    local_130 = *(undefined1 (*) [16])(lVar29 + 0x48);
  }
  plVar21 = *(long **)(*(long *)(param_1 + 0x470) + 0x80);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  FUN_02bae22c(plVar21,0,plVar17,0xffffffff,local_1a8);
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  FUN_02bae22c(plVar21,1,plVar19,0xffffffff,local_1a8);
  local_b0._0_4_ = 2;
  iVar38 = (int)(uVar31 >> 0x20);
  plVar23 = plVar21 + 0x24;
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar21[0x24];
  local_d0._0_4_ = iVar38;
  if (piVar30 != (int *)plVar21[0x25]) {
LAB_02aada2c:
    if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02aada20;
    lVar29 = *plVar36;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar22 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 10;
      do {
        iVar1 = (int)*plVar26 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    goto LAB_02aadab0;
  }
LAB_02aada98:
  FUN_02bb199c(plVar23,local_b0,&local_d0,plVar36,local_1a8);
LAB_02aadab0:
  iVar1 = iVar38 + 1;
  local_b0._0_4_ = 2;
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar21[0x24];
  local_d0._0_4_ = iVar1;
  if (piVar30 != (int *)plVar21[0x25]) {
LAB_02aadae0:
    if ((*piVar30 != 2) || (piVar30[1] != iVar1)) goto LAB_02aadad4;
    lVar29 = *plVar15;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar22 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 10;
      do {
        iVar12 = (int)*plVar26 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    goto LAB_02aadb60;
  }
LAB_02aadb48:
  FUN_02bb199c(plVar23,local_b0,&local_d0,plVar15,local_1a8);
LAB_02aadb60:
  local_b0._0_4_ = 2;
  local_1a8._0_8_ = 0;
  for (piVar30 = (int *)plVar21[0x24]; piVar30 != (int *)plVar21[0x25]; piVar30 = piVar30 + 8) {
    if ((*piVar30 == 2) && (piVar30[1] == iVar1)) {
      *(undefined1 (*) [16])(piVar30 + 4) = local_130;
      goto LAB_02aadbc8;
    }
  }
  local_d0._0_4_ = iVar1;
  FUN_02bb1e80(plVar23,local_b0,&local_d0,local_1a8,local_130);
LAB_02aadbc8:
  local_d0._0_4_ = iVar38 + 2;
  local_b0._0_4_ = 2;
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar21[0x24];
  if (piVar30 != (int *)plVar21[0x25]) {
LAB_02aadbf8:
    if ((*piVar30 != 2) || (piVar30[1] != (int)local_d0)) goto LAB_02aadbec;
    lVar29 = *plVar20;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar22 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar22 != (long *)0x0) {
      plVar26 = plVar22 + 10;
      do {
        iVar12 = (int)*plVar26 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    goto LAB_02aadc7c;
  }
LAB_02aadc64:
  FUN_02bb199c(plVar23,local_b0,&local_d0,plVar20,local_1a8);
LAB_02aadc7c:
  iVar12 = iVar38 + 3;
  local_b0._0_4_ = 2;
  plVar22 = (long *)(param_1 + 0x420);
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar21[0x24];
  local_d0._0_4_ = iVar12;
  if (piVar30 != (int *)plVar21[0x25]) {
LAB_02aadcb8:
    if ((*piVar30 != 2) || (piVar30[1] != iVar12)) goto LAB_02aadcac;
    lVar29 = *plVar22;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar26 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar26 != (long *)0x0) {
      plVar25 = plVar26 + 10;
      do {
        iVar7 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar26 + 0x10))();
      }
    }
    goto LAB_02aadd34;
  }
LAB_02aadd20:
  FUN_02bb199c(plVar23,local_b0,&local_d0,plVar22,local_1a8);
LAB_02aadd34:
  local_b0._0_4_ = 2;
  local_d0 = (long *)CONCAT44(local_d0._4_4_,iVar12);
  local_1a8._0_8_ = 0;
  for (piVar30 = (int *)plVar21[0x24]; piVar30 != (int *)plVar21[0x25]; piVar30 = piVar30 + 8) {
    if ((*piVar30 == 2) && (piVar30[1] == iVar12)) {
      *(undefined1 (*) [16])(piVar30 + 4) = local_130;
      goto LAB_02aadd9c;
    }
  }
  FUN_02bb1e80(plVar23,local_b0,&local_d0,local_1a8,local_130);
LAB_02aadd9c:
  FUN_02baf3ec(0,0,0,0x3f800000,plVar21,0);
  FUN_02baf3ec(0,0,0,0x3f800000,plVar21,1);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  local_1a8._0_4_ = 8;
  local_b0._0_4_ = 6;
  local_d0 = (long *)CONCAT44(local_d0._4_4_,1);
  lVar29 = FUN_02ab7f4c(&local_f0,*(undefined8 *)(param_1 + 8),&local_d0,local_1a8,local_b0);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x4b8) = lVar29;
  plVar21 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_8_ = 0xf0c6c66ca2fa94f;
  local_1a8._8_8_ = "ScreenBlurPrepare";
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  local_b0._0_8_ = 0x39fa067fe2b2f9ac;
  local_b0._8_8_ = "[Blur-Prepare]";
  local_a0 = 0xe;
  local_98 = (long *)0x0;
  FUN_02b59f30(&local_d0,DAT_043ef598,local_1a8,local_b0,0);
  plVar23 = *(long **)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = 0;
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      iVar12 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  plVar23 = local_d0;
  local_d0 = (long *)0x0;
  *(long **)(param_1 + 0x478) = plVar23;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x68))(local_1a8);
  plVar23 = *(long **)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      iVar12 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x4c0) = local_1a8._0_8_;
  local_a0 = 8;
  local_98 = (long *)0x0;
  local_b0._0_8_ = 0x9a33ee12e00dbfd0;
  local_b0._8_8_ = "PassType";
  local_d0 = (long *)0x388d383cac9917fb;
  local_c8 = "BlurPrepare";
  local_c0 = 0xb;
  local_b8 = (long *)0x0;
  FUN_02b62868(local_1a8._0_8_,local_b0,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x4c0));
  lVar29 = *(long *)(param_1 + 0x4c0);
  lVar41 = *(long *)(param_1 + 0x478);
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  if (*(char *)(lVar29 + 0x118) != '\0') {
    local_1a8._8_8_ = *(undefined8 *)(lVar29 + 0x120);
    local_198 = *(undefined8 *)(lVar29 + 0x128);
    local_190 = *(long **)(lVar29 + 0x130);
    local_188 = *(long **)(lVar29 + 0x138);
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_1a8[0] = 1;
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_1a8);
  if (local_1a8[0] != '\0') {
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  }
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x60),4);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x60),0,0);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x60),1,0);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x60),1,0);
  local_1a8._0_8_ = 0xaeb8f049b22b164;
  local_1a8._8_8_ = "ScreenBlur";
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x28))(*(long **)(param_1 + 0x4b8),local_1a8,200);
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x30))(*(long **)(param_1 + 0x4b8),plVar17,plVar19);
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x40))(0);
  plVar19 = (long *)*param_2;
  local_1a8._0_8_ = 0xeee86cb4e0e68f04;
  local_1a8._8_8_ = "CalcBrightnessRef";
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  local_f0 = plVar19;
  local_110 = FUN_02ba378c(local_90,plVar19[1],&local_f0,local_1a8);
  if (local_110 != 0) {
    piVar30 = (int *)(local_110 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(plVar19[0xf],&local_110);
  plVar19 = *(long **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_110;
  local_110 = 0;
  *(long *)(param_1 + 0x4a0) = lVar29;
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))(local_190);
    lVar29 = *(long *)(param_1 + 0x4a0);
  }
  if (*(int *)(lVar29 + 0x19c) != 0x136) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x136;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x4a0);
  }
  FUN_02bbc404(lVar29,iVar38,uVar10);
  lVar29 = *(long *)(param_1 + 0x4a0);
  if (*(char *)(lVar29 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
    *(undefined1 *)(lVar29 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x4a0) + 0x80);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  FUN_02bae22c(plVar19,0,plVar20,0xffffffff,local_1a8);
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x60))(&local_f0);
  local_110 = CONCAT44(local_110._4_4_,2);
  local_90._0_4_ = iVar38;
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar19[0x24];
  if (piVar30 != (int *)plVar19[0x25]) {
LAB_02aae2cc:
    if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02aae2c0;
    if (local_f0 != (long *)0x0) {
      plVar23 = local_f0 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar23 = *(long **)(piVar30 + 2);
    *(long **)(piVar30 + 2) = local_f0;
    if (plVar23 != (long *)0x0) {
      plVar26 = plVar23 + 10;
      do {
        iVar38 = (int)*plVar26 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar38;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar38 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    goto joined_r0x02aae334;
  }
LAB_02aae33c:
  FUN_02bb199c(plVar19 + 0x24,&local_110,local_90,&local_f0,local_1a8);
joined_r0x02aae334:
  if (local_f0 != (long *)0x0) {
    plVar23 = local_f0 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  local_f0 = (long *)CONCAT44(local_f0._4_4_,2);
  local_110 = CONCAT44(local_110._4_4_,iVar1);
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  piVar30 = (int *)plVar19[0x24];
  if (piVar30 != (int *)plVar19[0x25]) {
LAB_02aae3a0:
    if ((*piVar30 != 2) || (piVar30[1] != iVar1)) goto LAB_02aae394;
    lVar29 = *plVar20;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar23 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar23 != (long *)0x0) {
      plVar26 = plVar23 + 10;
      do {
        iVar38 = (int)*plVar26 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar38;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar38 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    goto joined_r0x02aae408;
  }
LAB_02aae410:
  FUN_02bb199c(plVar19 + 0x24,&local_f0,&local_110,plVar20,local_1a8);
joined_r0x02aae408:
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  local_f0 = (long *)0xae12b6098ffacb4c;
  local_e8 = "[CalcBrightnessRef]";
  local_e0 = 0x13;
  local_d8 = (long *)0x0;
  local_1a8._0_8_ = 0xeee86cb4e0e68f04;
  local_1a8._8_8_ = "CalcBrightnessRef";
  FUN_02b59f30(&local_110,DAT_043ef598,local_1a8,&local_f0,0);
  plVar19 = *(long **)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_110;
  local_110 = 0;
  *(long *)(param_1 + 0x4a8) = lVar29;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  local_e8 = "PassType";
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x9a33ee12e00dbfd0;
  local_e0 = 8;
  local_d8 = (long *)0x0;
  local_110 = -0x1117934b1f1970fc;
  local_108 = "CalcBrightnessRef";
  local_100 = 0x11;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x4c0),&local_f0,&local_110);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x4c0));
  lVar29 = *(long *)(param_1 + 0x4c0);
  lVar41 = *(long *)(param_1 + 0x4a8);
  local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  if (*(char *)(lVar29 + 0x118) != '\0') {
    local_1a8._8_8_ = *(undefined8 *)(lVar29 + 0x120);
    local_198 = *(undefined8 *)(lVar29 + 0x128);
    local_190 = *(long **)(lVar29 + 0x130);
    local_188 = *(long **)(lVar29 + 0x138);
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_1a8[0] = 1;
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_1a8);
  if (local_1a8[0] != '\0') {
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffffffffff00;
  }
  lVar29 = *(long *)(param_1 + 0x4a8);
  FUN_02bb5928(*(undefined8 *)(lVar29 + 0x60),0,1);
  uVar27 = *(undefined8 *)(lVar29 + 0x60);
  lVar29 = *(long *)(*(long *)(lVar29 + 0x58) + 0x60);
  if (*(char *)(lVar29 + 0x58) == '\0') {
    local_1a8 = FUN_02b5a9b8(lVar29,0,1,0);
    *(undefined1 (*) [16])(lVar29 + 0x58) = local_1a8;
  }
  else {
    local_1a8 = *(undefined1 (*) [16])(lVar29 + 0x58);
  }
  FUN_02bb66c0(uVar27,0,local_1a8);
  plVar19 = (long *)FUN_02ab98f4(local_1a8,*(undefined8 *)(param_1 + 8));
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar23 = *(long **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      iVar38 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  *(long **)(param_1 + 0x4d0) = plVar19;
  (**(code **)(*plVar19 + 0x28))
            (plVar19,0x12d,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8);
  plVar19 = (long *)FUN_02ababac(local_1a8,*(undefined8 *)(param_1 + 8));
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar23 = *(long **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      iVar38 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  *(long **)(param_1 + 0x4d8) = plVar19;
  (**(code **)(*plVar19 + 0x28))
            (plVar19,0x12f,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8);
  if (plVar21 != (long *)0x0) {
    plVar19 = plVar21 + 10;
    do {
      iVar38 = (int)*plVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  lVar29 = *param_2;
  local_180 = (undefined1  [8])0xd3e6ca2347668fcb;
  local_178 = "kBlendBufferComposit";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar29;
  local_b0._0_8_ = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar29 + 8),local_1a8,local_180);
  if (local_b0._0_8_ != 0) {
    piVar30 = (int *)(local_b0._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),local_b0);
  plVar19 = *(long **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 0x3c0) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3c0);
  }
  if (*(int *)(lVar29 + 0x19c) != 0xb3) {
    *(undefined4 *)(lVar29 + 0x19c) = 0xb3;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3c0);
  }
  if (*(char *)(lVar29 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
    *(undefined1 *)(lVar29 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
  }
  lVar29 = *(long *)(DAT_043ef598 + 0x80);
  if (*(char *)(lVar29 + 0x48) == '\0') {
    local_b0 = FUN_02b5b7f0(lVar29,0,4);
    *(undefined1 (*) [16])(lVar29 + 0x48) = local_b0;
  }
  else {
    local_b0 = *(undefined1 (*) [16])(lVar29 + 0x48);
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x80);
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar31 = plVar21[0x27];
  if (uVar31 != 0) {
    uVar33 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar34 = uVar31 - 1 & 0x6b21fb462691e0eb;
    }
    else {
      uVar34 = 0x6b21fb462691e0eb;
      if (uVar31 < 0x6b21fb462691e0ec) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = 0x6b21fb462691e0eb / uVar31;
        }
        uVar34 = 0x6b21fb462691e0eb - uVar34 * uVar31;
      }
    }
    plVar23 = *(long **)(plVar21[0x26] + uVar34 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar33 < 2) {
        do {
          if (plVar23[1] == 0x6b21fb462691e0eb) {
            if (plVar23[2] == 0x6b21fb462691e0eb) goto LAB_02ab1078;
          }
          else if ((plVar23[1] & uVar31 - 1) != uVar34) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar23[1];
          if (uVar33 == 0x6b21fb462691e0eb) {
            if (plVar23[2] == 0x6b21fb462691e0eb) goto LAB_02ab1078;
          }
          else {
            if (uVar31 <= uVar33) {
              uVar8 = 0;
              if (uVar31 != 0) {
                uVar8 = uVar33 / uVar31;
              }
              uVar33 = uVar33 - uVar8 * uVar31;
            }
            if (uVar33 != uVar34) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  local_d0 = (long *)0x0;
LAB_02aae998:
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  FUN_02bae22c(plVar19,0,&local_d0,0xffffffff,local_180);
  uVar31 = (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,0);
  uVar10 = (**(code **)(*DAT_043ef740 + 0x50))();
  FUN_02bbc404(*(undefined8 *)(param_1 + 0x3c0),uVar31 >> 0x20,uVar10);
  plVar23 = *(long **)(*(long *)(param_1 + 0x3c0) + 0x80);
  iVar38 = (int)(uVar31 >> 0x20);
  local_f0._0_4_ = iVar38;
  if (plVar23 == (long *)0x0) {
    local_1a8._0_4_ = 2;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = _DAT_00000120;
    if (_DAT_00000120 != _DAT_00000128) {
LAB_02aaec44:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02aaec38;
      lVar29 = *plVar36;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar23 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar23 != (long *)0x0) {
        plVar26 = plVar23 + 10;
        do {
          iVar1 = (int)*plVar26 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar6) {
            *(int *)plVar26 = iVar1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))();
        }
      }
      goto LAB_02aaecc8;
    }
LAB_02aaecb0:
    FUN_02bb199c(0x120,local_1a8,&local_f0,plVar36,local_180);
LAB_02aaecc8:
    local_1a8._0_4_ = 2;
    local_180 = (undefined1  [8])0x0;
    for (piVar30 = _DAT_00000120; piVar30 != _DAT_00000128; piVar30 = piVar30 + 8) {
      if ((*piVar30 == 2) && (piVar30[1] == iVar38)) {
        *(undefined1 (*) [16])(piVar30 + 4) = local_b0;
        goto LAB_02aaed3c;
      }
    }
    local_f0._0_4_ = iVar38;
    FUN_02bb1e80(0x120,local_1a8,&local_f0,local_180,local_b0);
LAB_02aaed3c:
    local_1a8._0_4_ = 2;
    local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar38 + 1);
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
    piVar30 = _DAT_00000120;
    if (_DAT_00000120 != _DAT_00000128) {
LAB_02aaed78:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38 + 1)) goto LAB_02aaed6c;
      lVar29 = *plVar22;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar23 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar23 != (long *)0x0) {
        plVar26 = plVar23 + 10;
        do {
          iVar38 = (int)*plVar26 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar6) {
            *(int *)plVar26 = iVar38;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar38 != 0) goto LAB_02aaedf4;
        lVar29 = *plVar23;
        goto LAB_02aaec00;
      }
      goto LAB_02aaedf4;
    }
LAB_02aaeddc:
    FUN_02bb199c(0x120,local_1a8,&local_f0,plVar22,local_180);
  }
  else {
    plVar26 = plVar23 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_1a8._0_4_ = 2;
    plVar25 = plVar23 + 0x24;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = (int *)plVar23[0x24];
    if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aaea44:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02aaea38;
      lVar29 = *plVar36;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar24 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar24 != (long *)0x0) {
        plVar2 = plVar24 + 10;
        do {
          iVar1 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))();
        }
      }
      goto LAB_02aaeac8;
    }
LAB_02aaeab0:
    FUN_02bb199c(plVar25,local_1a8,&local_f0,plVar36,local_180);
LAB_02aaeac8:
    local_1a8._0_4_ = 2;
    local_180 = (undefined1  [8])0x0;
    for (piVar30 = (int *)plVar23[0x24]; piVar30 != (int *)plVar23[0x25]; piVar30 = piVar30 + 8) {
      if ((*piVar30 == 2) && (piVar30[1] == iVar38)) {
        *(undefined1 (*) [16])(piVar30 + 4) = local_b0;
        goto LAB_02aaeb30;
      }
    }
    local_f0._0_4_ = iVar38;
    FUN_02bb1e80(plVar25,local_1a8,&local_f0,local_180,local_b0);
LAB_02aaeb30:
    local_1a8._0_4_ = 2;
    local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar38 + 1);
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
    piVar30 = (int *)plVar23[0x24];
    if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aaeb60:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38 + 1)) goto LAB_02aaeb54;
      lVar29 = *plVar22;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar25 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar25 != (long *)0x0) {
        plVar24 = plVar25 + 10;
        do {
          iVar38 = (int)*plVar24 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *(int *)plVar24 = iVar38;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar38 == 0) {
          (**(code **)(*plVar25 + 0x10))();
        }
      }
      goto LAB_02aaebe4;
    }
LAB_02aaebcc:
    FUN_02bb199c(plVar25,local_1a8,&local_f0,plVar22,local_180);
LAB_02aaebe4:
    do {
      iVar38 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      lVar29 = *plVar23;
LAB_02aaec00:
      (**(code **)(lVar29 + 0x10))(plVar23);
    }
  }
LAB_02aaedf4:
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = 0x54fa7b7f23cb9ee6;
  local_1a8._8_8_ = "[Blend Buffer Composit]";
  local_198 = 0x17;
  local_190 = (long *)0x0;
  local_180 = (undefined1  [8])0xd3e6ca2347668fcb;
  local_178 = "kBlendBufferComposit";
  FUN_02b59f30(&local_f0,DAT_043ef598,local_180,local_1a8,0);
  plVar23 = *(long **)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      iVar38 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  plVar23 = local_f0;
  local_f0 = (long *)0x0;
  *(long **)(param_1 + 0x458) = plVar23;
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  plVar23 = *(long **)(DAT_043ef5a0 + 0x60);
  if (plVar23 != (long *)0x0) {
    plVar26 = plVar23 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_8_ = 0xa51a3ff7b5756746;
  local_1a8._8_8_ = "BlendBufferComposit";
  local_198 = 0x1f;
  local_190 = (long *)0x0;
  FUN_02b2efe0(local_180,plVar23[0xd],local_1a8);
  plVar26 = local_160;
  if (*(char *)(param_1 + 0x4f8) == '\0') {
    if (local_180[0] != '\0') {
      *(char **)(param_1 + 0x500) = local_178;
      *(undefined8 *)(param_1 + 0x508) = local_170;
      *(long **)(param_1 + 0x510) = local_168;
      local_160 = (long *)0x0;
      *(long **)(param_1 + 0x518) = plVar26;
      *(undefined1 *)(param_1 + 0x4f8) = 1;
      goto joined_r0x02aaefa0;
    }
  }
  else {
    if (local_180[0] == '\0') {
      if (*(long **)(param_1 + 0x518) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x518) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x4f8) = 0;
    }
    else {
      *(char **)(param_1 + 0x500) = local_178;
      *(undefined8 *)(param_1 + 0x508) = local_170;
      plVar26 = *(long **)(param_1 + 0x518);
      *(undefined8 *)(param_1 + 0x518) = 0;
      *(long **)(param_1 + 0x510) = local_168;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))();
      }
      plVar26 = local_160;
      local_160 = (long *)0x0;
      *(long **)(param_1 + 0x518) = plVar26;
    }
joined_r0x02aaefa0:
    if (local_180[0] != '\0') {
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
    }
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  FUN_02ba7ba0(*(undefined8 *)(*(long *)(param_1 + 0x458) + 0x60),0,(undefined1 *)(param_1 + 0x4f8))
  ;
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x458) + 0x60),4);
  lVar29 = *(long *)(param_1 + 0x458);
  FUN_02bb5928(*(undefined8 *)(lVar29 + 0x60),0,1);
  uVar27 = *(undefined8 *)(lVar29 + 0x60);
  lVar29 = *(long *)(*(long *)(lVar29 + 0x58) + 0x60);
  if (*(char *)(lVar29 + 0xa8) == '\0') {
    _local_180 = FUN_02b5a9b8(lVar29,0,2,0);
    *(undefined1 (*) [16])(lVar29 + 0xa8) = _local_180;
  }
  else {
    _local_180 = *(undefined1 (*) [16])(lVar29 + 0xa8);
  }
  plVar26 = (long *)(param_1 + 0x408);
  FUN_02bb66c0(uVar27,0,local_180);
  plVar25 = plVar23 + 10;
  do {
    iVar38 = (int)*plVar25 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *(int *)plVar25 = iVar38;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar38 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  if (local_d0 != (long *)0x0) {
    plVar23 = (long *)((long)local_d0 + 0x50);
    do {
      iVar38 = *(int *)plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 + -1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar38 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  lVar41 = *param_2;
  local_180 = (undefined1  [8])0x38c09a86db6c4a00;
  local_178 = &DAT_03a81cc8;
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar41;
  lVar29 = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar41 + 8),local_1a8,local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_b0._0_8_ = lVar29;
  FUN_02bb9f68(*(undefined8 *)(lVar41 + 0x78),local_b0);
  plVar19 = *(long **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 0x3c8) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3c8);
  }
  *(undefined1 *)(lVar29 + 0x242) = 1;
  lVar29 = *(long *)(param_1 + 0x3c8);
  if (*(int *)(lVar29 + 0x19c) != 0x122) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x122;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3c8);
  }
  plVar19 = *(long **)(lVar29 + 0x80);
  if (plVar19 == (long *)0x0) {
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(0,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,local_180);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(plVar19,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,
                 local_180);
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x3c8) + 0x80);
  if (plVar19 == (long *)0x0) {
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),0,0);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),plVar19,0
                );
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  lVar29 = *param_2;
  local_180 = (undefined1  [8])&DAT_121d7307bd58c49b;
  local_178 = &DAT_03a81ce8;
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar29;
  local_b0._0_8_ = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar29 + 8),local_1a8,local_180);
  if (local_b0._0_8_ != 0) {
    piVar30 = (int *)(local_b0._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),local_b0);
  plVar19 = *(long **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 0x3d0) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3d0);
  }
  *(undefined1 *)(lVar29 + 0x242) = 1;
  lVar29 = *(long *)(param_1 + 0x3d0);
  if (*(int *)(lVar29 + 0x19c) != 0x136) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x136;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3d0);
  }
  plVar19 = *(long **)(lVar29 + 0x80);
  if (plVar19 == (long *)0x0) {
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(0,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,local_180);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(plVar19,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,
                 local_180);
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x80);
  if (plVar19 == (long *)0x0) {
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),0,0);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),plVar19,0
                );
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  lVar29 = *param_2;
  local_180 = (undefined1  [8])0xe8c1457a6fc98d69;
  local_178 = "Vfx2D";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar29;
  local_b0._0_8_ = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar29 + 8),local_1a8,local_180);
  if (local_b0._0_8_ != 0) {
    piVar30 = (int *)(local_b0._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),local_b0);
  plVar19 = *(long **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 0x3d8) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3d8);
  }
  if (*(int *)(lVar29 + 0x19c) != 0x140) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x140;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3d8);
  }
  plVar19 = *(long **)(lVar29 + 0x80);
  if (plVar19 == (long *)0x0) {
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(0,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,local_180);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(plVar19,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,
                 local_180);
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x3d8) + 0x80);
  if (plVar19 == (long *)0x0) {
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),0,0);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x4e0),(float)*(ulong *)(param_1 + 0x4e8),plVar19,0
                );
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  lVar29 = *param_2;
  local_180 = (undefined1  [8])0xc0bc90b7f6c779ee;
  local_178 = "HayabusaLook";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar29;
  local_b0._0_8_ = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar29 + 8),local_1a8,local_180);
  if (local_b0._0_8_ != 0) {
    piVar30 = (int *)(local_b0._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),local_b0);
  plVar19 = *(long **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 0x3a8) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3a8);
  }
  if (*(int *)(lVar29 + 0x19c) != 300) {
    *(undefined4 *)(lVar29 + 0x19c) = 300;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3a8);
  }
  if (*(char *)(lVar29 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
    *(undefined1 *)(lVar29 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
  }
  lVar29 = *(long *)(DAT_043ef598 + 0x80);
  if (*(char *)(lVar29 + 0x48) == '\0') {
    local_90 = FUN_02b5b7f0(lVar29,0,4);
    *(undefined1 (*) [16])(lVar29 + 0x48) = local_90;
  }
  else {
    local_90 = *(undefined1 (*) [16])(lVar29 + 0x48);
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x80);
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  FUN_02bae22c(plVar19,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,
               local_180);
  plVar21 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar32 = (undefined1 *)plVar21[0x27];
  if (puVar32 != (undefined1 *)0x0) {
    uVar31 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      puVar35 = (undefined1 *)((ulong)(puVar32 + -1) & 0xa287fa31962f1a58);
    }
    else {
      puVar35 = &DAT_a287fa31962f1a58;
      if (puVar32 < (undefined1 *)0xa287fa31962f1a59) {
        uVar33 = 0;
        if (puVar32 != (undefined1 *)0x0) {
          uVar33 = 0xa287fa31962f1a58 / (ulong)puVar32;
        }
        puVar35 = &DAT_a287fa31962f1a58 + -(uVar33 * (long)puVar32);
      }
    }
    plVar23 = *(long **)(plVar21[0x26] + (long)puVar35 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar31 < 2) {
        do {
          if ((undefined1 *)plVar23[1] == &DAT_a287fa31962f1a58) {
            if ((undefined1 *)plVar23[2] == &DAT_a287fa31962f1a58) goto LAB_02ab111c;
          }
          else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar32 + -1)) != puVar35) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          puVar37 = (undefined1 *)plVar23[1];
          if (puVar37 == &DAT_a287fa31962f1a58) {
            if ((undefined1 *)plVar23[2] == &DAT_a287fa31962f1a58) goto LAB_02ab111c;
          }
          else {
            if (puVar32 <= puVar37) {
              uVar31 = 0;
              if (puVar32 != (undefined1 *)0x0) {
                uVar31 = (ulong)puVar37 / (ulong)puVar32;
              }
              puVar37 = puVar37 + -(uVar31 * (long)puVar32);
            }
            if (puVar37 != puVar35) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  lVar29 = 0;
LAB_02aaf93c:
  plVar23 = *(long **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (plVar23 != (long *)0x0) {
    plVar25 = plVar23 + 10;
    do {
      iVar38 = (int)*plVar25 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x428) = lVar29;
  uVar31 = (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,0);
  uVar10 = (**(code **)(*DAT_043ef740 + 0x50))();
  FUN_02bbc404(*(undefined8 *)(param_1 + 0x3a8),uVar31 >> 0x20);
  plVar23 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x80);
  if (plVar23 != (long *)0x0) {
    plVar25 = plVar23 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_4_ = 2;
  iVar38 = (int)(uVar31 >> 0x20);
  plVar25 = plVar23 + 0x24;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  local_b0._0_4_ = iVar38;
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aaf9f8:
    if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02aaf9ec;
    lVar29 = *plVar36;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar24 = plVar36 + 10;
      do {
        iVar1 = (int)*plVar24 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafa7c;
  }
LAB_02aafa64:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar36,local_180);
LAB_02aafa7c:
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])0x0;
  for (piVar30 = (int *)plVar23[0x24]; piVar30 != (int *)plVar23[0x25]; piVar30 = piVar30 + 8) {
    if ((*piVar30 == 2) && (piVar30[1] == iVar38)) {
      *(undefined1 (*) [16])(piVar30 + 4) = local_90;
      goto LAB_02aafae4;
    }
  }
  local_b0._0_4_ = iVar38;
  FUN_02bb1e80(plVar25,local_1a8,local_b0,local_180,local_90);
LAB_02aafae4:
  iVar1 = iVar38 + 1;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  local_b0._0_4_ = iVar1;
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aafb18:
    if ((*piVar30 != 2) || (piVar30[1] != iVar1)) goto LAB_02aafb0c;
    lVar29 = *(long *)(param_1 + 0x428);
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar24 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar24 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafb94;
  }
LAB_02aafb80:
  FUN_02bb199c(plVar25,local_1a8,local_b0,(long *)(param_1 + 0x428),local_180);
LAB_02aafb94:
  iVar12 = iVar38 + 2;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  local_b0._0_4_ = iVar12;
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aafbc4:
    if ((*piVar30 != 2) || (piVar30[1] != iVar12)) goto LAB_02aafbb8;
    lVar29 = *plVar15;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar24 = plVar36 + 10;
      do {
        iVar7 = (int)*plVar24 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafc48;
  }
LAB_02aafc30:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar15,local_180);
LAB_02aafc48:
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])0x0;
  for (piVar30 = (int *)plVar23[0x24]; piVar30 != (int *)plVar23[0x25]; piVar30 = piVar30 + 8) {
    if ((*piVar30 == 2) && (piVar30[1] == iVar12)) {
      *(undefined1 (*) [16])(piVar30 + 4) = local_90;
      goto LAB_02aafcb0;
    }
  }
  local_b0._0_4_ = iVar12;
  FUN_02bb1e80(plVar25,local_1a8,local_b0,local_180,local_90);
LAB_02aafcb0:
  local_b0._0_4_ = iVar38 + 3;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aafce4:
    if ((*piVar30 != 2) || (piVar30[1] != local_b0._0_4_)) goto LAB_02aafcd8;
    lVar29 = *plVar17;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar17 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafd68;
  }
LAB_02aafd50:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar17,local_180);
LAB_02aafd68:
  local_b0._0_4_ = iVar38 + 4;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aafd98:
    if ((*piVar30 != 2) || (piVar30[1] != local_b0._0_4_)) goto LAB_02aafd8c;
    lVar29 = *plVar18;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar17 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafe1c;
  }
LAB_02aafe04:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar18,local_180);
LAB_02aafe1c:
  local_b0._0_4_ = iVar38 + 5;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aafe4c:
    if ((*piVar30 != 2) || (piVar30[1] != local_b0._0_4_)) goto LAB_02aafe40;
    lVar29 = *plVar20;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar17 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aafed0;
  }
LAB_02aafeb8:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar20,local_180);
LAB_02aafed0:
  local_b0._0_4_ = iVar38 + 6;
  local_1a8._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aaff00:
    if ((*piVar30 != 2) || (piVar30[1] != local_b0._0_4_)) goto LAB_02aafef4;
    lVar29 = *plVar14;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar14 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02aaff80;
  }
LAB_02aaff68:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar14,local_180);
LAB_02aaff80:
  local_1a8._0_4_ = 2;
  local_b0._0_4_ = iVar38 + 7;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar23[0x24];
  if (piVar30 != (int *)plVar23[0x25]) {
LAB_02aaffb0:
    if ((*piVar30 != 2) || (piVar30[1] != iVar38 + 7)) goto LAB_02aaffa4;
    lVar29 = *plVar22;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar36 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar36 != (long *)0x0) {
      plVar14 = plVar36 + 10;
      do {
        iVar12 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    goto LAB_02ab0034;
  }
LAB_02ab001c:
  FUN_02bb199c(plVar25,local_1a8,local_b0,plVar22,local_180);
LAB_02ab0034:
  uVar11 = (**(code **)(**(long **)(param_1 + 0x4b8) + 0x58))();
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x50))(local_180);
  FUN_02bb11cc(plVar23,2,uVar11,local_180);
  if (local_180 != (undefined1  [8])0x0) {
    plVar36 = (long *)((long)local_180 + 0x50);
    do {
      iVar12 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*(long *)local_180 + 0x10))();
    }
  }
  if (plVar23 != (long *)0x0) {
    plVar36 = plVar23 + 10;
    do {
      iVar12 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
  }
  FUN_02ad1918(local_180,*(undefined8 *)(param_1 + 0x3a8),3);
  if (local_180 != (undefined1  [8])0x0) {
    plVar36 = (long *)((long)local_180 + 0x50);
    do {
      iVar12 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*(long *)local_180 + 0x10))();
    }
  }
  local_180 = (undefined1  [8])&DAT_6723799257d05608;
  local_178 = &DAT_03a82288;
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  FUN_02b115dc(DAT_043ef5a8,*(long *)(param_1 + 0x3a8) + 0x60,local_180);
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  plVar36 = *(long **)(param_1 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar9 = PTR_DAT_04379528;
    if (iVar12 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar29 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = plVar36;
  *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
  lVar41 = (**(code **)(*plVar36 + 0x10))(plVar36,0x100,0x10);
  if (lVar41 == 0) {
    (**(code **)(*plVar36 + 0xb8))(plVar36);
    FUN_02ad5c38(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x100;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = plVar36;
    *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
  }
  else {
    FUN_02ad5c38(lVar41);
    *(long **)(lVar41 + 8) = plVar36;
    *(long *)(lVar41 + 0x10) = lVar41;
    *(undefined8 *)(lVar41 + 0x18) = 0x100;
    *(undefined8 *)(lVar41 + 0x20) = 0x10;
    *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
    piVar30 = (int *)(lVar41 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar36 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x4c8) = lVar41;
  local_178 = "HayabusaLook";
  local_180 = (undefined1  [8])0xc0bc90b7f6c779ee;
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = 0xd94d2d5f06fce0a8;
  local_1a8._8_8_ = "[Hayabusa Look]";
  local_198 = 0xf;
  local_190 = (long *)0x0;
  FUN_02b59f30(local_b0,DAT_043ef598,local_180,local_1a8,0);
  plVar36 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  uVar27 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(undefined8 *)(param_1 + 0x440) = uVar27;
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  local_1a8._8_8_ = "PassType";
  local_1a8._0_8_ = 0x9a33ee12e00dbfd0;
  local_198 = 8;
  local_190 = (long *)0x0;
  local_b0._0_8_ = 0x8d54cb407c20025d;
  local_b0._8_8_ = "LookComposite";
  local_a0 = 0xd;
  local_98 = (long *)0x0;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x4c0),local_1a8,local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x4c0));
  lVar29 = *(long *)(param_1 + 0x4c0);
  lVar41 = *(long *)(param_1 + 0x440);
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  if (*(char *)(lVar29 + 0x118) != '\0') {
    local_178 = *(char **)(lVar29 + 0x120);
    local_170 = *(undefined8 *)(lVar29 + 0x128);
    local_168 = *(long **)(lVar29 + 0x130);
    local_160 = *(long **)(lVar29 + 0x138);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x18))();
    }
    local_180[0] = 1;
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_180);
  if (local_180[0] != '\0') {
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  }
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x440) + 0x60),4);
  lVar29 = *(long *)(param_1 + 0x440);
  FUN_02bb5928(*(undefined8 *)(lVar29 + 0x60),0,1);
  uVar27 = *(undefined8 *)(lVar29 + 0x60);
  lVar29 = *(long *)(*(long *)(lVar29 + 0x58) + 0x60);
  if (*(char *)(lVar29 + 0xa8) == '\0') {
    _local_180 = FUN_02b5a9b8(lVar29,0,2,0);
    *(undefined1 (*) [16])(lVar29 + 0xa8) = _local_180;
  }
  else {
    _local_180 = *(undefined1 (*) [16])(lVar29 + 0xa8);
  }
  FUN_02bb66c0(uVar27,0,local_180);
  plVar36 = (long *)*param_2;
  local_180 = (undefined1  [8])0xda3a9ef9c8c695a6;
  local_178 = "Aberration";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_d0 = plVar36;
  local_f0 = (long *)FUN_02ba378c(&local_110,plVar36[1],&local_d0,local_180);
  if (local_f0 != (long *)0x0) {
    plVar14 = local_f0 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(plVar36[0xf],&local_f0);
  plVar36 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  plVar36 = local_f0;
  local_f0 = (long *)0x0;
  *(long **)(param_1 + 0x3b8) = plVar36;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    plVar36 = *(long **)(param_1 + 0x3b8);
  }
  if (*(int *)((long)plVar36 + 0x19c) != 300) {
    *(undefined4 *)((long)plVar36 + 0x19c) = 300;
    *(undefined1 *)(*(long *)(plVar36[0xb] + 0x78) + 0xa8) = 1;
    plVar36 = *(long **)(param_1 + 0x3b8);
  }
  if ((char)plVar36[0x3f] == '\0') {
    *(undefined4 *)((long)plVar36 + 0x1fc) = 0x12;
    *(undefined1 *)(plVar36 + 0x3f) = 1;
  }
  else {
    *(undefined4 *)((long)plVar36 + 0x1fc) = 0x12;
  }
  FUN_02bbc404(*(undefined8 *)(param_1 + 0x3b8),iVar38,uVar10);
  plVar36 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x80);
  local_f0._0_4_ = iVar38;
  if (plVar36 == (long *)0x0) {
    local_d0._0_4_ = 2;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = _DAT_00000120;
    if (_DAT_00000120 != _DAT_00000128) {
LAB_02ab0704:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02ab06f8;
      lVar29 = *plVar26;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar36 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar36 != (long *)0x0) {
        plVar14 = plVar36 + 10;
        do {
          iVar12 = (int)*plVar14 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar36 + 0x10))();
        }
      }
      goto LAB_02ab0788;
    }
LAB_02ab0770:
    FUN_02bb199c(0x120,&local_d0,&local_f0,plVar26,local_180);
LAB_02ab0788:
    local_d0 = (long *)CONCAT44(local_d0._4_4_,2);
    local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar38);
    local_180 = (undefined1  [8])0x0;
    for (piVar30 = _DAT_00000120; piVar30 != _DAT_00000128; piVar30 = piVar30 + 8) {
      if ((*piVar30 == 2) && (piVar30[1] == iVar38)) {
        *(undefined1 (*) [16])(piVar30 + 4) = local_90;
        goto LAB_02ab07fc;
      }
    }
    FUN_02bb1e80(0x120,&local_d0,&local_f0,local_180,local_90);
  }
  else {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_d0._0_4_ = 2;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = (int *)plVar36[0x24];
    if (piVar30 != (int *)plVar36[0x25]) {
LAB_02ab05b8:
      if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02ab05ac;
      lVar29 = *plVar26;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar17 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 10;
        do {
          iVar12 = (int)*plVar18 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *(int *)plVar18 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      goto LAB_02ab063c;
    }
LAB_02ab0624:
    FUN_02bb199c(plVar36 + 0x24,&local_d0,&local_f0,plVar26,local_180);
LAB_02ab063c:
    local_d0 = (long *)CONCAT44(local_d0._4_4_,2);
    local_f0 = (long *)CONCAT44(local_f0._4_4_,iVar38);
    local_180 = (undefined1  [8])0x0;
    for (piVar30 = (int *)plVar36[0x24]; piVar30 != (int *)plVar36[0x25]; piVar30 = piVar30 + 8) {
      if ((*piVar30 == 2) && (piVar30[1] == iVar38)) {
        *(undefined1 (*) [16])(piVar30 + 4) = local_90;
        goto LAB_02ab06a4;
      }
    }
    FUN_02bb1e80(plVar36 + 0x24,&local_d0,&local_f0,local_180,local_90);
LAB_02ab06a4:
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
    }
  }
LAB_02ab07fc:
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_d0 = (long *)0x2f7db4a2665ec5d0;
  local_c8 = "[Aberration]";
  local_c0 = 0xc;
  local_b8 = (long *)0x0;
  local_180 = (undefined1  [8])0xda3a9ef9c8c695a6;
  local_178 = "Aberration";
  FUN_02b59f30(&local_f0,DAT_043ef598,local_180,&local_d0,0);
  plVar36 = *(long **)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x450) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  plVar36 = local_f0;
  local_f0 = (long *)0x0;
  *(long **)(param_1 + 0x450) = plVar36;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  local_c8 = "PassType";
  local_d8 = (long *)0x0;
  local_d0 = (long *)0x9a33ee12e00dbfd0;
  local_c0 = 8;
  local_b8 = (long *)0x0;
  local_f0 = (long *)0xda3a9ef9c8c695a6;
  local_e8 = "Aberration";
  local_e0 = 10;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x4c0),&local_d0,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x4c0));
  lVar29 = *(long *)(param_1 + 0x4c0);
  lVar41 = *(long *)(param_1 + 0x450);
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  if (*(char *)(lVar29 + 0x118) != '\0') {
    local_178 = *(char **)(lVar29 + 0x120);
    local_170 = *(undefined8 *)(lVar29 + 0x128);
    local_168 = *(long **)(lVar29 + 0x130);
    local_160 = *(long **)(lVar29 + 0x138);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x18))();
    }
    local_180[0] = 1;
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_180);
  if (local_180[0] != '\0') {
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  }
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x450) + 0x60),0,0);
  lVar41 = *param_2;
  local_180 = (undefined1  [8])0x723da0c43dc4f5d;
  local_178 = "FPCheck";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_110 = lVar41;
  lVar29 = FUN_02ba378c(auStack_80,*(undefined8 *)(lVar41 + 8),&local_110,local_180);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_130._0_8_ = lVar29;
  FUN_02bb9f68(*(undefined8 *)(lVar41 + 0x78),local_130);
  plVar36 = *(long **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  lVar29 = local_130._0_8_;
  local_130._0_8_ = 0;
  *(long *)(param_1 + 0x3b0) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 0x3b0);
  }
  if (*(int *)(lVar29 + 0x19c) != 300) {
    *(undefined4 *)(lVar29 + 0x19c) = 300;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3b0);
  }
  if (*(char *)(lVar29 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
    *(undefined1 *)(lVar29 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar29 + 0x1fc) = 0x12;
  }
  FUN_02bbc404(*(undefined8 *)(param_1 + 0x3b0),iVar38,uVar10);
  plVar36 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x80);
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_110._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  plVar14 = plVar36 + 0x24;
  plVar17 = (long *)(param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8);
  piVar30 = (int *)plVar36[0x24];
  local_130._0_4_ = iVar38;
  if (piVar30 != (int *)plVar36[0x25]) {
LAB_02ab0b04:
    if ((*piVar30 != 2) || (piVar30[1] != iVar38)) goto LAB_02ab0af8;
    lVar29 = *plVar17;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar17 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar17 != (long *)0x0) {
      plVar18 = plVar17 + 10;
      do {
        iVar38 = (int)*plVar18 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar38;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar38 == 0) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    goto LAB_02ab0b88;
  }
LAB_02ab0b70:
  FUN_02bb199c(plVar14,&local_110,local_130,plVar17,local_180);
LAB_02ab0b88:
  local_110._0_4_ = 2;
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  piVar30 = (int *)plVar36[0x24];
  local_130._0_4_ = iVar1;
  if (piVar30 != (int *)plVar36[0x25]) {
LAB_02ab0bb4:
    if ((*piVar30 != 2) || (piVar30[1] != iVar1)) goto LAB_02ab0ba8;
    lVar29 = *plVar16;
    if (lVar29 != 0) {
      piVar3 = (int *)(lVar29 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar17 = *(long **)(piVar30 + 2);
    *(long *)(piVar30 + 2) = lVar29;
    if (plVar17 != (long *)0x0) {
      plVar18 = plVar17 + 10;
      do {
        iVar38 = (int)*plVar18 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = iVar38;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar38 == 0) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    goto LAB_02ab0c38;
  }
LAB_02ab0c20:
  FUN_02bb199c(plVar14,&local_110,local_130,plVar16,local_180);
LAB_02ab0c38:
  local_110 = CONCAT44(local_110._4_4_,2);
  local_130._0_4_ = iVar1;
  local_180 = (undefined1  [8])0x0;
  for (piVar30 = (int *)plVar36[0x24]; piVar30 != (int *)plVar36[0x25]; piVar30 = piVar30 + 8) {
    if ((*piVar30 == 2) && (piVar30[1] == iVar1)) {
      *(undefined1 (*) [16])(piVar30 + 4) = local_90;
      goto LAB_02ab0ca0;
    }
  }
  FUN_02bb1e80(plVar14,&local_110,local_130,local_180,local_90);
LAB_02ab0ca0:
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  FUN_02bae22c(plVar36,0,plVar16,0xffffffff,local_180);
  FUN_02bb134c(plVar36,2,0,param_1 + 0x438);
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
    }
  }
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_110 = -0x78a68f0cc420efd;
  local_108 = "[FP Check]";
  local_100 = 10;
  local_f8 = (long *)0x0;
  local_180 = (undefined1  [8])0x723da0c43dc4f5d;
  local_178 = "FPCheck";
  FUN_02b59f30(local_130,DAT_043ef598,local_180,&local_110,0);
  plVar36 = *(long **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  uVar27 = local_130._0_8_;
  local_130._0_8_ = 0;
  *(undefined8 *)(param_1 + 0x448) = uVar27;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  local_108 = "PassType";
  local_110 = -0x65cc11ed1ff24030;
  local_100 = 8;
  local_f8 = (long *)0x0;
  local_130._0_8_ = 0x723da0c43dc4f5d;
  local_130._8_8_ = "FPCheck";
  local_120 = 7;
  local_118 = (long *)0x0;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x4c0),&local_110,local_130);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x4c0));
  lVar29 = *(long *)(param_1 + 0x4c0);
  lVar41 = *(long *)(param_1 + 0x448);
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  if (*(char *)(lVar29 + 0x118) != '\0') {
    local_178 = *(char **)(lVar29 + 0x120);
    local_170 = *(undefined8 *)(lVar29 + 0x128);
    local_168 = *(long **)(lVar29 + 0x130);
    local_160 = *(long **)(lVar29 + 0x138);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x18))();
    }
    local_180[0] = 1;
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_180);
  if (local_180[0] != '\0') {
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  }
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x448) + 0x60),0,0);
  if (plVar21 != (long *)0x0) {
    plVar36 = plVar21 + 10;
    do {
      iVar38 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar36 = plVar19 + 10;
    do {
      iVar38 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  plVar36 = *(long **)(*param_2 + 0xe0);
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_180 = (undefined1  [8])0x784d6f2de884d59a;
  local_178 = "DebugUI";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  FUN_02bbc0e0(local_1a8,plVar36,local_180);
  plVar14 = *(long **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      iVar38 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  uVar27 = local_1a8._0_8_;
  local_1a8._0_8_ = 0;
  *(undefined8 *)(param_1 + 0x3e0) = uVar27;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))(local_168);
    uVar27 = *(undefined8 *)(param_1 + 0x3e0);
  }
  FUN_02bbe494(uVar27,0,0,0,*(undefined4 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x4e8));
  lVar29 = *(long *)(param_1 + 0x3e0);
  if (*(int *)(lVar29 + 0x19c) != 0x7ffffffe) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x7ffffffe;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 0x3e0);
  }
  plVar14 = *(long **)(lVar29 + 0x80);
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1a8._0_8_ = *(long *)(*param_2 + 0xd8);
  if ((long *)local_1a8._0_8_ != (long *)0x0) {
    plVar16 = (long *)(local_1a8._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
  FUN_02bae22c(plVar14,0,local_1a8,0xffffffff,local_180);
  if ((long *)local_1a8._0_8_ != (long *)0x0) {
    plVar16 = (long *)(local_1a8._0_8_ + 0x50);
    do {
      iVar38 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*(long *)local_1a8._0_8_ + 0x10))();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      iVar38 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      cVar5 = (char)plVar36[0x3f];
      goto joined_r0x02ab1504;
    }
  }
  cVar5 = (char)plVar36[0x3f];
joined_r0x02ab1504:
  if (cVar5 == '\0') {
    *(undefined4 *)((long)plVar36 + 0x1fc) = 0x12;
    *(undefined1 *)(plVar36 + 0x3f) = 1;
  }
  else {
    *(undefined4 *)((long)plVar36 + 0x1fc) = 0x12;
  }
  plVar14 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_180 = (undefined1  [8])&DAT_e9cc127eac0e0df1;
  local_178 = "CopyImage";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  FUN_02b30210(local_1a8,plVar14,local_180);
  plVar16 = *(long **)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  plVar16 = (long *)local_1a8._0_8_;
  local_1a8._0_8_ = 0;
  *(long **)(param_1 + 0x468) = plVar16;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))(local_168);
    plVar16 = *(long **)(param_1 + 0x468);
  }
  FUN_02b62284(plVar16);
  FUN_02b62410(*(undefined8 *)(param_1 + 0x468));
  local_180 = (undefined1  [8])0xa300e8697cb0089a;
  local_178 = "[Copy to ScanBuffer]";
  local_170 = 0x14;
  local_168 = (long *)0x0;
  FUN_02b59f30(local_1a8,DAT_043ef598,plVar36 + 0xc,local_180,0);
  plVar16 = *(long **)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x460) = 0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar38 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  uVar27 = local_1a8._0_8_;
  local_1a8._0_8_ = 0;
  *(undefined8 *)(param_1 + 0x460) = uVar27;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  lVar29 = *(long *)(param_1 + 0x468);
  if (lVar29 != 0) {
    lVar41 = *(long *)(param_1 + 0x460);
    local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
    if (*(char *)(lVar29 + 0x118) != '\0') {
      local_178 = *(char **)(lVar29 + 0x120);
      local_170 = *(undefined8 *)(lVar29 + 0x128);
      local_168 = *(long **)(lVar29 + 0x130);
      local_160 = *(long **)(lVar29 + 0x138);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
      local_180[0] = 1;
    }
    FUN_02ba7ba0(*(undefined8 *)(lVar41 + 0x60),0,local_180);
    if (local_180[0] != '\0') {
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      local_180 = (undefined1  [8])((ulong)local_180 & 0xffffffffffffff00);
    }
  }
  FUN_02bb0c88(*(undefined8 *)(*(long *)(param_1 + 0x460) + 0x60),2,0,
               param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x460) + 0x60),0,0);
  FUN_02bb32fc(*(undefined8 *)(*(long *)(param_1 + 0x460) + 0x60),0);
  FUN_02bb27d4(*(undefined8 *)(*(long *)(param_1 + 0x460) + 0x60),0,1);
  *(undefined4 *)(*(long *)(param_1 + 0x460) + 0x90) = 0x80000000;
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      iVar38 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar14 = plVar36 + 10;
  do {
    iVar38 = (int)*plVar14 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *(int *)plVar14 = iVar38;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar38 == 0) {
    (**(code **)(*plVar36 + 0x10))(plVar36);
  }
  lVar29 = *param_2;
  local_180 = (undefined1  [8])0xd0d6fbede2d8d10f;
  local_178 = "PreDebugUI";
  local_170 = 0x1f;
  local_168 = (long *)0x0;
  local_1a8._0_8_ = lVar29;
  local_b0._0_8_ = FUN_02ba378c(&local_d0,*(undefined8 *)(lVar29 + 8),local_1a8,local_180);
  if (local_b0._0_8_ != 0) {
    piVar30 = (int *)(local_b0._0_8_ + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02bb9f68(*(undefined8 *)(lVar29 + 0x78),local_b0);
  plVar36 = *(long **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = 0;
  if (plVar36 != (long *)0x0) {
    plVar14 = plVar36 + 10;
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  lVar29 = local_b0._0_8_;
  local_b0._0_8_ = 0;
  *(long *)(param_1 + 1000) = lVar29;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
    lVar29 = *(long *)(param_1 + 1000);
  }
  if (*(int *)(lVar29 + 0x19c) != 0x7ffffffd) {
    *(undefined4 *)(lVar29 + 0x19c) = 0x7ffffffd;
    *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x78) + 0xa8) = 1;
    lVar29 = *(long *)(param_1 + 1000);
  }
  plVar36 = *(long **)(lVar29 + 0x80);
  if (plVar36 == (long *)0x0) {
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(0,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,local_180);
  }
  else {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    FUN_02bae22c(plVar36,0,param_1 + (ulong)*(uint *)(param_1 + 0x528) * 8 + 0x3f8,0xffffffff,
                 local_180);
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
    }
  }
  plVar36 = *(long **)(*(long *)(param_1 + 1000) + 0x80);
  if (plVar36 == (long *)0x0) {
    FUN_02bafdb0(0,0,0);
  }
  else {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02bafdb0(0,plVar36,0);
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 1000) + 0x198) = 1;
  uVar31 = (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,0);
  uVar10 = (**(code **)(*DAT_043ef740 + 0x50))();
  FUN_02bbc404(*(undefined8 *)(param_1 + 1000),uVar31 >> 0x20,uVar10);
  (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,5);
  plVar36 = *(long **)(*(long *)(param_1 + 1000) + 0x80);
  if (plVar36 == (long *)0x0) {
    local_1a8._0_4_ = 2;
    local_b0._0_4_ = extraout_var;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = _DAT_00000120;
    if (_DAT_00000120 != _DAT_00000128) {
LAB_02ab1ac4:
      if ((*piVar30 != 2) || (piVar30[1] != extraout_var)) goto LAB_02ab1ab8;
      lVar29 = *plVar15;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar36 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar36 == (long *)0x0) goto joined_r0x02ab1b40;
      plVar14 = plVar36 + 10;
      do {
        iVar38 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar38;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar38 != 0) goto joined_r0x02ab1b40;
      lVar29 = *plVar36;
      goto LAB_02ab1a74;
    }
LAB_02ab1b24:
    FUN_02bb199c(0x120,local_1a8,local_b0,plVar15,local_180);
  }
  else {
    plVar14 = plVar36 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_1a8._0_4_ = 2;
    local_b0._0_4_ = extraout_var;
    local_180 = (undefined1  [8])((ulong)(uint7)local_180._1_7_ << 8);
    piVar30 = (int *)plVar36[0x24];
    if (piVar30 != (int *)plVar36[0x25]) {
LAB_02ab19d4:
      if ((*piVar30 != 2) || (piVar30[1] != extraout_var)) goto LAB_02ab19c8;
      lVar29 = *plVar15;
      if (lVar29 != 0) {
        piVar3 = (int *)(lVar29 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = *(long **)(piVar30 + 2);
      *(long *)(piVar30 + 2) = lVar29;
      if (plVar15 != (long *)0x0) {
        plVar16 = plVar15 + 10;
        do {
          iVar38 = (int)*plVar16 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar38;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar38 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_02ab1a54;
    }
LAB_02ab1a3c:
    FUN_02bb199c(plVar36 + 0x24,local_1a8,local_b0,plVar15,local_180);
LAB_02ab1a54:
    do {
      iVar38 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      lVar29 = *plVar36;
LAB_02ab1a74:
      (**(code **)(lVar29 + 0x10))(plVar36);
    }
  }
joined_r0x02ab1b40:
  if (plVar40 != (long *)0x0) {
    plVar36 = plVar40 + 10;
    do {
      iVar38 = (int)*plVar36 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *(int *)plVar36 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar40 + 0x10))(plVar40);
    }
  }
  if (plVar39 != (long *)0x0) {
    plVar40 = plVar39 + 10;
    do {
      iVar38 = (int)*plVar40 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar6) {
        *(int *)plVar40 = iVar38;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar38 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
    }
  }
  return;
LAB_02ab109c:
  lVar29 = plVar36[6];
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aacf9c;
LAB_02ab10bc:
  lVar29 = plVar14[6];
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aad0d0;
LAB_02ab10dc:
  lVar29 = plVar15[6];
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aad1fc;
LAB_02ab10fc:
  lVar29 = plVar16[6];
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aad328;
LAB_02aada20:
  piVar30 = piVar30 + 8;
  if ((int *)plVar21[0x25] == piVar30) goto LAB_02aada98;
  goto LAB_02aada2c;
LAB_02aadad4:
  piVar30 = piVar30 + 8;
  if ((int *)plVar21[0x25] == piVar30) goto LAB_02aadb48;
  goto LAB_02aadae0;
LAB_02aadbec:
  piVar30 = piVar30 + 8;
  if ((int *)plVar21[0x25] == piVar30) goto LAB_02aadc64;
  goto LAB_02aadbf8;
LAB_02aadcac:
  piVar30 = piVar30 + 8;
  if ((int *)plVar21[0x25] == piVar30) goto LAB_02aadd20;
  goto LAB_02aadcb8;
LAB_02aae2c0:
  piVar30 = piVar30 + 8;
  if ((int *)plVar19[0x25] == piVar30) goto LAB_02aae33c;
  goto LAB_02aae2cc;
LAB_02aae394:
  piVar30 = piVar30 + 8;
  if ((int *)plVar19[0x25] == piVar30) goto LAB_02aae410;
  goto LAB_02aae3a0;
LAB_02ab1078:
  local_d0 = (long *)plVar23[6];
  if (local_d0 != (long *)0x0) {
    plVar23 = local_d0 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aae998;
LAB_02aaec38:
  piVar30 = piVar30 + 8;
  if (_DAT_00000128 == piVar30) goto LAB_02aaecb0;
  goto LAB_02aaec44;
LAB_02aaed6c:
  piVar30 = piVar30 + 8;
  if (_DAT_00000128 == piVar30) goto LAB_02aaeddc;
  goto LAB_02aaed78;
LAB_02aaea38:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aaeab0;
  goto LAB_02aaea44;
LAB_02aaeb54:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aaebcc;
  goto LAB_02aaeb60;
LAB_02ab111c:
  lVar29 = plVar23[6];
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar6) {
        *piVar30 = *piVar30 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  goto LAB_02aaf93c;
LAB_02aaf9ec:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafa64;
  goto LAB_02aaf9f8;
LAB_02aafb0c:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafb80;
  goto LAB_02aafb18;
LAB_02aafbb8:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafc30;
  goto LAB_02aafbc4;
LAB_02aafcd8:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafd50;
  goto LAB_02aafce4;
LAB_02aafd8c:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafe04;
  goto LAB_02aafd98;
LAB_02aafe40:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aafeb8;
  goto LAB_02aafe4c;
LAB_02aafef4:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02aaff68;
  goto LAB_02aaff00;
LAB_02aaffa4:
  piVar30 = piVar30 + 8;
  if ((int *)plVar23[0x25] == piVar30) goto LAB_02ab001c;
  goto LAB_02aaffb0;
LAB_02ab06f8:
  piVar30 = piVar30 + 8;
  if (_DAT_00000128 == piVar30) goto LAB_02ab0770;
  goto LAB_02ab0704;
LAB_02ab05ac:
  piVar30 = piVar30 + 8;
  if ((int *)plVar36[0x25] == piVar30) goto LAB_02ab0624;
  goto LAB_02ab05b8;
LAB_02ab0af8:
  piVar30 = piVar30 + 8;
  if ((int *)plVar36[0x25] == piVar30) goto LAB_02ab0b70;
  goto LAB_02ab0b04;
LAB_02ab0ba8:
  piVar30 = piVar30 + 8;
  if ((int *)plVar36[0x25] == piVar30) goto LAB_02ab0c20;
  goto LAB_02ab0bb4;
LAB_02ab1ab8:
  piVar30 = piVar30 + 8;
  if (_DAT_00000128 == piVar30) goto LAB_02ab1b24;
  goto LAB_02ab1ac4;
LAB_02ab19c8:
  piVar30 = piVar30 + 8;
  if ((int *)plVar36[0x25] == piVar30) goto LAB_02ab1a3c;
  goto LAB_02ab19d4;
}


