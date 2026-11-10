/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f81cbc; name: FUN_01f81cbc
 */


void FUN_01f81cbc(undefined8 *param_1,long param_2,undefined8 param_3)

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
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  
  uVar12 = *(ulong *)(param_2 + 0xd8);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((uint)uVar12 - 1) & 5;
    }
    else {
      uVar14 = 5;
      if (uVar12 < 6) {
        uVar2 = (uint)uVar12 & 0xff;
        uVar5 = 0;
        if ((uVar12 & 0xff) != 0) {
          uVar5 = 5 / uVar2;
        }
        uVar14 = (ulong)(5 - uVar5 * uVar2);
      }
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0xd0) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 5) {
            if ((int)plVar15[2] == 5) goto LAB_01f81d98;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 5) {
            if ((int)plVar15[2] == 5) goto LAB_01f81d98;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar6 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  FUN_01f7c2e0();
LAB_01f81f44:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01f81d98:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f81f44;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)(**(code **)plVar15[10])(plVar15 + 10);
  if (((*PTR_DAT_043806d8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_043806d8), puVar8 = PTR_DAT_0437b018, iVar9 != 0)) {
    if (((*PTR_DAT_0437b010 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b010), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437b010);
    }
    *(undefined **)PTR_DAT_043806e0 = puVar8;
    __cxa_guard_release(PTR_DAT_043806d8);
  }
  do {
    if (plVar11 == (long *)0x0) {
LAB_01f81ea0:
      *param_1 = 0;
joined_r0x01f81e38:
      if (plVar15 != (long *)0x0) {
        lVar16 = plVar15[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
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
          *(undefined8 *)(lVar16 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f81e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar15 + 0x20))(plVar15);
          return;
        }
      }
      return;
    }
    if (plVar11 == (long *)PTR_DAT_043806e0) {
      iVar9 = (**(code **)(*plVar15 + 0x48))(plVar15);
      if (0 < iVar9) {
        FUN_0161b058(param_1,plVar15,param_3);
        goto joined_r0x01f81e38;
      }
      goto LAB_01f81ea0;
    }
    plVar11 = (long *)*plVar11;
  } while( true );
}


