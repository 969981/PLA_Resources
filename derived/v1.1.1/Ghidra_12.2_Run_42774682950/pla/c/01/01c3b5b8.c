/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3b5b8; name: FUN_01c3b5b8
 */


void FUN_01c3b5b8(long *param_1,long param_2,undefined8 *param_3,long *param_4,undefined8 *param_5)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_98;
  undefined1 *local_90;
  ulong uStack_88;
  undefined1 *local_78;
  
  local_90 = &DAT_cbf29ce484222645;
  (*(code *)*param_5)(param_5 + 4,param_3,&local_90);
  if (*param_1 == *param_4) {
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0x20))();
    }
    lVar13 = *(long *)(param_2 + 0x1f8);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar2 = (int *)(lVar13 + 0xc);
      iVar11 = *(int *)(lVar13 + 0xc);
      do {
        plVar10 = *(long **)(lVar13 + 0x10);
        if (((*PTR_DAT_04381fd0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04381fd0), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar7;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04381fd8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04381fd0);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_01c3b644;
          if (plVar10 == (long *)PTR_DAT_04381fd8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar2;
        if (iVar6 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 != 0) {
              iVar11 = *(int *)(param_2 + 0x220);
              if (0 < iVar11) {
                fVar16 = *(float *)PTR_FloatPi_04372cf0;
                fVar14 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
                iVar6 = *(int *)(param_2 + 0x21c);
                local_98 = 1;
                do {
                  if (0 < iVar6) {
                    iVar12 = 0;
                    iVar11 = 0;
                    fVar17 = *(float *)(param_2 + 0x218) / (float)local_98;
                    do {
                      uVar8 = (ulong)((fVar14 / fVar16) *
                                     (((float)iVar12 * 3.1415927) / (float)iVar6));
                      fVar15 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
                      pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 +
                                        (uVar8 >> 0x18 & 0xff) * 0x10);
                      local_78 = &DAT_cbf29ce484222645;
                      local_90 = (undefined1 *)
                                 CONCAT44((int)((ulong)*param_3 >> 0x20),
                                          (float)*param_3 +
                                          fVar17 * (pfVar1[1] + pfVar1[3] * fVar15));
                      uStack_88 = (ulong)(uint)((float)param_3[1] +
                                               fVar17 * (*pfVar1 + pfVar1[2] * fVar15));
                      (*(code *)*param_5)(param_1,param_5 + 4,&local_90,&local_78);
                      if (*param_1 != *param_4) {
                        bVar5 = true;
                        goto LAB_01c3b888;
                      }
                      if ((long *)param_1[3] != (long *)0x0) {
                        (**(code **)(*(long *)param_1[3] + 0x20))();
                      }
                      iVar6 = *(int *)(param_2 + 0x21c);
                      iVar11 = iVar11 + 1;
                      iVar12 = iVar12 + 2;
                    } while (iVar11 < iVar6);
                    iVar11 = *(int *)(param_2 + 0x220);
                  }
                  bVar5 = local_98 < iVar11;
                  local_98 = local_98 + 1;
                } while (bVar5);
              }
              bVar5 = false;
LAB_01c3b888:
              lVar9 = *(long *)(lVar13 + 8);
              piVar2 = (int *)(lVar9 + 0xc);
              do {
                iVar11 = *piVar2;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar3) {
                  *piVar2 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
              }
              if (bVar5) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01c3b644:
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    plVar10 = (long *)param_4[3];
    param_1[2] = param_4[2];
    param_1[3] = (long)plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  return;
}


