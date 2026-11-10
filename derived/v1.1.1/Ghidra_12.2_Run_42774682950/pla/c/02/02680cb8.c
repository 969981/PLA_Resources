/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02680cb8; name: FUN_02680cb8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02680cb8(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  float fVar29;
  undefined8 extraout_d0;
  undefined8 uVar30;
  undefined8 extraout_d0_00;
  float fVar32;
  undefined1 auVar31 [16];
  undefined8 extraout_var;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  uVar38 = param_4._8_8_;
  uVar37 = param_4._0_8_;
  uVar36 = param_3._8_8_;
  uVar22 = param_3._0_8_;
  local_88 = (long *)0x0;
  pcStack_80 = (char *)0x0;
  auVar31 = FUN_00af7e30(&local_88,param_5 + 0x8a8);
  plVar28 = local_88;
  puVar12 = PTR_DAT_0437a558;
  puVar11 = PTR_DAT_0437a550;
  if (local_88 == (long *)0x0) {
LAB_02680cf4:
    uVar5 = false;
  }
  else {
    if (*(int *)((long)local_88 + 0xc) != 0) {
      piVar1 = (int *)((long)local_88 + 0xc);
      iVar17 = *(int *)((long)local_88 + 0xc);
      do {
        plVar25 = (long *)plVar28[2];
        if ((*puVar11 & 1) == 0) {
          iVar19 = __cxa_guard_acquire(puVar11);
          auVar31._8_8_ = extraout_var;
          auVar31._0_8_ = extraout_d0;
          if (iVar19 != 0) {
            uVar20 = FUN_00aa0310();
            *(undefined8 *)puVar12 = uVar20;
            auVar31 = __cxa_guard_release(puVar11);
          }
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_02680f34;
          if (plVar25 == (long *)puVar12) break;
          plVar25 = (long *)*plVar25;
        }
        iVar19 = *piVar1;
        if (iVar19 == iVar17) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar23 = plVar28[3];
            local_a8 = (long *)0x0;
            plVar28 = local_88;
            if (lVar23 != 0) {
              local_a8 = (long *)(lVar23 + -0x50);
            }
            goto joined_r0x02680e24;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar17 = iVar19;
      } while (iVar19 != 0);
    }
LAB_02680f34:
    local_a8 = (long *)0x0;
    plVar28 = local_88;
joined_r0x02680e24:
    local_88 = plVar28;
    if (plVar28 != (long *)0x0) {
      plVar25 = plVar28 + 1;
      do {
        iVar17 = (int)*plVar25 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar3) {
          *(int *)plVar25 = iVar17;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 == 0) {
        plVar28[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_68 = (long *)*plVar28;
        auVar31 = FUN_02a44274(lVar23 + 0xd8,&local_68);
      }
    }
    if (local_a8 == (long *)0x0) goto LAB_02680cf4;
    FUN_00a9ecd4(&local_88,local_a8);
    plVar28 = local_88;
    puVar15 = PTR_DAT_0437a130;
    puVar14 = PTR_DAT_0437a128;
    puVar13 = PTR_DAT_043795e0;
    puVar12 = PTR_DAT_043795d8;
    puVar11 = PTR_DAT_043794d0;
    if (local_88 == (long *)0x0) {
      plVar28 = (long *)0x0;
LAB_02680ea0:
      bVar3 = false;
      if (plVar28 == (long *)0x0) goto LAB_02680ec4;
LAB_02680ea8:
      lVar23 = plVar28[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 != 0) goto LAB_02680ec4;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
      if (!bVar3) goto LAB_02680f00;
LAB_02680ec8:
      auVar31._8_8_ = uStack_98;
      auVar31._0_8_ = local_a0;
      uVar5 = true;
    }
    else {
      if (*(int *)((long)local_88 + 0xc) != 0) {
        piVar1 = (int *)((long)local_88 + 0xc);
        iVar17 = *(int *)((long)local_88 + 0xc);
        do {
          plVar25 = (long *)plVar28[2];
          if (((*puVar14 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar14), iVar19 != 0)) {
            if (((*puVar12 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar12), iVar19 != 0)) {
              if (((*puVar11 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar11), iVar19 != 0)) {
                uVar20 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar20;
                __cxa_guard_release(puVar11);
              }
              *(undefined **)puVar13 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar12);
            }
            *(undefined **)puVar15 = puVar13;
            __cxa_guard_release(puVar14);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_026812b0;
            if (plVar25 == (long *)puVar15) break;
            plVar25 = (long *)*plVar25;
          }
          iVar19 = *piVar1;
          if (iVar19 == iVar17) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar23 = plVar28[3];
              plVar28 = (long *)0x0;
              plVar25 = local_88;
              if (lVar23 != 0) {
                plVar28 = (long *)(lVar23 + -0x50);
              }
              goto joined_r0x02681018;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar17 = iVar19;
        } while (iVar19 != 0);
      }
LAB_026812b0:
      plVar28 = (long *)0x0;
      plVar25 = local_88;
joined_r0x02681018:
      local_88 = plVar25;
      if (plVar25 != (long *)0x0) {
        plVar26 = plVar25 + 1;
        do {
          iVar17 = (int)*plVar26 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *(int *)plVar26 = iVar17;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar17 == 0) {
          plVar25[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_68 = (long *)*plVar25;
          FUN_02a44274(lVar23 + 0xd8,&local_68);
        }
      }
      if (plVar28 == (long *)0x0) goto LAB_02680ea0;
      FUN_028a17c4(&local_68,plVar28);
      plVar25 = local_68;
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      puVar27 = (undefined8 *)PTR_DAT_0437a578;
      if (plVar25[0x19] != 0) {
        puVar27 = (undefined8 *)(plVar25[0x19] + 0x88);
      }
      plVar25 = (long *)*puVar27;
      if (plVar25 != (long *)0x0) {
        plVar26 = plVar25 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *(int *)plVar26 = (int)*plVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_88 = (long *)0x6688d9e0ead00cda;
      pcStack_80 = "loc_eff_dig";
      local_78 = 0xb;
      local_70 = (long *)0x0;
      uVar18 = FUN_02b68184(plVar25,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if ((~uVar18 & 0xffff) == 0) {
        uVar5 = false;
      }
      else {
        lVar23 = FUN_02b6962c(plVar25,uVar18);
        puVar12 = PTR_DAT_043794b0;
        uVar35 = _UNK_038897c8;
        uVar20 = _DAT_038897c0;
        uVar33 = *(undefined8 *)(lVar23 + 0x38);
        uVar30 = *(undefined8 *)(lVar23 + 0x30);
        lVar23 = *(long *)(param_5 + 0x1a8);
        if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) {
LAB_02681180:
          plVar26 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(lVar23 + 0xc);
          iVar17 = *(int *)(lVar23 + 0xc);
          do {
            puVar27 = *(undefined8 **)(lVar23 + 0x10);
            if (((*puVar12 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar12), iVar19 != 0)) {
              if (((*PTR_DAT_043794c0 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar19 != 0)) {
                if (((*puVar11 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar11), iVar19 != 0)) {
                  uVar21 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar21;
                  __cxa_guard_release(puVar11);
                }
                *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043794c0);
              }
              *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
              __cxa_guard_release(puVar12);
            }
            if (puVar27 == (undefined8 *)0x0) goto LAB_02681180;
            while (puVar27 != (undefined8 *)PTR_DAT_043794b8) {
              puVar27 = (undefined8 *)*puVar27;
              plVar26 = (long *)0x0;
              if (puVar27 == (undefined8 *)0x0) goto LAB_02681184;
            }
            iVar19 = *piVar1;
            if (iVar19 == iVar17) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar17 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                plVar26 = (long *)0x0;
                if (*(long *)(lVar23 + 0x18) != 0) {
                  plVar26 = (long *)(*(long *)(lVar23 + 0x18) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            plVar26 = (long *)0x0;
            iVar17 = iVar19;
          } while (iVar19 != 0);
        }
LAB_02681184:
        fVar29 = (float)CONCAT13((byte)((ulong)uVar30 >> 0x18) & (byte)((ulong)uVar20 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar30 >> 0x10) &
                                          (byte)((ulong)uVar20 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar30 >> 8) &
                                                   (byte)((ulong)uVar20 >> 8),
                                                   (byte)uVar30 & (byte)uVar20)));
        uVar7 = (ulong)uVar20 >> 0x20;
        uVar8 = (ulong)uVar20 >> 0x28;
        uVar9 = (ulong)uVar20 >> 0x30;
        uVar10 = (ulong)uVar20 >> 0x38;
        fVar32 = (float)CONCAT13((byte)((ulong)uVar33 >> 0x18) & (byte)((ulong)uVar35 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar33 >> 0x10) &
                                          (byte)((ulong)uVar35 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar33 >> 8) &
                                                   (byte)((ulong)uVar35 >> 8),
                                                   (byte)uVar33 & (byte)uVar35)));
        auVar31 = (**(code **)(*plVar26 + 0x40))(plVar26);
        if (plVar26 != (long *)0x0) {
          lVar23 = plVar26[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*plVar26 + 0x20))(plVar26);
          }
        }
        uVar5 = true;
        fVar34 = (float)(CONCAT17((byte)((ulong)uVar30 >> 0x38) & (byte)uVar10,
                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) & (byte)uVar9,
                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) & (byte)uVar8,
                                                    CONCAT14((byte)((ulong)uVar30 >> 0x20) &
                                                             (byte)uVar7,fVar29)))) >> 0x20);
        local_a0 = CONCAT44((float)((ulong)uVar37 >> 0x20) +
                            auVar31._4_4_ * fVar29 + (float)((ulong)uVar20 >> 0x20) * fVar34 +
                            (float)((ulong)uVar22 >> 0x20) * fVar32,
                            (float)uVar37 +
                            auVar31._0_4_ * fVar29 + (float)uVar20 * fVar34 + (float)uVar22 * fVar32
                           );
        uStack_98 = CONCAT44((float)((ulong)uVar38 >> 0x20) +
                             auVar31._12_4_ * fVar29 + (float)((ulong)uVar35 >> 0x20) * fVar34 +
                             (float)((ulong)uVar36 >> 0x20) * fVar32,
                             (float)uVar38 +
                             auVar31._8_4_ * fVar29 + (float)uVar35 * fVar34 +
                             (float)uVar36 * fVar32);
      }
      if (plVar25 != (long *)0x0) {
        plVar26 = plVar25 + 10;
        do {
          iVar17 = (int)*plVar26 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *(int *)plVar26 = iVar17;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar17 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
      if (local_68 != (long *)0x0) {
        plVar25 = local_68 + 10;
        do {
          iVar17 = (int)*plVar25 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar3) {
            *(int *)plVar25 = iVar17;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar17 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if (!(bool)uVar5) goto LAB_02680ea0;
      bVar3 = true;
      if (plVar28 != (long *)0x0) goto LAB_02680ea8;
LAB_02680ec4:
      if (bVar3) goto LAB_02680ec8;
LAB_02680f00:
      auVar31._8_8_ = uStack_98;
      auVar31._0_8_ = local_a0;
      uVar5 = false;
    }
    if (local_a8 != (long *)0x0) {
      auVar31._8_8_ = uStack_98;
      auVar31._0_8_ = local_a0;
      lVar23 = local_a8[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
        if ((bool)uVar5) {
          return auVar31;
        }
        goto LAB_02680d5c;
      }
    }
  }
  local_a0 = auVar31._0_8_;
  if ((bool)uVar5) {
    return auVar31;
  }
LAB_02680d5c:
  puVar16 = PTR_DAT_043794d8;
  puVar15 = PTR_DAT_043794d0;
  puVar14 = PTR_DAT_043794c8;
  puVar13 = PTR_DAT_043794c0;
  puVar12 = PTR_DAT_043794b8;
  puVar11 = PTR_DAT_043794b0;
  lVar23 = *(long *)(param_5 + 0x1a8);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar17 = *(int *)(lVar23 + 0xc);
    do {
      plVar28 = *(long **)(lVar23 + 0x10);
      if ((*puVar11 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(local_a0,puVar11);
        local_a0 = extraout_d0_00;
        if (iVar19 != 0) {
          if (((*puVar13 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar13), iVar19 != 0)) {
            if (((*puVar15 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar15), iVar19 != 0)) {
              uVar22 = FUN_0087f8f0();
              *(undefined8 *)puVar16 = uVar22;
              __cxa_guard_release(puVar15);
            }
            *(undefined **)puVar14 = puVar16;
            __cxa_guard_release(puVar13);
          }
          *(undefined **)puVar12 = puVar14;
          local_a0 = __cxa_guard_release(puVar11);
        }
      }
      while( true ) {
        if (plVar28 == (long *)0x0) goto LAB_02680d64;
        if (plVar28 == (long *)puVar12) break;
        plVar28 = (long *)*plVar28;
      }
      iVar19 = *piVar1;
      if (iVar19 == iVar17) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 != 0) {
            auVar31 = *(undefined1 (*) [16])(lVar23 + 0x80);
            lVar24 = *(long *)(lVar23 + 8);
            piVar1 = (int *)(lVar24 + 0xc);
            do {
              iVar17 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar17 + -1 == 0) {
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))();
              return auVar31;
            }
            return auVar31;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar19;
    } while (iVar19 != 0);
  }
LAB_02680d64:
  auVar6._8_8_ = _DAT_000000d8;
  auVar6._0_8_ = _DAT_000000d0;
  return auVar6;
}


