/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1054c; name: FUN_01e1054c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1054c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong *puVar35;
  undefined8 *puVar36;
  long *plVar37;
  long lVar38;
  long *plVar39;
  long lVar40;
  ulong uVar41;
  undefined8 *puVar42;
  float fVar43;
  undefined8 in_d3;
  undefined8 local_178;
  undefined8 local_160 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140 [6];
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong *local_78;
  undefined8 uStack_70;
  
  plVar1 = (long *)(param_1 + 0xb0);
  if (*(long *)(param_1 + 0x108) == 0) {
    lVar38 = *(long *)(param_1 + 0x118);
    pbVar7 = PTR_DAT_043794d0;
    puVar36 = (undefined8 *)PTR_DAT_043794d8;
    puVar24 = (undefined8 *)PTR_DAT_0437a660;
    pbVar8 = PTR_DAT_0437a668;
  }
  else {
    plVar37 = *(long **)(param_1 + 0xe0);
    if (plVar37 != (long *)0x0) {
      plVar39 = *(long **)(param_1 + 0xe8);
      puVar36 = (undefined8 *)*plVar37;
      uVar28 = (**(code **)(*plVar39 + 0xc0))(plVar39);
      if ((uVar28 & 1) == 0) {
LAB_01e106fc:
        (**(code **)(*plVar39 + 0x18))(plVar39,plVar37,0x20,8);
      }
      else {
        lVar38 = tpidr_el0;
        if (*(char *)(lVar38 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar38 + 0x38d488) = 1;
          *(undefined8 *)(lVar38 + 0x38d478) = 0;
          *(undefined8 *)(lVar38 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar38 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar38 + 0x38d480) < 1) goto LAB_01e106fc;
        FUN_02bcc824(plVar39,plVar37,0x20,8);
      }
      if (puVar36 != (undefined8 *)0x0) {
        plVar39 = *(long **)(param_1 + 0xe8);
        plVar37 = (long *)*puVar36;
        uVar28 = (**(code **)(*plVar39 + 0xc0))(plVar39);
        if ((uVar28 & 1) == 0) {
LAB_01e1077c:
          (**(code **)(*plVar39 + 0x18))(plVar39,puVar36,0x20,8);
        }
        else {
          lVar38 = tpidr_el0;
          if (*(char *)(lVar38 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar38 + 0x38d488) = 1;
            *(undefined8 *)(lVar38 + 0x38d478) = 0;
            *(undefined8 *)(lVar38 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar38 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar38 + 0x38d480) < 1) goto LAB_01e1077c;
          FUN_02bcc824(plVar39,puVar36,0x20,8);
        }
        if (plVar37 != (long *)0x0) {
          plVar31 = *(long **)(param_1 + 0xe8);
          plVar39 = (long *)*plVar37;
          uVar28 = (**(code **)(*plVar31 + 0xc0))(plVar31);
          if ((uVar28 & 1) == 0) {
LAB_01e107fc:
            (**(code **)(*plVar31 + 0x18))(plVar31,plVar37,0x20,8);
          }
          else {
            lVar38 = tpidr_el0;
            if (*(char *)(lVar38 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar38 + 0x38d488) = 1;
              *(undefined8 *)(lVar38 + 0x38d478) = 0;
              *(undefined8 *)(lVar38 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar38 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar38 + 0x38d480) < 1) goto LAB_01e107fc;
            FUN_02bcc824(plVar31,plVar37,0x20,8);
          }
          if (plVar39 != (long *)0x0) {
            lVar38 = tpidr_el0;
            do {
              while( true ) {
                plVar37 = *(long **)(param_1 + 0xe8);
                plVar31 = (long *)*plVar39;
                uVar28 = (**(code **)(*plVar37 + 0xc0))(plVar37);
                if ((uVar28 & 1) != 0) break;
LAB_01e10ab8:
                (**(code **)(*plVar37 + 0x18))(plVar37,plVar39,0x20,8);
                plVar39 = plVar31;
                if (plVar31 == (long *)0x0) goto LAB_01e1081c;
              }
              if (*(char *)(lVar38 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar38 + 0x38d488) = 1;
                *(undefined8 *)(lVar38 + 0x38d478) = 0;
                *(undefined8 *)(lVar38 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar38 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar38 + 0x38d480) < 1) goto LAB_01e10ab8;
              FUN_02bcc824(plVar37,plVar39,0x20,8);
              plVar39 = plVar31;
            } while (plVar31 != (long *)0x0);
          }
        }
      }
    }
LAB_01e1081c:
    uVar28 = *(ulong *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (uVar28 != 0) {
      uVar25 = uVar28 & 3;
      if (uVar28 - 1 < 3) {
        lVar38 = 0;
      }
      else {
        lVar38 = 0;
        do {
          lVar40 = lVar38 * 8;
          lVar38 = lVar38 + 4;
          *(undefined8 *)(*plVar1 + lVar40) = 0;
          *(undefined8 *)(*plVar1 + lVar40 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar40 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar40 + 0x18) = 0;
        } while (uVar28 - uVar25 != lVar38);
      }
      if (uVar25 != 0) {
        lVar38 = lVar38 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar38) = 0;
          uVar25 = uVar25 - 1;
          lVar38 = lVar38 + 8;
        } while (uVar25 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    lVar38 = *(long *)(param_1 + 0x118);
    pbVar7 = PTR_DAT_043794d0;
    puVar36 = (undefined8 *)PTR_DAT_043794d8;
    puVar24 = (undefined8 *)PTR_DAT_0437a660;
    pbVar8 = PTR_DAT_0437a668;
  }
  PTR_DAT_043794d0 = pbVar7;
  PTR_DAT_043794d8 = (undefined *)puVar36;
  PTR_DAT_0437a660 = (undefined *)puVar24;
  PTR_DAT_0437a668 = pbVar8;
  if ((lVar38 != 0) && (*(int *)(lVar38 + 0xc) != 0)) {
    piVar3 = (int *)(lVar38 + 0xc);
    iVar18 = *(int *)(lVar38 + 0xc);
    do {
      puVar42 = *(undefined8 **)(lVar38 + 0x10);
      if (((*pbVar8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar8), iVar19 != 0)) {
        if (((*pbVar7 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar7), iVar19 != 0)) {
          uVar27 = FUN_0087f8f0();
          *puVar36 = uVar27;
          __cxa_guard_release(pbVar7);
        }
        *puVar24 = puVar36;
        __cxa_guard_release(pbVar8);
      }
      while( true ) {
        if (puVar42 == (undefined8 *)0x0) goto LAB_01e10584;
        if (puVar42 == puVar24) break;
        puVar42 = (undefined8 *)*puVar42;
      }
      iVar19 = *piVar3;
      if (iVar19 == iVar18) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar38 = *(long *)(lVar38 + 0x18);
          if (lVar38 != 0) {
            lVar40 = *(long *)(param_1 + 0x128);
            plVar37 = (long *)(lVar38 + -0x50);
            if ((lVar40 == 0) || (*(int *)(lVar40 + 0xc) == 0)) goto LAB_01e10be4;
            piVar3 = (int *)(lVar40 + 0xc);
            iVar18 = *(int *)(lVar40 + 0xc);
            goto LAB_01e10c88;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = iVar19;
    } while (iVar19 != 0);
  }
  goto LAB_01e10584;
joined_r0x01e10cf0:
  if (lVar33 != lVar4) {
    local_78 = (ulong *)0x0;
    uStack_70 = 0;
    FUN_00b63974(&local_78,lVar33);
    puVar35 = local_78;
    if (local_78 != (ulong *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar3 = (int *)((long)local_78 + 0xc);
        iVar18 = *(int *)((long)local_78 + 0xc);
        do {
          plVar39 = (long *)puVar35[2];
          if (((*PTR_DAT_0437a250 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar19 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar19 != 0)) {
              if (((*pbVar7 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar7), iVar19 != 0)) {
                uVar22 = FUN_0087f8f0();
                *puVar36 = uVar22;
                __cxa_guard_release(pbVar7);
              }
              *(undefined8 **)PTR_DAT_043795e0 = puVar36;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_0437a258 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a250);
          }
          while( true ) {
            if (plVar39 == (long *)0x0) goto LAB_01e11550;
            if (plVar39 == (long *)PTR_DAT_0437a258) break;
            plVar39 = (long *)*plVar39;
          }
          iVar19 = *piVar3;
          if (iVar19 == iVar18) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              uVar28 = puVar35[3];
              if (uVar28 != 0) {
                lVar32 = FUN_018382d4();
                if (((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x1f0), lVar32 == 0)) ||
                   (*(int *)(lVar32 + 0xc) == 0)) goto LAB_01e11078;
                piVar3 = (int *)(lVar32 + 0xc);
                iVar18 = *(int *)(lVar32 + 0xc);
                goto LAB_01e10e60;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = iVar19;
        } while (iVar19 != 0);
      }
      goto LAB_01e11550;
    }
    goto LAB_01e10d18;
  }
  goto LAB_01e115ec;
LAB_01e10e60:
  do {
    plVar39 = *(long **)(lVar32 + 0x10);
    lVar23 = FUN_00a3edb8();
    while( true ) {
      if (plVar39 == (long *)0x0) goto LAB_01e11078;
      if (plVar39 == (long *)lVar23) break;
      plVar39 = (long *)*plVar39;
    }
    iVar19 = *piVar3;
    if (iVar19 == iVar18) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar32 = *(long *)(lVar32 + 0x18);
        if (lVar32 != 0) {
          uVar20 = FUN_02a9d20c();
          lVar23 = *(long *)(lVar32 + 0x158);
          uVar20 = uVar20 & *(int *)(uVar28 + 0x310) == 0;
          uVar25 = local_178 >> 0x20;
          local_178 = CONCAT44((int)uVar25,uVar20);
          if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) goto LAB_01e11028;
          piVar3 = (int *)(lVar23 + 0xc);
          iVar18 = *(int *)(lVar23 + 0xc);
          goto LAB_01e10ef0;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar18 = iVar19;
  } while (iVar19 != 0);
  goto LAB_01e11078;
LAB_01e10ef0:
  do {
    plVar39 = *(long **)(lVar23 + 0x10);
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar19 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar19 != 0)) {
        if (((*pbVar7 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar7), iVar19 != 0)) {
          uVar22 = FUN_0087f8f0();
          *puVar36 = uVar22;
          __cxa_guard_release(pbVar7);
        }
        *(undefined8 **)PTR_DAT_043794c8 = puVar36;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    while( true ) {
      if (plVar39 == (long *)0x0) goto LAB_01e11028;
      if (plVar39 == (long *)PTR_DAT_043794b8) break;
      plVar39 = (long *)*plVar39;
    }
    iVar19 = *piVar3;
    if (iVar19 == iVar18) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01e10fd8;
      lVar23 = *(long *)(lVar23 + 0x18);
      if (lVar23 != 0) {
        *(char *)(lVar23 + 0x2ec) = (char)uVar20;
        lVar29 = *(long *)(lVar23 + 8);
        piVar3 = (int *)(lVar29 + 0xc);
        do {
          iVar18 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))();
        }
        goto LAB_01e11034;
      }
      break;
    }
    ClearExclusiveLocal();
