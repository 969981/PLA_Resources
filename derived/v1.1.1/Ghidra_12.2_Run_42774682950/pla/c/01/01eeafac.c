/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eeafac; name: FUN_01eeafac
 */


void FUN_01eeafac(undefined8 *param_1,long param_2,undefined8 param_3)

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
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x9;
  long *plVar15;
  long *extraout_x10;
  ulong extraout_x11;
  long lVar16;
  
  uVar10 = FUN_01833e7c();
  if ((uVar10 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  uVar10 = *(ulong *)(param_2 + 0x70);
  if (uVar10 != 0) {
    uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((uint)uVar10 - 1) & 4;
    }
    else {
      uVar14 = 4;
      if (uVar10 < 5) {
        uVar2 = (uint)uVar10 & 0xff;
        uVar5 = 0;
        if ((uVar10 & 0xff) != 0) {
          uVar5 = 4 / uVar2;
        }
        uVar14 = (ulong)(4 - uVar5 * uVar2);
      }
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0x68) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        uVar10 = uVar10 - 1;
        goto LAB_01eeb14c;
      }
      do {
        uVar13 = plVar15[1];
        if (uVar13 == 4) {
          if ((int)plVar15[2] == 4) goto LAB_01eeb064;
        }
        else {
          if (uVar10 <= uVar13) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar13 / uVar10;
            }
            uVar13 = uVar13 - uVar6 * uVar10;
          }
          if (uVar13 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_01eeb228:
  do {
    FUN_01eeb790();
    uVar10 = extraout_x8;
    uVar14 = extraout_x9;
    plVar15 = extraout_x10;
    uVar13 = extraout_x11;
    while ((uVar13 & uVar10) == uVar14) {
      while( true ) {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_01eeb228;
LAB_01eeb14c:
        uVar13 = plVar15[1];
        if (uVar13 != 4) break;
        if ((int)plVar15[2] == 4) goto LAB_01eeb064;
      }
    }
  } while( true );
LAB_01eeb064:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar11;
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
  plVar12 = (long *)(**(code **)plVar15[10])(plVar15 + 10);
  if (((*PTR_DAT_04381af8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04381af8), puVar8 = PTR_DAT_0437b018, iVar9 != 0)) {
    if (((*PTR_DAT_0437b010 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b010), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar11;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437b010);
    }
    *(undefined **)PTR_DAT_04381b00 = puVar8;
    __cxa_guard_release(PTR_DAT_04381af8);
  }
  do {
    if (plVar12 == (long *)0x0) {
LAB_01eeb1a0:
      *param_1 = 0;
joined_r0x01eeb104:
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
                    /* WARNING: Could not recover jumptable at 0x01eeb194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar15 + 0x20))(plVar15);
          return;
        }
      }
      return;
    }
    if (plVar12 == (long *)PTR_DAT_04381b00) {
      iVar9 = (**(code **)(*plVar15 + 0x48))(plVar15);
      if (0 < iVar9) {
        FUN_01eebf2c(param_1,plVar15,param_3);
        goto joined_r0x01eeb104;
      }
      goto LAB_01eeb1a0;
    }
    plVar12 = (long *)*plVar12;
  } while( true );
}


