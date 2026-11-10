/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5fc04; name: FUN_01c5fc04
 */


void FUN_01c5fc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 in_q3 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar5 = PTR_DAT_043794d0;
  uVar19 = in_q3._8_8_;
  uVar17 = in_q3._0_8_;
  lVar11 = *(long *)(param_1 + 0x3a0);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar9 = *(int *)(lVar11 + 0xc);
    do {
      plVar14 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar10;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          plVar14 = (long *)(lVar11 + -0x50);
          if (lVar11 == 0) {
            return;
          }
          FUN_0199c138(&local_68,plVar14);
          if (local_68 != (long *)0x0) {
            if (((*PTR_DAT_043796b8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_043796b8);
            }
            lVar13 = *(long *)PTR_DAT_043796c0;
            *(long *)PTR_DAT_043796c8 = lVar13;
            FUN_009c69bc(&local_70,local_68);
            (**(code **)(*local_70 + 0x40))();
            uVar10 = uVar17;
            uVar18 = uVar19;
            FUN_009c69bc(&local_78,param_1);
            (**(code **)(*local_78 + 0x40))();
            if (local_78 != (long *)0x0) {
              lVar12 = local_78[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
              }
            }
            local_a0 = (float)uVar10;
            fStack_9c = (float)((ulong)uVar10 >> 0x20);
            fStack_98 = (float)uVar18;
            fStack_94 = (float)((ulong)uVar18 >> 0x20);
            local_a0 = (float)uVar17 - local_a0;
            fStack_9c = (float)((ulong)uVar17 >> 0x20) - fStack_9c;
            fStack_98 = (float)uVar19 - fStack_98;
            fStack_94 = (float)((ulong)uVar19 >> 0x20) - fStack_94;
            local_a0 = local_a0 * local_a0;
            fStack_9c = fStack_9c * fStack_9c;
            fStack_98 = fStack_98 * fStack_98;
            fStack_94 = fStack_94 * fStack_94;
            auVar16._4_4_ = fStack_9c;
            auVar16._0_4_ = local_a0;
            auVar16._8_4_ = fStack_98;
            auVar16._12_4_ = fStack_94;
            auVar4._4_4_ = fStack_9c;
            auVar4._0_4_ = local_a0;
            auVar4._8_4_ = fStack_98;
            auVar4._12_4_ = fStack_94;
            auVar16 = NEON_ext(auVar16,auVar4,8,1);
            fVar15 = auVar16._0_4_ + local_a0 + auVar16._4_4_ + fStack_9c;
            if ((fVar15 <= 2500.0) || (param_2 = param_3, fVar15 <= 3600.0)) {
              FUN_00da3604(lVar13 + 0x3c0,param_2,0);
            }
            if (local_70 != (long *)0x0) {
              lVar13 = local_70[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
            if (local_68 != (long *)0x0) {
              lVar13 = local_68[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


