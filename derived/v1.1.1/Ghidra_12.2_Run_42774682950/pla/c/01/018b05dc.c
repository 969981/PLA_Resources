/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b05dc; name: FUN_018b05dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018b05dc(long param_1,ulong *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ushort *puVar35;
  long *plVar36;
  long *plVar37;
  ulong extraout_x8;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  uint *puVar41;
  ulong *puVar42;
  ulong *puVar43;
  ulong *puVar44;
  ulong *puVar45;
  byte *pbVar46;
  undefined1 *puVar47;
  ulong uVar48;
  long *plVar49;
  long *plVar50;
  uint *puVar51;
  ulong extraout_x11;
  ulong uVar52;
  int *piVar53;
  uint uVar54;
  ushort *puVar55;
  undefined1 *puVar56;
  ulong uVar57;
  undefined4 uVar58;
  undefined1 *puVar59;
  ulong extraout_x17;
  undefined1 *puVar60;
  long extraout_x18;
  undefined4 uVar61;
  undefined1 *puVar62;
  undefined4 uVar63;
  ulong *puVar64;
  undefined1 *puVar65;
  ulong uVar66;
  undefined1 *puVar67;
  undefined4 uVar68;
  ulong unaff_x26;
  uint *puVar69;
  undefined4 uVar70;
  ulong *puVar71;
  undefined1 *puVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  long *local_2e0;
  undefined1 *local_2b8;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined *local_1e8;
  undefined1 auStack_1e0 [16];
  ulong *local_1d0;
  ulong *local_1c8;
  ulong *local_1c0;
  undefined *local_1b8;
  long local_1b0 [2];
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  long local_180 [2];
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  long local_150 [2];
  long local_140;
  long local_138;
  long local_130;
  long *local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  ulong *local_100;
  ulong *local_f8;
  ulong *local_f0;
  ulong *local_e8;
  ulong local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  uVar66 = *param_2;
  FUN_018b39c0(&local_110);
  if (local_110 == (undefined8 *)0x0) {
    local_128 = (long *)0x0;
    lVar38 = _DAT_00000070;
  }
  else {
    FUN_018bacec(&local_128);
    lVar38 = local_128[0xe];
    if (local_128 != (long *)0x0) {
      lVar32 = local_128[0xb];
      piVar1 = (int *)(lVar32 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar18 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar32 + 0x18) = 0;
        (**(code **)(*local_128 + 0x20))();
      }
    }
    puVar16 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_110 + 1);
      do {
        iVar18 = *piVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar18 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar18 + -1 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar32 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar32;
        local_120 = *puVar16;
        FUN_02a44274(lVar32 + 0xd8,&local_120);
      }
    }
  }
  FUN_018b39c0(&local_110);
  if (local_110 == (undefined8 *)0x0) {
    local_128 = (long *)0x0;
    lVar32 = _DAT_00000070;
  }
  else {
    FUN_018bacec(&local_128);
    lVar32 = local_128[0xe];
    if (local_128 != (long *)0x0) {
      lVar33 = local_128[0xb];
      piVar1 = (int *)(lVar33 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar18 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*local_128 + 0x20))();
      }
    }
    puVar16 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_110 + 1);
      do {
        iVar18 = *piVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar18 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar18 + -1 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar33 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar33;
        local_120 = *puVar16;
        FUN_02a44274(lVar33 + 0xd8,&local_120);
      }
    }
  }
  uVar34 = *(ulong *)(lVar38 + 0xe0);
  if (uVar34 != 0) {
    uVar39 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
    uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar39 < 2) {
      uVar40 = uVar34 - 1 & uVar66;
    }
    else {
      uVar40 = uVar66;
      if (uVar34 <= uVar66) {
        uVar40 = 0;
        if (uVar34 != 0) {
          uVar40 = uVar66 / uVar34;
        }
        uVar40 = uVar66 - uVar40 * uVar34;
      }
    }
    plVar50 = *(long **)(*(long *)(lVar38 + 0xd8) + uVar40 * 8);
    if ((plVar50 != (long *)0x0) && (plVar50 = (long *)*plVar50, plVar50 != (long *)0x0)) {
      if (uVar39 < 2) {
        do {
          if (plVar50[1] == uVar66) {
            if (plVar50[2] == uVar66) goto LAB_018b0810;
          }
          else if ((plVar50[1] & uVar34 - 1) != uVar40) break;
          plVar50 = (long *)*plVar50;
        } while (plVar50 != (long *)0x0);
      }
      else {
        do {
          uVar39 = plVar50[1];
          if (uVar39 == uVar66) {
            if (plVar50[2] == uVar66) goto LAB_018b0810;
          }
          else {
            if (uVar34 <= uVar39) {
              uVar52 = 0;
              if (uVar34 != 0) {
                uVar52 = uVar39 / uVar34;
              }
              uVar39 = uVar39 - uVar52 * uVar34;
            }
            if (uVar39 != uVar40) break;
          }
          plVar50 = (long *)*plVar50;
        } while (plVar50 != (long *)0x0);
      }
    }
  }
  goto LAB_018b3248;
