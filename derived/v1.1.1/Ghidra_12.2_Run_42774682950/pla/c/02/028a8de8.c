/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a8de8; name: FUN_028a8de8
 */


void FUN_028a8de8(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,ulong *param_5)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  plVar22 = (long *)*param_5;
  plVar14 = (long *)param_5[1];
  if (plVar22 != plVar14) {
    plVar18 = plVar22;
LAB_028a8e2c:
    if (*plVar18 != *param_3) goto code_r0x028a8e38;
    local_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    FUN_00af8f10(&local_e0,param_2);
    local_d0 = CONCAT44(local_d0._4_4_,param_4);
    FUN_028a9874(plVar18 + 4,&local_e0);
    if (local_e0 == (undefined8 *)0x0) {
      return;
    }
    piVar2 = (int *)(local_e0 + 1);
    do {
      iVar11 = *piVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_028a96c8;
  }
LAB_028a8e44:
  plStack_a8 = *(long **)(param_1 + 0x68);
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_e0 = (undefined8 *)&DAT_cbf29ce484222645;
  puStack_d8 = &DAT_03996322;
  puVar1 = param_5 + 3;
  local_90 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_a0 = 0xaaaaaaaaaaaaaaa;
  uStack_98 = 0;
  if (plVar14 < (long *)param_5[2]) {
    FUN_028add28(puVar1,plVar14,&local_e0);
    param_5[1] = param_5[1] + 0x58;
    pbVar7 = PTR_DAT_04379498;
    plVar22 = (long *)PTR_DAT_043794a0;
    plVar14 = (long *)PTR_DAT_043794a8;
    puVar8 = PTR_LAB_04379590;
    puVar12 = local_c0;
  }
  else {
    lVar17 = (long)plVar14 - (long)plVar22 >> 3;
    uVar23 = param_5[4];
    if (0x7ffffffffffffffe < uVar23) {
      uVar23 = 0x7fffffffffffffff;
    }
    uVar25 = lVar17 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar23 < uVar25) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)param_5[2] - (long)plVar22 >> 3;
    if ((ulong)(lVar15 * 0x2e8ba2e8ba2e8ba3) < uVar23 >> 1) {
      uVar16 = lVar15 * 0x5d1745d1745d1746;
      uVar23 = uVar25;
      if (uVar25 <= uVar16) {
        uVar23 = uVar16;
      }
    }
    if (uVar23 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar23 * 0x58,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    uVar19 = lVar15 + lVar17 * 8;
    FUN_028add28(puVar1,uVar19,&local_e0);
    puVar8 = PTR_DAT_04379528;
    uVar25 = *param_5;
    uVar16 = param_5[1];
    uVar24 = uVar19;
    if (uVar16 == uVar25) {
      uVar16 = uVar25;
    }
    else {
      do {
        uVar20 = *puVar1;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
          FUN_008a62a4(puVar8);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
        if (lVar17 != 0) {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_028a9864:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(ulong *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar20;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        }
        *(undefined8 *)(uVar24 - 0x58) = *(undefined8 *)(uVar16 - 0x58);
        *(undefined8 *)(uVar24 - 0x50) = *(undefined8 *)(uVar16 - 0x50);
        *(undefined8 *)(uVar24 - 0x48) = *(undefined8 *)(uVar16 - 0x48);
        plVar22 = *(long **)(uVar16 - 0x40);
        *(long **)(uVar24 - 0x40) = plVar22;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x18))();
        }
        local_88 = *(undefined8 *)(uVar16 - 0x20);
        uStack_80 = *(undefined8 *)(uVar16 - 0x18);
        local_78 = *(undefined8 *)(uVar16 - 0x10);
        uStack_70 = *(undefined8 *)(uVar16 - 8);
        *(undefined8 *)(uVar24 - 0x38) = 0;
        *(undefined8 *)(uVar24 - 0x30) = 0;
        *(undefined8 *)(uVar24 - 0x28) = 0;
        *(undefined8 *)(uVar24 - 0x10) = local_78;
        *(undefined8 *)(uVar24 - 8) = uStack_70;
        *(undefined8 *)(uVar24 - 0x20) = local_88;
        *(undefined8 *)(uVar24 - 0x18) = uStack_80;
        lVar6 = *(long *)(uVar16 - 0x30) - *(long *)(uVar16 - 0x38);
        if (lVar6 != 0) {
          uVar20 = *(ulong *)(uVar24 - 0x18);
          if (0x7ffffffffffffffe < uVar20) {
            uVar20 = 0x7fffffffffffffff;
          }
          if (uVar20 < (ulong)((lVar6 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)(uVar24 - 0x20) + 0x10))
                              (*(long **)(uVar24 - 0x20),lVar6,8);
          if (puVar12 == (undefined8 *)0x0) {
            (**(code **)(**(long **)(uVar24 - 0x20) + 0xb8))();
          }
          *(undefined8 **)(uVar24 - 0x28) = puVar12 + (lVar6 >> 3);
          *(undefined8 **)(uVar24 - 0x38) = puVar12;
          *(undefined8 **)(uVar24 - 0x30) = puVar12;
          lVar3 = *(long *)(uVar16 - 0x30);
          for (lVar6 = *(long *)(uVar16 - 0x38); lVar6 != lVar3; lVar6 = lVar6 + 0x18) {
            uVar26 = *(undefined8 *)(uVar24 - 0x20);
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
              FUN_008a62a4(puVar8);
              FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
            if (lVar13 == 0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              FUN_00af8f10(puVar12,lVar6);
              *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar6 + 0x10);
            }
            else {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_028a9864;
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar26;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              *puVar12 = 0;
              puVar12[1] = 0;
              FUN_00af8f10(puVar12,lVar6);
              *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar6 + 0x10);
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            puVar12 = (undefined8 *)(*(long *)(uVar24 - 0x30) + 0x18);
            *(undefined8 **)(uVar24 - 0x30) = puVar12;
          }
        }
        uVar24 = uVar24 - 0x58;
        uVar16 = uVar16 - 0x58;
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
      } while (uVar16 != uVar25);
      uVar25 = *param_5;
      uVar16 = param_5[1];
    }
    *param_5 = uVar24;
    param_5[1] = uVar19 + 0x58;
    uVar24 = param_5[2];
    param_5[2] = lVar15 + uVar23 * 0x58;
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    if (uVar16 != uVar25) {
      lVar17 = tpidr_el0;
      puVar12 = *(undefined8 **)(uVar16 - 0x38);
      do {
        if (puVar12 != (undefined8 *)0x0) {
          puVar21 = *(undefined8 **)(uVar16 - 0x30);
          if (puVar21 == puVar12) {
            puVar21 = puVar12;
          }
          else {
            do {
              puVar21 = puVar21 + -3;
              puVar27 = (undefined8 *)*puVar21;
              if (puVar27 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar27 + 1);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar27[2] = 0;
                  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar8);
                  }
                  lVar15 = *(long *)puVar9;
                  *(long *)puVar10 = lVar15;
                  local_88 = *puVar27;
                  FUN_02a44274(lVar15 + 0xd8,&local_88);
                }
              }
            } while (puVar21 != puVar12);
            puVar21 = *(undefined8 **)(uVar16 - 0x38);
          }
          lVar15 = *(long *)(uVar16 - 0x28);
          plVar22 = *(long **)(uVar16 - 0x20);
          *(undefined8 **)(uVar16 - 0x30) = puVar12;
          lVar15 = lVar15 - (long)puVar21;
          uVar23 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar23 & 1) != 0) {
            if (*(char *)(lVar17 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar17 + 0x38d488) = 1;
              *(undefined8 *)(lVar17 + 0x38d478) = 0;
              *(undefined8 *)(lVar17 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar17 + 0x38d480)) {
              FUN_02bcc824(plVar22,puVar21,lVar15,8);
              goto LAB_028a93cc;
            }
          }
          (**(code **)(*plVar22 + 0x18))(plVar22,puVar21,lVar15,8);
        }
