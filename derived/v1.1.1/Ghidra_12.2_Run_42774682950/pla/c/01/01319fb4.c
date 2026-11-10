/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01319fb4; name: FUN_01319fb4
 */


void FUN_01319fb4(float param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_68;
  float local_64;
  
  uVar11 = FUN_0131a338();
  iVar9 = (int)uVar11;
  if (iVar9 < 7) {
    *(int *)(param_2 + 0xc) = iVar9;
    *(undefined8 *)(param_2 + 0x18) = param_3[1];
    *(undefined8 *)(param_2 + 0x10) = *param_3;
    fVar22 = *(float *)PTR_FloatPi_04372db0 + *(float *)PTR_FloatPi_04372db0;
    if (fVar22 <= param_1) {
      uVar16 = 1;
      do {
        param_1 = param_1 - fVar22;
        if (param_1 < fVar22) break;
        bVar8 = uVar16 < 100;
        uVar16 = uVar16 + 1;
      } while (bVar8);
    }
    if (param_1 < 0.0) {
      uVar16 = 1;
      do {
        param_1 = fVar22 + param_1;
        if (0.0 <= param_1) break;
        bVar8 = uVar16 < 100;
        uVar16 = uVar16 + 1;
      } while (bVar8);
    }
    *(undefined1 *)(param_2 + 8) = 1;
    lVar20 = (long)iVar9 * 0x10;
    *(float *)(param_2 + 0x20) = param_1;
    fVar22 = *(float *)(&DAT_03a7ac58 + lVar20);
    fVar23 = *(float *)(&DAT_03a7ac50 + lVar20);
    fVar24 = *(float *)(&DAT_03a7ac5c + lVar20);
    fVar25 = *(float *)(&DAT_03a7ac54 + lVar20);
    local_68 = (float)*(undefined8 *)(param_2 + 0x18);
    local_64 = (float)*(undefined8 *)(param_2 + 0x10);
    pfVar3 = (float *)(&DAT_03a7ac58 + lVar20);
    if (local_64 <= fVar22) {
      pfVar3 = &local_64;
    }
    pfVar2 = (float *)(&DAT_03a7ac50 + lVar20);
    if (fVar23 <= local_64) {
      pfVar2 = pfVar3;
    }
    pfVar3 = (float *)(&DAT_03a7ac5c + lVar20);
    if (local_68 <= fVar24) {
      pfVar3 = &local_68;
    }
    pfVar4 = (float *)(&DAT_03a7ac54 + lVar20);
    if (fVar25 <= local_68) {
      pfVar4 = pfVar3;
    }
    uVar17 = (uint)(((*pfVar2 - fVar23) / (fVar22 - fVar23)) * 16.0);
    uVar13 = (uint)(((*pfVar4 - fVar25) / (fVar24 - fVar25)) * 16.0);
    uVar16 = uVar17;
    if (0xe < uVar17) {
      uVar16 = 0xf;
    }
    if ((int)uVar17 < 1) {
      uVar16 = 0;
    }
    uVar17 = uVar13;
    if (0xe < uVar13) {
      uVar17 = 0xf;
    }
    uVar17 = uVar17 << 4;
    if ((int)uVar13 < 1) {
      uVar17 = 0;
    }
    uVar17 = uVar17 | uVar16;
    uVar12 = FUN_0131b6d0(uVar11,uVar17);
    puVar7 = PTR_DAT_04379568;
    puVar6 = PTR_DAT_04379560;
    if ((uVar12 & 1) == 0) {
      uVar16 = *(uint *)(param_2 + 0xc);
      if ((int)uVar16 < 7) {
        if (6 < uVar16) {
LAB_0131a31c:
                    /* WARNING: Subroutine does not return */
          FUN_0131bd90();
        }
        if ((uVar17 < 0x100) &&
           (iVar9 = *(int *)(param_2 + (long)(int)uVar16 * 0x400 + (ulong)uVar17 * 4 + 0xa4),
           -1 < iVar9)) {
          lVar20 = 0;
          pbVar18 = PTR_DAT_04379558;
          do {
            lVar21 = 0;
            do {
              uVar16 = *(uint *)(param_2 + 0xc);
              if ((int)uVar16 < 7) {
                if (6 < uVar16) goto LAB_0131a31c;
                if (*(int *)(param_2 + (long)(int)uVar16 * 0x400 + (lVar21 + lVar20 * 0x10) * 4 +
                            0xa4) == iVar9) {
LAB_0131a1f4:
                  if (((*pbVar18 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(pbVar18), pbVar18 = PTR_DAT_04379558, iVar10 != 0
                     )) {
                    FUN_00100250(PTR_LAB_04379700,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379558);
                    pbVar18 = PTR_DAT_04379558;
                  }
                  lVar14 = *(long *)puVar6;
                  *(long *)puVar7 = lVar14;
                  plVar19 = *(long **)(lVar14 + 0x2b0);
                  if (plVar19 == (long *)0x0) {
                    lVar14 = 0x6c;
                  }
                  else {
                    lVar14 = plVar19[0xb];
                    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl("","","",0);
                    }
                    if (*(long *)(lVar14 + 0x10) == 0) {
                      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                      pbVar18 = PTR_DAT_04379558;
                      *(undefined8 *)(lVar14 + 0x10) = uVar11;
                    }
                    piVar1 = (int *)(lVar14 + 0xc);
                    do {
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = *piVar1 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    lVar15 = plVar19[0xb];
                    lVar14 = (long)plVar19 + 0x6c;
                    piVar1 = (int *)(lVar15 + 0xc);
                    do {
                      iVar10 = *piVar1;
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = iVar10 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar10 + -1 == 0) {
                      *(undefined8 *)(lVar15 + 0x18) = 0;
                      (**(code **)(*plVar19 + 0x20))(plVar19);
                      pbVar18 = PTR_DAT_04379558;
                    }
                  }
                  uVar12 = lVar21 + lVar20 * 0x10;
                  lVar14 = lVar14 + (long)(int)uVar16 * 0x20;
                  lVar15 = (uVar12 >> 6 & 0x3ffffff) * 8;
                  *(ulong *)(lVar14 + lVar15) = *(ulong *)(lVar14 + lVar15) | 1L << (uVar12 & 0x3f);
                }
              }
              else if (iVar9 == -1) goto LAB_0131a1f4;
              lVar21 = lVar21 + 1;
            } while (lVar21 != 0x10);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x10);
        }
      }
    }
  }
  return;
}


