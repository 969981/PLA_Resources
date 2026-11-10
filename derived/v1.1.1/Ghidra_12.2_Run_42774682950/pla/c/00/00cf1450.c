/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf1450; name: FUN_00cf1450
 */


undefined8
FUN_00cf1450(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16],
            long param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,uint param_9,
            long param_10,undefined8 *param_11,long *param_12)

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
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float local_a0;
  float fStack_98;
  float fStack_94;
  
  puVar7 = PTR_DAT_043794b8;
  puVar6 = PTR_DAT_043794b0;
  fVar21 = param_4._12_4_;
  fVar20 = param_4._8_4_;
  fVar18 = param_4._0_4_;
  lVar13 = *param_12;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar11 = *(int *)(lVar13 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar13 + 0x10);
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
      if (iVar8 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          plVar10 = (long *)(lVar13 + -0x50);
          if (lVar13 == 0) {
            return 0;
          }
          uVar5 = param_11[1];
          uVar9 = *param_11;
          (**(code **)(*plVar10 + 0x40))(plVar10);
          local_a0 = (float)uVar9;
          fStack_98 = (float)uVar5;
          fStack_94 = (float)((ulong)uVar5 >> 0x20);
          uVar19 = 0;
          fVar14 = (local_a0 - fVar18) * (local_a0 - fVar18);
          fVar15 = (fStack_98 - fVar20) * (fStack_98 - fVar20);
          fVar16 = (fStack_94 - fVar21) * (fStack_94 - fVar21);
          auVar17._4_4_ = 0;
          auVar17._0_4_ = fVar14;
          auVar17._8_4_ = fVar15;
          auVar17._12_4_ = fVar16;
          auVar4._4_4_ = 0;
          auVar4._0_4_ = fVar14;
          auVar4._8_4_ = fVar15;
          auVar4._12_4_ = fVar16;
          auVar17 = NEON_ext(auVar17,auVar4,8,1);
          param_1 = SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + 0.0) / param_1;
          fVar15 = *(float *)(param_5 + 0x274);
          *param_6 = *param_7;
          fVar14 = param_1 * 100.0;
          if (100.0 < fVar14) {
            fVar14 = 100.0;
          }
          FUN_008c4b3c(param_6 + 2,param_12);
          *(undefined4 *)(param_6 + 4) = *param_8;
          (**(code **)(*plVar10 + 0x40))(plVar10);
          *(uint *)(param_6 + 1) = (uint)(param_1 <= fVar15);
          param_6[7] = CONCAT44(fVar21,fVar20);
          param_6[6] = CONCAT44(uVar19,fVar18);
          *(int *)(param_6 + 8) = (int)fVar14;
          *(ulong *)((long)param_6 + 0x54) = (ulong)param_9 | param_10 << 0x20;
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 1) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
  return 0;
}


