/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9d1ec; name: FUN_01b9d1ec
 */


/* WARNING: Removing unreachable block (ram,0x01b9d5d4) */

undefined8 FUN_01b9d1ec(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  int *piVar23;
  ulong *puVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  undefined8 uVar38;
  char *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  long local_130 [12];
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  plVar37 = *(long **)(param_1 + 0x5e8);
  if (plVar37 != (long *)0x0) {
    plVar1 = plVar37 + 10;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar15 = FUN_02c6d5b0(plVar37[0x13]);
    do {
      iVar16 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
    plVar37 = *(long **)(param_1 + 0x5e8);
    if (plVar37 != (long *)0x0) {
      cVar6 = *(char *)(param_1 + 0x8d1);
      plVar1 = plVar37 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      iVar16 = FUN_02c6b1c0(plVar37[0x13],0);
      iVar17 = FUN_02c6b1c0(plVar37[0x13],1);
      uVar27 = 2;
      if (iVar16 == 0) {
        uVar27 = 1;
      }
      uVar28 = (uint)(iVar16 != 0);
      if (iVar17 != 0) {
        uVar28 = uVar27;
      }
      iVar16 = FUN_02c6b1c0(plVar37[0x13],2);
      if (iVar16 != 0) {
        uVar28 = uVar28 + 1;
      }
      iVar16 = FUN_02c6b1c0(plVar37[0x13],3);
      if (uVar28 != -(uint)(iVar16 != 0)) {
        uVar27 = 0;
        do {
          iVar16 = FUN_02c6b1c0(plVar37[0x13],uVar27);
          if (iVar16 != 0) {
            if (((*PTR_DAT_0437a708 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar17 != 0)) {
              FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a708);
            }
            uVar38 = *(undefined8 *)PTR_DAT_0437a710;
            uVar28 = uVar15 & 1;
            *(undefined8 *)PTR_DAT_0437a718 = uVar38;
            uVar20 = FUN_010ab2e8(uVar38,iVar16,uVar28,cVar6 != '\0');
            if ((uVar20 & 1) != 0) {
              local_148 = (code *)0x0;
              local_150 = (code *)CONCAT44(local_150._4_4_,iVar16);
              uVar18 = FUN_0185bf30(iVar16,uVar28,cVar6 != '\0');
              local_150 = (code *)CONCAT44(uVar18,(undefined4)local_150);
              pcVar21 = (char *)FUN_010ab0e0(uVar38,iVar16,uVar28,cVar6 != '\0');
              if (*pcVar21 == '\0') {
                piVar23 = *(int **)(pcVar21 + 0x10);
                if (piVar23 == (int *)0x0) {
                  piVar23 = *(int **)(pcVar21 + 8);
                }
                uVar18 = 0;
                if (0x1c < *(ushort *)((long)piVar23 - (long)*piVar23)) {
                  uVar5 = ((ushort *)((long)piVar23 - (long)*piVar23))[0xe];
joined_r0x01b9dc64:
                  uVar18 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar18 = *(undefined4 *)((long)piVar23 + (ulong)uVar5);
                  }
                }
              }
              else {
                piVar23 = *(int **)(pcVar21 + 0x18);
                uVar18 = 0;
                if (0x18 < *(ushort *)((long)piVar23 - (long)*piVar23)) {
                  uVar5 = ((ushort *)((long)piVar23 - (long)*piVar23))[0xc];
                  goto joined_r0x01b9dc64;
                }
              }
              local_148 = (code *)CONCAT44(uVar27,uVar18);
              FUN_01ba0df4(param_1 + 0x918,&local_150);
            }
          }
          uVar27 = uVar27 + 1;
          iVar16 = FUN_02c6b1c0(plVar37[0x13],0);
          iVar17 = FUN_02c6b1c0(plVar37[0x13],1);
          uVar28 = 2;
          if (iVar16 == 0) {
            uVar28 = 1;
          }
          uVar4 = (uint)(iVar16 != 0);
          if (iVar17 != 0) {
            uVar4 = uVar28;
          }
          iVar16 = FUN_02c6b1c0(plVar37[0x13],2);
          if (iVar16 != 0) {
            uVar4 = uVar4 + 1;
          }
          iVar16 = FUN_02c6b1c0(plVar37[0x13],3);
          if (iVar16 != 0) {
            uVar4 = uVar4 + 1;
          }
        } while (uVar27 < uVar4);
      }
      do {
        iVar16 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar37 + 0x10))(plVar37);
      }
    }
  }
  local_158 = (char *)(param_1 + 0x8d1);
  FUN_01ba107c(param_1,1);
  FUN_01ba107c(param_1,3);
  local_150 = FUN_01ba6928;
  local_148 = FUN_01ba6934;
  local_140 = &LAB_01ba6938;
  puStack_138 = &LAB_01ba6944;
  iVar16 = *(int *)(param_1 + 0x950);
  local_130[0] = param_1;
  if (iVar16 < 2) {
    iVar17 = 1;
    do {
      (*local_150)(local_130);
      pcVar14 = local_148;
      do {
        if (2 - iVar16 <= iVar17) {
          if (local_148 != (code *)0x0) {
            local_140 = (undefined1 *)0x0;
            puStack_138 = (undefined1 *)0x0;
            local_150 = (code *)0x0;
            local_148 = (code *)0x0;
            (*pcVar14)(local_130);
          }
          goto LAB_01b9d5fc;
        }
        iVar17 = iVar17 + 1;
      } while (local_150 == (code *)0x0);
    } while( true );
  }
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_150 = (code *)0x0;
  local_148 = (code *)0x0;
  plStack_98 = *(long **)(param_1 + 8);
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0xfffffffffffffff;
  uStack_88 = 0;
  lVar36 = *(long *)(param_1 + 0x918);
  lVar35 = *(long *)(param_1 + 0x920);
  uVar20 = local_b0;
  plVar37 = plStack_98;
  if (lVar36 != lVar35) {
    if (*(int *)(lVar36 + 4) == 2) {
      FUN_01ba1368(&local_b0,lVar36);
    }
    if (lVar36 + 0x10 != lVar35) {
      if (*(int *)(lVar36 + 0x14) == 2) {
        FUN_01ba1368(&local_b0);
      }
      if (lVar36 + 0x20 != lVar35) {
        if (*(int *)(lVar36 + 0x24) == 2) {
          FUN_01ba1368(&local_b0);
        }
        for (lVar36 = lVar36 + 0x30; lVar36 != lVar35; lVar36 = lVar36 + 0x10) {
          if (*(int *)(lVar36 + 4) == 2) {
            FUN_01ba1368(&local_b0,lVar36);
          }
        }
      }
    }
    lVar36 = local_a8 - local_b0;
    uVar20 = local_b0;
    plVar37 = plStack_98;
    if (lVar36 != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379678), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar35 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar35;
      if (lVar36 == 0x10) {
        uVar22 = 0;
      }
      else {
        uVar20 = lVar36 >> 4;
        lVar36 = 0x3f;
        if ((0x7fffffffffffffffU >> (LZCOUNT(uVar20) & 0x3fU) & uVar20) != 0) {
          lVar36 = 0x40;
        }
        puVar24 = *(ulong **)(lVar35 + 0xd8);
        uVar30 = lVar36 - LZCOUNT(uVar20);
        uVar22 = uVar30 >> 6;
        if ((uVar30 & 0x3f) != 0) {
          uVar22 = uVar22 + 1;
        }
        if (uVar30 < uVar22) {
          uVar30 = 0;
        }
        else {
          uVar31 = 0;
          if (uVar22 != 0) {
            uVar31 = uVar30 / uVar22;
          }
          uVar30 = 0xffffffffffffffff >> (-uVar31 & 0x3f);
        }
        uVar31 = *puVar24;
        uVar33 = puVar24[1];
        do {
          uVar34 = uVar31 ^ uVar33;
          uVar22 = uVar31 + uVar33;
          uVar33 = uVar34 >> 0x1b | uVar34 << 0x25;
          uVar22 = uVar22 & uVar30;
          uVar31 = uVar34 ^ (uVar31 >> 0x28 | uVar31 << 0x18) ^ uVar34 << 0x10;
        } while (uVar20 <= uVar22);
        *puVar24 = uVar31;
        puVar24[1] = uVar33;
      }
      puVar9 = PTR_DAT_04379660;
      local_d0 = (long *)0x52be8a267e6163d2;
      pcStack_c8 = "override_near_to_medium_probability";
      local_c0 = 0x23;
      local_b8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar11 = PTR_DAT_04379670;
      puVar10 = PTR_DAT_04379668;
      lVar36 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar36;
      puVar29 = *(undefined1 **)(lVar36 + 0x60);
      if (puVar29 != (undefined1 *)0x0) {
        uVar20 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          puVar25 = (undefined1 *)((ulong)(puVar29 + -1) & 0x5aed9c38b7dfcc60);
        }
        else {
          puVar25 = &DAT_5aed9c38b7dfcc60;
          if (puVar29 < (undefined1 *)0x5aed9c38b7dfcc61) {
            uVar30 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar30 = 0x5aed9c38b7dfcc60 / (ulong)puVar29;
            }
            puVar25 = &DAT_5aed9c38b7dfcc60 + -(uVar30 * (long)puVar29);
          }
        }
        plVar37 = *(long **)(*(long *)(lVar36 + 0x58) + (long)puVar25 * 8);
        if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
          if (uVar20 < 2) {
            do {
              if ((undefined1 *)plVar37[1] == &DAT_5aed9c38b7dfcc60) {
                if ((undefined1 *)plVar37[2] == &DAT_5aed9c38b7dfcc60) goto LAB_01b9d88c;
              }
              else if ((undefined1 *)((ulong)plVar37[1] & (ulong)(puVar29 + -1)) != puVar25)
              goto LAB_01b9dcd0;
              plVar37 = (long *)*plVar37;
              iVar16 = 0;
            } while (plVar37 != (long *)0x0);
            goto joined_r0x01b9dd2c;
          }
          do {
            puVar32 = (undefined1 *)plVar37[1];
            if (puVar32 == &DAT_5aed9c38b7dfcc60) {
              if ((undefined1 *)plVar37[2] == &DAT_5aed9c38b7dfcc60) goto LAB_01b9d88c;
            }
            else {
              if (puVar29 <= puVar32) {
                uVar20 = 0;
                if (puVar29 != (undefined1 *)0x0) {
                  uVar20 = (ulong)puVar32 / (ulong)puVar29;
                }
                puVar32 = puVar32 + -(uVar20 * (long)puVar29);
              }
              if (puVar32 != puVar25) break;
            }
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
      }
      goto LAB_01b9dcd0;
    }
  }
