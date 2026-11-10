/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014174e8; name: FUN_014174e8
 */


void FUN_014174e8(void)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  char acStack_a0 [64];
  
  puVar9 = PTR_DAT_0437b638;
  puVar8 = PTR_DAT_0437b630;
  puVar7 = PTR_DAT_04379560;
  uVar20 = 1;
  do {
    lVar14 = *(&DAT_043f23a0)[uVar20 * 4];
    lVar6 = (&DAT_043f23a0)[uVar20 * 4][1] - lVar14;
    if (lVar6 != 0) {
      bVar16 = 0;
      uVar15 = 0;
      do {
        lVar1 = uVar15 * 8;
        uVar15 = uVar15 + 1;
        if (*(long *)(lVar14 + lVar1) != 0) {
          bVar16 = bVar16 + 1;
        }
      } while (uVar15 < (ulong)(lVar6 >> 3));
      if (bVar16 != 0) {
        uVar13 = (uint)uVar20 | 1;
        uVar15 = 0;
        if (uVar13 != 0x38b) {
          uVar15 = uVar20;
        }
        uVar12 = 0;
LAB_014175a8:
        uVar2 = 0;
        if (uVar13 != 0x38b) {
          uVar2 = uVar12;
        }
        uVar17 = (ulong)uVar2;
        if ((uVar2 & 0xffff) < 0x1c) {
          lVar14 = *(&DAT_043f23a0)[uVar15 * 4];
          uVar19 = (&DAT_043f23a0)[uVar15 * 4][1] - lVar14 >> 3;
          if ((uVar19 <= (uVar17 & 0xffff)) || (*(long *)(lVar14 + (uVar17 & 0xffff) * 8) == 0))
          goto LAB_014175e0;
        }
        else {
LAB_014175e0:
          lVar14 = *DAT_043f23a0;
          uVar17 = 0;
          uVar19 = DAT_043f23a0[1] - lVar14 >> 3;
        }
        if (uVar19 <= (uVar17 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        piVar18 = *(int **)(lVar14 + (uVar17 & 0xffff) * 8);
        if (((*(ushort *)((long)piVar18 - (long)*piVar18) < 9) ||
            (uVar17 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[4], uVar17 == 0)) ||
           (*(char *)((long)piVar18 + uVar17) == '\0')) break;
        snprintf(acStack_a0,0x40,"task_monsno_%03d",(uint)uVar20);
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar14 = *(long *)puVar7;
        *(long *)PTR_DAT_04379568 = lVar14;
        plVar21 = *(long **)(lVar14 + 0x298);
        if (plVar21 != (long *)0x0) {
          lVar14 = plVar21[0xb];
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar11;
          }
          piVar18 = (int *)(lVar14 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar5) {
              *piVar18 = *piVar18 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar3 = *(ushort *)((long)plVar21 + uVar20 * 0x58 + 0xe4);
        uVar13 = (uint)uVar3;
        if (99 < uVar3) {
          uVar15 = FUN_011357f8(plVar21,uVar20 & 0xffffffff);
          uVar13 = 100;
          if ((uVar15 & 1) == 0) {
            uVar13 = 99;
          }
        }
        lVar14 = plVar21[0xb];
        piVar18 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
          bVar16 = *puVar8;
        }
        else {
          bVar16 = *puVar8;
        }
        if (((bVar16 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_0437b640,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar8);
        }
        DAT_043ad1d0 = *(long *)puVar9;
        if (DAT_043ad1d0 != 0) {
          FUN_00db0b58(DAT_043ad1d0,acStack_a0,(ulong)(uVar13 & 0xff) / 10);
        }
      }
    }
LAB_01417540:
    uVar20 = uVar20 + 1;
    if (uVar20 == 0x38a) {
      FUN_00db16f8(9);
      FUN_00db16f8(10);
      FUN_00db16f8(0xb);
      FUN_00db16f8(0xc);
      return;
    }
  } while( true );
  uVar12 = uVar12 + 1;
  if (bVar16 == uVar12) goto LAB_01417540;
  goto LAB_014175a8;
}


