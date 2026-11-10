/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019b4170; name: FUN_019b4170
 */


void FUN_019b4170(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  
  uVar13 = *(ulong *)(param_1 + 0x140);
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (ulong)((uint)uVar13 - 1) & 6;
    }
    else {
      uVar16 = 6;
      if (uVar13 < 7) {
        uVar2 = (uint)uVar13 & 0xff;
        uVar5 = 0;
        if ((uVar13 & 0xff) != 0) {
          uVar5 = 6 / uVar2;
        }
        uVar16 = (ulong)(6 - uVar5 * uVar2);
      }
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x138) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == 6) {
            if ((int)plVar17[2] == 6) goto LAB_019b423c;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == 6) {
            if ((int)plVar17[2] == 6) goto LAB_019b423c;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar6 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  FUN_019b4b40();
LAB_019b43d4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_019b423c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_019b43d4;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar12 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
  puVar7 = (undefined8 *)PTR_DAT_0437eef0;
  if (((*PTR_DAT_0437eee8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437eee8), puVar9 = PTR_DAT_0437ef00,
     puVar7 = (undefined8 *)PTR_DAT_0437eef0, iVar10 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar8 = PTR_DAT_043794d8, iVar10 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar11;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar9 = puVar8;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    puVar7 = (undefined8 *)PTR_DAT_0437eef0;
    *(undefined **)PTR_DAT_0437eef0 = puVar9;
    __cxa_guard_release(PTR_DAT_0437eee8);
  }
  if (puVar12 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    do {
      if (puVar12 == puVar7) {
        plVar14 = plVar17;
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
      plVar14 = (long *)0x0;
    } while (puVar12 != (undefined8 *)0x0);
  }
  FUN_019b49f8(plVar14);
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x019b4314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x20))(plVar17);
      return;
    }
  }
  return;
}


