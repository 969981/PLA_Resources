/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148a368; name: FUN_0148a368
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_0148a368(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined6 uStack_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88;
  undefined7 local_84;
  undefined4 uStack_7d;
  
  if ((*(long *)(param_1 + 0x2a88) != 0) || (*(long *)(param_1 + 0x2a18) == 0)) {
    if ((*(long *)(param_1 + 0x2b68) != 0) ||
       ((*(long *)(param_1 + 11000) == 0 || (*(long *)(param_1 + 0x2a88) != 0)))) goto LAB_0148a3bc;
    if (*(char *)(param_1 + 0x2b90) == '\0') {
      uVar22 = *(ulong *)(param_1 + 0x2af0);
      lVar20 = *(long *)(*(long *)(param_1 + 0x2ab8) + (uVar22 / 0x38) * 8);
      lVar23 = *(long *)(param_1 + 0x2b28);
      lVar18 = *(long *)(param_1 + 0x2b30) - lVar23;
      uVar16 = 0;
      if (lVar18 != 0) {
        uVar16 = (lVar18 >> 3) * 0x38 - 1;
      }
      uVar24 = *(ulong *)(param_1 + 0x2b60);
      if (uVar16 == uVar24) {
        FUN_01494c08(param_1 + 0x2b20);
        uVar24 = *(long *)(param_1 + 0x2b60) + *(long *)(param_1 + 0x2b68);
        lVar23 = *(long *)(param_1 + 0x2b28);
        if (*(long *)(param_1 + 0x2b30) != lVar23) goto LAB_0148b8d0;
LAB_0148bbac:
        lVar18 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x2b30) == lVar23) goto LAB_0148bbac;
LAB_0148b8d0:
        lVar18 = *(long *)(lVar23 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
      }
      FUN_01495a54(param_1 + 0x2b70,lVar18,lVar20 + (uVar22 % 0x38) * 0x48);
      lVar18 = *(long *)(param_1 + 0x2b68);
      *(long *)(param_1 + 0x2b68) = lVar18 + 1;
      uVar16 = *(long *)(param_1 + 0x2b60) + lVar18;
      uVar22 = uVar16 % 0x38;
      lVar18 = *(long *)(*(long *)(param_1 + 0x2b28) + (uVar16 / 0x38) * 8);
      puVar25 = (undefined1 *)(lVar18 + uVar22 * 0x48);
      local_d8 = CONCAT71(local_d8._1_7_,*puVar25);
      local_d0 = *(long **)(puVar25 + 8);
      if (local_d0 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = local_d0 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *(int *)plVar27 = (int)*plVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar27 = local_d0;
      }
      lVar18 = lVar18 + uVar22 * 0x48;
      uStack_b8 = *(undefined8 *)(lVar18 + 0x20);
      local_c8 = *(undefined8 *)(lVar18 + 0x10);
      local_c0 = *(long **)(lVar18 + 0x18);
      uVar26 = *(undefined8 *)(lVar18 + 0x38);
      local_b0 = *(undefined8 *)(lVar18 + 0x28);
      local_a8 = *(undefined8 *)(lVar18 + 0x30);
      uStack_98 = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x3e) >> 0x10);
      uStack_a0 = (undefined4)uVar26;
      local_9c._0_2_ = (undefined2)((ulong)uVar26 >> 0x20);
      local_9c._2_2_ = (undefined2)((ulong)uVar26 >> 0x30);
      FUN_0148dfe4(param_1,&local_d8);
      FUN_0148d838(param_1 + 0x2ab0);
      if (plVar27 != (long *)0x0) {
        plVar32 = plVar27 + 10;
        do {
          iVar15 = (int)*plVar32 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *(int *)plVar32 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        goto LAB_0148b9b4;
      }
    }
    else {
      uVar22 = (*(long *)(param_1 + 11000) + *(long *)(param_1 + 0x2af0)) - 1;
      lVar23 = *(long *)(*(long *)(param_1 + 0x2ab8) + (uVar22 / 0x38) * 8);
      lVar20 = *(long *)(param_1 + 0x2b28);
      lVar18 = *(long *)(param_1 + 0x2b30) - lVar20;
      uVar16 = 0;
      if (lVar18 != 0) {
        uVar16 = (lVar18 >> 3) * 0x38 - 1;
      }
      uVar24 = *(ulong *)(param_1 + 0x2b60);
      if (uVar16 == uVar24) {
        FUN_01494c08(param_1 + 0x2b20);
        uVar24 = *(long *)(param_1 + 0x2b60) + *(long *)(param_1 + 0x2b68);
        lVar20 = *(long *)(param_1 + 0x2b28);
        if (*(long *)(param_1 + 0x2b30) != lVar20) goto LAB_0148b600;
LAB_0148ba64:
        lVar18 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x2b30) == lVar20) goto LAB_0148ba64;
