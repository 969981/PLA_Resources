/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01570444; name: FUN_01570444
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_01570444(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,long param_6)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar17;
  float fVar19;
  undefined8 extraout_var;
  undefined8 uVar20;
  undefined1 auVar18 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  long *local_38;
  long *local_28;
  
  uVar25 = param_4._8_8_;
  uVar24 = param_4._0_8_;
  uVar23 = param_3._8_8_;
  uVar21 = param_3._0_8_;
  if (**(char **)(param_6 + 8) != '\0') {
    FUN_0151261c(&local_28,param_5,*(undefined4 *)(param_5 + 0x4a0));
    lVar13 = FUN_009cfbc8(local_28 + 0x1e,&local_38);
    param_1 = extraout_d0;
    if (local_28 != (long *)0x0) {
      lVar14 = local_28[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        param_1 = (**(code **)(*local_28 + 0x20))();
      }
    }
    if (lVar13 != 0) {
      FUN_028a17c4(&local_28,lVar13);
      plVar15 = local_28;
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      puVar3 = (undefined8 *)PTR_DAT_0437a578;
      if (plVar15[0x19] != 0) {
        puVar3 = (undefined8 *)(plVar15[0x19] + 0x88);
      }
      plVar15 = (long *)*puVar3;
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar11 = FUN_02b68184(plVar15,param_6);
      if ((~uVar11 & 0xffff) == 0) {
        bVar5 = false;
        param_1 = extraout_d0_00;
        uVar21 = extraout_var;
      }
      else {
        lVar13 = FUN_02b6962c(plVar15,uVar11);
        uVar20 = *(undefined8 *)(lVar13 + 0x38);
        uVar17 = *(undefined8 *)(lVar13 + 0x30);
        fVar16 = (float)CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                 (byte)((ulong)_DAT_038897c0 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar17 >> 8) &
                                                   (byte)((ulong)_DAT_038897c0 >> 8),
                                                   (byte)uVar17 & (byte)_DAT_038897c0)));
        uVar7 = (ulong)_DAT_038897c0 >> 0x20;
        uVar8 = (ulong)_DAT_038897c0 >> 0x28;
        uVar9 = (ulong)_DAT_038897c0 >> 0x30;
        uVar10 = (ulong)_DAT_038897c0 >> 0x38;
        fVar19 = (float)CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                 (byte)((ulong)_UNK_038897c8 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                          (byte)((ulong)_UNK_038897c8 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar20 >> 8) &
                                                   (byte)((ulong)_UNK_038897c8 >> 8),
                                                   (byte)uVar20 & (byte)_UNK_038897c8)));
        uVar20 = _DAT_038897c0;
        uVar22 = _UNK_038897c8;
        FUN_015129f4(&local_38,param_5,*(undefined4 *)(param_5 + 0x4a0));
        auVar18 = (**(code **)(*local_38 + 0x40))();
        if (local_38 != (long *)0x0) {
          lVar13 = local_38[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
        fVar26 = (float)(CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)uVar10,
                                  CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)uVar9,
                                           CONCAT15((byte)((ulong)uVar17 >> 0x28) & (byte)uVar8,
                                                    CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                             (byte)uVar7,fVar16)))) >> 0x20);
        bVar5 = true;
        param_1 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                           auVar18._4_4_ * fVar16 + (float)((ulong)uVar20 >> 0x20) * fVar26 +
                           (float)((ulong)uVar21 >> 0x20) * fVar19,
                           (float)uVar24 +
                           auVar18._0_4_ * fVar16 + (float)uVar20 * fVar26 + (float)uVar21 * fVar19)
        ;
        uVar21 = CONCAT44((float)((ulong)uVar25 >> 0x20) +
                          auVar18._12_4_ * fVar16 + (float)((ulong)uVar22 >> 0x20) * fVar26 +
                          (float)((ulong)uVar23 >> 0x20) * fVar19,
                          (float)uVar25 +
                          auVar18._8_4_ * fVar16 + (float)uVar22 * fVar26 + (float)uVar23 * fVar19);
      }
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if (local_28 != (long *)0x0) {
        plVar15 = local_28 + 10;
        do {
          iVar12 = (int)*plVar15 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *(int *)plVar15 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
      if (bVar5) goto LAB_015704b0;
    }
  }
  uVar21 = uVar25;
  FUN_015129f4(&local_28,param_1,param_5,*(undefined4 *)(param_5 + 0x4a0));
  param_1 = uVar24;
  (**(code **)(*local_28 + 0x40))();
  if (local_28 != (long *)0x0) {
    lVar13 = local_28[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
LAB_015704b0:
  auVar18._8_8_ = uVar21;
  auVar18._0_8_ = param_1;
  return auVar18;
}


