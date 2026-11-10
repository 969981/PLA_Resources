/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b732c4; name: FUN_01b732c4
 */


void FUN_01b732c4(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_d0 [8];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [48];
  
  lVar11 = *param_3;
  uVar12 = *(undefined8 *)*param_2;
  *param_1 = 0xffffffff;
  puVar13 = (undefined8 *)(param_1 + 4);
  *puVar13 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar2 = *(undefined8 *)PTR_DAT_04379570;
  uVar3 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  puVar8 = *(undefined8 **)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar8[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_d0[0] = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,local_d0);
    }
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar8[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_d0[0] = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,local_d0);
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x36) = uVar3;
  puVar8 = *(undefined8 **)(param_1 + 0x3e);
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_d0[0] = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,local_d0);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x42);
  *(undefined8 *)(param_1 + 0x42) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_d0[0] = *puVar8;
      FUN_02a44274(lVar9 + 0xd8,local_d0);
    }
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  if (*(ushort *)(lVar11 + 4) < 0xd) {
    *param_1 = (int)param_3[1];
    FUN_01b7301c(param_1 + 8,param_2,param_3,1);
    FUN_01b7301c(param_1 + 0x2c,param_2,param_3,0);
    if (*(short *)(lVar11 + 4) == 3) {
      FUN_03024610(lVar11,uVar12,local_d0);
      if (*(long *)(lVar11 + 0x18) == 0) {
        *puVar13 = 0;
        *(undefined8 *)(param_1 + 6) = 0;
      }
      else {
        bVar4 = *(byte *)(*(long *)(lVar11 + 0x18) + 4);
        *puVar13 = 0;
        *(undefined8 *)(param_1 + 6) = 0;
        if ((ulong)bVar4 != 0) {
          auVar20._8_4_ = uStack_88;
          auVar20._0_8_ = local_90;
          auVar19._8_4_ = uStack_88;
          auVar19._0_8_ = local_90;
          auVar19._12_4_ = uStack_84;
          auVar20._12_4_ = uStack_84;
          auVar19 = NEON_ext(auVar19,auVar20,8,1);
          fVar15 = (float)local_90 + 0.0;
          fVar16 = (float)((ulong)local_90 >> 0x20) + 0.0;
          fVar17 = auVar19._0_4_ + 0.0;
          fVar18 = 0.0;
          if (bVar4 != 1) {
            lVar11 = (ulong)bVar4 - 1;
            pauVar10 = (undefined1 (*) [16])auStack_80;
            do {
              auVar19 = *pauVar10;
              auVar20 = NEON_ext(auVar19,auVar19,8,1);
              lVar11 = lVar11 + -1;
              fVar15 = fVar15 + auVar19._0_4_;
              fVar16 = fVar16 + auVar19._4_4_;
              fVar17 = fVar17 + auVar20._0_4_;
              fVar18 = fVar18 + 0.0;
              pauVar10 = pauVar10 + 1;
            } while (lVar11 != 0);
          }
          fVar14 = 1.0 / (float)bVar4;
          *(ulong *)(param_1 + 6) = CONCAT44(fVar18 * fVar14,fVar17 * fVar14);
          *puVar13 = CONCAT44(fVar16 * fVar14,fVar15 * fVar14);
        }
      }
    }
    else {
      *(ulong *)(param_1 + 6) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x32) >> 0x20)) * 0.5,
                    ((float)*(undefined8 *)(param_1 + 0xe) + (float)*(undefined8 *)(param_1 + 0x32))
                    * 0.5);
      *(ulong *)(param_1 + 4) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20)) * 0.5,
                    ((float)*(undefined8 *)(param_1 + 0xc) + (float)*(undefined8 *)(param_1 + 0x30))
                    * 0.5);
    }
  }
  return;
}