joined_r0x01b9dc90:
  local_b0 = uVar20;
  plStack_98 = plVar37;
  if (uVar20 != 0) {
    lVar36 = local_a0 - uVar20;
    local_a8 = uVar20;
    uVar22 = (**(code **)(*plVar37 + 0xc0))(plVar37);
    if ((uVar22 & 1) != 0) {
      lVar35 = tpidr_el0;
      if (*(char *)(lVar35 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar35 + 0x38d488) = 1;
        *(undefined8 *)(lVar35 + 0x38d478) = 0;
        *(undefined8 *)(lVar35 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar35 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar35 + 0x38d480)) {
        FUN_02bcc824(plVar37,uVar20,lVar36,4);
        goto LAB_01b9d5fc;
      }
    }
    (**(code **)(*plVar37 + 0x18))(plVar37,uVar20,lVar36,4);
  }
LAB_01b9d5fc:
  if (*(long *)(param_1 + 0x8e8) != *(long *)(param_1 + 0x8e0)) {
    FUN_01ba6950();
    goto LAB_01b9d610;
  }
  plVar37 = *(long **)(param_1 + 0x5e8);
  if (plVar37 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    plVar1 = plVar37 + 10;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar15 = FUN_02c6d5b0(plVar37[0x13]);
    do {
      iVar16 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
  }
  cVar6 = *local_158;
  local_a8 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0xa5);
  uVar18 = FUN_0185bf30(0xa5,uVar15 & 1,cVar6);
  local_b0 = CONCAT44(uVar18,(undefined4)local_b0);
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar38 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar38;
  pcVar21 = (char *)FUN_010ab0e0(uVar38,local_b0 & 0xffffffff,uVar15 & 1,cVar6 != '\0');
  if (*pcVar21 == '\0') {
    piVar23 = *(int **)(pcVar21 + 0x10);
    if (piVar23 == (int *)0x0) {
      piVar23 = *(int **)(pcVar21 + 8);
    }
    uVar18 = 0;
    if (0x1c < *(ushort *)((long)piVar23 - (long)*piVar23)) {
      uVar5 = ((ushort *)((long)piVar23 - (long)*piVar23))[0xe];
joined_r0x01b9ddac:
      uVar18 = 0;
      if ((ulong)uVar5 != 0) {
        uVar18 = *(undefined4 *)((long)piVar23 + (ulong)uVar5);
      }
    }
  }
  else {
    piVar23 = *(int **)(pcVar21 + 0x18);
    uVar18 = 0;
    if (0x18 < *(ushort *)((long)piVar23 - (long)*piVar23)) {
      uVar5 = ((ushort *)((long)piVar23 - (long)*piVar23))[0xc];
      goto joined_r0x01b9ddac;
    }
  }
  local_a8 = CONCAT44(local_a8._4_4_,uVar18);
  FUN_01ba0df4(param_1 + 0x8e0,&local_b0);
  *(int *)(param_1 + 0x950) = *(int *)(param_1 + 0x950) + 1;
