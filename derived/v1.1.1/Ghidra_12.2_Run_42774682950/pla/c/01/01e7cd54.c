/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e7cd54; name: FUN_01e7cd54
 */


void FUN_01e7cd54(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined1 *puVar29;
  undefined1 *unaff_x24;
  long *plVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined1 *puVar33;
  long local_c8;
  undefined1 *local_b8;
  byte *pbStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar14 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar14;
  plVar30 = *(long **)(lVar14 + 0x78);
  if (plVar30 != (long *)0x0) {
    lVar14 = plVar30[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar15 = *(uint **)(plVar30[0x38] + 0x250);
  piVar1 = (int *)((long)puVar15 + (ulong)*puVar15);
  uVar21 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar4 = (uint *)((long)piVar1 + uVar21);
  uVar23 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar23);
  puVar26 = puVar4 + 1;
  uVar24 = (ulong)*puVar4;
  if (uVar24 != 0) {
    puVar4 = puVar26 + uVar24;
    plVar2 = plVar30 + 0xbb;
    plVar3 = plVar30 + 0xc1;
    local_c8 = (long)puVar15 + uVar23 + uVar21 + (ulong)*puVar15 + 0xd;
    do {
      local_80 = *(long **)(param_1 + 8);
      local_88 = (undefined1 *)0x0;
      piVar1 = (int *)((long)puVar26 + (ulong)*puVar26);
      local_68 = 0;
      local_98 = (undefined1 *)0x0;
      local_90 = (undefined1 *)0x0;
      local_78 = 0x7ffffffffffffff;
      local_70 = 0;
      lVar14 = (long)*piVar1;
      uVar21 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar14));
      puVar15 = (uint *)((long)piVar1 + uVar21);
      uVar23 = (ulong)*puVar15;
      puVar15 = (uint *)((long)puVar15 + uVar23);
      puVar27 = puVar15 + 1;
      uVar24 = (ulong)*puVar15;
      if (uVar24 != 0) {
        lVar14 = local_c8 + uVar23 + uVar21 + (ulong)*puVar26;
        puVar15 = puVar27;
        do {
          puVar28 = puVar15 + 1;
          uVar5 = *puVar15;
          pbVar19 = (byte *)((long)puVar28 + (ulong)uVar5);
          local_a8 = strlen((char *)pbVar19);
          bVar6 = *pbVar19;
          local_b8 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_b8 = &DAT_cbf29ce484222645;
            pbVar22 = (byte *)(lVar14 + (ulong)uVar5);
            do {
              local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while (bVar6 != 0);
          }
          local_a0 = (long *)0x0;
          pbStack_b0 = pbVar19;
          if (local_90 < local_88) {
            FUN_00b834f4(&local_80,local_90,&local_b8);
            local_90 = local_90 + 0x20;
          }
          else {
            lVar32 = (long)local_90 - (long)local_98 >> 5;
            uVar21 = lVar32 + 1;
            uVar23 = local_78;
            if (0x7ffffffffffffffe < local_78) {
              uVar23 = 0x7fffffffffffffff;
            }
            if (uVar23 < uVar21) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_88 - (long)local_98 >> 5) < uVar23 >> 1) {
              uVar16 = (long)local_88 - (long)local_98 >> 4;
              uVar23 = uVar21;
              if (uVar21 <= uVar16) {
                uVar23 = uVar16;
              }
            }
            if (uVar23 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = (**(code **)(*local_80 + 0x10))(local_80,uVar23 << 5,8);
              if (lVar12 == 0) {
                (**(code **)(*local_80 + 0xb8))();
              }
            }
            puVar29 = (undefined1 *)(lVar12 + lVar32 * 0x20);
            FUN_00b834f4(&local_80,puVar29,&local_b8);
            puVar9 = local_98;
            puVar33 = puVar29;
            puVar20 = local_98;
            puVar25 = local_98;
            puVar31 = local_90;
            unaff_x24 = local_88;
            while( true ) {
              local_98 = puVar33;
              local_88 = (undefined1 *)(lVar12 + uVar23 * 0x20);
              puVar33 = puVar29 + 0x20;
              plVar17 = local_80;
              if (puVar31 == puVar9) break;
              puVar33 = local_98 + -0x20;
              puVar31 = puVar31 + -0x20;
              local_98 = puVar20;
              local_88 = unaff_x24;
              FUN_00b835e0(&local_80,puVar33,puVar31);
              puVar20 = local_98;
              puVar25 = local_90;
              unaff_x24 = local_88;
            }
            while( true ) {
              local_90 = puVar33;
              local_80 = plVar17;
              if (puVar25 == puVar20) break;
              plVar18 = (long *)(puVar25 + -8);
              puVar25 = puVar25 + -0x20;
              puVar33 = local_90;
              if ((long *)*plVar18 != (long *)0x0) {
                (**(code **)(*(long *)*plVar18 + 0x20))();
                puVar33 = local_90;
                plVar17 = local_80;
              }
            }
            if (puVar20 != (undefined1 *)0x0) {
              uVar21 = (**(code **)(*plVar17 + 0xc0))(plVar17);
              if ((uVar21 & 1) != 0) {
                lVar32 = tpidr_el0;
                if (*(char *)(lVar32 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar32 + 0x38d488) = 1;
                  *(undefined8 *)(lVar32 + 0x38d478) = 0;
                  *(undefined8 *)(lVar32 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar32 + 0x38d480)) {
                  FUN_02bcc824(plVar17,puVar20,(long)unaff_x24 - (long)puVar20,8);
                  goto joined_r0x01e7d164;
                }
              }
              (**(code **)(*plVar17 + 0x18))(plVar17,puVar20,(long)unaff_x24 - (long)puVar20,8);
            }
          }
joined_r0x01e7d164:
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          lVar14 = lVar14 + 4;
          puVar15 = puVar28;
        } while (puVar28 != puVar27 + uVar24);
        lVar14 = (long)*piVar1;
      }
      if ((*(ushort *)((long)piVar1 - lVar14) < 5) ||
         (uVar21 = (ulong)((ushort *)((long)piVar1 - lVar14))[2], uVar21 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar15 = (uint *)((long)piVar1 + uVar21);
        lVar14 = (long)puVar15 + (ulong)*puVar15;
      }
      sVar13 = strlen((char *)(lVar14 + 4));
      bVar6 = *(byte *)(lVar14 + 4);
      puVar29 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        puVar29 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar14 + 5);
        do {
          puVar29 = (undefined1 *)(((ulong)puVar29 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 != 0);
      }
      puVar25 = (undefined1 *)plVar30[0xbc];
      if (puVar25 == (undefined1 *)0x0) {
LAB_01e7d250:
        plVar17 = (long *)(**(code **)(*(long *)plVar30[0xc2] + 0x10))((long *)plVar30[0xc2],0x68,8)
        ;
        if (plVar17 == (long *)0x0) {
          (**(code **)(*(long *)plVar30[0xc2] + 0xb8))();
        }
        lVar32 = plVar30[0xc2];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar32;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        plVar17[2] = (long)puVar29;
        plVar17[3] = lVar14 + 4;
        plVar17[6] = 0;
        plVar17[4] = sVar13;
        plVar17[5] = 0;
        plVar17[0xb] = local_70;
        plVar17[0xc] = CONCAT44(uStack_64,local_68);
        plVar17[9] = (long)local_80;
        plVar17[10] = local_78;
        plVar17[6] = (long)local_98;
        plVar17[7] = (long)local_90;
        plVar17[8] = (long)local_88;
        local_98 = (undefined1 *)0x0;
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *plVar17 = 0;
        plVar17[1] = (long)puVar29;
        if ((puVar25 == (undefined1 *)0x0) ||
           (*(float *)(plVar30 + 199) * (float)puVar25 < (float)(plVar30[0xc6] + 1))) {
          uVar21 = (ulong)(puVar25 < (undefined1 *)0x3 ||
                          ((ulong)puVar25 & (ulong)(puVar25 + -1)) != 0) | (long)puVar25 << 1;
          uVar23 = (ulong)((float)(plVar30[0xc6] + 1) / *(float *)(plVar30 + 199));
          if (uVar23 <= uVar21) {
            uVar23 = uVar21;
          }
          FUN_01e7f49c(plVar2,uVar23);
          puVar25 = (undefined1 *)plVar30[0xbc];
          if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
            unaff_x24 = (undefined1 *)((ulong)(puVar25 + -1) & (ulong)puVar29);
          }
          else if (puVar29 < puVar25) {
            unaff_x24 = puVar29;
          }
          else {
            uVar21 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar21 = (ulong)puVar29 / (ulong)puVar25;
            }
            unaff_x24 = puVar29 + -(uVar21 * (long)puVar25);
          }
        }
        plVar18 = *(long **)(*plVar2 + (long)unaff_x24 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar17 = *plVar3;
          *plVar3 = (long)plVar17;
          *(long **)(*plVar2 + (long)unaff_x24 * 8) = plVar3;
          if (*plVar17 != 0) {
            puVar29 = *(undefined1 **)(*plVar17 + 8);
            if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
              puVar29 = (undefined1 *)((ulong)puVar29 & (ulong)(puVar25 + -1));
            }
            else if (puVar25 <= puVar29) {
              uVar21 = 0;
              if (puVar25 != (undefined1 *)0x0) {
                uVar21 = (ulong)puVar29 / (ulong)puVar25;
              }
              puVar29 = puVar29 + -(uVar21 * (long)puVar25);
            }
            plVar18 = (long *)(*plVar2 + (long)puVar29 * 8);
            goto LAB_01e7d380;
          }
        }
        else {
          *plVar17 = *plVar18;
LAB_01e7d380:
          *plVar18 = (long)plVar17;
        }
        plVar30[0xc6] = plVar30[0xc6] + 1;
      }
      else {
        uVar21 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          unaff_x24 = (undefined1 *)((ulong)(puVar25 + -1) & (ulong)puVar29);
        }
        else {
          unaff_x24 = puVar29;
          if (puVar25 <= puVar29) {
            uVar23 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar23 = (ulong)puVar29 / (ulong)puVar25;
            }
            unaff_x24 = puVar29 + -(uVar23 * (long)puVar25);
          }
        }
        plVar17 = *(long **)(*plVar2 + (long)unaff_x24 * 8);
        if (plVar17 == (long *)0x0) goto LAB_01e7d250;
        if (uVar21 < 2) {
          do {
            plVar17 = (long *)*plVar17;
            if ((plVar17 == (long *)0x0) ||
               ((undefined1 *)plVar17[1] != puVar29 &&
                (undefined1 *)((ulong)plVar17[1] & (ulong)(puVar25 + -1)) != unaff_x24))
            goto LAB_01e7d250;
          } while ((undefined1 *)plVar17[2] != puVar29);
        }
        else {
          do {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_01e7d250;
            puVar20 = (undefined1 *)plVar17[1];
            if (puVar20 != puVar29) {
              if (puVar25 <= puVar20) {
                uVar21 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar21 = (ulong)puVar20 / (ulong)puVar25;
                }
                puVar20 = puVar20 + -(uVar21 * (long)puVar25);
              }
              if (puVar20 != unaff_x24) goto LAB_01e7d250;
            }
          } while ((undefined1 *)plVar17[2] != puVar29);
        }
      }
      puVar20 = local_98;
      puVar29 = local_98;
      puVar25 = local_90;
      plVar17 = local_80;
      if (local_98 != (undefined1 *)0x0) {
        while( true ) {
          local_98 = puVar29;
          local_80 = plVar17;
          if (puVar25 == puVar20) break;
          plVar18 = (long *)(puVar25 + -8);
          puVar25 = puVar25 + -0x20;
          if ((long *)*plVar18 != (long *)0x0) {
            (**(code **)(*(long *)*plVar18 + 0x20))();
            puVar29 = local_98;
            plVar17 = local_80;
          }
        }
        local_90 = puVar20;
        lVar14 = (long)local_88 - (long)puVar29;
        uVar21 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar21 & 1) != 0) {
          lVar32 = tpidr_el0;
          if (*(char *)(lVar32 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar32 + 0x38d488) = 1;
            *(undefined8 *)(lVar32 + 0x38d478) = 0;
            *(undefined8 *)(lVar32 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar32 + 0x38d480)) {
            FUN_02bcc824(plVar17,puVar29,lVar14,8);
            goto LAB_01e7cec4;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar29,lVar14,8);
      }
LAB_01e7cec4:
      local_c8 = local_c8 + 4;
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar4);
  }
  if (plVar30 != (long *)0x0) {
    lVar14 = plVar30[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  return;
}


