/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b46770; name: FUN_02b46770
 */


void FUN_02b46770(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  
  local_58 = (long *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = &PTR_LAB_04284e40;
  if ((param_3 & 1) == 0) {
    FUN_02b4a330(&local_80,0,param_2);
  }
  else {
    uVar6 = FUN_02b4a330(&local_80,1,param_2);
    plVar11 = local_58;
    if (((uVar6 & 1) != 0) && (local_58 != (long *)0x0)) {
      lVar12 = local_58[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x68);
  puVar2 = (undefined8 *)(param_1 + 0x78);
  if (uVar6 < *(ulong *)(param_1 + 0x70)) {
    FUN_02b4b538(puVar2,uVar6,&local_80);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x30;
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x80);
    lVar12 = (long)(uVar6 - *(long *)(param_1 + 0x60)) >> 4;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar6 = lVar12 * -0x5555555555555555 + 1;
    if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)(*(ulong *)(param_1 + 0x70) - *(long *)(param_1 + 0x60)) >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if ((ulong)(lVar8 * -0x5555555555555555) < uVar10 >> 1) {
      uVar10 = uVar6;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar10 * 0x30,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar15 = lVar8 + lVar12 * 0x10;
    FUN_02b4b538(puVar2,lVar15,&local_80);
    lVar14 = *(long *)(param_1 + 0x60);
    lVar13 = *(long *)(param_1 + 0x68);
    lVar12 = lVar15 + 0x30;
    if (lVar13 == lVar14) {
      lVar13 = lVar14;
    }
    else {
      do {
        lVar15 = lVar15 + -0x30;
        lVar13 = lVar13 + -0x30;
        FUN_02b4a19c(puVar2,lVar15,lVar13);
      } while (lVar14 != lVar13);
      lVar14 = *(long *)(param_1 + 0x60);
      lVar13 = *(long *)(param_1 + 0x68);
    }
    *(long *)(param_1 + 0x60) = lVar15;
    *(long *)(param_1 + 0x68) = lVar12;
    lVar12 = *(long *)(param_1 + 0x70);
    *(ulong *)(param_1 + 0x70) = lVar8 + uVar10 * 0x30;
    while (lVar13 != lVar14) {
      lVar13 = lVar13 + -0x30;
      FUN_02b46ab0(lVar13);
    }
    if (lVar14 != 0) {
      plVar11 = (long *)*puVar2;
      lVar12 = lVar12 - lVar14;
      uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar6 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar11,lVar14,lVar12,8);
          goto LAB_02b46a00;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,lVar12,8);
    }
  }
LAB_02b46a00:
  FUN_02b46ab0(&local_80);
  return;
}