LAB_018b0810:
  uVar34 = *(ulong *)(lVar32 + 0x2f0);
  if (uVar34 != 0) {
    uVar39 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
    uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar39 < 2) {
      uVar40 = uVar34 - 1 & uVar66;
    }
    else {
      uVar40 = uVar66;
      if (uVar34 <= uVar66) {
        uVar40 = 0;
        if (uVar34 != 0) {
          uVar40 = uVar66 / uVar34;
        }
        uVar40 = uVar66 - uVar40 * uVar34;
      }
    }
    plVar49 = *(long **)(*(long *)(lVar32 + 0x2e8) + uVar40 * 8);
    if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
      if (uVar39 < 2) {
        do {
          if (plVar49[1] == uVar66) {
            if (plVar49[2] == uVar66) goto LAB_018b0904;
          }
          else if ((plVar49[1] & uVar34 - 1) != uVar40) break;
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
      else {
        do {
          uVar39 = plVar49[1];
          if (uVar39 == uVar66) {
            if (plVar49[2] == uVar66) goto LAB_018b0904;
          }
          else {
            if (uVar34 <= uVar39) {
              uVar52 = 0;
              if (uVar34 != 0) {
                uVar52 = uVar39 / uVar34;
              }
              uVar39 = uVar39 - uVar52 * uVar34;
            }
            if (uVar39 != uVar40) break;
          }
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
    }
  }
  goto LAB_018b3248;
LAB_018b0904:
  local_2e0 = (long *)plVar49[3];
  if (local_2e0 != (long *)0x0) {
    lVar32 = local_2e0[0xb];
    if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_018b3990;
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar32 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  FUN_00947cf8(&local_110,param_2[1]);
  plVar49 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x20))();
  }
  *(undefined8 **)(param_1 + 0x68) = local_110;
  plVar49 = (long *)plVar50[6];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0x70);
  *(long **)(param_1 + 0x70) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(long *)(param_1 + 0x78) = plVar50[7];
  *(long *)(param_1 + 0x80) = plVar50[8];
  *(long *)(param_1 + 0x88) = plVar50[9];
  plVar49 = (long *)plVar50[10];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(int *)(param_1 + 0x98) = (int)plVar50[0xb];
  plVar49 = (long *)plVar50[0xc];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(long *)(param_1 + 0xa8) = plVar50[0xd];
  *(long *)(param_1 + 0xb0) = plVar50[0xe];
  *(long *)(param_1 + 0xb8) = plVar50[0xf];
  plVar49 = (long *)plVar50[0x10];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0xc0);
  *(long **)(param_1 + 0xc0) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(int *)(param_1 + 200) = (int)plVar50[0x11];
  plVar49 = (long *)plVar50[0x12];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(long *)(param_1 + 0xd8) = plVar50[0x13];
  *(long *)(param_1 + 0xe0) = plVar50[0x14];
  *(long *)(param_1 + 0xe8) = plVar50[0x15];
  plVar49 = (long *)plVar50[0x16];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(int *)(param_1 + 0xf8) = (int)plVar50[0x17];
  plVar49 = (long *)plVar50[0x18];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0x100);
  *(long **)(param_1 + 0x100) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(char *)(param_1 + 0x108) = (char)plVar50[0x19];
  *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)((long)plVar50 + 0xc9);
  plVar49 = (long *)plVar50[0x5a];
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x18))(plVar49);
  }
  plVar20 = *(long **)(param_1 + 0x148);
  *(long **)(param_1 + 0x148) = plVar49;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(long *)(param_1 + 0x150) = plVar50[0x5b];
  *(long *)(param_1 + 0x158) = plVar50[0x5c];
  *(long *)(param_1 + 0x160) = plVar50[0x5d];
  puVar64 = (ulong *)plVar50[0x5e];
  if (puVar64 != (ulong *)0x0) {
    (**(code **)(*puVar64 + 0x18))(puVar64);
  }
  plVar49 = *(long **)(param_1 + 0x168);
  *(ulong **)(param_1 + 0x168) = puVar64;
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 0x20))();
  }
  local_158 = PTR_DAT_0437ace8;
  *(int *)(param_1 + 0x170) = (int)plVar50[0x5f];
  local_158 = local_158 + 0x10;
  FUN_00937ea0(local_150,local_2e0 + 0x26);
  local_140 = local_2e0[0x28];
  if (local_140 != 0) {
    piVar1 = (int *)(local_140 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_138 = local_2e0[0x29];
  if (local_138 != 0) {
    piVar1 = (int *)(local_138 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_130 = local_2e0[0x2a];
  if (local_130 != 0) {
    lVar32 = *(long *)(local_130 + 0x58);
    if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_018b3990;
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar32 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_158 = PTR_DAT_0437a508 + 0x10;
  piVar1 = (int *)((long)*(uint **)(local_150[0] + 0x250) + (ulong)**(uint **)(local_150[0] + 0x250)
                  );
  puVar41 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar41 = (uint *)((long)puVar41 + (ulong)*puVar41);
  puVar71 = (ulong *)(puVar41 + 1);
  uVar31 = *puVar41;
  puVar45 = param_2;
  if (uVar31 != 0) {
    puVar64 = (ulong *)((long)puVar71 + (ulong)uVar31 * 4);
    plVar49 = (long *)(param_1 + 0x178);
    plVar20 = (long *)(param_1 + 0x1a8);
    do {
      puVar45 = (ulong *)((long)puVar71 + (ulong)(uint)*puVar71);
      puVar35 = (ushort *)((long)puVar45 - (long)(int)(uint)*puVar45);
      if ((*puVar35 < 5) || (uVar34 = (ulong)puVar35[2], uVar34 == 0)) {
        uVar39 = 0;
        uVar34 = *(ulong *)(param_1 + 0x180);
        if (uVar34 != 0) goto LAB_018b0c2c;
LAB_018b0cd4:
        plVar36 = (long *)(**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))
                                    (*(long **)(param_1 + 0x1b0),0x20,8);
        if (plVar36 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x1b0) + 0xb8))();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x1b0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379520), iVar18 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar32 == 0) {
          plVar36[2] = uVar39;
          plVar36[3] = (long)puVar45;
        }
        else {
          if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_018b3604;
          *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar19;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
          plVar36[2] = uVar39;
          plVar36[3] = (long)puVar45;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
        }
        *plVar36 = 0;
        plVar36[1] = uVar39;
        fVar74 = (float)(*(long *)(param_1 + 0x1d0) + 1);
        if ((uVar34 == 0) || (*(float *)(param_1 + 0x1d8) * (float)uVar34 < fVar74)) {
          uVar34 = (ulong)(uVar34 < 3 || (uVar34 & uVar34 - 1) != 0) | uVar34 << 1;
          uVar40 = (ulong)(fVar74 / *(float *)(param_1 + 0x1d8));
          if (uVar40 <= uVar34) {
            uVar40 = uVar34;
          }
          FUN_018bae6c(plVar49,uVar40);
          uVar34 = *(ulong *)(param_1 + 0x180);
          if ((uVar34 & uVar34 - 1) == 0) {
            unaff_x26 = uVar34 - 1 & uVar39;
          }
          else if (uVar39 < uVar34) {
            unaff_x26 = uVar39;
          }
          else {
            uVar40 = 0;
            if (uVar34 != 0) {
              uVar40 = uVar39 / uVar34;
            }
            unaff_x26 = uVar39 - uVar40 * uVar34;
          }
        }
        plVar37 = *(long **)(*plVar49 + unaff_x26 * 8);
        if (plVar37 == (long *)0x0) {
          *plVar36 = *plVar20;
          *plVar20 = (long)plVar36;
          *(long **)(*plVar49 + unaff_x26 * 8) = plVar20;
          if (*plVar36 != 0) {
            uVar39 = *(ulong *)(*plVar36 + 8);
            if ((uVar34 & uVar34 - 1) == 0) {
              uVar39 = uVar39 & uVar34 - 1;
            }
            else if (uVar34 <= uVar39) {
              uVar40 = 0;
              if (uVar34 != 0) {
                uVar40 = uVar39 / uVar34;
              }
              uVar39 = uVar39 - uVar40 * uVar34;
            }
            plVar37 = (long *)(*plVar49 + uVar39 * 8);
            goto LAB_018b0dd0;
          }
        }
        else {
          *plVar36 = *plVar37;
LAB_018b0dd0:
          *plVar37 = (long)plVar36;
        }
        *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + 1;
      }
      else {
        uVar39 = *(ulong *)((long)puVar45 + uVar34);
        uVar34 = *(ulong *)(param_1 + 0x180);
        if (uVar34 == 0) goto LAB_018b0cd4;
LAB_018b0c2c:
        uVar40 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
        uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
        uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar40 < 2) {
          unaff_x26 = uVar34 - 1 & uVar39;
        }
        else {
          unaff_x26 = uVar39;
          if (uVar34 <= uVar39) {
            uVar52 = 0;
            if (uVar34 != 0) {
              uVar52 = uVar39 / uVar34;
            }
            unaff_x26 = uVar39 - uVar52 * uVar34;
          }
        }
        plVar36 = *(long **)(*plVar49 + unaff_x26 * 8);
        if (plVar36 == (long *)0x0) goto LAB_018b0cd4;
        if (uVar40 < 2) {
          do {
            plVar36 = (long *)*plVar36;
            if ((plVar36 == (long *)0x0) ||
               (plVar36[1] != uVar39 && (plVar36[1] & uVar34 - 1) != unaff_x26)) goto LAB_018b0cd4;
          } while (plVar36[2] != uVar39);
        }
        else {
          do {
            plVar36 = (long *)*plVar36;
            if (plVar36 == (long *)0x0) goto LAB_018b0cd4;
            uVar40 = plVar36[1];
            if (uVar40 != uVar39) {
              if (uVar34 <= uVar40) {
                uVar52 = 0;
                if (uVar34 != 0) {
                  uVar52 = uVar40 / uVar34;
                }
                uVar40 = uVar40 - uVar52 * uVar34;
              }
              if (uVar40 != unaff_x26) goto LAB_018b0cd4;
            }
          } while (plVar36[2] != uVar39);
        }
      }
      puVar71 = (ulong *)((long)puVar71 + 4);
    } while (puVar71 != puVar64);
  }
  FUN_00936104(&local_158);
  local_188 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(local_180,local_2e0 + 0x3e);
  local_170 = local_2e0[0x40];
  if (local_170 != 0) {
    piVar1 = (int *)(local_170 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_168 = local_2e0[0x41];
  if (local_168 != 0) {
    piVar1 = (int *)(local_168 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_160 = local_2e0[0x42];
  if (local_160 != 0) {
    lVar32 = *(long *)(local_160 + 0x58);
    if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_018b3990;
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar32 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_188 = PTR_DAT_0437a508 + 0x10;
  piVar1 = (int *)((long)*(uint **)(local_180[0] + 0x250) + (ulong)**(uint **)(local_180[0] + 0x250)
                  );
  puVar51 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar51 = (uint *)((long)puVar51 + (ulong)*puVar51);
  puVar41 = puVar51 + 1;
  uVar34 = (ulong)*puVar51;
  if (uVar34 != 0) {
    puVar51 = puVar41 + uVar34;
    plVar49 = (long *)(param_1 + 0x1e0);
    plVar20 = (long *)(param_1 + 0x210);
    do {
      piVar1 = (int *)((long)puVar41 + (ulong)*puVar41);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar34 == 0)) {
        puVar45 = (ulong *)0x0;
      }
      else {
        puVar45 = *(ulong **)((long)piVar1 + uVar34);
      }
      local_e8 = *(ulong **)(param_1 + 8);
      local_108[0] = 0;
      local_f0 = (ulong *)0x0;
      local_100 = (ulong *)0x0;
      local_f8 = (ulong *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_e0 = 0x1555555555555555;
      local_d8 = 0;
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
        uVar92 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        uVar92 = 0;
        if (uVar34 != 0) {
          uVar92 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
        uVar78 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
        uVar78 = 0;
        if (uVar34 != 0) {
          uVar78 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      local_110 = (undefined8 *)CONCAT44(uVar78,uVar92);
      lVar33 = (long)*piVar1;
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - lVar33)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar69 = puVar2 + 1;
      uVar34 = (ulong)*puVar2;
      lVar32 = tpidr_el0;
      if (uVar34 != 0) {
        puVar71 = (ulong *)0x0;
        puVar2 = puVar69 + uVar34;
        do {
          puVar44 = local_e8;
          piVar53 = (int *)((long)puVar69 + (ulong)*puVar69);
          if (*(ushort *)((long)piVar53 - (long)*piVar53) < 5) {
            uVar92 = 0;
          }
          else {
            uVar34 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[2];
            uVar92 = 0;
            if (uVar34 != 0) {
              uVar92 = *(undefined4 *)((long)piVar53 + uVar34);
            }
          }
          if (*(ushort *)((long)piVar53 - (long)*piVar53) < 7) {
            uVar78 = 0;
          }
          else {
            uVar34 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[3];
            uVar78 = 0;
            if (uVar34 != 0) {
              uVar78 = *(undefined4 *)((long)piVar53 + uVar34);
            }
          }
          local_120 = CONCAT44(uVar78,uVar92);
          if ((*(ushort *)((long)piVar53 - (long)*piVar53) < 9) ||
             (uVar34 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[4], uVar34 == 0)) {
            local_118 = false;
          }
          else {
            local_118 = *(char *)((long)piVar53 + uVar34) != '\0';
          }
          if (puVar71 == local_f0) {
            lVar33 = (long)puVar71 - (long)local_100 >> 2;
            uVar34 = local_e0;
            if (0x7ffffffffffffffe < local_e0) {
              uVar34 = 0x7fffffffffffffff;
            }
            uVar39 = lVar33 * -0x5555555555555555 + 1;
            if (uVar34 < uVar39) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar39 <= (ulong)(lVar33 * 0x5555555555555556)) {
              uVar39 = lVar33 * 0x5555555555555556;
            }
            if ((ulong)(lVar33 * -0x5555555555555555) < uVar34 >> 1) {
              uVar34 = uVar39;
            }
            if (uVar34 == 0) {
              lVar21 = 0;
            }
            else {
              lVar21 = (**(code **)(*local_e8 + 0x10))(local_e8,uVar34 * 0xc,4);
              if (lVar21 == 0) {
                (**(code **)(*puVar44 + 0xb8))(puVar44);
              }
            }
            puVar71 = (ulong *)(lVar21 + lVar33 * 4);
            FUN_018bb3e8(&local_e8,puVar71,&local_120);
            puVar44 = local_100;
            puVar64 = puVar71;
            puVar42 = local_f8;
            if (local_f8 != local_100) {
              do {
                puVar43 = local_e8;
                if (((*PTR_DAT_04379520 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379520), iVar18 != 0)) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar33 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (lVar33 == 0) {
                  uVar19 = *(undefined8 *)((long)puVar42 + -0xc);
                  *(uint *)((long)puVar64 + -4) = *(uint *)((long)puVar42 + -4);
                  *(undefined8 *)((long)puVar64 + -0xc) = uVar19;
                }
                else {
                  if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_018b3604;
                  *(ulong **)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = puVar43;
                  *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
                  uVar19 = *(undefined8 *)((long)puVar42 + -0xc);
                  *(uint *)((long)puVar64 + -4) = *(uint *)((long)puVar42 + -4);
                  *(undefined8 *)((long)puVar64 + -0xc) = uVar19;
                  *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
                }
                puVar42 = (ulong *)((long)puVar42 + -0xc);
                puVar64 = (ulong *)((long)puVar64 + -0xc);
              } while (puVar44 != puVar42);
            }
            puVar17 = local_e8;
            puVar43 = local_100;
            puVar42 = (ulong *)(lVar21 + uVar34 * 0xc);
            puVar71 = (ulong *)((long)puVar71 + 0xc);
            puVar44 = puVar64;
            local_f8 = puVar71;
            if (local_100 != (ulong *)0x0) {
              lVar33 = (long)local_f0 - (long)local_100;
              local_100 = puVar64;
              local_f0 = puVar42;
              uVar34 = (**(code **)(*local_e8 + 0xc0))(local_e8);
              puVar64 = puVar17;
              if ((uVar34 & 1) != 0) {
                if (*(char *)(lVar32 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar32 + 0x38d488) = 1;
                  *(undefined8 *)(lVar32 + 0x38d478) = 0;
                  *(undefined8 *)(lVar32 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar32 + 0x38d480)) {
                  FUN_02bcc824(puVar17,puVar43,lVar33,4);
                  puVar44 = local_100;
                  puVar42 = local_f0;
                  goto LAB_018b11f8;
                }
              }
              (**(code **)(*puVar17 + 0x18))(puVar17,puVar43,lVar33,4);
              puVar44 = local_100;
              puVar42 = local_f0;
            }
          }
          else {
            FUN_018bb3e8(&local_e8,puVar71,&local_120);
            puVar71 = (ulong *)((long)local_f8 + 0xc);
            puVar44 = local_100;
            local_f8 = puVar71;
            puVar42 = local_f0;
          }
LAB_018b11f8:
          local_f0 = puVar42;
          local_100 = puVar44;
          puVar69 = puVar69 + 1;
        } while (puVar69 != puVar2);
        lVar33 = (long)*piVar1;
      }
      if (*(ushort *)((long)piVar1 - lVar33) < 0xd) {
        uVar92 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - lVar33))[6];
        uVar92 = 0;
        if (uVar34 != 0) {
          uVar92 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
        uVar78 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
        uVar78 = 0;
        if (uVar34 != 0) {
          uVar78 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      local_c8 = CONCAT44(uVar78,uVar92);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) {
        local_c0 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
        local_c0 = 0;
        if (uVar34 != 0) {
          local_c0 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
        local_b8 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
        local_b8 = 0;
        if (uVar34 != 0) {
          local_b8 = *(long *)((long)piVar1 + uVar34);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) {
        local_b0 = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10];
        local_b0 = 0;
        if (uVar34 != 0) {
          local_b0 = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) {
        local_108[0] = 0;
      }
      else {
        uVar34 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb];
        local_108[0] = 0;
        if (uVar34 != 0) {
          local_108[0] = *(undefined4 *)((long)piVar1 + uVar34);
        }
      }
      puVar71 = *(ulong **)(param_1 + 0x1e8);
      if (puVar71 == (ulong *)0x0) {
LAB_018b14e0:
        plVar36 = (long *)(**(code **)(**(long **)(param_1 + 0x218) + 0x10))
                                    (*(long **)(param_1 + 0x218),0x80,8);
        if (plVar36 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x218) + 0xb8))();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x218);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar18 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar15 = PTR_DAT_04379528;
          if (iVar18 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar33 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        puVar42 = local_f8;
        puVar44 = local_100;
        if (lVar33 != 0) {
          if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_018b3604;
          *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar19;
          *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
        }
        *(undefined4 *)(plVar36 + 4) = local_108[0];
        plVar36[2] = (long)puVar45;
        plVar36[3] = (long)local_110;
        plVar36[5] = 0;
        plVar36[6] = 0;
        plVar36[7] = 0;
        plVar37 = plVar36 + 8;
        *plVar37 = (long)local_e8;
        plVar36[10] = local_d8;
        plVar36[0xb] = CONCAT44(uStack_cc,local_d0);
        plVar36[9] = local_e0;
        lVar21 = (long)local_f8 - (long)local_100;
        if (lVar21 != 0) {
          uVar34 = plVar36[9];
          if (0x7ffffffffffffffe < uVar34) {
            uVar34 = 0x7fffffffffffffff;
          }
          if (uVar34 < (ulong)((lVar21 >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          puVar43 = (ulong *)(**(code **)(*(long *)*plVar37 + 0x10))((long *)*plVar37,lVar21,4);
          if (puVar43 == (ulong *)0x0) {
            (**(code **)(*(long *)*plVar37 + 0xb8))();
          }
          plVar36[5] = (long)puVar43;
          plVar36[6] = (long)puVar43;
          plVar36[7] = (long)puVar43 + (lVar21 >> 2) * 4;
          for (; puVar44 != puVar42; puVar44 = (ulong *)((long)puVar44 + 0xc)) {
            lVar21 = *plVar37;
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar18 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar15 = PTR_DAT_04379528;
              if (iVar18 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar22 == 0) {
              uVar34 = *puVar44;
              *(uint *)(puVar43 + 1) = (uint)puVar44[1];
              *puVar43 = uVar34;
            }
            else {
              if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_018b3604;
              *(long *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = lVar21;
              *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
              uVar34 = *puVar44;
              *(uint *)(puVar43 + 1) = (uint)puVar44[1];
              *puVar43 = uVar34;
              *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
            }
            puVar43 = (ulong *)(plVar36[6] + 0xc);
            plVar36[6] = (long)puVar43;
          }
        }
        plVar36[0xe] = local_b8;
        plVar36[0xf] = CONCAT44(uStack_ac,local_b0);
        plVar36[0xc] = local_c8;
        plVar36[0xd] = CONCAT44(uStack_bc,local_c0);
        if (lVar33 != 0) {
          *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
        }
        *plVar36 = 0;
        plVar36[1] = (long)puVar45;
        fVar74 = (float)(*(long *)(param_1 + 0x238) + 1);
        if ((puVar71 == (ulong *)0x0) || (*(float *)(param_1 + 0x240) * (float)puVar71 < fVar74)) {
          uVar34 = (ulong)(puVar71 < (ulong *)((long)&uRam0000000000000000 + 3) ||
                          ((ulong)puVar71 & (long)puVar71 - 1U) != 0) | (long)puVar71 << 1;
          uVar39 = (ulong)(fVar74 / *(float *)(param_1 + 0x240));
          if (uVar39 <= uVar34) {
            uVar39 = uVar34;
          }
          if (uVar39 - 1 == 0) {
            uVar39 = 2;
          }
          else if ((uVar39 & uVar39 - 1) != 0) {
            uVar39 = std::__next_prime(uVar39);
          }
          uVar34 = *(ulong *)(param_1 + 0x1e8);
          if (uVar34 < uVar39) {
            uVar40 = uVar39;
LAB_018b1820:
            FUN_018bb4d0(plVar49,uVar40);
          }
          else if (uVar39 < uVar34) {
            uVar40 = (ulong)((float)*(ulong *)(param_1 + 0x238) / *(float *)(param_1 + 0x240));
            if ((uVar34 < 3) ||
               (uVar52 = uVar34 - (uVar34 >> 1 & 0x5555555555555555),
               uVar52 = (uVar52 & 0x3333333333333333) + (uVar52 >> 2 & 0x3333333333333333),
               1 < (uVar52 + (uVar52 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar40 = std::__next_prime(uVar40);
            }
            else if (1 < uVar40) {
              uVar40 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar40 - 1) & 0x3f);
            }
            if (uVar40 <= uVar39) {
              uVar40 = uVar39;
            }
            if (uVar40 < uVar34) goto LAB_018b1820;
          }
          puVar71 = *(ulong **)(param_1 + 0x1e8);
          if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
            puVar64 = (ulong *)((long)puVar71 - 1U & (ulong)puVar45);
          }
          else if (puVar45 < puVar71) {
            puVar64 = puVar45;
          }
          else {
            uVar34 = 0;
            if (puVar71 != (ulong *)0x0) {
              uVar34 = (ulong)puVar45 / (ulong)puVar71;
            }
            puVar64 = (ulong *)((long)puVar45 - uVar34 * (long)puVar71);
          }
        }
        plVar37 = *(long **)(*plVar49 + (long)puVar64 * 8);
        if (plVar37 == (long *)0x0) {
          *plVar36 = *plVar20;
          *plVar20 = (long)plVar36;
          *(long **)(*plVar49 + (long)puVar64 * 8) = plVar20;
          if (*plVar36 != 0) {
            puVar44 = *(ulong **)(*plVar36 + 8);
            if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
              puVar44 = (ulong *)((ulong)puVar44 & (long)puVar71 - 1U);
            }
            else if (puVar71 <= puVar44) {
              uVar34 = 0;
              if (puVar71 != (ulong *)0x0) {
                uVar34 = (ulong)puVar44 / (ulong)puVar71;
              }
              puVar44 = (ulong *)((long)puVar44 - uVar34 * (long)puVar71);
            }
            plVar37 = (long *)(*plVar49 + (long)puVar44 * 8);
            goto LAB_018b16c8;
          }
        }
        else {
          *plVar36 = *plVar37;
LAB_018b16c8:
          *plVar37 = (long)plVar36;
        }
        *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0x238) + 1;
        puVar44 = local_100;
        puVar42 = local_e8;
      }
      else {
        uVar34 = (long)puVar71 - ((ulong)puVar71 >> 1 & 0x5555555555555555);
        uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
        uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar34 < 2) {
          puVar64 = (ulong *)((long)puVar71 - 1U & (ulong)puVar45);
        }
        else {
          puVar64 = puVar45;
          if (puVar71 <= puVar45) {
            uVar39 = 0;
            if (puVar71 != (ulong *)0x0) {
              uVar39 = (ulong)puVar45 / (ulong)puVar71;
            }
            puVar64 = (ulong *)((long)puVar45 - uVar39 * (long)puVar71);
          }
        }
        plVar36 = *(long **)(*plVar49 + (long)puVar64 * 8);
        if (plVar36 == (long *)0x0) goto LAB_018b14e0;
        puVar44 = local_100;
        puVar42 = local_e8;
        if (uVar34 < 2) {
          do {
            plVar36 = (long *)*plVar36;
            if ((plVar36 == (long *)0x0) ||
               ((ulong *)plVar36[1] != puVar45 &&
                (ulong *)((ulong)plVar36[1] & (long)puVar71 - 1U) != puVar64)) goto LAB_018b14e0;
          } while ((ulong *)plVar36[2] != puVar45);
        }
        else {
          do {
            plVar36 = (long *)*plVar36;
            if (plVar36 == (long *)0x0) goto LAB_018b14e0;
            puVar43 = (ulong *)plVar36[1];
            if (puVar43 != puVar45) {
              if (puVar71 <= puVar43) {
                uVar34 = 0;
                if (puVar71 != (ulong *)0x0) {
                  uVar34 = (ulong)puVar43 / (ulong)puVar71;
                }
                puVar43 = (ulong *)((long)puVar43 - uVar34 * (long)puVar71);
              }
              if (puVar43 != puVar64) goto LAB_018b14e0;
            }
          } while ((ulong *)plVar36[2] != puVar45);
        }
      }
      local_100 = puVar44;
      local_e8 = puVar42;
      if (puVar44 != (ulong *)0x0) {
        lVar33 = (long)local_f0 - (long)puVar44;
        local_f8 = puVar44;
        uVar34 = (**(code **)(*puVar42 + 0xc0))(puVar42);
        puVar64 = puVar42;
        if ((uVar34 & 1) != 0) {
          if (*(char *)(lVar32 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar32 + 0x38d488) = 1;
            *(undefined8 *)(lVar32 + 0x38d478) = 0;
            *(undefined8 *)(lVar32 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar32 + 0x38d480)) {
            FUN_02bcc824(puVar42,puVar44,lVar33,4);
            goto LAB_018b1760;
          }
        }
        (**(code **)(*puVar42 + 0x18))(puVar42,puVar44,lVar33,4);
      }
LAB_018b1760:
      puVar41 = puVar41 + 1;
    } while (puVar41 != puVar51);
  }
  FUN_00936104(&local_188);
  local_1b8 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(local_1b0,local_2e0 + 0x7a);
  local_1a0 = local_2e0[0x7c];
  if (local_1a0 != 0) {
    piVar1 = (int *)(local_1a0 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_198 = local_2e0[0x7d];
  if (local_198 != 0) {
    piVar1 = (int *)(local_198 + 0x50);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_190 = local_2e0[0x7e];
  if (local_190 != 0) {
    lVar32 = *(long *)(local_190 + 0x58);
    if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_018b3990;
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar32 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_1b8 = PTR_DAT_0437a508 + 0x10;
  piVar1 = (int *)((long)*(uint **)(local_1b0[0] + 0x250) + (ulong)**(uint **)(local_1b0[0] + 0x250)
                  );
  puVar51 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar51 = (uint *)((long)puVar51 + (ulong)*puVar51);
  puVar41 = puVar51 + 1;
  uVar31 = *puVar51;
  if (uVar31 != 0) {
    puVar51 = puVar41 + uVar31;
    plVar49 = (long *)(param_1 + 0x248);
    plVar20 = (long *)(param_1 + 0x278);
    do {
      piVar1 = (int *)((long)puVar41 + (ulong)*puVar41);
      puVar35 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar10 = *puVar35;
      if (uVar10 < 5) {
        puVar64 = (ulong *)0x0;
LAB_018b2d2c:
        lVar32 = 0;
        puVar71 = *(ulong **)(param_1 + 0x250);
        if (puVar71 == (ulong *)0x0) goto LAB_018b1a28;
LAB_018b198c:
        uVar34 = (long)puVar71 - ((ulong)puVar71 >> 1 & 0x5555555555555555);
        uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
        uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar34 < 2) {
          puVar45 = (ulong *)((long)puVar71 - 1U & (ulong)puVar64);
        }
        else {
          puVar45 = puVar64;
          if (puVar71 <= puVar64) {
            uVar39 = 0;
            if (puVar71 != (ulong *)0x0) {
              uVar39 = (ulong)puVar64 / (ulong)puVar71;
            }
            puVar45 = (ulong *)((long)puVar64 - uVar39 * (long)puVar71);
          }
        }
        plVar36 = *(long **)(*plVar49 + (long)puVar45 * 8);
        if (plVar36 == (long *)0x0) goto LAB_018b1a28;
        if (uVar34 < 2) {
          do {
            plVar36 = (long *)*plVar36;
            if ((plVar36 == (long *)0x0) ||
               ((ulong *)plVar36[1] != puVar64 &&
                (ulong *)((ulong)plVar36[1] & (long)puVar71 - 1U) != puVar45)) goto LAB_018b1a28;
          } while ((ulong *)plVar36[2] != puVar64);
        }
        else {
          do {
            plVar36 = (long *)*plVar36;
            if (plVar36 == (long *)0x0) goto LAB_018b1a28;
            puVar44 = (ulong *)plVar36[1];
            if (puVar44 != puVar64) {
              if (puVar71 <= puVar44) {
                uVar34 = 0;
                if (puVar71 != (ulong *)0x0) {
                  uVar34 = (ulong)puVar44 / (ulong)puVar71;
                }
                puVar44 = (ulong *)((long)puVar44 - uVar34 * (long)puVar71);
              }
              if (puVar44 != puVar45) goto LAB_018b1a28;
            }
          } while ((ulong *)plVar36[2] != puVar64);
        }
      }
      else {
        if ((ulong)puVar35[2] == 0) {
          puVar64 = (ulong *)0x0;
          if (6 < uVar10) goto LAB_018b1970;
          goto LAB_018b2d2c;
        }
        puVar64 = *(ulong **)((long)piVar1 + (ulong)puVar35[2]);
        if (uVar10 < 7) goto LAB_018b2d2c;
LAB_018b1970:
        if ((ulong)puVar35[3] == 0) goto LAB_018b2d2c;
        puVar69 = (uint *)((long)piVar1 + (ulong)puVar35[3]);
        lVar32 = (long)puVar69 + (ulong)*puVar69;
        puVar71 = *(ulong **)(param_1 + 0x250);
        if (puVar71 != (ulong *)0x0) goto LAB_018b198c;
LAB_018b1a28:
        plVar36 = (long *)(**(code **)(**(long **)(param_1 + 0x280) + 0x10))
                                    (*(long **)(param_1 + 0x280),0x20,8);
        if (plVar36 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x280) + 0xb8))();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x280);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379520), iVar18 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar33 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar33 == 0) {
          plVar36[2] = (long)puVar64;
          plVar36[3] = lVar32;
        }
        else {
          if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_018b3604;
          *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar19;
          *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
          plVar36[2] = (long)puVar64;
          plVar36[3] = lVar32;
          *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
        }
        *plVar36 = 0;
        plVar36[1] = (long)puVar64;
        fVar74 = (float)(*(long *)(param_1 + 0x2a0) + 1);
        if ((puVar71 == (ulong *)0x0) || (*(float *)(param_1 + 0x2a8) * (float)puVar71 < fVar74)) {
          uVar34 = (ulong)(puVar71 < (ulong *)((long)&uRam0000000000000000 + 3) ||
                          ((ulong)puVar71 & (long)puVar71 - 1U) != 0) | (long)puVar71 << 1;
          uVar39 = (ulong)(fVar74 / *(float *)(param_1 + 0x2a8));
          if (uVar39 <= uVar34) {
            uVar39 = uVar34;
          }
          FUN_018bb92c(plVar49,uVar39);
          puVar71 = *(ulong **)(param_1 + 0x250);
          if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
            puVar45 = (ulong *)((long)puVar71 - 1U & (ulong)puVar64);
          }
          else if (puVar64 < puVar71) {
            puVar45 = puVar64;
          }
          else {
            uVar34 = 0;
            if (puVar71 != (ulong *)0x0) {
              uVar34 = (ulong)puVar64 / (ulong)puVar71;
            }
            puVar45 = (ulong *)((long)puVar64 - uVar34 * (long)puVar71);
          }
        }
        plVar37 = *(long **)(*plVar49 + (long)puVar45 * 8);
        if (plVar37 == (long *)0x0) {
          *plVar36 = *plVar20;
          *plVar20 = (long)plVar36;
          *(long **)(*plVar49 + (long)puVar45 * 8) = plVar20;
          if (*plVar36 != 0) {
            puVar64 = *(ulong **)(*plVar36 + 8);
            if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
              puVar64 = (ulong *)((ulong)puVar64 & (long)puVar71 - 1U);
            }
            else if (puVar71 <= puVar64) {
              uVar34 = 0;
              if (puVar71 != (ulong *)0x0) {
                uVar34 = (ulong)puVar64 / (ulong)puVar71;
              }
              puVar64 = (ulong *)((long)puVar64 - uVar34 * (long)puVar71);
            }
            plVar37 = (long *)(*plVar49 + (long)puVar64 * 8);
            goto LAB_018b1b6c;
          }
        }
        else {
          *plVar36 = *plVar37;
LAB_018b1b6c:
          *plVar37 = (long)plVar36;
        }
        *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x2a0) + 1;
      }
      puVar41 = puVar41 + 1;
    } while (puVar41 != puVar51);
  }
  FUN_00936104(&local_1b8);
  local_1e8 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(auStack_1e0,local_2e0 + 0x80);
  local_1d0 = (ulong *)local_2e0[0x82];
  if (local_1d0 != (ulong *)0x0) {
    puVar64 = local_1d0 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar64,0x10);
      if (bVar13) {
        *(uint *)puVar64 = (uint)*puVar64 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_1c8 = (ulong *)local_2e0[0x83];
  if (local_1c8 != (ulong *)0x0) {
    puVar64 = local_1c8 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar64,0x10);
      if (bVar13) {
        *(uint *)puVar64 = (uint)*puVar64 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_1c0 = (ulong *)local_2e0[0x84];
  if (local_1c0 != (ulong *)0x0) {
    uVar34 = local_1c0[0xb];
    if (*(undefined8 **)(uVar34 + 0x18) == (undefined8 *)0x0) goto LAB_018b3990;
    if (*(long *)(uVar34 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(uVar34 + 0x18))();
      *(undefined8 *)(uVar34 + 0x10) = uVar19;
    }
    piVar1 = (int *)(uVar34 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_1e8 = PTR_DAT_0437a508 + 0x10;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_04379678), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar32 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar32;
  plVar49 = *(long **)(lVar32 + 0x100);
  if (plVar49 != (long *)0x0) {
    plVar20 = plVar49 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  plVar20 = (long *)plVar49[0x23];
  if (plVar20 != (long *)0x0) {
    plVar36 = plVar20 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar13) {
        *(int *)plVar36 = (int)*plVar36 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_110 = (undefined8 *)(PTR_DAT_0437ace8 + 0x10);
  FUN_00937ea0(local_108,auStack_1e0);
  local_f8 = local_1d0;
  if (local_1d0 != (ulong *)0x0) {
    puVar64 = local_1d0 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar64,0x10);
      if (bVar13) {
        *(uint *)puVar64 = (uint)*puVar64 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_f0 = local_1c8;
  if (local_1c8 != (ulong *)0x0) {
    puVar64 = local_1c8 + 10;
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar64,0x10);
      if (bVar13) {
        *(uint *)puVar64 = (uint)*puVar64 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_e8 = local_1c0;
  if (local_1c0 != (ulong *)0x0) {
    uVar34 = local_1c0[0xb];
    if (*(undefined8 **)(uVar34 + 0x18) == (undefined8 *)0x0) {
LAB_018b3990:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(uVar34 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(uVar34 + 0x18))();
      *(undefined8 *)(uVar34 + 0x10) = uVar19;
    }
    piVar1 = (int *)(uVar34 + 0xc);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  local_110 = (undefined8 *)(PTR_DAT_0437a508 + 0x10);
  FUN_0177f240(plVar20,&local_110);
  FUN_00936104(&local_110);
  if (plVar20 != (long *)0x0) {
    plVar36 = plVar20 + 10;
    do {
      iVar18 = (int)*plVar36 + -1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar13) {
        *(int *)plVar36 = iVar18;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  plVar20 = plVar49 + 10;
  do {
    iVar18 = (int)*plVar20 + -1;
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar13) {
      *(int *)plVar20 = iVar18;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if (iVar18 == 0) {
    (**(code **)(*plVar49 + 0x10))(plVar49);
  }
  FUN_00936104(&local_1e8);
  piVar1 = (int *)((long)*(uint **)(local_2e0[0xaa] + 0x250) +
                  (ulong)**(uint **)(local_2e0[0xaa] + 0x250));
  puVar41 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar41 = (uint *)((long)puVar41 + (ulong)*puVar41);
  uVar31 = *puVar41;
  if (uVar31 != 0) {
    uVar34 = 0;
    plVar49 = (long *)(param_1 + 0x2b0);
    plVar20 = (long *)(param_1 + 0x2e0);
    do {
      uVar92 = 0;
      puVar65 = &DAT_cbf29ce484222645;
      piVar1 = (int *)((long)(puVar41 + uVar34 + 1) + (ulong)puVar41[uVar34 + 1]);
      puVar35 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar10 = *puVar35;
      if ((uVar10 < 5) || ((ulong)puVar35[2] == 0)) {
        lVar32 = 0;
      }
      else {
        puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[2]);
        lVar32 = (long)puVar51 + (ulong)*puVar51;
      }
      bVar9 = *(byte *)(lVar32 + 4);
      puVar72 = puVar65;
      if (bVar9 != 0) {
        uVar39 = (ulong)(uint)bVar9;
        pbVar46 = (byte *)(lVar32 + 5);
        do {
          puVar72 = (undefined1 *)(((ulong)puVar72 ^ uVar39) * 0x100000001b3);
          bVar8 = *pbVar46;
          uVar39 = (ulong)bVar8;
          pbVar46 = pbVar46 + 1;
        } while (bVar8 != 0);
      }
      if (uVar10 < 7) {
        puVar51 = (uint *)0x0;
      }
      else {
        puVar51 = (uint *)0x0;
        if ((ulong)puVar35[3] != 0) {
          puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[3]);
          puVar51 = (uint *)((long)puVar51 + (ulong)*puVar51);
        }
      }
      uVar54 = *puVar51;
      puVar25 = puVar65;
      puVar23 = puVar65;
      puVar24 = puVar65;
      if (uVar54 == 0) {
joined_r0x018b2600:
        if (8 < uVar10) goto LAB_018b1f40;
LAB_018b1f0c:
        piVar53 = (int *)0x0;
      }
      else {
        piVar53 = (int *)((long)(puVar51 + 1) + (ulong)puVar51[1]);
        if ((*(ushort *)((long)piVar53 - (long)*piVar53) < 5) ||
           (uVar39 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[2], uVar39 == 0)) {
          puVar23 = (undefined1 *)0x0;
        }
        else {
          puVar23 = *(undefined1 **)((long)piVar53 + uVar39);
        }
        if (uVar54 < 2) goto joined_r0x018b2600;
        piVar53 = (int *)((long)(puVar51 + 2) + (ulong)puVar51[2]);
        if ((*(ushort *)((long)piVar53 - (long)*piVar53) < 5) ||
           (uVar39 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[2], uVar39 == 0)) {
          puVar24 = (undefined1 *)0x0;
        }
        else {
          puVar24 = *(undefined1 **)((long)piVar53 + uVar39);
        }
        if (uVar54 < 3) goto joined_r0x018b2600;
        piVar53 = (int *)((long)(puVar51 + 3) + (ulong)puVar51[3]);
        if ((4 < *(ushort *)((long)piVar53 - (long)*piVar53)) &&
           (uVar39 = (ulong)((ushort *)((long)piVar53 - (long)*piVar53))[2], uVar39 != 0)) {
          puVar25 = *(undefined1 **)((long)piVar53 + uVar39);
          goto joined_r0x018b2600;
        }
        puVar25 = (undefined1 *)0x0;
        if (uVar10 < 9) goto LAB_018b1f0c;
LAB_018b1f40:
        piVar53 = (int *)0x0;
        if ((ulong)puVar35[4] != 0) {
          puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[4]);
          piVar53 = (int *)((long)puVar51 + (ulong)*puVar51);
        }
      }
      puVar55 = (ushort *)((long)piVar53 - (long)*piVar53);
      uVar11 = *puVar55;
      uVar78 = uVar92;
      uVar82 = uVar92;
      if (uVar11 < 5) {
        uVar27 = 0;
LAB_018b2294:
        uVar77 = uVar92;
        if (10 < uVar10) goto LAB_018b1fc0;
LAB_018b22a0:
        piVar53 = (int *)0x0;
      }
      else {
        if ((ulong)puVar55[2] != 0) {
          uVar27 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[2]);
          if (6 < uVar11) goto LAB_018b1f7c;
          goto LAB_018b2294;
        }
        uVar27 = 0;
        if (uVar11 < 7) goto LAB_018b2294;
LAB_018b1f7c:
        if ((ulong)puVar55[3] != 0) {
          uVar78 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[3]);
        }
        if (uVar11 < 9) goto LAB_018b2294;
        if ((ulong)puVar55[4] != 0) {
          uVar82 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[4]);
        }
        if (uVar11 < 0xb) goto LAB_018b2294;
        if ((ulong)puVar55[5] == 0) goto LAB_018b2294;
        uVar77 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[5]);
        if (uVar10 < 0xb) goto LAB_018b22a0;
LAB_018b1fc0:
        piVar53 = (int *)0x0;
        if ((ulong)puVar35[5] != 0) {
          puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[5]);
          piVar53 = (int *)((long)puVar51 + (ulong)*puVar51);
        }
      }
      puVar55 = (ushort *)((long)piVar53 - (long)*piVar53);
      uVar11 = *puVar55;
      puVar60 = puVar65;
      uVar79 = uVar92;
      uVar76 = uVar92;
      uVar81 = uVar92;
      uVar83 = uVar92;
      uVar85 = uVar92;
      uVar86 = uVar92;
      uVar87 = uVar92;
      uVar89 = uVar92;
      uVar91 = uVar92;
      uVar88 = uVar92;
      uVar90 = uVar92;
      uVar84 = uVar92;
      uVar75 = uVar92;
      puVar56 = puVar65;
      if (uVar11 < 5) {
        uVar28 = 0;
LAB_018b22b4:
        uVar80 = uVar92;
        if (0xc < uVar10) goto LAB_018b2040;
LAB_018b22c0:
        uVar29 = 0;
LAB_018b22c4:
        puVar51 = (uint *)0x0;
        uVar54 = uRam0000000000000000;
        if (uRam0000000000000000 == 0) goto LAB_018b22d0;
LAB_018b2070:
        piVar53 = (int *)((long)(puVar51 + 1) + (ulong)puVar51[1]);
        puVar55 = (ushort *)((long)piVar53 - (long)*piVar53);
        uVar11 = *puVar55;
        if (uVar11 < 7) {
          puVar67 = (undefined1 *)0x0;
          if (4 < uVar11) goto LAB_018b2098;
          uVar68 = 0;
LAB_018b2584:
          uVar70 = 0;
        }
        else {
          if ((ulong)puVar55[3] == 0) {
            puVar67 = (undefined1 *)0x0;
            uVar39 = (ulong)puVar55[2];
            if (uVar39 != 0) goto LAB_018b2220;
LAB_018b20a0:
            uVar68 = 0;
          }
          else {
            puVar67 = *(undefined1 **)((long)piVar53 + (ulong)puVar55[3]);
LAB_018b2098:
            uVar39 = (ulong)puVar55[2];
            if (uVar39 == 0) goto LAB_018b20a0;
LAB_018b2220:
            uVar68 = *(undefined4 *)((long)piVar53 + uVar39);
          }
          if (uVar11 < 9) goto LAB_018b2584;
          if ((ulong)puVar55[4] == 0) {
            uVar70 = 0;
          }
          else {
            uVar70 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[4]);
          }
          if (10 < uVar11) {
            if ((ulong)puVar55[5] != 0) {
              uVar81 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[5]);
            }
            if (0xc < uVar11) {
              if ((ulong)puVar55[6] != 0) {
                uVar75 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[6]);
              }
            }
          }
        }
        if (1 < uVar54) {
          piVar53 = (int *)((long)(puVar51 + 2) + (ulong)puVar51[2]);
          puVar55 = (ushort *)((long)piVar53 - (long)*piVar53);
          uVar11 = *puVar55;
          if (uVar11 < 7) {
            local_1f8 = (undefined1 *)0x0;
            if (4 < uVar11) goto LAB_018b211c;
            uVar73 = 0;
LAB_018b2618:
            uVar3 = 0;
          }
          else {
            if ((ulong)puVar55[3] == 0) {
              local_1f8 = (undefined1 *)0x0;
              uVar39 = (ulong)puVar55[2];
              if (uVar39 != 0) goto LAB_018b2240;
LAB_018b2124:
              uVar73 = 0;
            }
            else {
              local_1f8 = *(undefined1 **)((long)piVar53 + (ulong)puVar55[3]);
LAB_018b211c:
              uVar39 = (ulong)puVar55[2];
              if (uVar39 == 0) goto LAB_018b2124;
LAB_018b2240:
              uVar73 = *(undefined4 *)((long)piVar53 + uVar39);
            }
            if (uVar11 < 9) goto LAB_018b2618;
            if ((ulong)puVar55[4] == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[4]);
            }
            if (10 < uVar11) {
              if ((ulong)puVar55[5] != 0) {
                uVar83 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[5]);
              }
              if (0xc < uVar11) {
                if ((ulong)puVar55[6] != 0) {
                  uVar84 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[6]);
                }
              }
            }
          }
          if (2 < uVar54) {
            piVar53 = (int *)((long)(puVar51 + 3) + (ulong)puVar51[3]);
            puVar55 = (ushort *)((long)piVar53 - (long)*piVar53);
            uVar11 = *puVar55;
            if (uVar11 < 7) {
              puVar60 = (undefined1 *)0x0;
              if (4 < uVar11) goto LAB_018b2198;
              uVar26 = 0;
            }
            else {
              if ((ulong)puVar55[3] == 0) {
                puVar60 = (undefined1 *)0x0;
                uVar39 = (ulong)puVar55[2];
                if (uVar39 != 0) goto LAB_018b2264;
LAB_018b21a0:
                uVar26 = 0;
              }
              else {
                puVar60 = *(undefined1 **)((long)piVar53 + (ulong)puVar55[3]);
LAB_018b2198:
                uVar39 = (ulong)puVar55[2];
                if (uVar39 == 0) goto LAB_018b21a0;
LAB_018b2264:
                uVar26 = *(undefined4 *)((long)piVar53 + uVar39);
              }
              if (8 < uVar11) {
                if ((ulong)puVar55[4] == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[4]);
                }
                if (10 < uVar11) {
                  if ((ulong)puVar55[5] != 0) {
                    uVar85 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[5]);
                  }
                  if (0xc < uVar11) {
                    if ((ulong)puVar55[6] != 0) {
                      uVar86 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[6]);
                    }
                  }
                }
                goto joined_r0x018b255c;
              }
            }
            uVar4 = 0;
            goto joined_r0x018b255c;
          }
          goto joined_r0x018b2644;
        }
        uVar73 = 0;
        uVar26 = 0;
        uVar3 = 0;
        uVar4 = 0;
        local_1f8 = &DAT_cbf29ce484222645;
