/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cf6c8; name: FUN_028cf6c8
 */


void FUN_028cf6c8(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  long *local_78;
  undefined8 *puStack_70;
  
  if (param_3 == 0) {
    return;
  }
  if ((int)((ulong)(*(long *)(param_3 + 0x60) - *(long *)(param_3 + 0x58)) >> 3) * -0x49249249 <=
      (int)param_2) {
    return;
  }
  if (((*(long *)(param_4 + 0x68) != 0) || (*(long *)(param_4 + 0x70) != 0)) ||
     (*(long *)(param_4 + 0x30) != 0)) goto LAB_028cf73c;
  lVar13 = *(long *)(param_4 + 0x40);
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0x1e1) == '\0')) {
    lVar27 = *(long *)(param_4 + 8);
    if ((lVar27 != 0) && (*(char *)(lVar27 + 0x1e1) != '\0')) goto LAB_028d0368;
    if (lVar13 == 0) {
      return;
    }
  }
  else {
    lVar27 = *(long *)(lVar13 + 0x278);
    if ((lVar27 == 0) || (*(char *)(lVar27 + 0x1e1) == '\0')) goto LAB_028cf73c;
LAB_028d0368:
    lVar27 = (long)*(uint **)(lVar27 + 0x250) + (ulong)**(uint **)(lVar27 + 0x250);
    if ((lVar13 == 0) || (lVar27 != 0)) {
      if (lVar27 == 0) {
        return;
      }
      goto LAB_028cf73c;
    }
  }
  if (*(char *)(lVar13 + 0x1e1) == '\0') {
    return;
  }
