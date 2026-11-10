/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025cb76c; name: FUN_025cb76c
 */


void FUN_025cb76c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  code *pcVar12;
  float fVar13;
  float extraout_var;
  float fVar14;
  float fVar15;
  long *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  char local_90;
  undefined1 auStack_80 [24];
  long *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  FUN_0099c748(&local_28,param_1 + 0x220);
  FUN_025caa60(&local_68,param_1);
  lVar9 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  auVar7._8_8_ = local_60._8_8_;
  auVar7._0_8_ = local_60._0_8_;
  if ((local_28 != (long *)0x0) &&
     (fVar14 = (float)((double)*(long *)(lVar9 + 8) / 1000000000.0), local_60 = auVar7,
     1.1920929e-07 <= fVar14 && local_68 != (long *)0x0)) {
    uVar10 = FUN_01bf34a0();
    plVar1 = local_68;
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_01bf34a0(local_68);
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_01a5badc(plVar1,plVar1 + 499);
        if (((uVar10 & 0xff) != 0) && ((uVar10 & 0xffffffff00000000) == 0x200000000))
        goto joined_r0x025cbaa4;
      }
      if ((1.1920929e-07 < *(float *)(param_1 + 0x1fc)) &&
         (1.1920929e-07 < *(float *)(param_1 + 0x1fc) - *(float *)(param_1 + 0x1f8))) {
        lVar9 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
        fVar15 = *(float *)(param_1 + 0x1f8) + (float)((double)*(long *)(lVar9 + 8) / 1000000000.0);
        fVar13 = *(float *)(param_1 + 0x1fc);
        *(float *)(param_1 + 0x1f8) = fVar15;
        if (fVar13 <= fVar15) {
          *(float *)(param_1 + 0x1f8) = fVar13;
        }
        fVar13 = *(float *)(param_1 + 0x200) / fVar13;
        local_b0 = (long *)&DAT_7c08eae870e235e0;
        pcStack_a8 = "player";
        local_a0 = 6;
        local_98 = (long *)0x0;
        local_60._0_8_ = (long *)0xf438ac87a69667dd;
        local_60._8_8_ = "knockback_easefunc";
        local_50 = 0x12;
        local_48 = (long *)0x0;
        uVar10 = FUN_00ea3f80(&local_b0,local_60);
        fVar15 = (float)(**(code **)(PTR_PTR_0437a4c8 + (uVar10 & 0xffffffff) * 8))
                                  (*(float *)(param_1 + 0x1f8) / *(float *)(param_1 + 0x1fc));
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        fVar13 = fVar13 + (0.0 - fVar13) * fVar15;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (1.1920929e-07 <= fVar13) {
          local_60._0_8_ =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20) * fVar13 * fVar14,
                        (float)*(undefined8 *)(param_1 + 0x210) * fVar13 * fVar14);
          local_60._8_8_ =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20) * fVar13 * fVar14,
                        (float)*(undefined8 *)(param_1 + 0x218) * fVar13 * fVar14);
          FUN_01a835e0(&local_b0,local_28,local_60);
          plVar1 = local_28;
          if (local_90 == '\0') {
            FUN_01a84eb8(local_28);
            fVar13 = (float)FUN_01a84fc8(local_28);
            fVar13 = extraout_var - fVar13 * fVar14;
            fVar14 = 1.0 / fVar14;
            puVar11 = local_60;
            local_60._4_4_ =
                 (float)((ulong)local_b0 >> 0x20) * fVar14 +
                 (float)((ulong)DAT_0388a140 >> 0x20) * fVar13;
            local_60._0_4_ = SUB84(local_b0,0) * fVar14 + (float)DAT_0388a140 * fVar13;
            local_60._12_4_ =
                 (float)((ulong)pcStack_a8 >> 0x20) * fVar14 +
                 (float)((ulong)DAT_0388a148 >> 0x20) * fVar13;
            local_60._8_4_ = SUB84(pcStack_a8,0) * fVar14 + (float)DAT_0388a148 * fVar13;
            pcVar12 = *(code **)(*local_28 + 0x100);
          }
          else if ((char)local_a0 == '\0') {
            fVar14 = 1.0 / fVar14;
            local_60._4_4_ = (float)((ulong)local_b0 >> 0x20) * fVar14;
            local_60._0_4_ = SUB84(local_b0,0) * fVar14;
            local_60._12_4_ = (float)((ulong)pcStack_a8 >> 0x20) * fVar14;
            local_60._8_4_ = SUB84(pcStack_a8,0) * fVar14;
            pcVar12 = *(code **)(*local_28 + 0x100);
            puVar11 = local_60;
          }
          else {
            local_60 = FUN_01a842f8(local_28);
            FUN_01a83770(plVar1,auStack_80,local_60);
            pcVar12 = *(code **)(*local_28 + 0x100);
            puVar11 = PTR_DAT_0437a330;
          }
          (*pcVar12)(local_28,puVar11);
          bVar6 = local_90 != '\0';
          local_90 = '\0';
          if (bVar6) {
            local_90 = '\0';
          }
          goto joined_r0x025cbaa4;
        }
      }
      uVar10 = (**(code **)(*local_28 + 0x1b0))();
      if ((uVar10 & 1) == 0) {
        uVar10 = (**(code **)(*local_28 + 0x1a8))();
        if ((uVar10 & 1) == 0) {
          (**(code **)(*local_28 + 0x100))(local_28,PTR_DAT_0437a330);
          plVar1 = local_28 + 0x15a;
          FUN_01839c8c(local_60,plVar1);
          if ((long *)local_60._0_8_ != (long *)0x0) {
            FUN_01839c8c(&local_b0,plVar1);
            if (local_b0 != (long *)0x0) {
              lVar9 = local_b0[0xb];
              piVar2 = (int *)(lVar9 + 0xc);
              iVar4 = *(int *)((long)local_b0 + 0x7c);
              do {
                iVar3 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar3 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar3 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*local_b0 + 0x20))();
              }
              if (iVar4 == 2) {
                lVar9 = *(long *)(local_60._0_8_ + 0xd0);
                *(undefined8 *)(lVar9 + 0xc0) = 0;
                *(undefined8 *)(lVar9 + 200) = 0;
              }
            }
            auVar8._8_8_ = local_60._8_8_;
            auVar8._0_8_ = local_60._0_8_;
            if ((long *)local_60._0_8_ != (long *)0x0) {
              lVar9 = *(long *)(local_60._0_8_ + 0x58);
              piVar2 = (int *)(lVar9 + 0xc);
              do {
                iVar4 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              local_60 = auVar8;
              if (iVar4 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*(long *)local_60._0_8_ + 0x20))();
              }
            }
          }
        }
      }
    }
  }
joined_r0x025cbaa4:
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


