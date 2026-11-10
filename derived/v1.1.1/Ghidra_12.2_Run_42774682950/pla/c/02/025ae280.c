/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ae280; name: FUN_025ae280
 */


undefined1  [16] FUN_025ae280(float param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float extraout_s0;
  float fVar19;
  float fVar20;
  float extraout_var;
  float fVar21;
  float fVar22;
  float extraout_var_00;
  float fVar23;
  float extraout_var_01;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 local_188;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined4 local_120;
  undefined8 local_118;
  undefined8 auStack_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_2 + 0x188);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_025ae2ac:
    local_188 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar17 = *(int *)(lVar13 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar10;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_025ae2ac;
      while (puVar15 != (undefined8 *)puVar6) {
        puVar15 = (undefined8 *)*puVar15;
        local_188 = 0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_025ae2b0;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar17) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            local_bc = 0;
            local_e0 = 0x7f7fffee;
            local_120 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            plVar12 = (long *)(lVar13 + -0x50);
            local_d8 = 0xffffffffffffffff;
            local_c8 = 0xffffffff;
            local_d0 = 0xffffff;
            local_c4 = 0xf;
            local_c0 = 0xffff;
            local_a0 = 0xffffffff;
            local_a8 = 0xffffff;
            local_9c = 0xf;
            local_98 = 0xffff;
            local_94 = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            local_118 = 0;
            auStack_110[0] = 0;
            local_b8 = 0;
            uStack_b0 = 0xffffffffffffffff;
            local_90 = 0;
            uStack_88 = 0;
            lVar11 = *(long *)(param_2 + 0x68);
            if (*(long *)(param_2 + 0x70) == lVar11) {
              local_188 = 0;
            }
            else {
              fVar18 = (float)DAT_0388a140 * param_1;
              fVar20 = (float)((ulong)DAT_0388a140 >> 0x20) * param_1;
              fVar22 = (float)DAT_0388a148 * param_1;
              param_1 = (float)((ulong)DAT_0388a148 >> 0x20) * param_1;
              fVar26 = 3.4028235e+38;
              lVar14 = 0;
              uVar16 = 0;
              local_188 = 0;
              do {
                FUN_0108c170(lVar11 + lVar14);
                uStack_158 = CONCAT44(extraout_var_01 - param_1,extraout_var_00 - fVar22);
                local_160 = CONCAT44(extraout_var - fVar20,extraout_s0 - fVar18);
                uStack_148 = CONCAT44(param_1 + extraout_var_01,fVar22 + extraout_var_00);
                uStack_150 = CONCAT44(fVar20 + extraout_var,fVar18 + extraout_s0);
                uVar9 = FUN_01e434f4(plVar12,&uStack_150,&local_160,param_4,auStack_140);
                if ((uVar9 & 1) != 0) {
                  fVar19 = (float)*param_3 - extraout_s0;
                  fVar21 = (float)((ulong)*param_3 >> 0x20) - extraout_var;
                  fVar23 = (float)param_3[1] - extraout_var_00;
                  fVar24 = (float)((ulong)param_3[1] >> 0x20) - extraout_var_01;
                  fVar19 = fVar19 * fVar19;
                  fVar21 = fVar21 * fVar21;
                  fVar23 = fVar23 * fVar23;
                  fVar24 = fVar24 * fVar24;
                  auVar25._4_4_ = fVar21;
                  auVar25._0_4_ = fVar19;
                  auVar25._8_4_ = fVar23;
                  auVar25._12_4_ = fVar24;
                  auVar4._4_4_ = fVar21;
                  auVar4._0_4_ = fVar19;
                  auVar4._8_4_ = fVar23;
                  auVar4._12_4_ = fVar24;
                  auVar25 = NEON_ext(auVar25,auVar4,8,1);
                  fVar19 = auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar21;
                  if (fVar19 < fVar26) {
                    local_188 = 1;
                    unaff_x20 = uVar16;
                    fVar26 = fVar19;
                  }
                }
                lVar11 = *(long *)(param_2 + 0x68);
                uVar16 = uVar16 + 1;
                lVar14 = lVar14 + 0x20;
              } while (uVar16 < (ulong)(*(long *)(param_2 + 0x70) - lVar11 >> 5));
            }
            FUN_032c7b9c(auStack_110);
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar17 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar17 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
            break;
          }
          goto LAB_025ae2ac;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_188 = 0;
      iVar17 = iVar8;
    } while (iVar8 != 0);
  }
LAB_025ae2b0:
  auVar27._8_8_ = unaff_x20;
  auVar27._0_8_ = local_188;
  return auVar27;
}