joined_r0x018b255c:
        if (0x10 < uVar10) goto LAB_018b2314;
LAB_018b2648:
        puVar51 = (uint *)0x0;
        uVar54 = uRam0000000000000000;
        if (uRam0000000000000000 == 0) goto LAB_018b2654;
LAB_018b2330:
        piVar1 = (int *)((long)(puVar51 + 1) + (ulong)puVar51[1]);
        puVar35 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar10 = *puVar35;
        if (uVar10 < 7) {
          puVar59 = (undefined1 *)0x0;
          if (4 < uVar10) goto LAB_018b2358;
          uVar61 = 0;
LAB_018b25dc:
          uVar63 = 0;
        }
        else {
          if ((ulong)puVar35[3] == 0) {
            puVar59 = (undefined1 *)0x0;
            uVar39 = (ulong)puVar35[2];
            if (uVar39 != 0) goto LAB_018b24e0;
LAB_018b2360:
            uVar61 = 0;
          }
          else {
            puVar59 = *(undefined1 **)((long)piVar1 + (ulong)puVar35[3]);
LAB_018b2358:
            uVar39 = (ulong)puVar35[2];
            if (uVar39 == 0) goto LAB_018b2360;
LAB_018b24e0:
            uVar61 = *(undefined4 *)((long)piVar1 + uVar39);
          }
          if (uVar10 < 9) goto LAB_018b25dc;
          if ((ulong)puVar35[4] == 0) {
            uVar63 = 0;
          }
          else {
            uVar63 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[4]);
          }
          if (10 < uVar10) {
            if ((ulong)puVar35[5] != 0) {
              uVar87 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[5]);
            }
            if ((uVar10 < 0xd) || ((ulong)puVar35[6] == 0)) {
            }
            else {
              uVar88 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[6]);
            }
          }
        }
        if (uVar54 < 2) goto LAB_018b268c;
        piVar1 = (int *)((long)(puVar51 + 2) + (ulong)puVar51[2]);
        puVar35 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar10 = *puVar35;
        if (uVar10 < 7) {
          local_200 = (undefined1 *)0x0;
          if (4 < uVar10) goto LAB_018b23e4;
          uVar5 = 0;
LAB_018b2a88:
          uVar6 = 0;
LAB_018b2a90:
          if (2 < uVar54) goto LAB_018b2438;
LAB_018b2a9c:
          uVar58 = 0;
          uVar7 = 0;
        }
        else {
          if ((ulong)puVar35[3] == 0) {
            local_200 = (undefined1 *)0x0;
            uVar39 = (ulong)puVar35[2];
            if (uVar39 != 0) goto LAB_018b2500;
LAB_018b23ec:
            uVar5 = 0;
          }
          else {
            local_200 = *(undefined1 **)((long)piVar1 + (ulong)puVar35[3]);
LAB_018b23e4:
            uVar39 = (ulong)puVar35[2];
            if (uVar39 == 0) goto LAB_018b23ec;
LAB_018b2500:
            uVar5 = *(undefined4 *)((long)piVar1 + uVar39);
          }
          if (uVar10 < 9) goto LAB_018b2a88;
          if ((ulong)puVar35[4] != 0) {
            uVar6 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[4]);
            if (10 < uVar10) goto LAB_018b240c;
            goto LAB_018b2a90;
          }
          uVar6 = 0;
          if (uVar10 < 0xb) goto LAB_018b2a90;
