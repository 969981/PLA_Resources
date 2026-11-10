/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019d1894; name: FUN_019d1894
 */


undefined1  [16] FUN_019d1894(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar20 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 in_q3 [16];
  float fVar28;
  ulong unaff_d8;
  undefined8 in_register_00005108;
  long *local_68;
  
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  fVar26 = in_q3._12_4_;
  fVar24 = in_q3._8_4_;
  fVar22 = in_q3._4_4_;
  fVar19 = in_q3._0_4_;
  lVar15 = *(long *)(param_1 + 0x218);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar16 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_019d18c0;
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar16) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_019d1920;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + -0x50);
          if ((*(int *)(lVar15 + 0x304) != 0) || (uVar11 = FUN_0183d388(plVar17), (uVar11 & 1) == 0)
             ) {
            fVar28 = -*(float *)(param_1 + 500);
            goto LAB_019d1b38;
          }
          FUN_019d1348(&local_68,param_1 + 0x200);
          if (local_68 == (long *)0x0) {
            bVar4 = false;
          }
          else {
            fVar28 = *(float *)(param_1 + 500);
            puVar12 = (undefined8 *)(**(code **)(*local_68 + 0x40))();
            puVar7 = PTR_DAT_043794b8;
            puVar6 = PTR_DAT_043794b0;
            lVar18 = *(long *)(param_1 + 0x1a8);
            piVar1 = (int *)(lVar18 + 0xc);
            iVar16 = *(int *)(lVar18 + 0xc);
            do {
              while( true ) {
                plVar14 = *(long **)(lVar18 + 0x10);
                if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                  if (((*PTR_DAT_043794c0 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                      uVar13 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_043794c0);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794c8;
                  __cxa_guard_release(puVar6);
                }
                for (; plVar14 != (long *)puVar7; plVar14 = (long *)*plVar14) {
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar16) break;
                ClearExclusiveLocal();
                iVar16 = iVar10;
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar16 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              iVar16 = iVar10;
            } while (cVar3 != '\0');
            lVar18 = *(long *)(lVar18 + 0x18);
            plVar14 = (long *)0x0;
            if (lVar18 != 0) {
              plVar14 = (long *)(lVar18 + -0x50);
            }
            (**(code **)(*plVar14 + 0x40))(plVar14);
            fVar19 = (float)*puVar12 - fVar19;
            fVar22 = (float)((ulong)*puVar12 >> 0x20) - fVar22;
            fVar24 = (float)puVar12[1] - fVar24;
            fVar26 = (float)((ulong)puVar12[1] >> 0x20) - fVar26;
            fVar19 = fVar19 * fVar19;
            fVar22 = fVar22 * fVar22;
            fVar24 = fVar24 * fVar24;
            fVar26 = fVar26 * fVar26;
            auVar27._4_4_ = fVar22;
            auVar27._0_4_ = fVar19;
            auVar27._8_4_ = fVar24;
            auVar27._12_4_ = fVar26;
            auVar5._4_4_ = fVar22;
            auVar5._0_4_ = fVar19;
            auVar5._8_4_ = fVar24;
            auVar5._12_4_ = fVar26;
            auVar27 = NEON_ext(auVar27,auVar5,8,1);
            if (lVar18 != 0) {
              lVar18 = plVar14[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar16 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar14 + 0x20))(plVar14);
              }
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
            fVar28 = fVar28 - (auVar27._0_4_ + fVar19 + auVar27._4_4_ + fVar22);
LAB_019d1b38:
            in_register_00005108 = 0;
            unaff_d8 = (ulong)(uint)fVar28;
            bVar4 = true;
          }
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          uVar23 = (undefined4)in_register_00005108;
          uVar25 = (undefined4)((ulong)in_register_00005108 >> 0x20);
          fVar19 = (float)unaff_d8;
          uVar21 = (undefined4)(unaff_d8 >> 0x20);
          if (bVar4) goto LAB_019d18c8;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019d1920:
      iVar16 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019d18c0:
  fVar19 = -*(float *)(param_1 + 500);
  uVar21 = 0;
  uVar23 = 0;
  uVar25 = 0;
LAB_019d18c8:
  auVar20._4_4_ = uVar21;
  auVar20._0_4_ = fVar19;
  auVar20._8_4_ = uVar23;
  auVar20._12_4_ = uVar25;
  return auVar20;
}