LAB_028a93cc:
        if (*(long **)(uVar16 - 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(uVar16 - 0x40) + 0x20))();
        }
        if (uVar16 - 0x58 == uVar25) break;
        puVar12 = *(undefined8 **)(uVar16 - 0x90);
        uVar16 = uVar16 - 0x58;
      } while( true );
    }
    pbVar7 = PTR_DAT_04379498;
    plVar22 = (long *)PTR_DAT_043794a0;
    plVar14 = (long *)PTR_DAT_043794a8;
    puVar8 = PTR_LAB_04379590;
    puVar12 = local_c0;
    if (uVar25 != 0) {
      plVar22 = (long *)*puVar1;
      uVar23 = (**(code **)(*plVar22 + 0xc0))(plVar22);
      if ((uVar23 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar22,uVar25,uVar24 - uVar25,8);
          pbVar7 = PTR_DAT_04379498;
          plVar22 = (long *)PTR_DAT_043794a0;
          plVar14 = (long *)PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          puVar12 = local_c0;
          goto joined_r0x028a9778;
        }
      }
      (**(code **)(*plVar22 + 0x18))(plVar22,uVar25,uVar24 - uVar25,8);
      pbVar7 = PTR_DAT_04379498;
      plVar22 = (long *)PTR_DAT_043794a0;
      plVar14 = (long *)PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar12 = local_c0;
    }
  }