LAB_0148b600:
        lVar18 = *(long *)(lVar20 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
      }
      FUN_01495a54(param_1 + 0x2b70,lVar18,lVar23 + (uVar22 % 0x38) * 0x48);
      lVar18 = *(long *)(param_1 + 0x2b68);
      *(long *)(param_1 + 0x2b68) = lVar18 + 1;
      uVar16 = *(long *)(param_1 + 0x2b60) + lVar18;
      uVar22 = uVar16 % 0x38;
      lVar18 = *(long *)(*(long *)(param_1 + 0x2b28) + (uVar16 / 0x38) * 8);
      puVar25 = (undefined1 *)(lVar18 + uVar22 * 0x48);
      local_d8 = CONCAT71(local_d8._1_7_,*puVar25);
      local_d0 = *(long **)(puVar25 + 8);
      if (local_d0 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = local_d0 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *(int *)plVar27 = (int)*plVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar27 = local_d0;
      }
      lVar18 = lVar18 + uVar22 * 0x48;
      uStack_b8 = *(undefined8 *)(lVar18 + 0x20);
      local_c8 = *(undefined8 *)(lVar18 + 0x10);
      local_c0 = *(long **)(lVar18 + 0x18);
      local_b0 = *(undefined8 *)(lVar18 + 0x28);
      local_a8 = *(undefined8 *)(lVar18 + 0x30);
      uStack_98 = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x3e) >> 0x10);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar18 + 0x38);
      local_9c = *(int *)(param_1 + 11000) + -1;
      FUN_0148dfe4(param_1,&local_d8);
      FUN_0149139c(param_1 + 0x2ab0);
      *(char *)(param_1 + 0x2b90) = '\0';
      if (plVar27 != (long *)0x0) {
        plVar32 = plVar27 + 10;
        do {
          iVar15 = (int)*plVar32 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *(int *)plVar32 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_0148b9b4:
        if (iVar15 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2b91) = 1;
    lVar18 = *(long *)(param_1 + 0x29a8);
    goto joined_r0x0148b56c;
  }
  if (*(long *)(param_1 + 0x2b68) == 0) {
    uVar22 = *(ulong *)(param_1 + 0x2a10);
    lVar20 = *(long *)(*(long *)(param_1 + 0x29d8) + (uVar22 / 0x38) * 8);
    lVar23 = *(long *)(param_1 + 0x2a48);
    lVar18 = *(long *)(param_1 + 0x2a50) - lVar23;
    uVar16 = 0;
    if (lVar18 != 0) {
      uVar16 = (lVar18 >> 3) * 0x38 - 1;
    }
    uVar24 = *(ulong *)(param_1 + 0x2a80);
    if (uVar16 == uVar24) {
      FUN_01494c08(param_1 + 0x2a40);
      uVar24 = *(long *)(param_1 + 0x2a80) + *(long *)(param_1 + 0x2a88);
      lVar23 = *(long *)(param_1 + 0x2a48);
      if (*(long *)(param_1 + 0x2a50) != lVar23) goto LAB_0148a464;
LAB_0148ba18:
      lVar18 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x2a50) == lVar23) goto LAB_0148ba18;
LAB_0148a464:
      lVar18 = *(long *)(lVar23 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
    }
    FUN_01495a54(param_1 + 0x2a90,lVar18,lVar20 + (uVar22 % 0x38) * 0x48);
    lVar18 = *(long *)(param_1 + 0x2a88);
    *(long *)(param_1 + 0x2a88) = lVar18 + 1;
    uVar16 = *(long *)(param_1 + 0x2a80) + lVar18;
    uVar22 = uVar16 % 0x38;
    lVar18 = *(long *)(*(long *)(param_1 + 0x2a48) + (uVar16 / 0x38) * 8);
    plVar27 = *(long **)(lVar18 + uVar22 * 0x48 + 8);
    if (plVar27 == (long *)0x0) {
      plVar32 = (long *)0x0;
    }
    else {
      plVar32 = plVar27 + 10;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar11) {
          *(int *)plVar32 = (int)*plVar32 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar32 = plVar27;
    }
    plVar28 = DAT_043c3988;
    lVar20 = DAT_043c3970;
    lVar18 = lVar18 + uVar22 * 0x48;
    uVar3 = *(uint *)(lVar18 + 0x24);
    uVar4 = *(uint *)(lVar18 + 0x28);
    uVar6 = *(undefined1 *)(lVar18 + 0x2e);
    cVar10 = *(char *)(lVar18 + 0x2c);
    cVar7 = *(char *)(lVar18 + 0x2d);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined1 *)(lVar18 + 0x34);
    plVar30 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if (DAT_043c3988 != (long *)0x0) {
      (**(code **)(*DAT_043c3988 + 0x18))(DAT_043c3988);
    }
    plVar33 = plVar30;
    if ((lVar18 != 0) && (*plVar30 != lVar20)) {
      lVar23 = lVar18 * 0x30;
      plVar29 = plVar30 + lVar18 * 6;
      do {
        lVar23 = lVar23 + -0x30;
        plVar33 = plVar29;
        if (lVar23 == 0) break;
        plVar21 = plVar30 + 6;
        plVar30 = plVar30 + 6;
        plVar33 = plVar30;
      } while (*plVar21 != lVar20);
    }
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    *(byte *)(plVar33[4] + 0x58) = *(byte *)(plVar33[4] + 0x58) | 1;
    local_d8 = 0xd6ad0c29ccb27e05;
    local_d0 = (long *)0x399b37b;
    local_c8 = 0x16;
    local_c0 = (long *)0x0;
    lVar18 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0xe8), lVar18 != 0)) {
      FUN_00235780(lVar18);
      FUN_002350e8(lVar18,"T_header_pokeget_00");
      FUN_002350e8(lVar18,"T_param_u_pokeget_00");
      FUN_002350e8(lVar18,"T_param_u_pokeget_01");
      FUN_002350e8(lVar18,"T_param_u_pokeget_02");
      FUN_002350e8(lVar18,"T_param_pokeget_00");
      FUN_002350e8(lVar18,"T_param_pokeget_01");
      FUN_002350e8(lVar18,"T_param_pokeget_02");
    }
    plVar30 = *(long **)(param_1 + 0x2c8);
    if (plVar30 != (long *)0x0) {
      plVar28 = plVar30 + 10;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = (int)*plVar28 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        iVar15 = (int)*plVar28 + -1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
    plVar28 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
    if (plVar28 != (long *)0x0) {
      lVar18 = plVar28[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar26;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plVar33 = (long *)plVar28[0xd];
    lVar18 = param_1 + 0x180;
    if (plVar33 != (long *)0x0) {
      plVar29 = plVar33 + 10;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar11) {
          *(int *)plVar29 = (int)*plVar29 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    lVar20 = plVar28[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar15 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar20 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar20;
    plVar28 = *(long **)(lVar20 + 0x298);
    if (plVar28 != (long *)0x0) {
      lVar20 = plVar28[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar26;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    FUN_0284ef04(*(undefined8 *)(param_1 + 0x448),plVar27,0,1);
    uVar13 = FUN_02c6849c(plVar27[0x13]);
    plVar29 = (long *)plVar30[0x37];
    if (plVar29 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar20 = plVar29[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar26 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar26;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    uVar16 = (**(code **)(*plVar29 + 0x50))(plVar29,plVar29[0xd],uVar13);
    if ((int)plVar29[0x12] != 0) {
      lVar20 = plVar29[0xd];
      *(ulong *)(plVar29[0x13] + 8) = uVar16 & 0xffff | 0x20000;
      plVar21 = (long *)plVar29[0x13];
      lVar23 = *plVar21;
      if (*(char *)(lVar23 + 0x7c) != '\0') {
        uVar12 = FUN_02c30580(*(undefined8 *)(lVar23 + 0x58),*(undefined8 *)(lVar20 + 0x58),
                              *(undefined2 *)(lVar23 + 0x78));
        *(undefined2 *)(lVar23 + 0x7a) = uVar12;
        plVar21 = (long *)plVar29[0x13];
      }
      *(undefined2 *)(plVar21 + 2) = 0;
      *(ushort *)(plVar29[0x13] + 0x12) = *(ushort *)(plVar29[0x13] + 0x12) & 0xfffe;
    }
    lVar20 = plVar29[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar15 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
    }
    plVar29 = (long *)plVar30[0x38];
    if (plVar29 == (long *)0x0) {
      lVar20 = plVar33[0x16];
      if (lVar20 != 0) {
        plVar29 = *(long **)(lVar20 + 0x270);
        if (plVar29 != *(long **)(lVar20 + 0x278)) {
          iVar15 = 0;
          do {
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*plVar29 != 0) {
              plVar21 = (long *)(*plVar29 + 0x58);
            }
            if (*plVar21 == 0x4b33b564588aa6e1) goto LAB_0148be34;
            plVar29 = plVar29 + 1;
            iVar15 = iVar15 + 1;
          } while (*(long **)(lVar20 + 0x278) != plVar29);
        }
      }
      iVar15 = 0;
LAB_0148be34:
      FUN_02c2e33c(plVar33,iVar15,0);
    }
    else {
      plVar21 = plVar29 + 10;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar20 = plVar33[0x16];
      if (lVar20 != 0) {
        plVar19 = *(long **)(lVar20 + 0x270);
        if (plVar19 != *(long **)(lVar20 + 0x278)) {
          iVar15 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar19 != 0) {
              plVar2 = (long *)(*plVar19 + 0x58);
            }
            if (*plVar2 == 0x4b33b564588aa6e1) goto LAB_0148a918;
            plVar19 = plVar19 + 1;
            iVar15 = iVar15 + 1;
          } while (*(long **)(lVar20 + 0x278) != plVar19);
        }
      }
      iVar15 = 0;
LAB_0148a918:
      FUN_02c2e33c(plVar33,iVar15,plVar29);
      do {
        iVar15 = (int)*plVar21 + -1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(int *)plVar21 = iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
    local_c8 = 0x23;
    local_c0 = (long *)0x0;
    local_d8 = 0x777ddc4d6238e035;
    local_d0 = (long *)0x39aca9b;
    lVar31 = plVar30[0x37];
    lVar20 = plVar30[0x38];
    lVar23 = plVar30[0x39];
    *(undefined4 *)(lVar31 + 0x124) = 0;
    *(undefined2 *)(lVar31 + 0x128) = 0;
    *(undefined4 *)(lVar31 + 300) = 0;
    *(undefined4 *)(lVar31 + 0x134) = 0;
    FUN_02c33414(lVar31,lVar20);
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      **(undefined2 **)(lVar23 + 0x58) = 0;
      *(undefined2 *)(lVar23 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar31,lVar23,lVar20,0,0);
    FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    plVar29 = (long *)plVar30[0x38];
    if (plVar29 == (long *)0x0) {
      lVar20 = plVar33[0x16];
      if (lVar20 != 0) {
        plVar29 = *(long **)(lVar20 + 0x270);
        if (plVar29 != *(long **)(lVar20 + 0x278)) {
          iVar15 = 0;
          do {
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*plVar29 != 0) {
              plVar21 = (long *)(*plVar29 + 0x58);
            }
            if (*plVar21 == 0x31ca271c404221c) goto LAB_0148bea8;
            plVar29 = plVar29 + 1;
            iVar15 = iVar15 + 1;
          } while (*(long **)(lVar20 + 0x278) != plVar29);
        }
      }
      iVar15 = 0;
LAB_0148bea8:
      FUN_02c2e33c(plVar33,iVar15,0);
      plVar29 = (long *)plVar30[0x37];
joined_r0x0148beb8:
      if (plVar29 != (long *)0x0) goto LAB_0148aa7c;
LAB_0148bab8:
      uVar14 = FUN_02c5fb2c(plVar27);
      FUN_02c395d0(0,0,uVar14,3,0,1);
    }
    else {
      plVar21 = plVar29 + 10;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar20 = plVar33[0x16];
      if (lVar20 != 0) {
        plVar19 = *(long **)(lVar20 + 0x270);
        if (plVar19 != *(long **)(lVar20 + 0x278)) {
          iVar15 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar19 != 0) {
              plVar2 = (long *)(*plVar19 + 0x58);
            }
            if (*plVar2 == 0x31ca271c404221c) goto LAB_0148aa54;
            plVar19 = plVar19 + 1;
            iVar15 = iVar15 + 1;
          } while (*(long **)(lVar20 + 0x278) != plVar19);
        }
      }
      iVar15 = 0;
LAB_0148aa54:
      FUN_02c2e33c(plVar33,iVar15,plVar29);
      do {
        iVar15 = (int)*plVar21 + -1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(int *)plVar21 = iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        plVar29 = (long *)plVar30[0x37];
        goto joined_r0x0148beb8;
      }
      plVar29 = (long *)plVar30[0x37];
      if (plVar29 == (long *)0x0) goto LAB_0148bab8;
LAB_0148aa7c:
      lVar20 = plVar29[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar26;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      uVar14 = FUN_02c5fb2c(plVar27);
      FUN_02c395d0(plVar29,0,uVar14,3,0,1);
      lVar20 = plVar29[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar15 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
    }
    local_c8 = 0x27;
    local_c0 = (long *)0x0;
    local_d8 = 0x6505bd8e844718e;
    local_d0 = (long *)0x38fef11;
    lVar31 = plVar30[0x37];
    lVar20 = plVar30[0x38];
    lVar23 = plVar30[0x39];
    *(undefined4 *)(lVar31 + 0x124) = 0;
    *(undefined2 *)(lVar31 + 0x128) = 0;
    *(undefined4 *)(lVar31 + 300) = 0;
    *(undefined4 *)(lVar31 + 0x134) = 0;
    FUN_02c33414(lVar31,lVar20);
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      **(undefined2 **)(lVar23 + 0x58) = 0;
      *(undefined2 *)(lVar23 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar31,lVar23,lVar20,0,0);
    FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    local_d8 = 0x3a620c9b9c6db0f2;
    local_d0 = (long *)0x390984c;
    local_c8 = 0x1e;
    local_c0 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d8);
    }
    FUN_00d2e2f0(0,lVar18,"anime_L_item_pokemon_00_switch");
    local_84 = 0;
    uStack_7d = 0;
    local_90[0] = uVar6;
    local_8c = uVar5;
    local_88 = uVar8;
    uVar16 = FUN_011360a0(plVar28,uVar13,0,local_90);
    if ((uVar3 < uVar4) || ((uVar16 & 1) == 0)) {
      plVar30 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
      if ((lVar18 != 0) && (*plVar30 != 0xc7ba9865fa0ea89)) {
        plVar29 = plVar30 + lVar18 * 6;
        lVar18 = lVar18 * 0x30;
        do {
          lVar18 = lVar18 + -0x30;
          if (lVar18 == 0) {
            plVar30 = plVar29;
            break;
          }
          plVar19 = plVar30 + 6;
          plVar21 = plVar30 + 6;
          plVar30 = plVar19;
        } while (*plVar21 != 0xc7ba9865fa0ea89);
      }
      *(byte *)(plVar30[4] + 0x58) = *(byte *)(plVar30[4] + 0x58) & 0xfe;
    }
    else {
      plVar29 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
      if (plVar29 != (long *)0x0) {
        lVar20 = plVar29[0xb];
        if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
        if (*(long *)(lVar20 + 0x10) == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
          *(undefined8 *)(lVar20 + 0x10) = uVar26;
        }
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      plVar21 = (long *)plVar29[0xd];
      if (plVar21 != (long *)0x0) {
        plVar19 = plVar21 + 10;
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (plVar33 != (long *)0x0) {
        plVar19 = plVar33 + 10;
        do {
          iVar15 = (int)*plVar19 + -1;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *(int *)plVar19 = iVar15;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
      lVar20 = plVar29[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar15 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
      local_d8 = 0x3a620c9b9c6db0f2;
      local_d0 = (long *)0x390984c;
      uVar26 = 0x3f800000;
      if (uVar4 != uVar3) {
        uVar26 = 0;
      }
      uVar17 = 5;
      if (uVar4 != uVar3) {
        uVar17 = 0;
      }
      bVar11 = cVar10 != '\0';
      if (bVar11) {
        uVar17 = 5;
      }
      local_c8 = 0x1e;
      local_c0 = (long *)0x0;
      if (bVar11) {
        uVar26 = 0x40000000;
      }
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d8);
      }
      FUN_00d2e2f0(0x3f800000,lVar18,"anime_L_item_pokemon_00_switch");
      local_d8 = 0x2d35f54ee793ed14;
      local_d0 = (long *)0x388fcdf;
      local_c8 = 0x27;
      local_c0 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d8);
      }
      FUN_00d2e2f0(uVar26,lVar18,"anime_L_item_pokemon_00_switch_complete");
      plVar33 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
      if ((lVar18 != 0) &&
         (lVar20 = *(long *)((ulong)uVar17 * 0x18 + 0x4212738), *plVar33 != lVar20)) {
        plVar29 = plVar33 + lVar18 * 6;
        lVar18 = lVar18 * 0x30;
        do {
          lVar18 = lVar18 + -0x30;
          if (lVar18 == 0) {
            plVar33 = plVar29;
            break;
          }
          plVar2 = plVar33 + 6;
          plVar19 = plVar33 + 6;
          plVar33 = plVar2;
        } while (*plVar19 != lVar20);
      }
      *(byte *)(plVar33[4] + 0x58) = *(byte *)(plVar33[4] + 0x58) | 1;
      lVar18 = (ulong)(uVar17 + 1) * 0x18;
      local_d8 = *(undefined8 *)(lVar18 + 0x4212738);
      local_d0 = *(long **)(lVar18 + 0x4212740);
      local_c8 = *(undefined8 *)(lVar18 + 0x4212748);
      local_c0 = (long *)0x0;
      if (*(char *)local_d0 != '\0') {
        lVar18 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_d8);
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
          FUN_00256608(lVar18);
        }
      }
      plVar33 = (long *)plVar30[0x38];
      if (plVar33 == (long *)0x0) {
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar33 = *(long **)(lVar18 + 0x270);
          if (plVar33 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar29 = (long *)PTR_DAT_04379c88;
              if (*plVar33 != 0) {
                plVar29 = (long *)(*plVar33 + 0x58);
              }
              if (*plVar29 == -0x1e0799cb7a65e3bc) goto LAB_0148bf14;
              plVar33 = plVar33 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar33);
          }
        }
        iVar15 = 0;
LAB_0148bf14:
        FUN_02c2e33c(plVar21,iVar15,0);
        plVar33 = (long *)plVar30[0x37];
joined_r0x0148bf24:
        if (plVar33 != (long *)0x0) goto LAB_0148aed4;
LAB_0148bb0c:
        FUN_02c395d0(0,0,uVar4,3,0,1);
      }
      else {
        plVar29 = plVar33 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = (int)*plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar19 = *(long **)(lVar18 + 0x270);
          if (plVar19 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar19 != 0) {
                plVar2 = (long *)(*plVar19 + 0x58);
              }
              if (*plVar2 == -0x1e0799cb7a65e3bc) goto LAB_0148aeac;
              plVar19 = plVar19 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar19);
          }
        }
        iVar15 = 0;
LAB_0148aeac:
        FUN_02c2e33c(plVar21,iVar15,plVar33);
        do {
          iVar15 = (int)*plVar29 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          plVar33 = (long *)plVar30[0x37];
          goto joined_r0x0148bf24;
        }
        plVar33 = (long *)plVar30[0x37];
        if (plVar33 == (long *)0x0) goto LAB_0148bb0c;
LAB_0148aed4:
        lVar18 = plVar33[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar26;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        FUN_02c395d0(plVar33,0,uVar4,3,0,1);
        lVar18 = plVar33[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar15 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))(plVar33);
        }
      }
      lVar18 = (ulong)(uVar17 | 2) * 0x18;
      local_d8 = *(undefined8 *)(lVar18 + 0x4212738);
      local_d0 = *(long **)(lVar18 + 0x4212740);
      local_c8 = *(undefined8 *)(lVar18 + 0x4212748);
      local_c0 = (long *)0x0;
      lVar23 = plVar30[0x37];
      lVar18 = plVar30[0x38];
      lVar20 = plVar30[0x39];
      *(undefined4 *)(lVar23 + 0x124) = 0;
      *(undefined2 *)(lVar23 + 0x128) = 0;
      *(undefined4 *)(lVar23 + 300) = 0;
      *(undefined4 *)(lVar23 + 0x134) = 0;
      FUN_02c33414(lVar23,lVar18);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar23,lVar20,lVar18,0,0);
      FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      plVar33 = (long *)plVar30[0x38];
      if (plVar33 == (long *)0x0) {
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar33 = *(long **)(lVar18 + 0x270);
          if (plVar33 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar29 = (long *)PTR_DAT_04379c88;
              if (*plVar33 != 0) {
                plVar29 = (long *)(*plVar33 + 0x58);
              }
              if (*plVar29 == -0x1e079acb7a65e56f) goto LAB_0148bf90;
              plVar33 = plVar33 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar33);
          }
        }
        iVar15 = 0;
