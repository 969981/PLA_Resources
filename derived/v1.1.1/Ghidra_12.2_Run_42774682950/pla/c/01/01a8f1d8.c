/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8f1d8; name: FUN_01a8f1d8
 */


/* WARNING: Removing unreachable block (ram,0x01a8f420) */

void FUN_01a8f1d8(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  float fStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_38;
  long *local_28;
  
  FUN_01839c8c(&local_38,param_1 + 0xad0);
  FUN_01839c8c(&local_100,param_1 + 0xad0);
  plVar8 = (long *)CONCAT44(fStack_fc,local_100);
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    iVar3 = *(int *)((long)plVar8 + 0x7c);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
    if ((iVar3 == 2) && ((int)local_38[0x29] == 1)) {
      local_7c = 0;
      local_a0 = 0x7f7fffee;
      local_98 = 0xffffffffffffffff;
      local_78 = 0;
      uStack_70 = 0xffffffffffffffff;
      local_e0 = 0;
      local_88 = 0xffffffff;
      local_90 = 0xffffff;
      local_84 = 0xf;
      local_80 = 0xffff;
      local_60 = 0xffffffff;
      local_68 = 0xffffff;
      local_5c = 0xf;
      local_58 = 0xffff;
      local_54 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_009c69bc(&local_110,param_1);
      lVar12 = local_110[0x1b];
      lVar10 = local_110[0x1a];
      if (local_110 != (long *)0x0) {
        lVar11 = local_110[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_110 + 0x20))();
        }
      }
      fVar14 = (float)FUN_00ae6464();
      local_130 = (float)lVar10;
      fStack_12c = (float)((ulong)lVar10 >> 0x20);
      fStack_128 = (float)lVar12;
      fStack_124 = (float)((ulong)lVar12 >> 0x20);
      fVar15 = (float)DAT_0388a140;
      fVar16 = (float)((ulong)DAT_0388a140 >> 0x20);
      fVar17 = (float)DAT_0388a148;
      fVar18 = (float)((ulong)DAT_0388a148 >> 0x20);
      local_130 = local_130 + fVar15 * fVar14;
      fStack_12c = fStack_12c + fVar16 * fVar14;
      fStack_128 = fStack_128 + fVar17 * fVar14;
      fStack_124 = fStack_124 + fVar18 * fVar14;
      uStack_108 = CONCAT44(fStack_124,fStack_128);
      local_110 = (long *)CONCAT44(fStack_12c,local_130);
      fVar14 = *(float *)(*(long *)(param_1 + 0x5c0) + 0x90);
      uStack_118 = CONCAT44(fStack_124 - fVar18 * fVar14,fStack_128 - fVar17 * fVar14);
      uStack_120 = CONCAT44(fStack_12c - fVar16 * fVar14,local_130 - fVar15 * fVar14);
      uVar7 = FUN_01a8d358(param_1,&local_110,&uStack_120,&local_100);
      if ((uVar7 & 1) == 0) {
LAB_01a8f39c:
        uVar9 = 0;
      }
      else {
        fVar15 = (float)local_f0 * fVar15;
        fVar16 = (float)((ulong)local_f0 >> 0x20) * fVar16;
        fVar17 = (float)uStack_e8 * fVar17;
        fVar18 = (float)((ulong)uStack_e8 >> 0x20) * fVar18;
        auVar19._4_4_ = fVar16;
        auVar19._0_4_ = fVar15;
        auVar19._8_4_ = fVar17;
        auVar19._12_4_ = fVar18;
        auVar6._4_4_ = fVar16;
        auVar6._0_4_ = fVar15;
        auVar6._8_4_ = fVar17;
        auVar6._12_4_ = fVar18;
        auVar19 = NEON_ext(auVar19,auVar6,8,1);
        fVar15 = auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16;
        fVar14 = -1.0;
        if (-1.0 <= fVar15) {
          fVar14 = fVar15;
        }
        fVar14 = (float)FUN_0095d8f0(fVar14);
        if (*(float *)((long)local_38 + 0x324) <= fVar14) goto LAB_01a8f39c;
        FUN_009c69bc(&local_28,param_1);
        lVar10 = local_28[0x1a];
        if (local_28 != (long *)0x0) {
          lVar12 = local_28[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
        uVar9 = 1;
        *(float *)(param_1 + 0x75c) = (float)((ulong)lVar10 >> 0x20) - fStack_fc;
      }
      uVar7 = local_d0;
      *(undefined1 *)(param_1 + 0x758) = uVar9;
      if ((local_d0 & 1) != 0) {
        lVar10 = tpidr_el0;
        lVar12 = *(long *)(lVar10 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar12;
        }
        plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        puVar13 = (undefined8 *)(uVar7 - 0x11);
        *puVar13 = 0;
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar13,(long)*(int *)(uVar7 - 9) + 0x10);
      }
      goto joined_r0x01a8f254;
    }
  }
  *(undefined1 *)(param_1 + 0x758) = 0;
joined_r0x01a8f254:
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