LAB_018b240c:
          if ((ulong)puVar35[5] != 0) {
            uVar89 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[5]);
          }
          if (uVar10 < 0xd) goto LAB_018b2a90;
          if ((ulong)puVar35[6] == 0) goto LAB_018b2a90;
          uVar90 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[6]);
          if (uVar54 < 3) goto LAB_018b2a9c;
LAB_018b2438:
          piVar1 = (int *)((long)(puVar51 + 3) + (ulong)puVar51[3]);
          puVar35 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar10 = *puVar35;
          if (uVar10 < 7) {
            puVar56 = (undefined1 *)0x0;
            if (4 < uVar10) goto LAB_018b2460;
            uVar58 = 0;
          }
          else {
            if ((ulong)puVar35[3] == 0) {
              puVar56 = (undefined1 *)0x0;
              uVar39 = (ulong)puVar35[2];
              if (uVar39 != 0) goto LAB_018b2530;
LAB_018b2468:
              uVar58 = 0;
            }
            else {
              puVar56 = *(undefined1 **)((long)piVar1 + (ulong)puVar35[3]);
LAB_018b2460:
              uVar39 = (ulong)puVar35[2];
              if (uVar39 == 0) goto LAB_018b2468;
LAB_018b2530:
              uVar58 = *(undefined4 *)((long)piVar1 + uVar39);
            }
            if (8 < uVar10) {
              if ((ulong)puVar35[4] == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[4]);
              }
              if (10 < uVar10) {
                if ((ulong)puVar35[5] != 0) {
                  uVar91 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[5]);
                }
                if (0xc < uVar10) {
                  if ((ulong)puVar35[6] != 0) {
                    uVar92 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[6]);
                  }
                }
              }
              goto joined_r0x018b256c;
            }
          }
          uVar7 = 0;
        }
      }
      else {
        if ((ulong)puVar55[2] != 0) {
          uVar28 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[2]);
          if (6 < uVar11) goto LAB_018b1ffc;
          goto LAB_018b22b4;
        }
        uVar28 = 0;
        if (uVar11 < 7) goto LAB_018b22b4;
