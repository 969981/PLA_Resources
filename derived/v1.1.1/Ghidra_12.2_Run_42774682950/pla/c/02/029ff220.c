/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ff220; name: FUN_029ff220
 */


void FUN_029ff220(long param_1,undefined2 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  int *piVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  ulong uVar25;
  char *pcVar26;
  long lVar27;
  int iVar28;
  undefined8 *puVar29;
  char cVar30;
  undefined4 *puVar31;
  uint *puVar32;
  undefined8 local_d8;
  ushort local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  char local_b8 [8];
  byte local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  bVar11 = *(byte *)((long)param_3 + 0xb);
  if ((ulong)bVar11 == 0x1f) {
    bVar8 = false;
    lVar27 = 0;
    iVar28 = 6;
    uVar19 = 0x1f;
  }
  else {
    uVar12 = 3;
    if (0x17 < bVar11) {
      uVar12 = (uint)(bVar11 < 0x1e) << 2;
    }
    uVar17 = 1;
    if (0x11 < bVar11) {
      uVar17 = uVar12;
    }
    uVar12 = 2;
    if (0xb < bVar11) {
      uVar12 = uVar17;
    }
    uVar17 = 0;
    if (5 < bVar11) {
      uVar17 = uVar12;
    }
    lVar27 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar15 = (ulong)*(byte *)(lVar27 + (ulong)uVar17 * 0x38 + 0x38);
    if (uVar15 != 0) {
      uVar25 = 0;
      do {
        if (*(byte *)(*(long *)(lVar27 + (ulong)uVar17 * 0x38 + 8 + uVar25 * 8) + 0x7d) == bVar11)
        goto LAB_029ff2f4;
        uVar25 = uVar25 + 1;
      } while (uVar15 != uVar25);
    }
    uVar25 = 6;
LAB_029ff2f4:
    uVar12 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                          *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55));
    pcVar26 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    if ((*pcVar26 == '\0') || (pcVar26[2] != bVar11)) {
      if ((pcVar26[3] == '\0') || (pcVar26[5] != bVar11)) {
        if ((pcVar26[6] == '\0') || (pcVar26[8] != bVar11)) {
          if ((pcVar26[9] == '\0') || (pcVar26[0xb] != bVar11)) {
            if ((pcVar26[0xc] == '\0') || (pcVar26[0xe] != bVar11)) {
              if ((pcVar26[0xf] == '\0') || (pcVar26[0x11] != bVar11)) {
                iVar28 = 6;
              }
              else {
                iVar28 = 5;
              }
            }
            else {
              iVar28 = 4;
            }
          }
          else {
            iVar28 = 3;
          }
        }
        else {
          iVar28 = 2;
        }
      }
      else {
        iVar28 = 1;
      }
    }
    else {
      iVar28 = 0;
    }
    lVar27 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar11 * 8 + 0x120);
    uVar19 = *(undefined1 *)((long)param_3 + 0xb);
    bVar8 = (uVar12 & 0xff) <= ((uint)uVar25 & 0xff);
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa7,uVar19,(short)param_3[1]);
  if ((short)param_3[1] == 0) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x233,0xffff0000);
    *(undefined1 *)param_2 = 0;
    return;
  }
  uVar15 = FUN_0293ee00();
  puVar5 = PTR_DAT_043795f8;
  if ((uVar15 & 1) == 0) {
    lVar22 = param_3[1];
    if (((*PTR_DAT_043795f8 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
    puVar7 = PTR_DAT_04379608;
    puVar6 = PTR_DAT_04379600;
    *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
    if ((short)lVar22 != 0) {
      FUN_02c4fb44(&local_a8,(short)lVar22);
      iVar13 = FUN_02c4fc60(&local_a8,0x10);
      if (iVar13 == 3) {
        *param_2 = 0x101;
        return;
      }
    }
    sVar4 = (short)param_3[1];
    if ((bVar8) || (iVar28 == 6)) {
      if ((bVar8) || (iVar28 == 6)) {
        uVar15 = 0;
        puVar31 = &DAT_04278b00;
        do {
          uVar24 = *puVar31;
          if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
          if (sVar4 != 0) {
            FUN_02c4fb44(&local_a8,sVar4);
            iVar13 = FUN_02c4fc60(&local_a8,uVar24);
            if ((iVar13 != 0) && ((0x1ff017fU >> (uVar15 & 0x3f) & 1) != 0)) goto LAB_029ff844;
          }
          uVar15 = uVar15 + 1;
          puVar31 = puVar31 + 6;
        } while (uVar15 != 0x19);
      }
      else {
        uVar15 = 0;
        puVar31 = &DAT_04278b00;
        do {
          uVar24 = *puVar31;
          if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
          if (sVar4 != 0) {
            FUN_02c4fb44(&local_a8,sVar4);
            iVar13 = FUN_02c4fc60(&local_a8,uVar24);
            if ((iVar13 != 0) &&
               (((0x1ff017fU >> (uVar15 & 0x3f) & 1) != 0 ||
                ((0xfe80UL >> (uVar15 & 0x3f) & 1) != 0)))) goto LAB_029ff844;
          }
          uVar15 = uVar15 + 1;
          puVar31 = puVar31 + 6;
        } while (uVar15 != 0x19);
      }
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2bd,0xffff0000);
      *(undefined1 *)param_2 = 0;
      return;
    }
    goto LAB_029ff84c;
  }
  cVar9 = *(char *)((long)param_3 + 0xb);
  lVar27 = *param_3;
  uVar3 = (undefined2)param_3[1];
  puVar31 = (undefined4 *)param_3[2];
  *puVar31 = 0x61f;
  *(undefined1 *)(puVar31 + 1) = 0;
  if (cVar9 == '\x1f') {
    lVar22 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    bVar11 = *(byte *)(lVar27 + 0x7d);
    if (bVar11 < 6) {
      uVar15 = 0;
    }
    else if (bVar11 < 0xc) {
      uVar15 = 2;
    }
    else if (bVar11 < 0x12) {
      uVar15 = 1;
    }
    else {
      uVar12 = 3;
      if (0x17 < bVar11) {
        uVar12 = (uint)(bVar11 < 0x1e) << 2;
      }
      uVar15 = (ulong)uVar12;
    }
    uVar12 = (uint)*(byte *)(lVar22 + uVar15 * 0x38 + 0x38);
    if (uVar12 != 0) {
      uVar17 = 0;
      do {
        if (*(byte *)(*(long *)(lVar22 + uVar15 * 0x38 + (ulong)(uVar17 & 0xff) * 8 + 8) + 0x7d) ==
            bVar11) {
          cVar9 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
          if (cVar9 != '\x06') goto LAB_029ff724;
          break;
        }
        uVar17 = uVar17 + 1;
      } while (uVar12 != uVar17);
    }
    cVar9 = '\x06';
LAB_029ff724:
    iVar28 = *(int *)(*(long *)(param_1 + 8) + 0x110);
    local_a8._0_5_ = CONCAT14(cVar9,7);
    if (cVar9 == '\x06') {
      cVar9 = '\x06';
      uVar15 = 0;
      local_b8[0] = '\x06';
    }
    else {
      uVar15 = local_d8 >> 0x30;
      local_d8 = CONCAT26((ushort)uVar15 & 0xff00,0x60606060606);
      if (iVar28 == 1) {
        FUN_0299c054(&local_a8,&local_d8,
                     *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55));
      }
      else if (iVar28 == 2) {
        FUN_0299c6e8();
      }
      else {
        FUN_0299beac();
      }
      uVar25 = local_d8 >> 0x30 & 0xff;
      if (uVar25 == 0) {
        uVar15 = 0;
        cVar9 = '\x06';
      }
      else {
        pcVar26 = local_b8;
        memcpy(local_b8,&local_d8,uVar25);
        do {
          puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
          FUN_02947b84(*puVar29,*pcVar26,&local_d8,local_b0);
          uVar15 = local_d8 & 0xff;
          if ((uVar15 == 5) || (*(byte *)(puVar29 + uVar15 * 7 + 7) <= local_b0[0])) {
            uVar15 = 0;
          }
          else {
            uVar15 = puVar29[uVar15 * 7 + (ulong)local_b0[0] + 1];
            if ((uVar15 != 0) && (*(short *)(uVar15 + 0x74) != 0)) {
              cVar9 = *pcVar26;
              goto LAB_029ffb58;
            }
          }
          pcVar26 = pcVar26 + 1;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
        cVar9 = '\x06';
      }
    }
  }
  else {
    pcVar26 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    if ((*pcVar26 == '\0') || (pcVar26[2] != cVar9)) {
      if ((pcVar26[3] == '\0') || (pcVar26[5] != cVar9)) {
        if ((pcVar26[6] == '\0') || (pcVar26[8] != cVar9)) {
          if ((pcVar26[9] == '\0') || (pcVar26[0xb] != cVar9)) {
            if ((pcVar26[0xc] == '\0') || (pcVar26[0xe] != cVar9)) {
              if ((pcVar26[0xf] == '\0') || (pcVar26[0x11] != cVar9)) {
                cVar9 = '\x06';
              }
              else {
                cVar9 = '\x05';
              }
            }
            else {
              cVar9 = '\x04';
            }
          }
          else {
            cVar9 = '\x03';
          }
        }
        else {
          cVar9 = '\x02';
        }
      }
      else {
        cVar9 = '\x01';
      }
    }
    else {
      cVar9 = '\0';
    }
    puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
    FUN_02947b84(*puVar29,cVar9,&local_a8,&local_d8);
    uVar15 = local_a8 & 0xff;
    if (uVar15 != 5) {
      if ((byte)local_d8 < *(byte *)(puVar29 + uVar15 * 7 + 7)) {
        uVar15 = puVar29[uVar15 * 7 + (local_d8 & 0xff) + 1];
        goto LAB_029ffb58;
      }
    }
    uVar15 = 0;
  }
LAB_029ffb58:
  piVar20 = *(int **)(*(long *)(param_1 + 8) + 0x58);
  if (*piVar20 == 0) {
    uVar18 = 2;
    if ((cVar9 == '\x06') || (uVar15 == 0)) goto LAB_029ffb6c;
    bVar11 = *(byte *)((long)piVar20 + 0x1035);
    bVar10 = FUN_029506a8(uVar15,0xf);
    uVar18 = 1;
    if (bVar11 < bVar10) goto LAB_029ffb6c;
    local_88 = CONCAT44(0x1000,(undefined4)local_88);
    local_a8 = *(long *)(param_1 + 8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    local_88 = CONCAT62(local_88._2_6_,uVar3);
    local_80 = CONCAT62((int6)((ulong)local_80 >> 0x10),0x100);
    local_98 = lVar27;
    uStack_90 = uVar15;
    if (*(char *)(*(long *)(local_a8 + 0x58) + 0x1033) == '\0') {
LAB_029ffc54:
      uVar24 = 0x1000;
    }
    else {
      bVar11 = FUN_029506a8(lVar27,0xf);
      bVar10 = FUN_029506a8(uVar15,0xf);
      if (bVar10 <= bVar11) goto LAB_029ffc54;
      uVar24 = 0x19a;
    }
    local_88 = CONCAT44(uVar24,(undefined4)local_88);
    FUN_02950f48(uVar15,0);
    plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x1018);
    if (plVar16 == (long *)0x0) {
      FUN_02a0018c(local_b8,&local_a8);
      if (local_b8[0] != '\0') goto LAB_029ffcac;
LAB_029ffcc0:
      lVar22 = *(long *)(param_1 + 0x20);
      lVar23 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0x10) + 0x1c8);
      uVar25 = *(ulong *)(lVar23 + 0x18);
      if (uVar25 < 100) {
        *(ulong *)(lVar23 + 0x18) = uVar25 + 1;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar22 + 0x18),0x2b,2);
      if (local_b8[0] != '\0') goto LAB_029ffcfc;
      cVar30 = '\0';
    }
    else {
      (**(code **)(*plVar16 + 0x40))(plVar16,local_b8,&local_a8);
      if (local_b8[0] == '\0') goto LAB_029ffcc0;
LAB_029ffcac:
      FUN_029532f4(uVar15,uVar3);
      if (local_b8[0] == '\0') goto LAB_029ffcc0;
LAB_029ffcfc:
      FUN_02950f48(uVar15,1);
      local_d0 = 0x2e1f;
      local_c8 = 0;
      local_c0 = 0;
      local_d8 = uVar15;
      FUN_029ea15c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1340),local_b0,&local_d8);
      cVar30 = local_b8[0];
    }
    pcVar26 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    cVar2 = *(char *)(lVar27 + 0x7d);
    if ((*pcVar26 == '\0') || (pcVar26[2] != cVar2)) {
      if ((pcVar26[3] == '\0') || (pcVar26[5] != cVar2)) {
        if ((pcVar26[6] == '\0') || (pcVar26[8] != cVar2)) {
          if ((pcVar26[9] == '\0') || (pcVar26[0xb] != cVar2)) {
            if ((pcVar26[0xc] == '\0') || (pcVar26[0xe] != cVar2)) {
              if ((pcVar26[0xf] == '\0') || (pcVar26[0x11] != cVar2)) {
                uVar18 = 6;
              }
              else {
                uVar18 = 5;
              }
            }
            else {
              uVar18 = 4;
            }
          }
          else {
            uVar18 = 3;
          }
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        uVar18 = 1;
      }
    }
    else {
      uVar18 = 0;
    }
    bVar11 = *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x38);
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x85,uVar18,cVar9,local_b8[2],
                 cVar30,cVar30,local_b8[1],uVar3,bVar11 < 6);
    if (local_b8[0] == '\0') {
      local_d0 = local_d0 & 0xff00;
      local_b0[0] = 0;
      local_d8 = uVar15;
      FUN_029d21c0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a0),local_b0,&local_d8);
    }
    else {
      local_b8[0] = '\x01';
    }
    uVar19 = *(undefined1 *)(uVar15 + 0x7d);
    *(char *)((long)puVar31 + 2) = local_b8[0];
    *(bool *)(puVar31 + 1) = bVar11 < 6;
    *(undefined1 *)puVar31 = uVar19;
    uVar19 = 1;
    *(char *)((long)puVar31 + 1) = cVar9;
    *(char *)((long)puVar31 + 3) = cVar30;
    if (local_b8[0] != '\0') {
      uVar21 = 2;
      goto LAB_029ffb8c;
    }
  }
  else {
    uVar18 = 0;
LAB_029ffb6c:
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x87,cVar9,uVar18,uVar3);
    uVar19 = 0;
  }
  uVar21 = 0;