LAB_0148bf90:
        FUN_02c2e33c(plVar21,iVar15,0);
      }
      else {
        plVar29 = plVar33 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = (int)*plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar19 = *(long **)(lVar18 + 0x270);
          if (plVar19 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar19 != 0) {
                plVar2 = (long *)(*plVar19 + 0x58);
              }
              if (*plVar2 == -0x1e079acb7a65e56f) goto LAB_0148b058;
              plVar19 = plVar19 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar19);
          }
        }
        iVar15 = 0;
LAB_0148b058:
        FUN_02c2e33c(plVar21,iVar15,plVar33);
        do {
          iVar15 = (int)*plVar29 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
      lVar18 = (ulong)(uVar17 + 3) * 0x18;
      local_d8 = *(undefined8 *)(lVar18 + 0x4212738);
      local_d0 = *(long **)(lVar18 + 0x4212740);
      local_c8 = *(undefined8 *)(lVar18 + 0x4212748);
      local_c0 = (long *)0x0;
      lVar23 = plVar30[0x37];
      lVar18 = plVar30[0x38];
      lVar20 = plVar30[0x39];
      *(undefined4 *)(lVar23 + 0x124) = 0;
      *(undefined2 *)(lVar23 + 0x128) = 0;
      *(undefined4 *)(lVar23 + 300) = 0;
      *(undefined4 *)(lVar23 + 0x134) = 0;
      FUN_02c33414(lVar23,lVar18);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar23,lVar20,lVar18,0,0);
      FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      plVar33 = (long *)plVar30[0x38];
      if (plVar33 == (long *)0x0) {
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar33 = *(long **)(lVar18 + 0x270);
          if (plVar33 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar29 = (long *)PTR_DAT_04379c88;
              if (*plVar33 != 0) {
                plVar29 = (long *)(*plVar33 + 0x58);
              }
              if (*plVar29 == -0x1e0799cb7a65e3bc) goto LAB_0148bff4;
              plVar33 = plVar33 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar33);
          }
        }
        iVar15 = 0;
