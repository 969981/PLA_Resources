/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a910c8; name: FUN_02a910c8
 */


void FUN_02a910c8(long *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  
  uVar9 = param_1[1];
  plVar14 = param_1 + 3;
  if (uVar9 < (ulong)param_1[2]) {
    FUN_02a914e8(plVar14,uVar9,param_2);
    param_1[1] = param_1[1] + 0x18;
  }
  else {
    uVar13 = param_1[4];
    lVar12 = (long)(uVar9 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar9 = lVar12 * -0x5555555555555555 + 1;
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if ((ulong)(lVar10 * -0x5555555555555555) < uVar13 >> 1) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar13 * 0x18,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xb8))();
      }
    }
    plVar20 = (long *)(lVar10 + lVar12 * 8);
    FUN_02a914e8(plVar14,plVar20,param_2);
    puVar5 = PTR_DAT_04379528;
    plVar17 = (long *)*param_1;
    if ((long *)param_1[1] == plVar17) {
      plVar15 = plVar20;
      plVar16 = plVar17;
    }
    else {
      plVar16 = plVar20;
      plVar19 = (long *)param_1[1];
      do {
        lVar12 = *plVar14;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        plVar18 = plVar19 + -3;
        lVar12 = *plVar18;
        plVar15 = plVar16 + -3;
        *plVar15 = lVar12;
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x58);
          if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar12 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
            *(undefined8 *)(lVar12 + 0x10) = uVar8;
          }
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined1 *)(plVar16 + -2) = 0;
        if ((char)plVar19[-2] != '\0') {
          uVar2 = *(undefined4 *)((long)plVar19 + -4);
          *(undefined8 *)((long)plVar16 + -0xc) = *(undefined8 *)((long)plVar19 + -0xc);
          *(undefined4 *)((long)plVar16 + -4) = uVar2;
          *(undefined1 *)(plVar16 + -2) = 1;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar16 = plVar15;
        plVar19 = plVar18;
      } while (plVar18 != plVar17);
      plVar17 = (long *)*param_1;
      plVar16 = (long *)param_1[1];
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(plVar20 + 3);
    lVar12 = param_1[2];
    param_1[2] = lVar10 + uVar13 * 0x18;
LAB_02a9132c:
    plVar20 = plVar16;
    if (plVar16 != plVar17) {
      while( true ) {
        plVar16 = plVar20 + -3;
        if ((char)plVar20[-2] != '\0') {
          *(undefined1 *)(plVar20 + -2) = 0;
        }
        plVar20 = (long *)*plVar16;
        if (plVar20 == (long *)0x0) break;
        lVar10 = plVar20[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 != 0) break;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))();
        plVar20 = plVar16;
        if (plVar16 == plVar17) goto LAB_02a91384;
      }
      goto LAB_02a9132c;
    }
LAB_02a91384:
    if (plVar17 != (long *)0x0) {
      plVar14 = (long *)*plVar14;
      uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar9 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar17,lVar12 - (long)plVar17,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02a9141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar17,lVar12 - (long)plVar17,8);
      return;
    }
  }
  return;
}