LAB_029ffb8c:
  *(undefined1 *)((long)param_2 + 1) = uVar19;
  *(undefined1 *)param_2 = uVar21;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
LAB_029ff844:
  sVar4 = (short)param_3[1];
LAB_029ff84c:
  if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  if (sVar4 != 0) {
    FUN_02c4fb44(&local_a8,sVar4);
    FUN_02c4fc60(&local_a8,0x10);
  }
  bVar8 = iVar28 != 6;
  uVar24 = 0x89;
  if (bVar8) {
    uVar24 = 0x8a;
  }
  puVar32 = *(uint **)(param_1 + 0x18);
  iVar13 = 0xf;
  if (bVar8) {
    iVar13 = 3;
  }
  lVar22 = 0x89;
  if (bVar8) {
    lVar22 = 0x8a;
  }
  uVar12 = *puVar32;
  uVar15 = (ulong)uVar12;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_02a3e7b8(puVar32,uVar24,(&DAT_03a80f80)[lVar22],&local_a8);
  iVar14 = (int)(uVar15 & 0xffff);
  uVar12 = *puVar32 - uVar12;
  *(undefined1 *)((long)puVar32 + (uVar15 & 0xffff) + 8) = 0;
  lVar22 = 0;
  *(undefined1 *)((long)puVar32 + (ulong)(iVar14 + 1) + 8) = 0xab;
  *(char *)((long)puVar32 + (ulong)(iVar14 + 2) + 8) = (char)uVar12 + -3;
  bVar8 = false;
  *puVar32 = iVar14 + (uVar12 & 0xff);
  do {
    lVar23 = param_3[1];
    if (((*puVar5 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar5), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar5);
    }
    *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
    if ((short)lVar23 != 0) {
      uVar1 = *(undefined4 *)((long)&DAT_04278b00 + lVar22);
      FUN_02c4fb44(&local_a8,(short)lVar23);
      iVar14 = FUN_02c4fc60(&local_a8,uVar1);
      if ((iVar14 != 0) &&
         (cVar9 = (**(code **)((long)&PTR_FUN_04278b08 + lVar22))
                            (param_1 + (*(long *)((long)&DAT_04278b10 + lVar22) >> 1),lVar27,
                             (short)param_3[1],iVar14,*(undefined1 *)((long)param_3 + 10)),
         cVar9 != '\0')) {
        bVar8 = true;
        switch(uVar1) {
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x4b:
        case 0x4c:
          bVar8 = true;
          iVar13 = 0xa5;
          break;
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
          bVar8 = true;
          iVar13 = 0xa7;
          break;
        case 0x33:
          iVar13 = *(byte *)((long)param_3 + 10) + 0xa0;
          bVar8 = true;
          break;
        case 0x34:
          bVar8 = true;
          iVar13 = 0xa4;
        }
      }
    }
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 600);
  if (bVar8) {
    if (iVar13 != 0xa7) {
      if (iVar28 == 6) {
        FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),uVar15,uVar24,iVar13);
      }
      else {
        FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),uVar15,0x8a);
      }
    }
    *(undefined1 *)((long)param_2 + 1) = 1;
    if (lVar27 != 0) {
      FUN_02948808(*(undefined8 *)(param_1 + 8),lVar27,(short)param_3[1]);
    }
  }
  else {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x233,0xffff0000);
  }
  *(undefined1 *)param_2 = 0;
  return;
}


