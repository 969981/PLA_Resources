/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177ecc4; name: FUN_0177ecc4
 */


undefined8 FUN_0177ecc4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  byte *pbVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 in_q3 [16];
  float fVar22;
  
  fVar22 = in_q3._12_4_;
  fVar21 = in_q3._8_4_;
  fVar20 = in_q3._0_4_;
  plVar9 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar9 != plVar2) {
    puVar10 = PTR_DAT_043794b8;
    pbVar11 = PTR_DAT_043794b0;
    do {
      lVar14 = *plVar9;
      if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
        piVar1 = (int *)(lVar14 + 0xc);
        iVar13 = *(int *)(lVar14 + 0xc);
        do {
          plVar12 = *(long **)(lVar14 + 0x10);
          if (((*pbVar11 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar11 = PTR_DAT_043794b0,
             puVar10 = PTR_DAT_043794b8, iVar6 != 0)) {
            if (((*PTR_DAT_043794c0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar6 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                uVar8 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar8;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043794c0);
            }
            puVar10 = PTR_DAT_043794b8;
            *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
            pbVar11 = PTR_DAT_043794b0;
            __cxa_guard_release(PTR_DAT_043794b0);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_0177ed00;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar13) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar14 = *(long *)(lVar14 + 0x18);
              plVar12 = (long *)(lVar14 + -0x50);
              if (lVar14 != 0) {
                (**(code **)(*plVar12 + 0x40))(plVar12);
                fVar18 = *(float *)(param_1 + 0x48);
                fVar15 = (float)*param_2 - fVar20;
                fVar16 = (float)param_2[1] - fVar21;
                fVar17 = (float)((ulong)param_2[1] >> 0x20) - fVar22;
                fVar15 = fVar15 * fVar15;
                fVar16 = fVar16 * fVar16;
                fVar17 = fVar17 * fVar17;
                auVar19._4_4_ = 0;
                auVar19._0_4_ = fVar15;
                auVar19._8_4_ = fVar16;
                auVar19._12_4_ = fVar17;
                auVar5._4_4_ = 0;
                auVar5._0_4_ = fVar15;
                auVar5._8_4_ = fVar16;
                auVar5._12_4_ = fVar17;
                auVar19 = NEON_ext(auVar19,auVar5,8,1);
                uVar7 = FUN_02a43a5c(*(undefined8 *)(lVar14 + 8));
                if ((uVar7 & 1) != 0) {
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                }
                puVar10 = PTR_DAT_043794b8;
                pbVar11 = PTR_DAT_043794b0;
                if (auVar19._0_4_ + fVar15 + auVar19._4_4_ + 0.0 <= fVar18 * fVar18) {
                  return 1;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar6;
        } while (iVar6 != 0);
      }
LAB_0177ed00:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar2);
  }
  return 0;
}


