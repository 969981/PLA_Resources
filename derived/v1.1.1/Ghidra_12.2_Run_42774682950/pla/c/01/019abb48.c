/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019abb48; name: FUN_019abb48
 */


void FUN_019abb48(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  
  uVar12 = *(ulong *)(param_1 + 0x140);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = (ulong)((uint)uVar12 - 1) & 0xe;
    }
    else {
      uVar15 = 0xe;
      if (uVar12 < 0xf) {
        uVar2 = (uint)uVar12 & 0xff;
        uVar5 = 0;
        if ((uVar12 & 0xff) != 0) {
          uVar5 = 0xe / uVar2;
        }
        uVar15 = (ulong)(0xe - uVar5 * uVar2);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x138) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == 0xe) {
            if ((int)plVar16[2] == 0xe) goto LAB_019abc14;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == 0xe) {
            if ((int)plVar16[2] == 0xe) goto LAB_019abc14;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar6 * uVar12;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  FUN_019ac730();
LAB_019abd9c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_019abc14:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_019abd9c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar11 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
  if (((*PTR_DAT_04381df8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04381df8), puVar8 = PTR_DAT_0437ef00, iVar9 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)PTR_DAT_04381e00 = puVar8;
    __cxa_guard_release(PTR_DAT_04381df8);
  }
  if (puVar11 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    do {
      if (puVar11 == (undefined8 *)PTR_DAT_04381e00) {
        plVar13 = plVar16;
        break;
      }
      puVar11 = (undefined8 *)*puVar11;
      plVar13 = (long *)0x0;
    } while (puVar11 != (undefined8 *)0x0);
  }
  FUN_019ac5d8(plVar13);
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x019abcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x20))(plVar16);
      return;
    }
  }
  return;
}


