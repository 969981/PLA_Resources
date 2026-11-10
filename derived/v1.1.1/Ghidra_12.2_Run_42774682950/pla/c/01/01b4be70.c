/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4be70; name: FUN_01b4be70
 */


void FUN_01b4be70(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  undefined8 uVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110 [22];
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  fVar34 = param_4._12_4_;
  fVar33 = param_4._8_4_;
  fVar32 = param_4._4_4_;
  fVar31 = param_4._0_4_;
  fVar30 = param_3._12_4_;
  fVar29 = param_3._8_4_;
  fVar28 = param_3._4_4_;
  fVar27 = param_3._0_4_;
  fVar26 = param_2._12_4_;
  fVar25 = param_2._8_4_;
  fVar24 = param_2._4_4_;
  fVar23 = param_2._0_4_;
  lVar11 = *(long *)(param_5 + 0x1a8);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar19 = *(int *)(lVar11 + 0xc);
    do {
      plVar20 = *(long **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) {
          return;
        }
        if (plVar20 == (long *)puVar5) break;
        plVar20 = (long *)*plVar20;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          uVar12 = (ulong)*(byte *)(param_5 + 0x240);
          if (*(byte *)(param_5 + 0x240) != 0) {
            local_110[0] = *(undefined8 *)(param_5 + 0x250);
            local_110[1] = *(undefined8 *)(param_5 + 600);
            uVar12 = 1;
          }
          uVar13 = uVar12;
          if (*(char *)(param_5 + 0x260) != '\0') {
            uVar16 = *(undefined8 *)(param_5 + 0x278);
            uVar13 = (ulong)((int)uVar12 + 1);
            local_110[uVar12 * 2] = *(undefined8 *)(param_5 + 0x270);
            local_110[uVar12 * 2 + 1] = uVar16;
          }
          uVar12 = uVar13;
          if (*(char *)(param_5 + 0x280) != '\0') {
            uVar16 = *(undefined8 *)(param_5 + 0x298);
            uVar12 = (ulong)((int)uVar13 + 1);
            local_110[uVar13 * 2] = *(undefined8 *)(param_5 + 0x290);
            local_110[uVar13 * 2 + 1] = uVar16;
          }
          uVar13 = uVar12;
          if (*(char *)(param_5 + 0x2a0) != '\0') {
            uVar16 = *(undefined8 *)(param_5 + 0x2b8);
            uVar13 = (ulong)((int)uVar12 + 1);
            local_110[uVar12 * 2] = *(undefined8 *)(param_5 + 0x2b0);
            local_110[uVar12 * 2 + 1] = uVar16;
          }
          uVar12 = uVar13;
          if (*(char *)(param_5 + 0x2c0) != '\0') {
            uVar16 = *(undefined8 *)(param_5 + 0x2d8);
            uVar12 = (ulong)((int)uVar13 + 1);
            local_110[uVar13 * 2] = *(undefined8 *)(param_5 + 0x2d0);
            local_110[uVar13 * 2 + 1] = uVar16;
          }
          if (*(char *)(param_5 + 0x2e0) == '\0') {
            uVar13 = uVar12;
            if (*(char *)(param_5 + 0x300) == '\0') goto LAB_01b4c004;
LAB_01b4c178:
            uVar16 = *(undefined8 *)(param_5 + 0x318);
            uVar12 = (ulong)((int)uVar13 + 1);
            local_110[uVar13 * 2] = *(undefined8 *)(param_5 + 0x310);
            local_110[uVar13 * 2 + 1] = uVar16;
            if (*(char *)(param_5 + 800) != '\0') goto LAB_01b4c19c;
LAB_01b4c00c:
            cVar2 = *(char *)(param_5 + 0x340);
          }
          else {
            uVar16 = *(undefined8 *)(param_5 + 0x2f8);
            uVar13 = (ulong)((int)uVar12 + 1);
            local_110[uVar12 * 2] = *(undefined8 *)(param_5 + 0x2f0);
            local_110[uVar12 * 2 + 1] = uVar16;
            uVar12 = uVar13;
            if (*(char *)(param_5 + 0x300) != '\0') goto LAB_01b4c178;
LAB_01b4c004:
            if (*(char *)(param_5 + 800) == '\0') goto LAB_01b4c00c;
LAB_01b4c19c:
            uVar16 = *(undefined8 *)(param_5 + 0x338);
            local_110[uVar12 * 2] = *(undefined8 *)(param_5 + 0x330);
            local_110[uVar12 * 2 + 1] = uVar16;
            cVar2 = *(char *)(param_5 + 0x340);
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          uVar13 = uVar12;
          if (cVar2 != '\0') {
            uVar16 = *(undefined8 *)(param_5 + 0x358);
            uVar13 = (ulong)((int)uVar12 + 1);
            local_110[uVar12 * 2] = *(undefined8 *)(param_5 + 0x350);
            local_110[uVar12 * 2 + 1] = uVar16;
          }
          uVar10 = (uint)uVar13;
          if (*(char *)(param_5 + 0x360) == '\0') {
            if (uVar10 == 0) {
              uVar22 = *(undefined8 *)(param_5 + 0x3a8);
              uVar16 = *(undefined8 *)(param_5 + 0x3a0);
              goto LAB_01b4c0fc;
            }
          }
          else {
            uVar16 = *(undefined8 *)(param_5 + 0x378);
            uVar10 = uVar10 + 1;
            local_110[uVar13 * 2] = *(undefined8 *)(param_5 + 0x370);
            local_110[uVar13 * 2 + 1] = uVar16;
          }
          if (uVar10 == 1) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0x1f;
            if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar10) & 0x1f) & uVar10) != 0) {
              lVar14 = 0x20;
            }
            uVar13 = lVar14 - LZCOUNT(uVar10);
            uVar12 = uVar13 >> 6;
            if ((uVar13 & 0x3f) != 0) {
              uVar12 = uVar12 + 1;
            }
            if (uVar13 < uVar12) {
              uVar15 = 0;
            }
            else {
              uVar18 = 0;
              if (uVar12 != 0) {
                uVar18 = uVar13 / uVar12;
              }
              uVar15 = (uint)(0xffffffffffffffff >> (-uVar18 & 0x3f));
            }
            uVar13 = *(ulong *)(param_5 + 0x3b8);
            uVar12 = *(ulong *)(param_5 + 0x3c0);
            do {
              uVar18 = uVar13 ^ uVar12;
              iVar19 = (int)uVar12;
              uVar12 = uVar18 >> 0x1b | uVar18 << 0x25;
              uVar17 = (int)uVar13 + iVar19 & uVar15;
              uVar13 = uVar18 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar18 << 0x10;
            } while (uVar10 <= uVar17);
            lVar14 = (long)(int)uVar17;
            *(ulong *)(param_5 + 0x3b8) = uVar13;
            *(ulong *)(param_5 + 0x3c0) = uVar12;
          }
          uVar22 = local_110[lVar14 * 2 + 1];
          uVar16 = local_110[lVar14 * 2];
          local_140 = *(undefined8 *)PTR_DAT_0437a120;
          uStack_138 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
          local_128 = *(undefined8 *)(param_5 + 0x398);
          local_130 = *(undefined8 *)(param_5 + 0x390);
          uStack_118 = *(undefined8 *)(param_5 + 0x3a8);
          local_120 = *(undefined8 *)(param_5 + 0x3a0);
          auVar21 = FUN_02bcb330(&local_140);
          fVar35 = (float)uVar16;
          fVar36 = (float)((ulong)uVar16 >> 0x20);
          fVar37 = (float)uVar22;
          uVar16 = CONCAT44(fVar32 + auVar21._4_4_ * fVar35 + fVar24 * fVar36 + fVar28 * fVar37,
                            fVar31 + auVar21._0_4_ * fVar35 + fVar23 * fVar36 + fVar27 * fVar37);
          uVar22 = CONCAT44(fVar34 + auVar21._12_4_ * fVar35 + fVar26 * fVar36 + fVar30 * fVar37,
                            fVar33 + auVar21._8_4_ * fVar35 + fVar25 * fVar36 + fVar29 * fVar37);
LAB_01b4c0fc:
          *(undefined1 *)(lVar11 + 0x90) = 1;
          lVar14 = *(long *)(lVar11 + 8);
          *(undefined8 *)(lVar11 + 0x88) = uVar22;
          *(undefined8 *)(lVar11 + 0x80) = uVar16;
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b4c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))((long *)(lVar11 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar19 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


