/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1e7fc; name: FUN_01f1e7fc
 */


void FUN_01f1e7fc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  undefined4 extraout_s0;
  float extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  float local_88;
  undefined1 auStack_84 [4];
  int local_80;
  int local_7c;
  long local_78;
  
  puVar6 = PTR_DAT_04379d88;
  puVar5 = PTR_DAT_04379d80;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x88);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar16 = *(int *)(lVar12 + 0xc);
    do {
      plVar17 = *(long **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar16) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01f1e890;
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 == 0) {
          return;
        }
        plVar17 = (long *)(lVar12 + -0x50);
        if (((*(char *)(param_1 + 0x1009b8) == '\0') && (*(char *)(param_1 + 0x1008a8) != '\0')) &&
           (*(char *)(param_1 + 0x5e651) == '\0')) {
          FUN_025acc5c(plVar17,&local_7c,&local_80,auStack_84);
          iVar7 = local_80;
          iVar16 = *(int *)(param_1 + 0x1008c0) + 1;
          iVar8 = 0;
          if (iVar16 < *(int *)(param_1 + 0x1008c4)) {
            iVar8 = *(int *)(param_1 + 0x1008c0) + 1;
          }
          *(int *)(param_1 + 0x1008c0) = iVar8;
          if (*(int *)(param_1 + 0x1008c4) <= iVar16) {
            FUN_00cb8d18(param_1 + 0x100910);
            fVar18 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
            fVar21 = fVar18 * 180.0;
            for (fVar20 = extraout_var; fVar21 < fVar20; fVar20 = fVar20 + fVar18 * -360.0) {
            }
            for (; fVar20 < -fVar21; fVar20 = fVar18 * 360.0 + fVar20) {
            }
            if (local_7c - 5U < 0x10) {
              if (local_7c < 0x13) {
                fVar19 = *(float *)(param_1 + 0x1008e0);
              }
              else {
                iVar16 = local_80 + 0x3c;
                if (local_7c != 0x14) {
                  iVar16 = local_80;
                }
                fVar19 = *(float *)(param_1 + 0x1008e0);
                fVar22 = *(float *)(param_1 + 0x1008fc);
LAB_01f1ec54:
                fVar19 = fVar19 + (fVar22 - fVar19) * ((float)iVar16 / 120.0);
              }
            }
            else {
              if (local_7c - 3U < 2) {
                iVar16 = local_80 + 0x3c;
                if (local_7c != 4) {
                  iVar16 = local_80;
                }
                fVar19 = *(float *)(param_1 + 0x1008fc);
                fVar22 = *(float *)(param_1 + 0x1008e0);
                goto LAB_01f1ec54;
              }
              fVar19 = *(float *)(param_1 + 0x1008fc);
            }
            FUN_009a7ff4(fVar18 * (fVar20 / fVar21) * 180.0,fVar18 * fVar19 * 90.0,0);
            *(undefined8 *)(param_1 + 0x1008b8) = extraout_var_01;
            *(ulong *)(param_1 + 0x1008b0) = CONCAT44(extraout_var_00,extraout_s0);
          }
          local_88 = 1.0;
          if (0x11 < local_7c - 3U) {
switchD_01f1e968_caseD_5:
            lVar9 = *(long *)(param_1 + 0x68);
            goto joined_r0x01f1e970;
          }
          switch(local_7c) {
          case 3:
            fVar20 = *(float *)(param_1 + 0x100900);
            break;
          case 4:
            fVar20 = *(float *)(param_1 + 0x100900);
            goto LAB_01f1ebf8;
          default:
            goto switchD_01f1e968_caseD_5;
          case 0x13:
            fVar20 = *(float *)(param_1 + 0x1008e4);
            break;
          case 0x14:
            fVar20 = *(float *)(param_1 + 0x1008e4);
LAB_01f1ebf8:
            local_88 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x80))(1.0 - (float)iVar7 / 60.0);
            local_88 = (fVar20 + -1.0) * local_88;
            goto LAB_01f1ea74;
          }
          local_88 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x80))();
          local_88 = (fVar20 + -1.0) * local_88;
LAB_01f1ea74:
          local_88 = local_88 + 1.0;
          lVar9 = *(long *)(param_1 + 0x68);
joined_r0x01f1e970:
          if (lVar9 == 0) {
            local_90 = (long *)0x0;
          }
          else {
            FUN_019bf828(&local_90);
            if (local_90 != (long *)0x0) {
              local_b0 = 0x12ee93efcc18b5c6;
              pcStack_a8 = "DirectionalMain";
              local_a0 = 0x1f;
              local_98 = (long *)0x0;
              lVar9 = FUN_02b1f8b0(DAT_043ef5b0,&local_b0);
              local_78 = lVar9;
              uVar10 = FUN_02b21278(DAT_043ef5b0,&local_78);
              if ((uVar10 & 1) != 0) {
                uVar10 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
                lVar13 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar10 / 0x12) * 8);
                lVar15 = (uVar10 % 0x12) * 0xd8;
                lVar14 = (lVar9 >> 0x20) * 0x1b0;
                lVar9 = *(long *)(lVar13 + lVar15) + lVar14;
                *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(param_1 + 0x1008b8);
                *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(param_1 + 0x1008b0);
                *(undefined1 *)(*(long *)(lVar13 + lVar15) + lVar14 + 0x1a9) = 1;
              }
              local_b0 = 0xccd9f49461ab3284;
              pcStack_a8 = "ShadowDense";
              local_a0 = 0x1f;
              local_98 = (long *)0x0;
              FUN_02ad632c(&local_b0,&local_88);
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              if (local_90 != (long *)0x0) {
                lVar9 = local_90[0xb];
                piVar1 = (int *)(lVar9 + 0xc);
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
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*local_90 + 0x20))();
                }
              }
            }
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          return;
        }
        return;
      }
      ClearExclusiveLocal();
LAB_01f1e890:
      iVar16 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