LAB_018b1ffc:
        if ((ulong)puVar55[3] != 0) {
          uVar79 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[3]);
        }
        if (uVar11 < 9) goto LAB_018b22b4;
        if ((ulong)puVar55[4] != 0) {
          uVar76 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[4]);
        }
        if (uVar11 < 0xb) goto LAB_018b22b4;
        if ((ulong)puVar55[5] == 0) goto LAB_018b22b4;
        uVar80 = *(undefined4 *)((long)piVar53 + (ulong)puVar55[5]);
        if (uVar10 < 0xd) goto LAB_018b22c0;
LAB_018b2040:
        if ((ulong)puVar35[6] == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = *(undefined4 *)((long)piVar1 + (ulong)puVar35[6]);
        }
        if (uVar10 < 0xf) goto LAB_018b22c4;
        puVar51 = (uint *)0x0;
        if ((ulong)puVar35[7] != 0) {
          puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[7]);
          puVar51 = (uint *)((long)puVar51 + (ulong)*puVar51);
        }
        uVar54 = *puVar51;
        if (*puVar51 != 0) goto LAB_018b2070;
LAB_018b22d0:
        uVar68 = 0;
        uVar70 = 0;
        uVar3 = 0;
        uVar73 = 0;
        local_1f8 = &DAT_cbf29ce484222645;
        puVar67 = puVar65;