LAB_01b9d610:
  local_150 = (code *)0x0;
  local_148 = (code *)0x0;
  FUN_00ac3fa4(&local_150,param_1 + 0x248);
  FUN_0099c748(&local_d0,&local_150);
  puVar24 = (ulong *)local_150;
  if (local_150 != (code *)0x0) {
    puVar2 = (ulong *)((long)local_150 + 8);
    do {
      iVar16 = (int)*puVar2 + -1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(int *)puVar2 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      *(ulong *)((long)local_150 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar36 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar36;
      local_b0 = *puVar24;
      FUN_02a44274(lVar36 + 0xd8,&local_b0);
    }
  }
  if (local_d0 != (long *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (code *)0x0;
    FUN_01a2bf84(&local_150,local_d0 + 0xb9);
    puVar24 = (ulong *)local_150;
    puVar13 = PTR_DAT_0437a3d0;
    puVar12 = PTR_DAT_0437a3c8;
    puVar11 = PTR_DAT_043795e0;
    puVar10 = PTR_DAT_043794d8;
    puVar9 = PTR_DAT_043794d0;
    if (local_150 != (code *)0x0) {
      if (*(int *)((long)local_150 + 0xc) != 0) {
        piVar23 = (int *)((long)local_150 + 0xc);
        iVar16 = *(int *)((long)local_150 + 0xc);
        do {
          plVar37 = (long *)puVar24[2];
          if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar17 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar9), iVar17 != 0)) {
                uVar38 = FUN_0087f8f0();
                *(undefined8 *)puVar10 = uVar38;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)puVar11 = puVar10;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar13 = puVar11;
            __cxa_guard_release(puVar12);
          }
          while( true ) {
            if (plVar37 == (long *)0x0) goto LAB_01b9e110;
            if (plVar37 == (long *)puVar13) break;
            plVar37 = (long *)*plVar37;
          }
          iVar17 = *piVar23;
          if (iVar17 == iVar16) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar8) {
              *piVar23 = iVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              uVar20 = puVar24[3];
              plVar37 = (long *)0x0;
              puVar24 = (ulong *)local_150;
              if (uVar20 != 0) {
                plVar37 = (long *)(uVar20 - 0x50);
              }
              goto joined_r0x01b9e03c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar17;
        } while (iVar17 != 0);
      }