LAB_028cf73c:
  bVar5 = *(byte *)(param_1 + 0x71);
  uVar7 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar7 & bVar5) == 0) {
    plVar18 = (long *)(*(long *)(param_3 + 0x58) + (long)(int)param_2 * 0x38);
    plVar25 = (long *)*plVar18;
    plVar18 = (long *)plVar18[1];
    if (plVar25 != plVar18) {
      plVar19 = *(long **)(param_1 + 0x30);
      cVar6 = *(char *)(param_4 + 0x78);
      puVar1 = (undefined8 *)(param_1 + 0x50);
      do {
        plVar4 = *(long **)(*plVar25 + 0x98);
        for (plVar3 = *(long **)(*plVar25 + 0x90); plVar3 != plVar4; plVar3 = plVar3 + 1) {
          FUN_02aa65e4(&local_98,*plVar3 + 0x58,param_2);
          puVar12 = (undefined8 *)FUN_02aa6448(param_3,plVar25,*(undefined4 *)(param_3 + 0x174));
          plVar16 = local_98;
          uVar26 = *puVar12;
          if (local_98 == (long *)0x0) {
            local_90 = *(long *)PTR_DAT_04379c88;
LAB_028d02b8:
            local_88 = *(long *)PTR_PTR_04379d00;
            if (local_98 != (long *)0x0) goto LAB_028cf814;
LAB_028d02c8:
            local_80 = 0;
          }
          else {
            local_90 = local_98[0xb];
            if (local_98 == (long *)0x0) goto LAB_028d02b8;
            local_88 = local_98[0xc];
            if (local_98 == (long *)0x0) goto LAB_028d02c8;
LAB_028cf814:
            local_80 = local_98[0xd];
            local_78 = (long *)0x0;
            (**(code **)(*local_98 + 0x18))(local_98);
          }
          local_78 = plVar16;
          lVar13 = FUN_028c4724(param_4,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          if (lVar13 == 0) {
            if (cVar6 != '\0') {
              lVar13 = *plVar3;
              puVar12 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x30,8);
              if (puVar12 == (undefined8 *)0x0) {
                local_a8 = 0;
                local_a0 = 0;
                local_b8 = (undefined8 *)0x0;
                local_b0 = (long *)0x0;
              }
              else {
                if ((*PTR_DAT_04379520 & 1) == 0) {
                  iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
                  puVar10 = PTR_DAT_04379528;
                  if (iVar11 != 0) {
                    FUN_008a62a4(PTR_DAT_04379528);
                    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379520);
                  }
                }
                lVar27 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_028d0394;
                *(long **)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = plVar19;
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
                *puVar12 = &PTR_FUN_04273708;
                puVar12[1] = uVar26;
                puVar12[2] = *(undefined8 *)(lVar13 + 0x58);
                puVar12[3] = *(undefined8 *)(lVar13 + 0x60);
                puVar12[4] = *(undefined8 *)(lVar13 + 0x68);
                plVar16 = *(long **)(lVar13 + 0x70);
                puVar12[5] = plVar16;
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x18))();
                }
                local_a0 = 8;
                local_a8 = 0x30;
                *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
                local_b8 = puVar12;
                local_b0 = plVar19;
              }
              uVar17 = *(ulong *)(param_1 + 0x40);
              if (uVar17 < *(ulong *)(param_1 + 0x48)) {
                FUN_028d1954(puVar1,uVar17,&local_b8);
                *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 0x20;
              }
              else {
                uVar23 = *(ulong *)(param_1 + 0x58);
                lVar13 = (long)(uVar17 - *(long *)(param_1 + 0x38)) >> 5;
                uVar17 = lVar13 + 1;
                if (0x7ffffffffffffffe < uVar23) {
                  uVar23 = 0x7fffffffffffffff;
                }
                if (uVar23 < uVar17) goto LAB_028d0398;
                lVar27 = *(ulong *)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
                if ((ulong)(lVar27 >> 5) < uVar23 >> 1) {
                  uVar22 = lVar27 >> 4;
                  uVar23 = uVar17;
                  if (uVar17 <= uVar22) {
                    uVar23 = uVar22;
                  }
                }
                local_78 = (long *)0x0;
                if (uVar23 == 0) {
                  lVar27 = 0;
                  puStack_70 = puVar1;
                }
                else {
                  puStack_70 = puVar1;
                  lVar27 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar23 << 5,8);
                  if (lVar27 == 0) {
                    (**(code **)(*(long *)*puVar1 + 0xb8))();
                  }
                }
                lVar14 = lVar27 + lVar13 * 0x20;
                lVar28 = lVar27 + uVar23 * 0x20;
                local_90 = lVar27;
                local_88 = lVar14;
                local_78 = (long *)lVar28;
                FUN_028d1954(puVar1,lVar14,&local_b8);
                lVar13 = lVar14 + 0x20;
                lVar27 = *(long *)(param_1 + 0x38);
                lVar24 = *(long *)(param_1 + 0x40);
                local_80 = lVar13;
                if (lVar24 == lVar27) {
                  local_80 = lVar27;
                }
                else {
                  do {
                    lVar14 = lVar14 + -0x20;
                    lVar24 = lVar24 + -0x20;
                    FUN_028d1870(puVar1,lVar14,lVar24);
                  } while (lVar27 != lVar24);
                  lVar27 = *(long *)(param_1 + 0x38);
                  local_80 = *(long *)(param_1 + 0x40);
                }
                *(long *)(param_1 + 0x38) = lVar14;
                *(long *)(param_1 + 0x40) = lVar13;
                local_78 = *(long **)(param_1 + 0x48);
                *(long *)(param_1 + 0x48) = lVar28;
                local_90 = lVar27;
                local_88 = lVar27;
                FUN_028d14b4(&local_90);
              }
              puVar12 = local_b8;
              local_b8 = (undefined8 *)0x0;
              if (puVar12 != (undefined8 *)0x0) {
                FUN_02bcbe58(&local_90,0);
                (**(code **)*puVar12)(puVar12);
                uVar20 = local_a0;
                uVar26 = local_a8;
                plVar16 = local_b0;
                uVar17 = (**(code **)(*local_b0 + 0xc0))(local_b0);
                if ((uVar17 & 1) == 0) {
LAB_028cfed0:
                  (**(code **)(*plVar16 + 0x18))(plVar16,puVar12,uVar26,uVar20);
                }
                else {
                  lVar13 = tpidr_el0;
                  if (*(char *)(lVar13 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar13 + 0x38d488) = 1;
                    *(undefined8 *)(lVar13 + 0x38d478) = 0;
                    *(undefined8 *)(lVar13 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_028cfed0;
                  FUN_02bcc824(plVar16,puVar12,uVar26,uVar20);
                }
                lVar13 = tpidr_el0;
                if (*(char *)(lVar13 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar13 + 0x38d488) = 1;
                  *(undefined8 *)(lVar13 + 0x38d478) = 0;
                  *(undefined8 *)(lVar13 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                }
                iVar11 = *(int *)(lVar13 + 0x38d480) + -1;
                *(int *)(lVar13 + 0x38d480) = iVar11;
                if (iVar11 == 0) {
                  FUN_02bcc320();
                  if (*(char *)(lVar13 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar13 + 0x38d488) = 1;
                    *(undefined8 *)(lVar13 + 0x38d478) = 0;
                    *(undefined8 *)(lVar13 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  goto LAB_028cff68;
                }
              }
            }
          }
          else {
            lVar27 = *plVar3;
            puVar12 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0xd8,8);
            if (puVar12 == (undefined8 *)0x0) {
              local_a8 = 0;
              local_a0 = 0;
              local_b8 = (undefined8 *)0x0;
              local_b0 = (long *)0x0;
            }
            else {
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar10 = PTR_DAT_04379528;
                if (iVar11 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              plVar16 = local_98;
              if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_028d0394:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar19;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
              if (local_98 == (long *)0x0) {
                lVar28 = *(long *)PTR_DAT_04379c88;
LAB_028d02e4:
                lVar24 = *(long *)PTR_PTR_04379d00;
                if (local_98 != (long *)0x0) goto LAB_028cf8e8;
LAB_028d02f4:
                lVar29 = 0;
              }
              else {
                lVar28 = local_98[0xb];
                if (local_98 == (long *)0x0) goto LAB_028d02e4;
                lVar24 = local_98[0xc];
                if (local_98 == (long *)0x0) goto LAB_028d02f4;
LAB_028cf8e8:
                lVar29 = local_98[0xd];
                (**(code **)(*local_98 + 0x18))(local_98);
              }
              uVar20 = *(undefined8 *)(param_1 + 0x30);
              *puVar12 = &PTR_FUN_04273518;
              lVar21 = *plVar25;
              puVar12[1] = lVar21;
              if (lVar21 != 0) {
                piVar2 = (int *)(lVar21 + 0x50);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar9) {
                    *piVar2 = *piVar2 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              puVar12[2] = uVar26;
              puVar12[3] = *(undefined8 *)(lVar27 + 0x58);
              puVar12[4] = *(undefined8 *)(lVar27 + 0x60);
              puVar12[5] = *(undefined8 *)(lVar27 + 0x68);
              plVar15 = *(long **)(lVar27 + 0x70);
              puVar12[6] = plVar15;
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))();
              }
              puVar12[7] = lVar28;
              puVar12[8] = lVar24;
              puVar12[9] = lVar29;
              puVar12[10] = plVar16;
              if (plVar16 == (long *)0x0) {
                FUN_028d1a40(puVar12 + 0xb);
                FUN_028d1b3c(puVar12 + 0x12);
                puVar12[0x19] = uVar20;
                *(undefined1 *)(puVar12 + 0x1a) = 1;
              }
              else {
                (**(code **)(*plVar16 + 0x18))(plVar16);
                FUN_028d1a40(puVar12 + 0xb);
                FUN_028d1b3c(puVar12 + 0x12);
                puVar12[0x19] = uVar20;
                *(undefined1 *)(puVar12 + 0x1a) = 1;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              local_a0 = 8;
              local_a8 = 0xd8;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
              local_b8 = puVar12;
              local_b0 = plVar19;
            }
            FUN_028d1c38(puVar12,param_3,param_5,param_6,lVar13,cVar6 != '\0');
            uVar17 = *(ulong *)(param_1 + 0x40);
            if (uVar17 < *(ulong *)(param_1 + 0x48)) {
              FUN_028d13c8(puVar1,uVar17,&local_b8);
              *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 0x20;
            }
            else {
              uVar23 = *(ulong *)(param_1 + 0x58);
              lVar13 = (long)(uVar17 - *(long *)(param_1 + 0x38)) >> 5;
              uVar17 = lVar13 + 1;
              if (0x7ffffffffffffffe < uVar23) {
                uVar23 = 0x7fffffffffffffff;
              }
              if (uVar23 < uVar17) {
LAB_028d0398:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar27 = *(ulong *)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
              if ((ulong)(lVar27 >> 5) < uVar23 >> 1) {
                uVar22 = lVar27 >> 4;
                uVar23 = uVar17;
                if (uVar17 <= uVar22) {
                  uVar23 = uVar22;
                }
              }
              local_78 = (long *)0x0;
              if (uVar23 == 0) {
                lVar27 = 0;
                puStack_70 = puVar1;
              }
              else {
                puStack_70 = puVar1;
                lVar27 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar23 << 5,8);
                if (lVar27 == 0) {
                  (**(code **)(*(long *)*puVar1 + 0xb8))();
                }
              }
              lVar14 = lVar27 + lVar13 * 0x20;
              lVar28 = lVar27 + uVar23 * 0x20;
              local_90 = lVar27;
              local_88 = lVar14;
              local_78 = (long *)lVar28;
              FUN_028d13c8(puVar1,lVar14,&local_b8);
              lVar13 = lVar14 + 0x20;
              lVar27 = *(long *)(param_1 + 0x38);
              lVar24 = *(long *)(param_1 + 0x40);
              local_80 = lVar13;
              if (lVar24 == lVar27) {
                local_80 = lVar27;
              }
              else {
                do {
                  lVar14 = lVar14 + -0x20;
                  lVar24 = lVar24 + -0x20;
                  FUN_028d1870(puVar1,lVar14,lVar24);
                } while (lVar27 != lVar24);
                lVar27 = *(long *)(param_1 + 0x38);
                local_80 = *(long *)(param_1 + 0x40);
              }
              *(long *)(param_1 + 0x38) = lVar14;
              *(long *)(param_1 + 0x40) = lVar13;
              local_78 = *(long **)(param_1 + 0x48);
              *(long *)(param_1 + 0x48) = lVar28;
              local_90 = lVar27;
              local_88 = lVar27;
              FUN_028d14b4(&local_90);
            }
            puVar12 = local_b8;
            local_b8 = (undefined8 *)0x0;
            if (puVar12 == (undefined8 *)0x0) goto LAB_028cff74;
            FUN_02bcbe58(&local_90,0);
            (**(code **)*puVar12)(puVar12);
            uVar20 = local_a0;
            uVar26 = local_a8;
            plVar16 = local_b0;
            uVar17 = (**(code **)(*local_b0 + 0xc0))(local_b0);
            lVar13 = tpidr_el0;
            if ((uVar17 & 1) == 0) {
LAB_028cfc70:
              (**(code **)(*plVar16 + 0x18))(plVar16,puVar12,uVar26,uVar20);
            }
            else {
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_028cfc70;
              FUN_02bcc824(plVar16,puVar12,uVar26,uVar20);
            }
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar11 = *(int *)(lVar13 + 0x38d480) + -1;
            *(int *)(lVar13 + 0x38d480) = iVar11;
            if (iVar11 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
LAB_028cff68:
              *(undefined4 *)(lVar13 + 0x38d484) = 0;
            }
          }
LAB_028cff74:
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
        }
        plVar25 = plVar25 + 1;
      } while (plVar25 != plVar18);
      bVar5 = *(byte *)(param_1 + 0x71);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(byte *)(param_1 + 0x71) = bVar5 | (byte)uVar7;
  }
  return;
}


