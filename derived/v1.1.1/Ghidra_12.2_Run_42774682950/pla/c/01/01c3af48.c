/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3af48; name: FUN_01c3af48
 */


undefined1 * FUN_01c3af48(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 in_q3 [16];
  float fVar21;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  ulong uStack_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar9 = in_q3._8_8_;
  uVar20 = in_q3._4_4_;
  uVar19 = in_q3._0_4_;
  lVar7 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x548);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x53c));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01c3afc4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01c3afc4:
  if (*(char *)(param_1 + 0x410) == '\0') {
    FUN_009c69bc(&local_90,param_1);
    (**(code **)(*local_90 + 0x40))();
    local_a0 = CONCAT44(uVar20,uVar19);
    uStack_98 = uVar9;
    if (local_90 != (long *)0x0) {
      lVar7 = local_90[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    local_90 = (long *)CONCAT44(local_90._4_4_,param_2);
    puVar12 = &DAT_cbf29ce484222645;
    local_78 = param_4;
    uStack_74 = param_3;
    puVar8 = (undefined1 *)
             (**(code **)(param_1 + 0x240))
                       (param_1 + 0x260,&local_a0,&local_90,&uStack_74,&local_78);
    if (puVar8 == &DAT_cbf29ce484222645) {
      lVar7 = *(long *)(param_1 + 0x1f8);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
        piVar2 = (int *)(lVar7 + 0xc);
        iVar14 = *(int *)(lVar7 + 0xc);
        do {
          plVar13 = *(long **)(lVar7 + 0x10);
          if (((*PTR_DAT_04381fd0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04381fd0), iVar6 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar9;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_04381fd8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_04381fd0);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01c3b058;
            if (plVar13 == (long *)PTR_DAT_04381fd8) break;
            plVar13 = (long *)*plVar13;
          }
          iVar6 = *piVar2;
          if (iVar6 == iVar14) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01c3b0e8;
            lVar7 = *(long *)(lVar7 + 0x18);
            if (lVar7 != 0) {
              iVar14 = *(int *)(param_1 + 0x220);
              if (0 < iVar14) {
                fVar18 = *(float *)PTR_FloatPi_04372cf0;
                fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
                iVar6 = *(int *)(param_1 + 0x21c);
                local_a4 = 1;
                do {
                  if (0 < iVar6) {
                    iVar15 = 0;
                    iVar14 = 0;
                    fVar21 = *(float *)(param_1 + 0x218) / (float)local_a4;
                    do {
                      uVar10 = (ulong)((fVar16 / fVar18) *
                                      (((float)iVar15 * 3.1415927) / (float)iVar6));
                      fVar17 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
                      pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 +
                                        (uVar10 >> 0x18 & 0xff) * 0x10);
                      local_90 = (long *)CONCAT44((int)((ulong)local_a0 >> 0x20),
                                                  (float)local_a0 +
                                                  fVar21 * (pfVar1[1] + pfVar1[3] * fVar17));
                      uStack_88 = (ulong)(uint)((float)uStack_98 +
                                               fVar21 * (*pfVar1 + pfVar1[2] * fVar17));
                      local_7c = param_4;
                      local_78 = param_3;
                      uStack_74 = param_2;
                      puVar8 = (undefined1 *)
                               (**(code **)(param_1 + 0x240))
                                         (param_1 + 0x260,&local_90,&uStack_74,&local_78,&local_7c);
                      if (puVar8 != &DAT_cbf29ce484222645) {
                        bVar5 = true;
                        goto LAB_01c3b294;
                      }
                      iVar6 = *(int *)(param_1 + 0x21c);
                      iVar14 = iVar14 + 1;
                      iVar15 = iVar15 + 2;
                    } while (iVar14 < iVar6);
                    iVar14 = *(int *)(param_1 + 0x220);
                  }
                  bVar5 = local_a4 < iVar14;
                  local_a4 = local_a4 + 1;
                } while (bVar5);
              }
              bVar5 = false;
              puVar8 = &DAT_cbf29ce484222645;
LAB_01c3b294:
              lVar11 = *(long *)(lVar7 + 8);
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
                (**(code **)(*(long *)(lVar7 + -0x50) + 0x20))();
              }
              if ((puVar8 == &DAT_cbf29ce484222645) || (!bVar5)) break;
              goto LAB_01c3b09c;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_01c3b0e8:
          iVar14 = iVar6;
        } while (iVar6 != 0);
      }
    }
    else {
LAB_01c3b09c:
      puVar12 = puVar8;
      if (*(char *)(param_1 + 0x410) == '\0') {
        *(undefined1 **)(param_1 + 0x418) = puVar12;
        *(undefined1 *)(param_1 + 0x410) = 1;
      }
      else {
        *(undefined1 **)(param_1 + 0x418) = puVar12;
      }
    }
  }
  else {
    puVar12 = *(undefined1 **)(param_1 + 0x418);
  }
LAB_01c3b058:
  *(undefined8 *)(param_1 + 0x548) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x53c));
  return puVar12;
}


