/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938dd4; name: FUN_02938dd4
 */


void FUN_02938dd4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long *local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = PTR_DAT_04379528;
  puVar9 = PTR_DAT_04379520;
  local_80 = *(long **)(param_1 + 8);
  local_88 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_78 = 0x1fffffffffffffff;
  uStack_70 = 0;
  local_68 = 0;
  plVar4 = *(long **)(param_1 + 0x58);
  plVar5 = *(long **)(param_1 + 0x60);
  lVar8 = tpidr_el0;
  if (plVar4 == plVar5) {
LAB_02939198:
    lVar14 = (long)local_90 - (long)local_98 >> 3;
    if (lVar14 == 0) {
      *param_2 = 0;
      if (local_98 == (undefined8 *)0x0) {
        return;
      }
    }
    else {
      if (lVar14 == 1) {
        uVar16 = *local_98;
      }
      else {
        uVar13 = FUN_02954744(param_1 + 0x90);
        if ((ulong)((long)local_90 - (long)local_98 >> 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar16 = local_98[uVar13];
      }
      *param_2 = uVar16;
    }
    plVar4 = local_80;
    puVar3 = local_98;
    lVar14 = (long)local_88 - (long)local_98;
    local_90 = local_98;
    uVar13 = (**(code **)(*local_80 + 0xc0))(local_80);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar4,puVar3,lVar14,8);
        return;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar3,lVar14,8);
    return;
  }
  iVar20 = -0x80000000;
  plVar21 = (long *)*plVar4;
  do {
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    iVar11 = *(int *)((long)plVar21 + 0x54);
    puVar3 = local_88;
    if (iVar20 <= iVar11) {
      if (iVar20 != iVar11) {
        iVar20 = iVar11;
        local_90 = local_98;
      }
      local_a0 = 0;
      (**(code **)(*plVar21 + 0x38))(plVar21,&local_a0);
      if (local_90 == local_88) {
        lVar14 = (long)local_90 - (long)local_98 >> 3;
        uVar13 = lVar14 + 1;
        uVar18 = local_78;
        if (0x7ffffffffffffffe < local_78) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_88 - (long)local_98 >> 3) < uVar18 >> 1) {
          uVar15 = (long)local_88 - (long)local_98 >> 2;
          uVar18 = uVar13;
          if (uVar13 <= uVar15) {
            uVar18 = uVar15;
          }
        }
        if (uVar18 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (**(code **)(*local_80 + 0x10))(local_80,uVar18 << 3,8);
          if (lVar12 == 0) {
            (**(code **)(*local_80 + 0xb8))();
          }
        }
        puVar2 = (undefined8 *)(lVar12 + lVar14 * 8);
        FUN_029393ec(&local_80,puVar2,&local_a0);
        puVar3 = local_98;
        puVar17 = local_90;
        puVar19 = puVar2;
        puVar22 = local_98;
        if (local_90 != local_98) {
          do {
            plVar1 = local_80;
            if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
              FUN_008a62a4(puVar10);
              FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
            if (lVar14 == 0) {
              puVar19[-1] = puVar17[-1];
            }
            else {
              if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar1;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
              puVar19[-1] = puVar17[-1];
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
            }
            puVar17 = puVar17 + -1;
            puVar19 = puVar19 + -1;
          } while (puVar3 != puVar17);
          puVar22 = local_98;
        }
        plVar1 = local_80;
        puVar3 = (undefined8 *)(lVar12 + uVar18 * 8);
        local_90 = puVar2 + 1;
        local_98 = puVar19;
        if (puVar22 != (undefined8 *)0x0) {
          lVar14 = (long)local_88 - (long)puVar22;
          local_88 = puVar3;
          uVar13 = (**(code **)(*local_80 + 0xc0))(local_80);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(plVar1,puVar22,lVar14,8);
              puVar3 = local_88;
              goto joined_r0x029390dc;
            }
          }
          (**(code **)(*plVar1 + 0x18))(plVar1,puVar22,lVar14,8);
          puVar3 = local_88;
        }
      }
      else {
        FUN_029393ec(&local_80,local_90,&local_a0);
        local_90 = local_90 + 1;
        puVar3 = local_88;
      }
    }
joined_r0x029390dc:
    local_88 = puVar3;
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    plVar4 = plVar4 + 1;
    if (plVar4 == plVar5) goto LAB_02939198;
    plVar21 = (long *)*plVar4;
  } while( true );
}