LAB_01b9e110:
      plVar37 = (long *)0x0;
      puVar24 = (ulong *)local_150;
joined_r0x01b9e03c:
      local_150 = (code *)puVar24;
      if (puVar24 != (ulong *)0x0) {
        puVar2 = puVar24 + 1;
        do {
          iVar16 = (int)*puVar2 + -1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *(int *)puVar2 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          puVar24[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_b0 = *puVar24;
          FUN_02a44274(lVar36 + 0xd8,&local_b0);
        }
      }
      if (plVar37 != (long *)0x0) {
        FUN_01a53e38(plVar37,*(undefined4 *)(param_1 + 0xaa8));
        lVar36 = plVar37[0xb];
        piVar23 = (int *)(lVar36 + 0xc);
        do {
          iVar16 = *piVar23;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar8) {
            *piVar23 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar36 + 0x18) = 0;
          (**(code **)(*plVar37 + 0x20))(plVar37);
        }
      }
    }
    if (local_d0 != (long *)0x0) {
      lVar36 = local_d0[0xb];
      piVar23 = (int *)(lVar36 + 0xc);
      do {
        iVar16 = *piVar23;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar8) {
          *piVar23 = iVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar36 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
      }
    }
  }
  return 1;
LAB_01b9d88c:
  plVar37 = (long *)plVar37[3];
  if (plVar37 == (long *)0x0) {
LAB_01b9dcd0:
    iVar16 = 0;
  }
  else {
    plVar1 = plVar37 + 10;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar16 = FUN_00d78f50(plVar37,&local_d0);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar17;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
  }
