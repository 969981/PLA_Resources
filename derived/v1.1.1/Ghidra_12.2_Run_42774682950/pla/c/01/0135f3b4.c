/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135f3b4; name: FUN_0135f3b4
 */


void FUN_0135f3b4(long *param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined1 *puVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *local_88 [2];
  long *local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  puVar5 = PTR_DAT_04379558;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x1fffffffffffffff;
  param_1[5] = 0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_70);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  FUN_0114907c(&local_78);
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(local_88);
  if (local_88[0] == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    FUN_00b1e8cc(&local_68);
    plVar22 = local_68;
    if (local_88[0] != (long *)0x0) {
      FUN_02a43934();
      bVar4 = *puVar5;
      goto joined_r0x0135f558;
    }
  }
  bVar4 = *puVar5;
joined_r0x0135f558:
  if (((bVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  FUN_01148cdc(local_88);
  cVar8 = FUN_01123ce8(local_88[0]);
  plVar1 = local_88[0];
  if ((local_88[0] != (long *)0x0) && (uVar10 = FUN_02a43a5c(local_88[0][0xb]), (uVar10 & 1) != 0))
  {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (cVar8 == '\0') {
    piVar11 = (int *)FUN_00b1e13c(plVar22);
  }
  else {
    piVar11 = (int *)FUN_00b1e15c();
  }
  if ((((piVar11 != (int *)0x0) && (4 < *(ushort *)((long)piVar11 - (long)*piVar11))) &&
      (uVar10 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar10 != 0)) &&
     (puVar2 = (uint *)((long)piVar11 + uVar10), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
     puVar2 != (uint *)0x0)) {
    lVar21 = 0;
    plVar1 = param_1 + 3;
    do {
      puVar24 = (undefined1 *)local_78[lVar21 + 0xd];
      if ((puVar24 != &DAT_cbf29ce484222645) && (uVar14 = *puVar2, uVar14 != 0)) {
        uVar10 = 0;
        do {
          piVar11 = (int *)((long)(puVar2 + uVar10 + 1) + (ulong)puVar2[uVar10 + 1]);
          puVar17 = (ushort *)((long)piVar11 - (long)*piVar11);
          if ((*puVar17 < 5) || ((ulong)puVar17[2] == 0)) {
            lVar23 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar11 + (ulong)puVar17[2]);
            lVar23 = (long)puVar3 + (ulong)*puVar3;
          }
          bVar4 = *(byte *)(lVar23 + 4);
          puVar20 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            puVar20 = &DAT_cbf29ce484222645;
            pbVar19 = (byte *)(lVar23 + 5);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar4 != 0);
          }
          if (puVar24 == puVar20) {
            if ((*puVar17 < 5) || ((ulong)puVar17[2] == 0)) {
              lVar23 = 0;
            }
            else {
              puVar3 = (uint *)((long)piVar11 + (ulong)puVar17[2]);
              lVar23 = (long)puVar3 + (ulong)*puVar3;
            }
            local_68 = (long *)0x0;
            if (*(char *)(lVar23 + 4) == '\0') {
              plVar27 = (long *)FUN_00938550();
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x18))(plVar27);
              }
              if (local_68 != (long *)0x0) {
                lVar23 = *local_68;
                local_68 = plVar27;
                (**(code **)(lVar23 + 0x20))();
                plVar27 = local_68;
              }
            }
            else {
              if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379cd0);
              }
              uVar12 = *(undefined8 *)PTR_DAT_04379cd8;
              *(undefined8 *)PTR_DAT_04379ce0 = uVar12;
              FUN_02a47cd8(local_88,uVar12,(char *)(lVar23 + 4));
              plVar27 = local_68;
              local_68 = (long *)0x0;
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x20))();
              }
              local_68 = local_88[0];
              plVar27 = local_68;
            }
            local_68 = plVar27;
            uVar13 = param_1[1];
            if (uVar13 < (ulong)param_1[2]) {
              FUN_01361444(plVar1,uVar13,&local_68);
              param_1[1] = param_1[1] + 8;
            }
            else {
              uVar18 = param_1[4];
              lVar23 = (long)(uVar13 - *param_1) >> 3;
              uVar13 = lVar23 + 1;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar15 = param_1[2] - *param_1;
              if ((ulong)(lVar15 >> 3) < uVar18 >> 1) {
                uVar16 = lVar15 >> 2;
                uVar18 = uVar13;
                if (uVar13 <= uVar16) {
                  uVar18 = uVar16;
                }
              }
              if (uVar18 == 0) {
                lVar15 = 0;
              }
              else {
                lVar15 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar18 << 3,8);
                if (lVar15 == 0) {
                  (**(code **)(*(long *)*plVar1 + 0xb8))();
                }
              }
              lVar26 = lVar15 + lVar23 * 8;
              FUN_01361444(plVar1,lVar26,&local_68);
              lVar23 = lVar26 + 8;
              plVar27 = (long *)*param_1;
              plVar25 = (long *)param_1[1];
              if (plVar25 == plVar27) {
                plVar25 = plVar27;
              }
              else {
                do {
                  lVar26 = lVar26 + -8;
                  plVar25 = plVar25 + -1;
                  FUN_00e8dc78(plVar1,lVar26,plVar25);
                } while (plVar27 != plVar25);
                plVar27 = (long *)param_1[1];
                plVar25 = (long *)*param_1;
              }
              *param_1 = lVar26;
              param_1[1] = lVar23;
              lVar23 = param_1[2];
              param_1[2] = lVar15 + uVar18 * 8;
              while (plVar27 != plVar25) {
                plVar27 = plVar27 + -1;
                if ((long *)*plVar27 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar27 + 0x20))();
                }
              }
              if (plVar25 != (long *)0x0) {
                plVar27 = (long *)*plVar1;
                uVar13 = FUN_02bcc75c(plVar27);
                if ((uVar13 & 1) == 0) {
                  (**(code **)(*plVar27 + 0x18))(plVar27,plVar25,lVar23 - (long)plVar25,8);
                }
                else {
                  FUN_02bcc824(plVar27,plVar25,lVar23 - (long)plVar25,8);
                }
              }
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            uVar14 = *puVar2;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar14);
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0xc);
  }
  plVar1 = local_78;
  if (plVar22 != (long *)0x0) {
    uVar10 = FUN_02a43a5c(plVar22[0xb]);
    plVar1 = local_78;
    if ((uVar10 & 1) != 0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
      plVar1 = local_78;
    }
  }
  plVar22 = local_70;
  if (plVar1 != (long *)0x0) {
    uVar10 = FUN_02a43a5c(plVar1[0xb]);
    plVar22 = local_70;
    if ((uVar10 & 1) != 0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar22 = local_70;
    }
  }
  if ((plVar22 != (long *)0x0) && (uVar10 = FUN_02a43a5c(plVar22[0xb]), (uVar10 & 1) != 0)) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
}


