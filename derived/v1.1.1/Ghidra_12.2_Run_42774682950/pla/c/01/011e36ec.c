/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e36ec; name: FUN_011e36ec
 */


/* WARNING: Removing unreachable block (ram,0x011e3a58) */
/* WARNING: Removing unreachable block (ram,0x011e37a0) */

void FUN_011e36ec(long param_1)

{
  void *__s;
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  short *psVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  short local_b80 [64];
  undefined1 auStack_b00 [2704];
  long *local_70 [2];
  
  __s = (void *)(param_1 + 0x68);
  memset(__s,0,0xa8c);
  if (**(int **)(param_1 + 0xb08) == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_70);
    uVar7 = FUN_010dac08(local_70[0],0);
    FUN_010dbcc4(local_70[0],__s,0);
    if (uVar7 == 0) {
      uVar19 = 0;
      iVar9 = 0;
LAB_011e3868:
      uVar13 = (uint)((float)iVar9 / 3.0);
      if (0x13 < uVar13) {
        uVar13 = 0x14;
      }
      uVar21 = (uint)((float)uVar13 * 0.5);
      uVar16 = uVar13 - uVar21;
      FUN_011e40b0(__s,param_1 + 0xaf4);
      lVar20 = param_1 + (ulong)uVar21 * 4;
      if (uVar16 != 0) {
        uVar10 = 0;
        puVar18 = (undefined4 *)(lVar20 + 0x68);
        do {
          if (0x2a2 < uVar21 + uVar10) goto LAB_011e3c14;
          uVar12 = FUN_02c5072c(*(undefined2 *)puVar18,0xd);
          if ((uVar12 & 1) == 0) break;
          *(undefined4 *)(local_b80 + uVar10 * 2) = *puVar18;
          uVar10 = uVar10 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar16 != uVar10);
        if ((uint)uVar10 != uVar16) {
          do {
            uVar8 = FUN_011e3c30(iVar9 + -1);
            if (uVar21 <= uVar8) {
              lVar2 = param_1 + (long)(int)uVar8 * 4;
              iVar22 = (int)uVar10;
              if (0 < iVar22) {
                if (0x2a2 < uVar8) goto LAB_011e3c14;
                uVar12 = uVar10 & 0xffffffff;
                psVar15 = local_b80;
                do {
                  if (*psVar15 == *(short *)(lVar2 + 0x68)) goto LAB_011e3974;
                  uVar12 = uVar12 - 1;
                  psVar15 = psVar15 + 2;
                } while (uVar12 != 0);
              }
              if (0x2a2 < uVar8) goto LAB_011e3c14;
              *(undefined4 *)(local_b80 + (long)iVar22 * 2) = *(undefined4 *)(lVar2 + 0x68);
              uVar10 = (ulong)(iVar22 + 1);
            }
LAB_011e3974:
          } while ((uint)uVar10 != uVar16);
        }
      }
      if (uVar16 != 0) {
        uVar10 = 0;
        do {
          if (0x2a2 < uVar21 + uVar10) goto LAB_011e3c14;
          uVar12 = uVar10 + 1;
          *(undefined4 *)(lVar20 + 0x68 + uVar10 * 4) = *(undefined4 *)(local_b80 + uVar10 * 2);
          uVar10 = uVar12;
        } while (uVar12 < uVar16);
      }
      *(short *)(param_1 + 0xb10) = (short)uVar13;
      if (uVar13 == 0) {
LAB_011e3ac0:
        if (uVar13 < uVar7) {
          uVar10 = (ulong)uVar13;
          do {
            if (0x2a2 < uVar10) goto LAB_011e3c14;
            *(undefined4 *)(param_1 + 0x68 + uVar10 * 4) = 0;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar7);
        }
        if (uVar19 <= uVar13) {
          uVar13 = uVar19;
        }
        if ((0 < (int)uVar13) && (FUN_010dbe70(local_70[0],0xc), 1 < (int)uVar13)) {
          iVar9 = 1;
          do {
            FUN_010dbe70(local_70[0],0xc);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar13);
        }
        *(short *)(param_1 + 0xb12) = (short)uVar13;
        if (local_70[0] == (long *)0x0) {
          return;
        }
        lVar20 = local_70[0][0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
          return;
        }
        return;
      }
      uVar10 = 0;
      uVar12 = (ulong)uVar13;
      puVar14 = (ushort *)(param_1 + 0x6a);
      do {
        if (uVar10 == 0x2a3) goto LAB_011e3c14;
        if ((int)uVar10 + (int)((uVar10 & 0xffffffff) / 5) * -5 < (int)uVar19) {
          puVar14[-1] = 0;
          puVar14[0] = 0;
          *(short *)(param_1 + 0xb10) = *(short *)(param_1 + 0xb10) + -1;
        }
        else {
          fVar6 = (float)NEON_ucvtf((uint)*puVar14);
          uVar16 = (uint)(fVar6 * 0.25);
          if (99 < uVar16) {
            uVar16 = 100;
          }
          *puVar14 = (ushort)uVar16;
        }
        uVar10 = uVar10 + 1;
        puVar14 = puVar14 + 2;
      } while (uVar10 < uVar12);
      uVar10 = 0;
      do {
        lVar20 = param_1 + uVar10 * 4;
        psVar15 = (short *)(lVar20 + 0x68);
        uVar17 = uVar10;
        do {
          if ((*psVar15 == 0) && (*(short *)(lVar20 + 0x6a) == 0)) {
            if (0x2a2 < uVar17) goto LAB_011e3c14;
            uVar3 = *(undefined4 *)psVar15;
            *(undefined4 *)psVar15 = *(undefined4 *)(param_1 + 0x68 + uVar17 * 4);
            *(undefined4 *)(param_1 + 0x68 + uVar17 * 4) = uVar3;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar12);
        uVar10 = uVar10 + 1;
        if (uVar12 <= uVar10) goto LAB_011e3ac0;
      } while (uVar10 != 0x2a3);
    }
    else {
      lVar20 = 0;
      iVar9 = 0;
      uVar19 = 0;
      do {
        lVar2 = param_1 + lVar20;
        if ((*(short *)(lVar2 + 0x68) != 0) && (*(short *)(lVar2 + 0x6a) != 0)) {
          uVar10 = FUN_02c5072c(*(short *)(lVar2 + 0x68),0xc);
          if ((uVar10 & 1) == 0) {
            iVar9 = iVar9 + 1;
          }
          else {
            uVar19 = uVar19 + 1;
            *(undefined4 *)(lVar2 + 0x68) = 0;
          }
        }
        lVar20 = lVar20 + 4;
        if ((ulong)uVar7 * 4 == lVar20) goto LAB_011e3868;
      } while (lVar20 != 0xa8c);
    }
LAB_011e3c14:
    FUN_011e40a0();
  }
  else if (**(int **)(param_1 + 0xb08) == 1) {
    if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
    uVar11 = *(undefined8 *)PTR_DAT_0437b4d8;
    *(undefined8 *)PTR_DAT_0437b4e0 = uVar11;
    FUN_02788704(local_b80,uVar11,*(undefined4 *)(*(long *)(param_1 + 0xb08) + 4));
    if ((char)local_b80[0] == '\0') {
      memset(__s,0,0xa8c);
    }
    else {
      memcpy(__s,auStack_b00,0xa8c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