joined_r0x028a9778:
  PTR_DAT_04379498 = pbVar7;
  PTR_DAT_043794a0 = (undefined *)plVar22;
  PTR_DAT_043794a8 = (undefined *)plVar14;
  PTR_LAB_04379590 = puVar8;
  local_c0 = puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    if (local_b8 != puVar12) {
      puVar21 = local_b8 + -3;
      puVar27 = (undefined8 *)*puVar21;
      if (puVar27 != (undefined8 *)0x0) goto LAB_028a9538;
LAB_028a9528:
      if (puVar21 != puVar12) {
        while( true ) {
          puVar21 = puVar21 + -3;
          puVar27 = (undefined8 *)*puVar21;
          if (puVar27 == (undefined8 *)0x0) break;
LAB_028a9538:
          piVar2 = (int *)(puVar27 + 1);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 != 0) break;
          puVar27[2] = 0;
          if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
            FUN_00100250(puVar8,plVar22,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar7);
          }
          lVar17 = *plVar22;
          *plVar14 = lVar17;
          local_88 = *puVar27;
          FUN_02a44274(lVar17 + 0xd8,&local_88);
          if (puVar21 == puVar12) goto LAB_028a95b8;
        }
        goto LAB_028a9528;
      }
    }
LAB_028a95b8:
    plVar22 = plStack_a8;
    puVar21 = local_c0;
    lVar17 = local_b0 - (long)local_c0;
    local_b8 = puVar12;
    uVar23 = (**(code **)(*plStack_a8 + 0xc0))(plStack_a8);
    if ((uVar23 & 1) != 0) {
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar15 + 0x38d480)) {
        FUN_02bcc824(plVar22,puVar21,lVar17,8);
        goto joined_r0x028a963c;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,puVar21,lVar17,8);
  }
joined_r0x028a963c:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  uVar23 = param_5[1];
  *(long *)(uVar23 - 0x58) = *param_3;
  *(long *)(uVar23 - 0x50) = param_3[1];
  *(long *)(uVar23 - 0x48) = param_3[2];
  plVar22 = (long *)param_3[3];
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  plVar14 = *(long **)(uVar23 - 0x40);
  *(long **)(uVar23 - 0x40) = plVar22;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  FUN_00af8f10(&local_e0,param_2);
  local_d0 = CONCAT44(local_d0._4_4_,param_4);
  FUN_028a9874(uVar23 - 0x38,&local_e0);
  if (local_e0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_e0 + 1);
    do {
      iVar11 = *piVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_028a96c8:
    puVar12 = local_e0;
    if (iVar11 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_88 = *puVar12;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  return;
code_r0x028a8e38:
  plVar18 = plVar18 + 0xb;
  if (plVar14 == plVar18) goto LAB_028a8e44;
  goto LAB_028a8e2c;
}


