/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cfb784; name: FUN_00cfb784
 */


undefined8
FUN_00cfb784(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
            undefined8 *param_5,long *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 in_q3 [16];
  float fVar21;
  float local_90;
  float fStack_88;
  float fStack_84;
  
  puVar7 = PTR_DAT_043794b8;
  puVar6 = PTR_DAT_043794b0;
  fVar21 = in_q3._12_4_;
  fVar20 = in_q3._8_4_;
  fVar18 = in_q3._0_4_;
  lVar10 = *param_6;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar13 = *(int *)(lVar10 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar7 = PTR_DAT_043794c8;
        __cxa_guard_release(puVar6);
      }
      if (puVar12 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar12 != (undefined8 *)puVar7) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          plVar11 = (long *)(lVar10 + -0x50);
          if (lVar10 == 0) {
            return 0;
          }
          uVar5 = param_5[1];
          uVar9 = *param_5;
          (**(code **)(*plVar11 + 0x40))(plVar11);
          local_90 = (float)uVar9;
          fStack_88 = (float)uVar5;
          fStack_84 = (float)((ulong)uVar5 >> 0x20);
          uVar19 = 0;
          fVar14 = (local_90 - fVar18) * (local_90 - fVar18);
          fVar15 = (fStack_88 - fVar20) * (fStack_88 - fVar20);
          fVar16 = (fStack_84 - fVar21) * (fStack_84 - fVar21);
          auVar17._4_4_ = 0;
          auVar17._0_4_ = fVar14;
          auVar17._8_4_ = fVar15;
          auVar17._12_4_ = fVar16;
          auVar4._4_4_ = 0;
          auVar4._0_4_ = fVar14;
          auVar4._8_4_ = fVar15;
          auVar4._12_4_ = fVar16;
          auVar17 = NEON_ext(auVar17,auVar4,8,1);
          fVar15 = SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + 0.0) / *(float *)(param_1 + 0x270);
          fVar16 = *(float *)(param_1 + 0x274);
          *param_2 = *param_3;
          fVar14 = fVar15 * 100.0;
          if (100.0 < fVar14) {
            fVar14 = 100.0;
          }
          FUN_008c4b3c(param_2 + 2,param_6);
          *(undefined4 *)(param_2 + 4) = *param_4;
          (**(code **)(*plVar11 + 0x40))(plVar11);
          *(uint *)(param_2 + 1) = (uint)(fVar15 <= fVar16);
          param_2[7] = CONCAT44(fVar21,fVar20);
          param_2[6] = CONCAT44(uVar19,fVar18);
          *(int *)(param_2 + 8) = (int)fVar14;
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 == 1) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar8;
    } while (iVar8 != 0);
  }
  return 0;
}