LAB_01e10fd8:
    iVar18 = iVar19;
  } while (iVar19 != 0);
LAB_01e11028:
  DAT_0000033c = (char)uVar20;
LAB_01e11034:
  lVar23 = *(long *)(lVar32 + 8);
  piVar3 = (int *)(lVar23 + 0xc);
  do {
    iVar18 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar18 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*(long *)(lVar32 + -0x50) + 0x20))();
  }
  if (uVar20 == 0) goto LAB_01e1151c;
LAB_01e11078:
  local_bc = 0;
  local_e0 = 0x7f7fffee;
  local_c8 = 0xffffffff;
  local_110[0] = 0;
  local_d8 = 0xffffffffffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0xffffff;
  local_c4 = 0xf;
  local_c0 = 0xffff;
  local_a0 = 0xffffffff;
  local_a8 = 0xffffff;
  local_9c = 0xf;
  local_98 = 0xffff;
  local_94 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_b8 = 0;
  uStack_b0 = 0xffffffffffffffff;
  local_90 = 0;
  uStack_88 = 0;
  uVar21 = FUN_01e481b0(0xe,0xd);
  puVar24 = (undefined8 *)FUN_0183b964((long *)(uVar28 - 0x50));
  local_150 = CONCAT44((float)((ulong)*puVar24 >> 0x20) + (float)((ulong)uVar27 >> 0x20),
                       (float)*puVar24 + (float)uVar27);
  uStack_148 = CONCAT44((float)((ulong)puVar24[1] >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                        (float)puVar24[1] + (float)uVar13);
  (**(code **)(*(long *)(lVar40 + -0x50) + 0x40))();
  local_160[0] = in_d3;
  uVar25 = FUN_01e434f4(plVar37,&local_150,local_160,uVar21,local_140);
  if ((uVar25 & 1) != 0) {
    if (local_78 == (ulong *)0x0) {
      uVar25 = 0;
      uVar41 = *(ulong *)(param_1 + 0xb8);
    }
    else {
      uVar25 = *local_78;
      uVar41 = *(ulong *)(param_1 + 0xb8);
    }
    if (uVar41 != 0) {
      uVar34 = uVar41 - (uVar41 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
      uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar34 < 2) {
        local_178 = uVar41 - 1 & uVar25;
      }
      else {
        local_178 = uVar25;
        if (uVar41 <= uVar25) {
          uVar26 = 0;
          if (uVar41 != 0) {
            uVar26 = uVar25 / uVar41;
          }
          local_178 = uVar25 - uVar26 * uVar41;
        }
      }
      plVar39 = *(long **)(*plVar1 + local_178 * 8);
      if (plVar39 != (long *)0x0) {
        if (uVar34 < 2) {
          do {
            plVar39 = (long *)*plVar39;
            if ((plVar39 == (long *)0x0) ||
               (plVar39[1] != uVar25 && (plVar39[1] & uVar41 - 1) != local_178)) goto LAB_01e11240;
          } while (plVar39[2] != uVar25);
        }
        else {
          do {
            plVar39 = (long *)*plVar39;
            if (plVar39 == (long *)0x0) goto LAB_01e11240;
            uVar34 = plVar39[1];
            if (uVar34 != uVar25) {
              if (uVar41 <= uVar34) {
                uVar26 = 0;
                if (uVar41 != 0) {
                  uVar26 = uVar34 / uVar41;
                }
                uVar34 = uVar34 - uVar26 * uVar41;
              }
              if (uVar34 != local_178) goto LAB_01e11240;
            }
          } while (plVar39[2] != uVar25);
        }
        goto LAB_01e11510;
      }
    }
LAB_01e11240:
    plVar39 = (long *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
                                (*(long **)(param_1 + 0xe8),0x20,8);
    if (plVar39 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xe8) + 0xb8))();
    }
    uVar22 = *(undefined8 *)(param_1 + 0xe8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar18 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar9 = PTR_DAT_04379528;
      if (iVar18 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar32 == 0) {
      plVar39[2] = uVar25;
      *(undefined1 *)(plVar39 + 3) = 1;
    }
    else {
      if (0xf < *(ulong *)(lVar32 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar22;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      plVar39[2] = uVar25;
      *(undefined1 *)(plVar39 + 3) = 1;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
    }
    *plVar39 = 0;
    plVar39[1] = uVar25;
    fVar43 = (float)(*(long *)(param_1 + 0x108) + 1);
    if ((uVar41 == 0) || (*(float *)(param_1 + 0x110) * (float)uVar41 < fVar43)) {
      uVar41 = (ulong)(uVar41 < 3 || (uVar41 & uVar41 - 1) != 0) | uVar41 << 1;
      uVar34 = (ulong)(fVar43 / *(float *)(param_1 + 0x110));
      if (uVar34 <= uVar41) {
        uVar34 = uVar41;
      }
      if (uVar34 - 1 == 0) {
        uVar34 = 2;
      }
      else if ((uVar34 & uVar34 - 1) != 0) {
        uVar34 = std::__next_prime(uVar34);
      }
      uVar41 = *(ulong *)(param_1 + 0xb8);
      if (uVar41 < uVar34) {
        uVar26 = uVar34;
LAB_01e1144c:
        FUN_01e14924(plVar1,uVar26);
      }
      else if (uVar34 < uVar41) {
        uVar26 = (ulong)((float)*(ulong *)(param_1 + 0x108) / *(float *)(param_1 + 0x110));
        if ((uVar41 < 3) ||
           (uVar30 = uVar41 - (uVar41 >> 1 & 0x5555555555555555),
           uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333),
           1 < (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar26 = std::__next_prime(uVar26);
        }
        else if (1 < uVar26) {
          uVar26 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar26 - 1) & 0x3f);
        }
        if (uVar26 <= uVar34) {
          uVar26 = uVar34;
        }
        if (uVar26 < uVar41) goto LAB_01e1144c;
      }
      uVar41 = *(ulong *)(param_1 + 0xb8);
      if ((uVar41 & uVar41 - 1) == 0) {
        local_178 = uVar41 - 1 & uVar25;
      }
      else {
        if (uVar25 < uVar41) {
          local_178 = uVar25;
          goto LAB_01e11484;
        }
        uVar34 = 0;
        if (uVar41 != 0) {
          uVar34 = uVar25 / uVar41;
        }
        local_178 = uVar25 - uVar34 * uVar41;
      }
    }
LAB_01e11484:
    plVar31 = *(long **)(*plVar1 + local_178 * 8);
    if (plVar31 == (long *)0x0) {
      plVar31 = (long *)(param_1 + 0xe0);
      *plVar39 = *plVar31;
      *plVar31 = (long)plVar39;
      *(long **)(*(long *)(param_1 + 0xb0) + local_178 * 8) = plVar31;
      if (*plVar39 != 0) {
        uVar25 = *(ulong *)(*plVar39 + 8);
        if ((uVar41 & uVar41 - 1) == 0) {
          uVar25 = uVar25 & uVar41 - 1;
        }
        else if (uVar41 <= uVar25) {
          uVar34 = 0;
          if (uVar41 != 0) {
            uVar34 = uVar25 / uVar41;
          }
          uVar25 = uVar25 - uVar34 * uVar41;
        }
        plVar31 = (long *)(*plVar1 + uVar25 * 8);
        goto LAB_01e114fc;
      }
    }
    else {
      *plVar39 = *plVar31;
LAB_01e114fc:
      *plVar31 = (long)plVar39;
    }
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  }
LAB_01e11510:
  FUN_032c7b9c(local_110);
LAB_01e1151c:
  lVar32 = *(long *)(uVar28 + 8);
  piVar3 = (int *)(lVar32 + 0xc);
  do {
    iVar18 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar18 + -1 == 0) {
    *(undefined8 *)(lVar32 + 0x18) = 0;
    (**(code **)(*(long *)(uVar28 - 0x50) + 0x20))();
  }
LAB_01e11550:
  puVar35 = local_78;
  if (local_78 != (ulong *)0x0) {
    puVar2 = local_78 + 1;
    do {
      iVar18 = (int)*puVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *(int *)puVar2 = iVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar18 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar32 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar32;
      local_140[0] = *puVar35;
      FUN_02a44274(lVar32 + 0xd8,local_140);
    }
  }
LAB_01e10d18:
  lVar33 = lVar33 + 0x10;
  goto joined_r0x01e10cf0;
LAB_01e115ec:
  lVar33 = *(long *)(lVar40 + 8);
  piVar3 = (int *)(lVar33 + 0xc);
  do {
    iVar18 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar18 + -1 == 0) {
    *(undefined8 *)(lVar33 + 0x18) = 0;
    (**(code **)(*(long *)(lVar40 + -0x50) + 0x20))();
  }
  goto LAB_01e10be4;
LAB_01e10c88:
  do {
    plVar39 = *(long **)(lVar40 + 0x10);
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar19 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar19 != 0)) {
        if (((*pbVar7 & 1) == 0) && (iVar19 = __cxa_guard_acquire(pbVar7), iVar19 != 0)) {
          uVar27 = FUN_0087f8f0();
          *puVar36 = uVar27;
          __cxa_guard_release(pbVar7);
        }
        *(undefined8 **)PTR_DAT_043794c8 = puVar36;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    while( true ) {
      if (plVar39 == (long *)0x0) goto LAB_01e10be4;
      if (plVar39 == (long *)PTR_DAT_043794b8) break;
      plVar39 = (long *)*plVar39;
    }
    iVar19 = *piVar3;
    if (iVar19 == iVar18) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      uVar13 = _UNK_03889978;
      uVar27 = _DAT_03889970;
      if (cVar5 == '\0') {
        lVar40 = *(long *)(lVar40 + 0x18);
        if (lVar40 != 0) {
          lVar33 = *(long *)(param_1 + 0x78);
          lVar4 = *(long *)(param_1 + 0x80);
          goto joined_r0x01e10cf0;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar18 = iVar19;
  } while (iVar19 != 0);
LAB_01e10be4:
  lVar38 = *(long *)(lVar38 + 8);
  piVar3 = (int *)(lVar38 + 0xc);
  do {
    iVar18 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar18 + -1 == 0) {
    *(undefined8 *)(lVar38 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
  }
LAB_01e10584:
  puVar36 = *(undefined8 **)(param_1 + 0x78);
  if (*(undefined8 **)(param_1 + 0x80) != puVar36) {
    puVar24 = *(undefined8 **)(param_1 + 0x80) + -2;
    puVar35 = (ulong *)*puVar24;
    puVar9 = PTR_DAT_04379498;
    puVar10 = PTR_DAT_043794a0;
    puVar11 = PTR_DAT_043794a8;
    puVar12 = PTR_LAB_04379590;
    puVar14 = PTR_LAB_04379590;
    puVar15 = PTR_DAT_043794a8;
    puVar16 = PTR_DAT_043794a0;
    puVar17 = PTR_DAT_04379498;
    if (puVar35 != (ulong *)0x0) {
      puVar2 = puVar35 + 1;
      do {
        iVar18 = (int)*puVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *(int *)puVar2 = iVar18;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar9 = PTR_DAT_04379498;
      puVar10 = PTR_DAT_043794a0;
      puVar11 = PTR_DAT_043794a8;
      puVar12 = PTR_LAB_04379590;
      puVar14 = PTR_LAB_04379590;
      puVar15 = PTR_DAT_043794a8;
      puVar16 = PTR_DAT_043794a0;
      puVar17 = PTR_DAT_04379498;
      if (iVar18 == 0) {
        puVar35[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar38 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar38;
        local_140[0] = *puVar35;
        FUN_02a44274(lVar38 + 0xd8,local_140);
        puVar9 = PTR_DAT_04379498;
        puVar10 = PTR_DAT_043794a0;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_LAB_04379590;
        puVar14 = PTR_LAB_04379590;
        puVar15 = PTR_DAT_043794a8;
        puVar16 = PTR_DAT_043794a0;
        puVar17 = PTR_DAT_04379498;
      }
    }
    while( true ) {
      PTR_DAT_04379498 = puVar17;
      PTR_DAT_043794a0 = puVar16;
      PTR_DAT_043794a8 = puVar15;
      PTR_LAB_04379590 = puVar14;
      puVar14 = PTR_LAB_04379590;
      puVar15 = PTR_DAT_043794a8;
      puVar16 = PTR_DAT_043794a0;
      puVar17 = PTR_DAT_04379498;
      PTR_DAT_04379498 = puVar9;
      PTR_DAT_043794a0 = puVar10;
      PTR_DAT_043794a8 = puVar11;
      PTR_LAB_04379590 = puVar12;
      if (puVar24 == puVar36) break;
      puVar24 = puVar24 + -2;
      puVar35 = (ulong *)*puVar24;
      if (puVar35 != (ulong *)0x0) {
        puVar2 = puVar35 + 1;
        do {
          iVar18 = (int)*puVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *(int *)puVar2 = iVar18;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar9 = PTR_DAT_04379498;
        puVar10 = PTR_DAT_043794a0;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_LAB_04379590;
        if (iVar18 == 0) {
          puVar35[2] = 0;
          if (((*puVar17 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar17), iVar18 != 0)) {
            FUN_00100250(puVar14,puVar16,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar17);
          }
          lVar38 = *(long *)puVar16;
          *(long *)puVar15 = lVar38;
          local_140[0] = *puVar35;
          FUN_02a44274(lVar38 + 0xd8,local_140);
          puVar9 = PTR_DAT_04379498;
          puVar10 = PTR_DAT_043794a0;
          puVar11 = PTR_DAT_043794a8;
          puVar12 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0x80) = puVar36;
  return;
}