LAB_0148bff4:
        FUN_02c2e33c(plVar21,iVar15,0);
        plVar33 = (long *)plVar30[0x37];
joined_r0x0148c004:
        if (plVar33 != (long *)0x0) goto LAB_0148b1a4;
LAB_0148bb58:
        FUN_02c395d0(0,0,uVar3,3,0,1);
      }
      else {
        plVar29 = plVar33 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = (int)*plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar19 = *(long **)(lVar18 + 0x270);
          if (plVar19 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar19 != 0) {
                plVar2 = (long *)(*plVar19 + 0x58);
              }
              if (*plVar2 == -0x1e0799cb7a65e3bc) goto LAB_0148b17c;
              plVar19 = plVar19 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar19);
          }
        }
        iVar15 = 0;
LAB_0148b17c:
        FUN_02c2e33c(plVar21,iVar15,plVar33);
        do {
          iVar15 = (int)*plVar29 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          plVar33 = (long *)plVar30[0x37];
          goto joined_r0x0148c004;
        }
        plVar33 = (long *)plVar30[0x37];
        if (plVar33 == (long *)0x0) goto LAB_0148bb58;
LAB_0148b1a4:
        lVar18 = plVar33[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_0148c080:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar26;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        FUN_02c395d0(plVar33,0,uVar3,3,0,1);
        lVar18 = plVar33[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar15 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar33 + 0x20))(plVar33);
        }
      }
      lVar18 = (ulong)(uVar17 + 4) * 0x18;
      local_d8 = *(undefined8 *)(lVar18 + 0x4212738);
      local_d0 = *(long **)(lVar18 + 0x4212740);
      local_c8 = *(undefined8 *)(lVar18 + 0x4212748);
      local_c0 = (long *)0x0;
      lVar23 = plVar30[0x37];
      lVar18 = plVar30[0x38];
      lVar20 = plVar30[0x39];
      *(undefined4 *)(lVar23 + 0x124) = 0;
      *(undefined2 *)(lVar23 + 0x128) = 0;
      *(undefined4 *)(lVar23 + 300) = 0;
      *(undefined4 *)(lVar23 + 0x134) = 0;
      FUN_02c33414(lVar23,lVar18);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar23,lVar20,lVar18,0,0);
      FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      plVar33 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
      if ((lVar18 != 0) && (*plVar33 != 0xc7ba9865fa0ea89)) {
        plVar29 = plVar33 + lVar18 * 6;
        lVar18 = lVar18 * 0x30;
        do {
          lVar18 = lVar18 + -0x30;
          if (lVar18 == 0) {
            plVar33 = plVar29;
            break;
          }
          plVar2 = plVar33 + 6;
          plVar19 = plVar33 + 6;
          plVar33 = plVar2;
        } while (*plVar19 != 0xc7ba9865fa0ea89);
      }
      *(byte *)(plVar33[4] + 0x58) = *(byte *)(plVar33[4] + 0x58) | 1;
      plVar33 = (long *)plVar30[0x38];
      if (plVar33 == (long *)0x0) {
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar33 = *(long **)(lVar18 + 0x270);
          if (plVar33 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar29 = (long *)PTR_DAT_04379c88;
              if (*plVar33 != 0) {
                plVar29 = (long *)(*plVar33 + 0x58);
              }
              if (*plVar29 == -0x65c1effe3edae0a) goto LAB_0148c070;
              plVar33 = plVar33 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar33);
          }
        }
        iVar15 = 0;
