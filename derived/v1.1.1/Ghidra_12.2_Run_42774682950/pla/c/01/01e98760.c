/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e98760; name: FUN_01e98760
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_01e98760(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  byte bVar15;
  int iVar16;
  undefined8 uVar17;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar18 [16];
  undefined8 uVar23;
  undefined1 auVar19 [16];
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  auVar19._8_8_ = uStack_88;
  auVar19._0_8_ = local_90;
  uVar23 = param_3._8_8_;
  uVar17 = param_3._0_8_;
  FUN_01ea188c(&local_70);
  if (local_70 == (long *)0x0) {
    uVar17 = 0;
    uVar23 = 0;
    goto LAB_01e9880c;
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,local_70 + 0x49);
  puVar5 = local_80;
  puVar10 = PTR_DAT_04379e90;
  puVar9 = PTR_DAT_04379e88;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_80 == (undefined8 *)0x0) {
LAB_01e987ac:
    auVar19._8_8_ = uVar23;
    auVar19._0_8_ = uVar17;
    bVar3 = false;
  }
  else {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar16 = *(int *)((long)local_80 + 0xc);
      do {
        plVar14 = (long *)puVar5[2];
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar12;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = puVar7;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01e9893c;
          if (plVar14 == (long *)puVar10) break;
          plVar14 = (long *)*plVar14;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar16) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar5[3];
            local_98 = (long *)0x0;
            puVar5 = local_80;
            if (lVar13 != 0) {
              local_98 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01e98908;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01e9893c:
    local_98 = (long *)0x0;
    puVar5 = local_80;
joined_r0x01e98908:
    local_80 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (local_98 == (long *)0x0) goto LAB_01e987ac;
    FUN_01a8b908(&local_80,local_98);
    puVar5 = local_80;
    puVar7 = PTR_DAT_04379e80;
    puVar6 = PTR_DAT_04379e78;
    if (local_80 == (undefined8 *)0x0) {
LAB_01e989bc:
      auVar19._8_8_ = uVar23;
      auVar19._0_8_ = uVar17;
joined_r0x01e989c4:
      bVar4 = false;
      bVar3 = false;
    }
    else {
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar16 = *(int *)((long)local_80 + 0xc);
        do {
          plVar14 = (long *)puVar5[2];
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0095a420();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01e98bb4;
            if (plVar14 == (long *)puVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar16) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = puVar5[3];
              plVar14 = (long *)0x0;
              puVar5 = local_80;
              if (lVar13 != 0) {
                plVar14 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x01e98ad0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar11;
        } while (iVar11 != 0);
      }
LAB_01e98bb4:
      plVar14 = (long *)0x0;
      puVar5 = local_80;
joined_r0x01e98ad0:
      local_80 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *puVar5;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      if (plVar14 == (long *)0x0) goto LAB_01e989bc;
      if ((plVar14[0x3e] == 0) || (*(int *)(plVar14[0x3e] + 0xc) == 0)) {
        bVar3 = false;
      }
      else {
        auVar19 = FUN_01a9a884(local_98,param_5);
        bVar3 = true;
      }
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        if (bVar3) goto LAB_01e98b78;
        goto joined_r0x01e989c4;
      }
      if (!bVar3) goto joined_r0x01e989c4;
LAB_01e98b78:
      bVar4 = true;
      bVar3 = true;
    }
    if (local_98 != (long *)0x0) {
      lVar13 = local_98[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = bVar4;
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
  }
  iVar16 = -(uint)!bVar3;
  bVar15 = (byte)iVar16;
  bVar20 = (byte)((uint)iVar16 >> 8);
  bVar21 = (byte)((uint)iVar16 >> 0x10);
  bVar22 = (byte)((uint)iVar16 >> 0x18);
  uVar17 = CONCAT17(auVar19[7] & ~bVar22,
                    CONCAT16(auVar19[6] & ~bVar21,
                             CONCAT15(auVar19[5] & ~bVar20,
                                      CONCAT14(auVar19[4] & ~bVar15,
                                               CONCAT13(auVar19[3] & ~bVar22,
                                                        CONCAT12(auVar19[2] & ~bVar21,
                                                                 CONCAT11(auVar19[1] & ~bVar20,
                                                                          auVar19[0] & ~bVar15))))))
                   );
  uVar23 = CONCAT17(auVar19[0xf] & ~bVar22,
                    CONCAT16(auVar19[0xe] & ~bVar21,
                             CONCAT15(auVar19[0xd] & ~bVar20,
                                      CONCAT14(auVar19[0xc] & ~bVar15,
                                               CONCAT13(auVar19[0xb] & ~bVar22,
                                                        CONCAT12(auVar19[10] & ~bVar21,
                                                                 CONCAT11(auVar19[9] & ~bVar20,
                                                                          auVar19[8] & ~bVar15))))))
                   );
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
LAB_01e9880c:
  auVar18._8_8_ = uVar23;
  auVar18._0_8_ = uVar17;
  return auVar18;
}


