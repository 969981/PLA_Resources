/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a94a0c; name: FUN_01a94a0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_01a94a0c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,byte *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 extraout_d0;
  float fVar25;
  undefined1 auVar24 [16];
  undefined8 extraout_var;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  uVar32 = param_4._8_8_;
  uVar30 = param_4._0_8_;
  uVar29 = param_3._8_8_;
  uVar28 = param_3._0_8_;
  local_80 = (long *)0x0;
  pbStack_78 = (byte *)0x0;
  auVar24 = FUN_00af7e30(&local_80,param_5 + 0x230);
  plVar20 = local_80;
  puVar13 = PTR_DAT_0437a558;
  puVar12 = PTR_DAT_0437a550;
  if (local_80 == (long *)0x0) {
LAB_01a94a48:
    bVar6 = false;
  }
  else {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar16 = *(int *)((long)local_80 + 0xc);
      do {
        plVar21 = (long *)plVar20[2];
        if ((*puVar12 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(puVar12);
          auVar24._8_8_ = extraout_var;
          auVar24._0_8_ = extraout_d0;
          if (iVar15 != 0) {
            uVar17 = FUN_00aa0310();
            *(undefined8 *)puVar13 = uVar17;
            auVar24 = __cxa_guard_release(puVar12);
          }
        }
        while( true ) {
          if (plVar21 == (long *)0x0) goto LAB_01a94eec;
          if (plVar21 == (long *)puVar13) break;
          plVar21 = (long *)*plVar21;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar16) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar18 = plVar20[3];
            local_98 = (long *)0x0;
            plVar20 = local_80;
            if (lVar18 != 0) {
              local_98 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x01a94b84;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01a94eec:
    local_98 = (long *)0x0;
    plVar20 = local_80;
joined_r0x01a94b84:
    local_80 = plVar20;
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 1;
      do {
        iVar16 = (int)*plVar21 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        plVar20[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_58 = (long *)*plVar20;
        auVar24 = FUN_02a44274(lVar18 + 0xd8,&local_58);
      }
    }
    if (local_98 == (long *)0x0) goto LAB_01a94a48;
    FUN_00a9ecd4(&local_80,local_98);
    FUN_009983e4(&local_60,&local_80);
    plVar20 = local_80;
    if (local_80 != (long *)0x0) {
      plVar21 = local_80 + 1;
      do {
        iVar16 = (int)*plVar21 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *(int *)plVar21 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_58 = (long *)*plVar20;
        FUN_02a44274(lVar18 + 0xd8,&local_58);
      }
    }
    if (local_60 == (long *)0x0) {
LAB_01a94e64:
      bVar6 = false;
      if (local_60 == (long *)0x0) goto LAB_01a94e10;
LAB_01a94df4:
      lVar18 = local_60[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 != 0) goto LAB_01a94e10;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      if (bVar6) goto LAB_01a94e14;
LAB_01a94ea8:
      auVar24._8_8_ = uStack_88;
      auVar24._0_8_ = local_90;
      bVar6 = false;
    }
    else {
      FUN_028a17c4(&local_58);
      plVar20 = local_58;
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      puVar2 = (undefined8 *)PTR_DAT_0437a578;
      if (plVar20[0x19] != 0) {
        puVar2 = (undefined8 *)(plVar20[0x19] + 0x88);
      }
      plVar20 = (long *)*puVar2;
      if (plVar20 != (long *)0x0) {
        plVar21 = plVar20 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *(int *)plVar21 = (int)*plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (param_6 == (byte *)0x0) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        local_80 = *(long **)PTR_DAT_0437a0d8;
        pbStack_78 = *(byte **)(PTR_DAT_0437a0d8 + 8);
        local_70 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        local_68 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
      }
      else {
        local_70 = strlen((char *)param_6);
        bVar3 = *param_6;
        local_80 = (long *)&DAT_cbf29ce484222645;
        pbVar19 = param_6;
        while (bVar3 != 0) {
          pbVar19 = pbVar19 + 1;
          local_80 = (long *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
        }
        local_68 = (long *)0x0;
        pbStack_78 = param_6;
      }
      uVar14 = FUN_02b68184(plVar20,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if ((~uVar14 & 0xffff) == 0) {
        bVar6 = false;
      }
      else {
        lVar18 = FUN_02b6962c(plVar20,uVar14);
        uVar17 = *(undefined8 *)(lVar18 + 0x38);
        uVar23 = *(undefined8 *)(lVar18 + 0x30);
        fVar22 = (float)CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                 (byte)((ulong)_DAT_038897c0 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar23 >> 8) &
                                                   (byte)((ulong)_DAT_038897c0 >> 8),
                                                   (byte)uVar23 & (byte)_DAT_038897c0)));
        uVar8 = (ulong)_DAT_038897c0 >> 0x20;
        uVar9 = (ulong)_DAT_038897c0 >> 0x28;
        uVar10 = (ulong)_DAT_038897c0 >> 0x30;
        uVar11 = (ulong)_DAT_038897c0 >> 0x38;
        fVar25 = (float)CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                 (byte)((ulong)_UNK_038897c8 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                          (byte)((ulong)_UNK_038897c8 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar17 >> 8) &
                                                   (byte)((ulong)_UNK_038897c8 >> 8),
                                                   (byte)uVar17 & (byte)_UNK_038897c8)));
        uVar17 = _DAT_038897c0;
        uVar27 = _UNK_038897c8;
        FUN_009c69bc(&local_80,param_5);
        auVar24 = (**(code **)(*local_80 + 0x40))();
        uVar31 = uVar30;
        uVar33 = uVar32;
        if (local_80 != (long *)0x0) {
          lVar18 = local_80[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
        bVar6 = true;
        fVar26 = (float)(CONCAT17((byte)((ulong)uVar23 >> 0x38) & (byte)uVar11,
                                  CONCAT16((byte)((ulong)uVar23 >> 0x30) & (byte)uVar10,
                                           CONCAT15((byte)((ulong)uVar23 >> 0x28) & (byte)uVar9,
                                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) &
                                                             (byte)uVar8,fVar22)))) >> 0x20);
        local_90 = CONCAT44((float)((ulong)uVar30 >> 0x20) +
                            auVar24._4_4_ * fVar22 + (float)((ulong)uVar17 >> 0x20) * fVar26 +
                            (float)((ulong)uVar28 >> 0x20) * fVar25,
                            (float)uVar30 +
                            auVar24._0_4_ * fVar22 + (float)uVar17 * fVar26 + (float)uVar28 * fVar25
                           );
        uStack_88 = CONCAT44((float)((ulong)uVar32 >> 0x20) +
                             auVar24._12_4_ * fVar22 + (float)((ulong)uVar27 >> 0x20) * fVar26 +
                             (float)((ulong)uVar29 >> 0x20) * fVar25,
                             (float)uVar32 +
                             auVar24._8_4_ * fVar22 + (float)uVar27 * fVar26 +
                             (float)uVar29 * fVar25);
        uVar30 = uVar31;
        uVar32 = uVar33;
      }
      if (plVar20 != (long *)0x0) {
        plVar21 = plVar20 + 10;
        do {
          iVar16 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      if (local_58 != (long *)0x0) {
        plVar20 = local_58 + 10;
        do {
          iVar16 = (int)*plVar20 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *(int *)plVar20 = iVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      if (!bVar6) goto LAB_01a94e64;
      bVar6 = true;
      if (local_60 != (long *)0x0) goto LAB_01a94df4;
LAB_01a94e10:
      if (!bVar6) goto LAB_01a94ea8;
LAB_01a94e14:
      auVar24._8_8_ = uStack_88;
      auVar24._0_8_ = local_90;
      bVar6 = true;
    }
    if (local_98 != (long *)0x0) {
      auVar24._8_8_ = uStack_88;
      auVar24._0_8_ = local_90;
      lVar18 = local_98[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
        if (bVar6) {
          return auVar24;
        }
        goto LAB_01a94aac;
      }
    }
  }
  local_90 = auVar24._0_8_;
  if (bVar6) {
    return auVar24;
  }
LAB_01a94aac:
  FUN_009c69bc(&local_80,local_90,param_5);
  (**(code **)(*local_80 + 0x40))();
  if (local_80 != (long *)0x0) {
    lVar18 = local_80[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  auVar7._8_8_ = uVar32;
  auVar7._0_8_ = uVar30;
  return auVar7;
}