LAB_0148c070:
        FUN_02c2e33c(plVar21,iVar15,0);
      }
      else {
        plVar29 = plVar33 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = (int)*plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar18 = plVar21[0x16];
        if (lVar18 != 0) {
          plVar19 = *(long **)(lVar18 + 0x270);
          if (plVar19 != *(long **)(lVar18 + 0x278)) {
            iVar15 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar19 != 0) {
                plVar2 = (long *)(*plVar19 + 0x58);
              }
              if (*plVar2 == -0x65c1effe3edae0a) goto LAB_0148b390;
              plVar19 = plVar19 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar19);
          }
        }
        iVar15 = 0;
LAB_0148b390:
        FUN_02c2e33c(plVar21,iVar15,plVar33);
        do {
          iVar15 = (int)*plVar29 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *(int *)plVar29 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
      local_c8 = 0x2a;
      local_c0 = (long *)0x0;
      local_d8 = 0xfddb9d6d8bcb45e7;
      local_d0 = (long *)0x38f517e;
      lVar23 = plVar30[0x37];
      lVar18 = plVar30[0x38];
      lVar20 = plVar30[0x39];
      *(undefined4 *)(lVar23 + 0x124) = 0;
      *(undefined2 *)(lVar23 + 0x128) = 0;
      *(undefined4 *)(lVar23 + 300) = 0;
      *(undefined4 *)(lVar23 + 0x134) = 0;
      FUN_02c33414(lVar23,lVar18);
      if (*(char *)(lVar20 + 0x7c) != '\0') {
        **(undefined2 **)(lVar20 + 0x58) = 0;
        *(undefined2 *)(lVar20 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar23,lVar20,lVar18,0,0);
      FUN_0283ce7c(plVar30,&local_d8,plVar30[0x39],10);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      plVar33 = plVar21;
    }
    if (plVar28 == (long *)0x0) {
LAB_0148b478:
      if (plVar33 == (long *)0x0) goto LAB_0148b494;
LAB_0148b47c:
      plVar30 = plVar33 + 10;
      do {
        iVar15 = (int)*plVar30 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar11) {
          *(int *)plVar30 = iVar15;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar15 != 0) goto LAB_0148b494;
      (**(code **)(*plVar33 + 0x10))(plVar33);
      if (cVar7 == '\0') goto LAB_0148b498;
LAB_0148bc34:
      local_d8 = 0xe08fde872ce93f81;
      local_d0 = (long *)0x38af2b4;
      local_c8 = 0x1a;
      local_c0 = (long *)0x0;
      FUN_028354b0(&local_d8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (*(char *)(param_1 + 0x1620) == '\0') {
        *(undefined1 *)(param_1 + 0x1620) = 1;
      }
    }
    else {
      lVar18 = plVar28[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar15 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar15 + -1 != 0) goto LAB_0148b478;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))();
      if (plVar33 != (long *)0x0) goto LAB_0148b47c;
LAB_0148b494:
      if (cVar7 != '\0') goto LAB_0148bc34;
LAB_0148b498:
      local_d8 = 0xca879a697d0cc79c;
      local_d0 = (long *)0x39a4afd;
      local_c8 = 0x1b;
      local_c0 = (long *)0x0;
      FUN_028354b0(&local_d8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (*(char *)(param_1 + 0x1410) == '\0') {
        *(char *)(param_1 + 0x1410) = '\x01';
      }
    }
    local_d8 = 0xe7aac34ac020315d;
    local_d0 = (long *)0x38af24a;
    local_c8 = 0x19;
    local_c0 = (long *)0x0;
    FUN_028354b0(&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    FUN_0148d838(param_1 + 0x29d0);
    *(undefined1 *)(param_1 + 0x2b91) = 1;
    if (plVar27 != (long *)0x0) {
      plVar30 = plVar27 + 10;
      do {
        iVar15 = (int)*plVar30 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar11) {
          *(int *)plVar30 = iVar15;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar32);
        lVar18 = *(long *)(param_1 + 0x29a8);
        goto joined_r0x0148b56c;
      }
    }
  }