joined_r0x01b9dd2c:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d0 = (long *)0x9980dd942cabec39;
  pcStack_c8 = "override_far_to_medium_probability";
  local_c0 = 0x22;
  local_b8 = (long *)0x0;
  if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar36 = *(long *)puVar10;
  *(long *)puVar11 = lVar36;
  puVar29 = *(undefined1 **)(lVar36 + 0x60);
  if (puVar29 != (undefined1 *)0x0) {
    uVar20 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      puVar25 = (undefined1 *)((ulong)(puVar29 + -1) & 0x5aed9c38b7dfcc60);
    }
    else {
      puVar25 = &DAT_5aed9c38b7dfcc60;
      if (puVar29 < (undefined1 *)0x5aed9c38b7dfcc61) {
        uVar30 = 0;
        if (puVar29 != (undefined1 *)0x0) {
          uVar30 = 0x5aed9c38b7dfcc60 / (ulong)puVar29;
        }
        puVar25 = &DAT_5aed9c38b7dfcc60 + -(uVar30 * (long)puVar29);
      }
    }
    plVar37 = *(long **)(*(long *)(lVar36 + 0x58) + (long)puVar25 * 8);
    if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if ((undefined1 *)plVar37[1] == &DAT_5aed9c38b7dfcc60) {
            if ((undefined1 *)plVar37[2] == &DAT_5aed9c38b7dfcc60) goto LAB_01b9d99c;
          }
          else if ((undefined1 *)((ulong)plVar37[1] & (ulong)(puVar29 + -1)) != puVar25)
          goto LAB_01b9dd00;
          plVar37 = (long *)*plVar37;
          iVar17 = 0;
        } while (plVar37 != (long *)0x0);
        goto joined_r0x01b9dd48;
      }
      do {
        puVar32 = (undefined1 *)plVar37[1];
        if (puVar32 == &DAT_5aed9c38b7dfcc60) {
          if ((undefined1 *)plVar37[2] == &DAT_5aed9c38b7dfcc60) goto LAB_01b9d99c;
        }
        else {
          if (puVar29 <= puVar32) {
            uVar20 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar20 = (ulong)puVar32 / (ulong)puVar29;
            }
            puVar32 = puVar32 + -(uVar20 * (long)puVar29);
          }
          if (puVar32 != puVar25) break;
        }
        plVar37 = (long *)*plVar37;
      } while (plVar37 != (long *)0x0);
    }
  }
LAB_01b9dd00:
  iVar17 = 0;
  goto joined_r0x01b9dd48;
LAB_01b9d99c:
  plVar37 = (long *)plVar37[3];
  if (plVar37 == (long *)0x0) goto LAB_01b9dd00;
  plVar1 = plVar37 + 10;
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  iVar17 = FUN_00d78f50(plVar37,&local_d0);
  do {
    iVar19 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar37 + 0x10))(plVar37);
  }
joined_r0x01b9dd48:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  iVar19 = FUN_01ba15f0();
  uVar20 = local_b0;
  plVar37 = plStack_98;
  if (iVar19 < iVar16) {
    for (puVar26 = *(undefined8 **)(param_1 + 0x8e0); puVar26 != *(undefined8 **)(param_1 + 0x8e8);
        puVar26 = puVar26 + 2) {
      if (*(int *)((long)puVar26 + 4) == 1) goto LAB_01b9dc7c;
    }
  }
  else if (iVar19 < iVar17 + iVar16) {
    for (puVar26 = *(undefined8 **)(param_1 + 0x8e0); puVar26 != *(undefined8 **)(param_1 + 0x8e8);
        puVar26 = puVar26 + 2) {
      if (*(int *)((long)puVar26 + 4) == 3) goto LAB_01b9dc7c;
    }
  }
  goto joined_r0x01b9dc90;
LAB_01b9dc7c:
  puVar3 = (undefined8 *)(local_b0 + uVar22 * 0x10);
  uVar38 = puVar3[1];
  *puVar26 = *puVar3;
  puVar26[1] = uVar38;
  goto joined_r0x01b9dc90;
}


