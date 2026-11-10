/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3ceb0; name: FUN_01c3ceb0
 */


byte FUN_01c3ceb0(long param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_90;
  ulong uStack_88;
  undefined4 local_74;
  
  local_90 = CONCAT44(local_90._4_4_,param_5);
  bVar6 = (*(code *)*param_4)(param_4 + 4,param_2,&local_90);
  if ((bVar6 & 1) == *param_3) {
    lVar16 = *(long *)(param_1 + 0x1f8);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
      piVar2 = (int *)(lVar16 + 0xc);
      iVar14 = *(int *)(lVar16 + 0xc);
      do {
        plVar13 = *(long **)(lVar16 + 0x10);
        if (((*PTR_DAT_04381fd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04381fd0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04381fd8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04381fd0);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01c3cf18;
          if (plVar13 == (long *)PTR_DAT_04381fd8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar2;
        if (iVar8 == iVar14) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01c3cf64;
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            iVar14 = *(int *)(param_1 + 0x220);
            if (0 < iVar14) {
              fVar19 = *(float *)PTR_FloatPi_04372cf0;
              fVar17 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
              iVar8 = *(int *)(param_1 + 0x21c);
              iVar12 = 1;
              do {
                if (0 < iVar8) {
                  iVar15 = 0;
                  iVar14 = 0;
                  fVar20 = *(float *)(param_1 + 0x218) / (float)iVar12;
                  do {
                    uVar10 = (ulong)((fVar17 / fVar19) *
                                    (((float)iVar15 * 3.1415927) / (float)iVar8));
                    fVar18 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
                    pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 +
                                      (uVar10 >> 0x18 & 0xff) * 0x10);
                    local_90 = CONCAT44((int)((ulong)*param_2 >> 0x20),
                                        (float)*param_2 + fVar20 * (pfVar1[1] + pfVar1[3] * fVar18))
                    ;
                    uStack_88 = (ulong)(uint)((float)param_2[1] +
                                             fVar20 * (*pfVar1 + pfVar1[2] * fVar18));
                    local_74 = param_5;
                    bVar7 = (*(code *)*param_4)(param_4 + 4,&local_90,&local_74);
                    if ((bVar7 & 1) != *param_3) {
                      bVar5 = true;
                      bVar6 = bVar7;
                      goto LAB_01c3d100;
                    }
                    iVar8 = *(int *)(param_1 + 0x21c);
                    iVar14 = iVar14 + 1;
                    iVar15 = iVar15 + 2;
                  } while (iVar14 < iVar8);
                  iVar14 = *(int *)(param_1 + 0x220);
                }
                bVar5 = iVar12 < iVar14;
                iVar12 = iVar12 + 1;
              } while (bVar5);
            }
            bVar5 = false;
LAB_01c3d100:
            lVar11 = *(long *)(lVar16 + 8);
            piVar2 = (int *)(lVar11 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar3) {
                *piVar2 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
            }
            if (bVar5) goto LAB_01c3cf24;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c3cf64:
        iVar14 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01c3cf18:
    bVar6 = *param_3 != 0;
  }
LAB_01c3cf24:
  return bVar6 & 1;
}