LAB_0148a3bc:
  lVar18 = *(long *)(param_1 + 0x29a8);
joined_r0x0148b56c:
  if ((lVar18 == 0) && (*(long *)(param_1 + 0x2938) != 0)) {
    uVar22 = *(ulong *)(param_1 + 0x2930);
    lVar18 = *(long *)(*(long *)(param_1 + 0x28f8) + (uVar22 / 0x38) * 8);
    lVar23 = *(long *)(param_1 + 0x2970);
    lVar20 = *(long *)(param_1 + 0x2968);
    uVar16 = 0;
    if (lVar23 - lVar20 != 0) {
      uVar16 = (lVar23 - lVar20 >> 3) * 0x38 - 1;
    }
    uVar24 = *(ulong *)(param_1 + 0x29a0);
    if (uVar16 == uVar24) {
      FUN_01494c08(param_1 + 0x2960);
      uVar24 = *(long *)(param_1 + 0x29a0) + *(long *)(param_1 + 0x29a8);
      lVar20 = *(long *)(param_1 + 0x2968);
      lVar23 = *(long *)(param_1 + 0x2970);
    }
    if (lVar23 == lVar20) {
      lVar20 = 0;
    }
    else {
      lVar20 = *(long *)(lVar20 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
    }
    FUN_01495a54(param_1 + 0x29b0,lVar20,lVar18 + (uVar22 % 0x38) * 0x48);
    lVar18 = *(long *)(param_1 + 0x29a8);
    *(long *)(param_1 + 0x29a8) = lVar18 + 1;
    uVar16 = *(long *)(param_1 + 0x29a0) + lVar18;
    uVar22 = uVar16 % 0x38;
    lVar18 = *(long *)(*(long *)(param_1 + 0x2968) + (uVar16 / 0x38) * 8);
    puVar25 = (undefined1 *)(lVar18 + uVar22 * 0x48);
    local_d8 = CONCAT71(local_d8._1_7_,*puVar25);
    local_d0 = *(long **)(puVar25 + 8);
    if (local_d0 != (long *)0x0) {
      plVar27 = local_d0 + 10;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *(int *)plVar27 = (int)*plVar27 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    lVar18 = lVar18 + uVar22 * 0x48;
    uStack_b8 = *(undefined8 *)(lVar18 + 0x20);
    local_c8 = *(undefined8 *)(lVar18 + 0x10);
    local_c0 = *(long **)(lVar18 + 0x18);
    uVar26 = *(undefined8 *)(lVar18 + 0x38);
    local_b0 = *(undefined8 *)(lVar18 + 0x28);
    local_a8 = *(undefined8 *)(lVar18 + 0x30);
    uStack_98 = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x3e) >> 0x10);
    uStack_a0 = (undefined4)uVar26;
    local_9c._0_2_ = (undefined2)((ulong)uVar26 >> 0x20);
    local_9c._2_2_ = (undefined2)((ulong)uVar26 >> 0x30);
    FUN_0148f914(param_1,&local_d8);
    FUN_0148d838(param_1 + 0x28f0);
    if (local_d0 != (long *)0x0) {
      plVar27 = local_d0 + 10;
      do {
        iVar15 = (int)*plVar27 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *(int *)plVar27 = iVar15;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  return;
}