joined_r0x018b2644:
        uVar4 = 0;
        uVar26 = 0;
        if (uVar10 < 0x11) goto LAB_018b2648;
LAB_018b2314:
        if ((ulong)puVar35[8] == 0) goto LAB_018b2648;
        puVar51 = (uint *)((long)piVar1 + (ulong)puVar35[8]);
        puVar51 = (uint *)((long)puVar51 + (ulong)*puVar51);
        uVar54 = *puVar51;
        if (uVar54 != 0) goto LAB_018b2330;
LAB_018b2654:
        uVar61 = 0;
        uVar63 = 0;
        puVar59 = puVar65;
LAB_018b268c:
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = 0;
        uVar58 = 0;
        local_200 = &DAT_cbf29ce484222645;
      }
joined_r0x018b256c:
      if (bVar9 != 0) {
        pbVar46 = (byte *)(lVar32 + 5);
        do {
          puVar65 = (undefined1 *)(((ulong)puVar65 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar46;
          pbVar46 = pbVar46 + 1;
        } while (bVar9 != 0);
      }
      puVar62 = *(undefined1 **)(param_1 + 0x2b8);
      if (puVar62 == (undefined1 *)0x0) {
LAB_018b2718:
        plVar36 = (long *)(**(code **)(**(long **)(param_1 + 0x2e8) + 0x10))
                                    (*(long **)(param_1 + 0x2e8),0xf0,8);
        if (plVar36 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x2e8) + 0xb8))();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x2e8);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379520), iVar18 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar32 == 0) {
          plVar36[2] = (long)puVar65;
          plVar36[3] = (long)puVar72;
          plVar36[6] = (long)puVar25;
          *(undefined4 *)(plVar36 + 7) = uVar29;
          *(undefined4 *)((long)plVar36 + 0x44) = uVar78;
          *(undefined4 *)(plVar36 + 9) = uVar82;
          *(undefined4 *)((long)plVar36 + 0x4c) = uVar77;
          *(undefined4 *)((long)plVar36 + 0x54) = uVar79;
          *(undefined4 *)(plVar36 + 0xb) = uVar76;
          *(undefined4 *)((long)plVar36 + 0x5c) = uVar80;
          *(undefined4 *)(plVar36 + 0xe) = uVar81;
          *(undefined4 *)((long)plVar36 + 0x74) = uVar75;
          plVar36[4] = (long)puVar23;
          plVar36[5] = (long)puVar24;
          *(undefined4 *)(plVar36 + 8) = uVar27;
          *(undefined4 *)(plVar36 + 10) = uVar28;
          plVar36[0xc] = (long)puVar67;
          *(undefined4 *)(plVar36 + 0xd) = uVar68;
          *(undefined4 *)((long)plVar36 + 0x6c) = uVar70;
          plVar36[0xf] = (long)local_1f8;
          *(undefined4 *)(plVar36 + 0x10) = uVar73;
          *(undefined4 *)((long)plVar36 + 0x84) = uVar3;
          plVar36[0x12] = (long)puVar60;
          *(undefined4 *)(plVar36 + 0x11) = uVar83;
          *(undefined4 *)(plVar36 + 0x13) = uVar26;
          *(undefined4 *)((long)plVar36 + 0x8c) = uVar84;
          *(undefined4 *)((long)plVar36 + 0x9c) = uVar4;
          *(undefined4 *)(plVar36 + 0x14) = uVar85;
          plVar36[0x15] = (long)puVar59;
          *(undefined4 *)((long)plVar36 + 0xa4) = uVar86;
          *(undefined4 *)(plVar36 + 0x16) = uVar61;
          *(undefined4 *)((long)plVar36 + 0xb4) = uVar63;
          *(undefined4 *)(plVar36 + 0x17) = uVar87;
          plVar36[0x18] = (long)local_200;
          *(undefined4 *)((long)plVar36 + 0xbc) = uVar88;
          *(undefined4 *)(plVar36 + 0x19) = uVar5;
          *(undefined4 *)(plVar36 + 0x1a) = uVar89;
          *(undefined4 *)((long)plVar36 + 0xcc) = uVar6;
          *(undefined4 *)((long)plVar36 + 0xd4) = uVar90;
          plVar36[0x1b] = (long)puVar56;
          *(undefined4 *)(plVar36 + 0x1c) = uVar58;
          *(undefined4 *)(plVar36 + 0x1d) = uVar91;
          *(undefined4 *)((long)plVar36 + 0xe4) = uVar7;
          *(undefined4 *)((long)plVar36 + 0xec) = uVar92;
        }
        else {
          if (0xf < *(ulong *)(lVar32 + 0x80)) {
LAB_018b3604:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar19;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
          plVar36[6] = (long)puVar25;
          plVar36[2] = (long)puVar65;
          plVar36[3] = (long)puVar72;
          *(undefined4 *)(plVar36 + 7) = uVar29;
          plVar36[4] = (long)puVar23;
          plVar36[5] = (long)puVar24;
          *(undefined4 *)(plVar36 + 8) = uVar27;
          *(undefined4 *)(plVar36 + 10) = uVar28;
          plVar36[0xc] = (long)puVar67;
          *(undefined4 *)(plVar36 + 0xd) = uVar68;
          *(undefined4 *)((long)plVar36 + 0x6c) = uVar70;
          plVar36[0xf] = (long)local_1f8;
          *(undefined4 *)(plVar36 + 0x10) = uVar73;
          *(undefined4 *)((long)plVar36 + 0x84) = uVar3;
          *(undefined4 *)(plVar36 + 0x11) = uVar83;
          *(undefined4 *)(plVar36 + 0x13) = uVar26;
          *(undefined4 *)((long)plVar36 + 0x9c) = uVar4;
          *(undefined4 *)((long)plVar36 + 0x8c) = uVar84;
          *(undefined4 *)(plVar36 + 0x14) = uVar85;
          *(undefined4 *)(plVar36 + 0x16) = uVar61;
          *(undefined4 *)((long)plVar36 + 0xb4) = uVar63;
          plVar36[0x18] = (long)local_200;
          *(undefined4 *)((long)plVar36 + 0xa4) = uVar86;
          *(undefined4 *)(plVar36 + 0x19) = uVar5;
          *(undefined4 *)(plVar36 + 0x17) = uVar87;
          *(undefined4 *)((long)plVar36 + 0xcc) = uVar6;
          *(undefined4 *)((long)plVar36 + 0xbc) = uVar88;
          *(undefined4 *)(plVar36 + 0x1a) = uVar89;
          *(undefined4 *)(plVar36 + 0x1c) = uVar58;
          *(undefined4 *)((long)plVar36 + 0xe4) = uVar7;
          *(undefined4 *)((long)plVar36 + 0xd4) = uVar90;
          *(undefined4 *)(plVar36 + 0x1d) = uVar91;
          *(undefined4 *)((long)plVar36 + 0x44) = uVar78;
          *(undefined4 *)(plVar36 + 9) = uVar82;
          *(undefined4 *)((long)plVar36 + 0x4c) = uVar77;
          *(undefined4 *)((long)plVar36 + 0x54) = uVar79;
          *(undefined4 *)(plVar36 + 0xb) = uVar76;
          *(undefined4 *)((long)plVar36 + 0x5c) = uVar80;
          *(undefined4 *)(plVar36 + 0xe) = uVar81;
          *(undefined4 *)((long)plVar36 + 0x74) = uVar75;
          plVar36[0x12] = (long)puVar60;
          plVar36[0x15] = (long)puVar59;
          plVar36[0x1b] = (long)puVar56;
          *(undefined4 *)((long)plVar36 + 0xec) = uVar92;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
        }
        *plVar36 = 0;
        plVar36[1] = (long)puVar65;
        fVar74 = (float)(*(long *)(param_1 + 0x308) + 1);
        if ((puVar62 == (undefined1 *)0x0) ||
           (puVar72 = local_2b8, *(float *)(param_1 + 0x310) * (float)puVar62 < fVar74)) {
          uVar39 = (ulong)(puVar62 < (undefined1 *)0x3 ||
                          ((ulong)puVar62 & (ulong)(puVar62 + -1)) != 0) | (long)puVar62 << 1;
          uVar40 = (ulong)(fVar74 / *(float *)(param_1 + 0x310));
          if (uVar40 <= uVar39) {
            uVar40 = uVar39;
          }
          FUN_018bbce8(plVar49,uVar40);
          puVar62 = *(undefined1 **)(param_1 + 0x2b8);
          if (((ulong)puVar62 & (ulong)(puVar62 + -1)) == 0) {
            puVar72 = (undefined1 *)((ulong)(puVar62 + -1) & (ulong)puVar65);
          }
          else {
            puVar72 = puVar65;
            if (puVar62 <= puVar65) {
              uVar39 = 0;
              if (puVar62 != (undefined1 *)0x0) {
                uVar39 = (ulong)puVar65 / (ulong)puVar62;
              }
              puVar72 = puVar65 + -(uVar39 * (long)puVar62);
            }
          }
        }
        plVar37 = *(long **)(*plVar49 + (long)puVar72 * 8);
        if (plVar37 == (long *)0x0) {
          *plVar36 = *plVar20;
          *plVar20 = (long)plVar36;
          *(long **)(*plVar49 + (long)puVar72 * 8) = plVar20;
          if (*plVar36 != 0) {
            puVar65 = *(undefined1 **)(*plVar36 + 8);
            if (((ulong)puVar62 & (ulong)(puVar62 + -1)) == 0) {
              puVar65 = (undefined1 *)((ulong)puVar65 & (ulong)(puVar62 + -1));
            }
            else if (puVar62 <= puVar65) {
              uVar39 = 0;
              if (puVar62 != (undefined1 *)0x0) {
                uVar39 = (ulong)puVar65 / (ulong)puVar62;
              }
              puVar65 = puVar65 + -(uVar39 * (long)puVar62);
            }
            plVar37 = (long *)(*plVar49 + (long)puVar65 * 8);
            goto LAB_018b299c;
          }
        }
        else {
          *plVar36 = *plVar37;
LAB_018b299c:
          *plVar37 = (long)plVar36;
        }
        *(long *)(param_1 + 0x308) = *(long *)(param_1 + 0x308) + 1;
        uVar31 = *puVar41;
      }
      else {
        uVar39 = (long)puVar62 - ((ulong)puVar62 >> 1 & 0x5555555555555555);
        uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
        uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar39 < 2) {
          local_2b8 = (undefined1 *)((ulong)(puVar62 + -1) & (ulong)puVar65);
        }
        else {
          local_2b8 = puVar65;
          if (puVar62 <= puVar65) {
            uVar40 = 0;
            if (puVar62 != (undefined1 *)0x0) {
              uVar40 = (ulong)puVar65 / (ulong)puVar62;
            }
            local_2b8 = puVar65 + -(uVar40 * (long)puVar62);
          }
        }
        plVar36 = *(long **)(*plVar49 + (long)local_2b8 * 8);
        if (plVar36 == (long *)0x0) goto LAB_018b2718;
        if (uVar39 < 2) {
          do {
            plVar36 = (long *)*plVar36;
            if ((plVar36 == (long *)0x0) ||
               ((undefined1 *)plVar36[1] != puVar65 &&
                (undefined1 *)((ulong)plVar36[1] & (ulong)(puVar62 + -1)) != local_2b8))
            goto LAB_018b2718;
          } while ((undefined1 *)plVar36[2] != puVar65);
        }
        else {
          do {
            plVar36 = (long *)*plVar36;
            if (plVar36 == (long *)0x0) goto LAB_018b2718;
            puVar47 = (undefined1 *)plVar36[1];
            if (puVar47 != puVar65) {
              if (puVar62 <= puVar47) {
                uVar39 = 0;
                if (puVar62 != (undefined1 *)0x0) {
                  uVar39 = (ulong)puVar47 / (ulong)puVar62;
                }
                puVar47 = puVar47 + -(uVar39 * (long)puVar62);
              }
              if (puVar47 != local_2b8) goto LAB_018b2718;
            }
          } while ((undefined1 *)plVar36[2] != puVar65);
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 < uVar31);
  }
  *(undefined1 *)(param_1 + 0x351) = *(undefined1 *)((long)plVar50 + 0xe1);
  *(undefined1 *)(param_1 + 0x352) = *(undefined1 *)((long)plVar50 + 0xe2);
  *(undefined1 *)(param_1 + 0x353) = *(undefined1 *)((long)plVar50 + 0xe3);
  *(char *)(param_1 + 0x354) = (char)plVar50[0x22];
  *(undefined1 *)(param_1 + 0x355) = *(undefined1 *)((long)plVar50 + 0x111);
  uVar19 = _DAT_03889850;
  uVar34 = *(ulong *)(lVar38 + 0xe0);
  if (uVar34 != 0) {
    uVar40 = *param_2;
    uVar39 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
    uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar39 < 2) {
      uVar52 = uVar34 - 1 & uVar40;
    }
    else if (uVar40 < uVar34) {
      uVar52 = uVar40;
    }
    else {
      uVar52 = 0;
      if (uVar34 != 0) {
        uVar52 = uVar40 / uVar34;
      }
      uVar52 = uVar40 - uVar52 * uVar34;
    }
    lVar32 = *(long *)(lVar38 + 0xd8);
    plVar49 = *(long **)(lVar32 + uVar52 * 8);
    if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
      uVar48 = uVar34 - 1;
      if (uVar39 < 2) {
        do {
          if (plVar49[1] == uVar40) {
            if (plVar49[2] == uVar40) goto LAB_018b2fc8;
          }
          else if ((plVar49[1] & uVar48) != uVar52) break;
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
      else {
        do {
          uVar57 = plVar49[1];
          if (uVar57 == uVar40) {
            if (plVar49[2] == uVar40) goto LAB_018b2fc8;
          }
          else {
            if (uVar34 <= uVar57) {
              uVar14 = 0;
              if (uVar34 != 0) {
                uVar14 = uVar57 / uVar34;
              }
              uVar57 = uVar57 - uVar14 * uVar34;
            }
            if (uVar57 != uVar52) break;
          }
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
    }
  }
  uVar30 = 0;
  *(undefined8 *)(param_1 + 0x328) = _UNK_03889858;
  *(undefined8 *)(param_1 + 800) = uVar19;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  uVar19 = _DAT_03888d40;
  *(undefined8 *)(param_1 + 0x348) = _UNK_03888d48;
  *(undefined8 *)(param_1 + 0x340) = uVar19;
  goto LAB_018b3294;
LAB_018b2fc8:
  if (uVar39 < 2) {
    uVar40 = uVar48 & uVar66;
    plVar49 = *(long **)(lVar32 + uVar40 * 8);
  }
  else {
    uVar40 = uVar66;
    if (uVar34 <= uVar66) {
      uVar40 = 0;
      if (uVar34 != 0) {
        uVar40 = uVar66 / uVar34;
      }
      uVar40 = uVar66 - uVar40 * uVar34;
    }
    plVar49 = *(long **)(lVar32 + uVar40 * 8);
  }
  if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
    if (uVar39 < 2) {
      do {
        if (plVar49[1] == uVar66) {
          if (plVar49[2] == uVar66) goto LAB_018b3078;
        }
        else if ((plVar49[1] & uVar48) != uVar40) break;
        plVar49 = (long *)*plVar49;
      } while (plVar49 != (long *)0x0);
    }
    else {
      do {
        uVar39 = plVar49[1];
        if (uVar39 == uVar66) {
          if (plVar49[2] == uVar66) goto LAB_018b3078;
        }
        else {
          if (uVar34 <= uVar39) {
            uVar52 = 0;
            if (uVar34 != 0) {
              uVar52 = uVar39 / uVar34;
            }
            uVar39 = uVar39 - uVar52 * uVar34;
          }
          if (uVar39 != uVar40) break;
        }
        plVar49 = (long *)*plVar49;
      } while (plVar49 != (long *)0x0);
    }
  }
  goto LAB_018b3248;
LAB_018b3078:
  *(long *)(param_1 + 0x328) = plVar49[0x1b];
  *(long *)(param_1 + 800) = plVar49[0x1a];
  uVar34 = *(ulong *)(lVar38 + 0xe0);
  if (uVar34 != 0) {
    uVar39 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
    uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar39 < 2) {
      uVar40 = uVar34 - 1 & uVar66;
    }
    else {
      uVar40 = uVar66;
      if (uVar34 <= uVar66) {
        uVar40 = 0;
        if (uVar34 != 0) {
          uVar40 = uVar66 / uVar34;
        }
        uVar40 = uVar66 - uVar40 * uVar34;
      }
    }
    plVar49 = *(long **)(*(long *)(lVar38 + 0xd8) + uVar40 * 8);
    if ((plVar49 != (long *)0x0) && (plVar49 = (long *)*plVar49, plVar49 != (long *)0x0)) {
      if (uVar39 < 2) {
        do {
          if (plVar49[1] == uVar66) {
            if (plVar49[2] == uVar66) goto LAB_018b317c;
          }
          else if ((plVar49[1] & uVar34 - 1) != uVar40) break;
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
      else {
        do {
          uVar39 = plVar49[1];
          if (uVar39 == uVar66) {
            if (plVar49[2] == uVar66) goto LAB_018b317c;
          }
          else {
            if (uVar34 <= uVar39) {
              uVar52 = 0;
              if (uVar34 != 0) {
                uVar52 = uVar39 / uVar34;
              }
              uVar39 = uVar39 - uVar52 * uVar34;
            }
            if (uVar39 != uVar40) break;
          }
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
      }
    }
  }
LAB_018b3248:
  do {
    do {
      plVar50 = (long *)FUN_018bae60();
      uVar34 = extraout_x8;
      uVar39 = extraout_x11;
      uVar66 = extraout_x17;
      lVar38 = extraout_x18;
LAB_018b324c:
      uVar40 = uVar34 - 1 & uVar66;
LAB_018b31f0:
      plVar49 = *(long **)(*(long *)(lVar38 + 0xd8) + uVar40 * 8);
    } while ((plVar49 == (long *)0x0) || (plVar49 = (long *)*plVar49, plVar49 == (long *)0x0));
    if (1 < uVar39) {
      do {
        uVar39 = plVar49[1];
        if (uVar39 == uVar66) {
          if (plVar49[2] == uVar66) goto LAB_018b3290;
        }
        else {
          if (uVar34 <= uVar39) {
            uVar52 = 0;
            if (uVar34 != 0) {
              uVar52 = uVar39 / uVar34;
            }
            uVar39 = uVar39 - uVar52 * uVar34;
          }
          if (uVar39 != uVar40) break;
        }
        plVar49 = (long *)*plVar49;
      } while (plVar49 != (long *)0x0);
      goto LAB_018b3248;
    }
    do {
      if (plVar49[1] == uVar66) {
        if (plVar49[2] == uVar66) goto LAB_018b3290;
      }
      else if ((plVar49[1] & uVar34 - 1) != uVar40) break;
      plVar49 = (long *)*plVar49;
    } while (plVar49 != (long *)0x0);
  } while( true );
LAB_018b317c:
  lVar32 = plVar49[0x21];
  *(long *)(param_1 + 0x338) = plVar49[0x1f];
  *(long *)(param_1 + 0x348) = lVar32;
  lVar32 = plVar49[0x1e];
  *(long *)(param_1 + 0x340) = plVar49[0x20];
  *(long *)(param_1 + 0x330) = lVar32;
  uVar34 = *(ulong *)(lVar38 + 0xe0);
  if (uVar34 != 0) {
    uVar39 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 & 0x3333333333333333) + (uVar39 >> 2 & 0x3333333333333333);
    uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar39 < 2) goto LAB_018b324c;
    uVar40 = uVar66;
    if (uVar66 < uVar34) goto LAB_018b31f0;
    uVar40 = 0;
    if (uVar34 != 0) {
      uVar40 = uVar66 / uVar34;
    }
    uVar40 = uVar66 - uVar40 * uVar34;
    goto LAB_018b31f0;
  }
  goto LAB_018b3248;
LAB_018b3290:
  uVar30 = (undefined1)plVar49[0x1c];
LAB_018b3294:
  *(undefined1 *)(param_1 + 0x350) = uVar30;
  *(char *)(param_1 + 0x356) = (char)plVar50[0x6a];
  *(undefined1 *)(param_1 + 0x357) = *(undefined1 *)((long)plVar50 + 0x351);
  *(long *)(param_1 + 0x358) = plVar50[0x6b];
  if (local_2e0 != (long *)0x0) {
    lVar38 = local_2e0[0xb];
    piVar1 = (int *)(lVar38 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar18 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar38 + 0x18) = 0;
      (**(code **)(*local_2e0 + 0x20))();
    }
  }
  return;
}


