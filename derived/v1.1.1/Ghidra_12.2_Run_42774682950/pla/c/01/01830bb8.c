/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01830bb8; name: FUN_01830bb8
 */


void FUN_01830bb8(undefined1 *param_1,long param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 local_1870;
  undefined8 auStack_1868 [5];
  undefined8 local_1840 [6];
  undefined8 local_1810 [2];
  undefined4 local_1800 [3];
  undefined1 local_17f4 [4];
  undefined2 local_17f0 [2];
  undefined4 local_17ec;
  undefined8 local_17e8 [2];
  undefined4 local_17d8 [3];
  undefined1 local_17cc [4];
  undefined2 local_17c8 [2];
  undefined4 local_17c4;
  undefined8 local_17c0 [748];
  
  puVar9 = PTR_DAT_0437a660;
  lVar15 = *(long *)(param_2 + 0x1f0);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar12 = *(int *)(lVar15 + 0xc);
    do {
      plVar18 = *(long **)(lVar15 + 0x10);
      if (((*PTR_DAT_0437a668 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a668);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01830be4;
        if (plVar18 == (long *)puVar9) break;
        plVar18 = (long *)*plVar18;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            memset(&local_1870,0,0x1800);
            lVar14 = 0;
            do {
              lVar2 = lVar14 + 0xc0;
              *(undefined8 *)((long)local_1840 + lVar14) = 0;
              *(undefined8 *)((long)local_1840 + lVar14 + 0x10) = 0;
              *(undefined8 *)((long)local_1840 + lVar14 + 0x18) = 0;
              *(undefined4 *)((long)local_1810 + lVar14) = 0x7f7fffee;
              *(undefined8 *)((long)local_1810 + lVar14 + 8) = 0xffffffffffffffff;
              *(undefined4 *)((long)local_1810 + lVar14 + 0x10) = 0xffffff;
              *(undefined4 *)((long)local_17e8 + lVar14 + -0x10) = 0xffffffff;
              *(undefined1 *)((long)local_17e8 + lVar14 + -0xc) = 0xf;
              *(undefined2 *)((long)local_17e8 + lVar14 + -8) = 0xffff;
              *(undefined4 *)((long)local_17e8 + lVar14 + -4) = 0;
              *(undefined4 *)((long)local_17e8 + lVar14 + 0x10) = 0xffffff;
              *(undefined4 *)((long)local_17c0 + lVar14 + -0x10) = 0xffffffff;
              *(undefined1 *)((long)local_17c0 + lVar14 + -0xc) = 0xf;
              *(undefined2 *)((long)local_17c0 + lVar14 + -8) = 0xffff;
              *(undefined4 *)((long)local_17c0 + lVar14 + -4) = 0;
              *(undefined8 *)((long)local_1840 + lVar14 + 0x20) = 0;
              *(undefined8 *)((long)local_1840 + lVar14 + 0x28) = 0;
              *(undefined8 *)((long)local_17c0 + lVar14) = 0;
              *(undefined8 *)((long)local_17c0 + lVar14 + 8) = 0;
              *(undefined8 *)((long)local_17e8 + lVar14) = 0;
              *(undefined8 *)((long)local_17e8 + lVar14 + 8) = 0xffffffffffffffff;
              lVar14 = lVar2;
            } while (lVar2 != 0x1800);
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar14 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar14;
            uVar10 = FUN_02bf48bc(*(undefined8 *)(lVar14 + 0x230),param_4,param_5,param_6,
                                  &local_1870,0x20,1);
            if (uVar10 == 0) {
              *param_1 = 0;
            }
            else {
              if (0x1f < uVar10) {
                uVar10 = 0x20;
              }
              if ((uVar10 == 0) || (uVar10 < 2)) {
                lVar14 = 0;
              }
              else {
                fVar19 = (float)NEON_fminnm(ABS(*(float *)(param_3 + 4) - local_1870._4_4_),
                                            0x7f7fffff);
                uVar17 = 1;
                puVar16 = local_17c0 + 2;
                iVar12 = 0;
                do {
                  fVar20 = ABS(*(float *)(param_3 + 4) - (float)((ulong)*puVar16 >> 0x20));
                  iVar11 = (int)uVar17;
                  if (fVar19 <= fVar20) {
                    iVar11 = iVar12;
                    fVar20 = fVar19;
                  }
                  fVar19 = fVar20;
                  uVar17 = uVar17 + 1;
                  puVar16 = puVar16 + 0x18;
                  iVar12 = iVar11;
                } while (uVar17 < uVar10);
                lVar14 = (long)iVar11;
              }
              uVar13 = auStack_1868[lVar14 * 0x18 + 2];
              *(undefined8 *)(param_1 + 0x20) = auStack_1868[lVar14 * 0x18 + 1];
              *(undefined8 *)(param_1 + 0x28) = uVar13;
              uVar13 = auStack_1868[lVar14 * 0x18 + 3];
              uVar5 = auStack_1868[lVar14 * 0x18 + 4];
              *param_1 = 0;
              *(undefined8 *)(param_1 + 0x30) = uVar13;
              *(undefined8 *)(param_1 + 0x38) = uVar5;
              uVar13 = auStack_1868[lVar14 * 0x18];
              *(undefined8 *)(param_1 + 0x10) = auStack_1868[lVar14 * 0x18 + -1];
              *(undefined8 *)(param_1 + 0x18) = uVar13;
              FUN_032c7b0c(param_1 + 0x40,local_1840 + lVar14 * 0x18);
              uVar13 = local_17c0[lVar14 * 0x18 + -2];
              *(undefined8 *)(param_1 + 0xb8) = local_17c0[lVar14 * 0x18 + -1];
              uVar5 = local_17c0[lVar14 * 0x18];
              *(undefined8 *)(param_1 + 200) = local_17c0[lVar14 * 0x18 + 1];
              uVar3 = local_17e8[lVar14 * 0x18 + -1];
              *(undefined8 *)(param_1 + 0x98) = local_17e8[lVar14 * 0x18];
              uVar4 = local_17e8[lVar14 * 0x18 + 1];
              uVar6 = local_17e8[lVar14 * 0x18 + 2];
              *(undefined8 *)(param_1 + 0xb0) = uVar13;
              *(undefined8 *)(param_1 + 0xa0) = uVar4;
              *(undefined8 *)(param_1 + 0xa8) = uVar6;
              uVar13 = local_1810[lVar14 * 0x18];
              uVar4 = local_1810[lVar14 * 0x18 + 1];
              *(undefined8 *)(param_1 + 0x90) = uVar3;
              *(undefined8 *)(param_1 + 0x70) = uVar13;
              *(undefined8 *)(param_1 + 0x78) = uVar4;
              *(undefined8 *)(param_1 + 0xc0) = uVar5;
              uVar13 = local_1810[lVar14 * 0x18 + 2];
              uVar5 = local_17e8[lVar14 * 0x18 + -2];
              *param_1 = 1;
              *(undefined8 *)(param_1 + 0x80) = uVar13;
              *(undefined8 *)(param_1 + 0x88) = uVar5;
              uVar13 = local_1840[lVar14 * 0x18 + 3];
              *(undefined8 *)(param_1 + 0x50) = local_1840[lVar14 * 0x18 + 2];
              *(undefined8 *)(param_1 + 0x58) = uVar13;
              uVar13 = local_1840[lVar14 * 0x18 + 5];
              *(undefined8 *)(param_1 + 0x60) = local_1840[lVar14 * 0x18 + 4];
              *(undefined8 *)(param_1 + 0x68) = uVar13;
            }
            FUN_00ab5c44(&local_1870);
            lVar14 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))((long *)(lVar15 + -0x50));
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01830be4:
  *param_1 = 0;
  return;
}


