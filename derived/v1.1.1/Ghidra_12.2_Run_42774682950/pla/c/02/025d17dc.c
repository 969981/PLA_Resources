/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d17dc; name: FUN_025d17dc
 */


void FUN_025d17dc(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  bool bVar23;
  long *local_c8;
  long *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  uint5 local_70;
  undefined3 uStack_6b;
  long *local_68;
  
  if ((*(byte *)(param_1 + 0x250) & 3) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x240) == 0) {
    local_a0 = (long *)0x0;
  }
  else {
    FUN_0131ff2c(&local_a0);
    if (local_a0 != (long *)0x0) {
      bVar12 = FUN_01e80e78();
      bVar5 = bVar12 & 1;
      if (((bVar12 & 1) == 0) && (*(char *)(param_1 + 0x2a0) != '\0')) {
        local_80 = (long *)0xb11b23b3b4a1533f;
        local_78 = "vigilance_end_delay_frame";
        _local_70 = 0x19;
        local_68 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar16 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar16;
        uVar17 = *(ulong *)(lVar16 + 0x60);
        if (uVar17 != 0) {
          uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
          }
          else if (uVar17 < 0xdda9f413319d82e5) {
            uVar21 = 0;
            if (uVar17 != 0) {
              uVar21 = 0xdda9f413319d82e4 / uVar17;
            }
            uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
          }
          else {
            uVar21 = 0xdda9f413319d82e4;
          }
          plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
          if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
            if (uVar20 < 2) {
              do {
                if (plVar22[1] == 0xdda9f413319d82e4) {
                  if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d24c0;
                }
                else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d2564;
                plVar22 = (long *)*plVar22;
                uVar14 = 0;
              } while (plVar22 != (long *)0x0);
              goto LAB_025d2500;
            }
            do {
              uVar20 = plVar22[1];
              if (uVar20 == 0xdda9f413319d82e4) {
                if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d24c0;
              }
              else {
                if (uVar17 <= uVar20) {
                  uVar8 = 0;
                  if (uVar17 != 0) {
                    uVar8 = uVar20 / uVar17;
                  }
                  uVar20 = uVar20 - uVar8 * uVar17;
                }
                if (uVar20 != uVar21) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
        goto LAB_025d2564;
      }
      goto LAB_025d1be0;
    }
  }
LAB_025d1818:
  iVar13 = *(int *)(param_1 + 0x2a4) + -1;
  if ((0 < *(int *)(param_1 + 0x2a4)) && (*(int *)(param_1 + 0x2a4) = iVar13, iVar13 == 0)) {
    local_78._4_4_ = (uint)((ulong)local_78 >> 0x20) & 0xffffff00;
    local_78 = (char *)CONCAT44(local_78._4_4_,4);
    local_a0 = (long *)0xdda9f413319d82e4;
    pcStack_98 = "player_face";
    local_70 = (uint5)(uint)local_70;
    local_90 = 0xb;
    local_88 = (long *)0x0;
    local_c0 = (long *)0xbe9bee5b84046a4d;
    pcStack_b8 = "face_vigilance_end";
    local_68._0_5_ = (uint5)(uint)local_68;
    local_b0 = 0x12;
    local_a8 = (long *)0x0;
    local_80 = (long *)FUN_00ea3260(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = (long *)0x65d120885c2f6515;
    pcStack_98 = "vigilance_end_keep_frame";
    local_90 = 0x18;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar17 = *(ulong *)(lVar16 + 0x60);
    if (uVar17 == 0) {
LAB_025d1b9c:
      uVar14 = 0;
    }
    else {
      uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
      }
      else if (uVar17 < 0xdda9f413319d82e5) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = 0xdda9f413319d82e4 / uVar17;
        }
        uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
      }
      else {
        uVar21 = 0xdda9f413319d82e4;
      }
      plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
      if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
      goto LAB_025d1b9c;
      if (1 < uVar20) {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == 0xdda9f413319d82e4) {
            if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d1b04;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar8 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        goto LAB_025d1b9c;
      }
      do {
        if (plVar22[1] == 0xdda9f413319d82e4) {
          if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d1b04;
        }
        else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d1b9c;
        plVar22 = (long *)*plVar22;
        uVar14 = 0;
      } while (plVar22 != (long *)0x0);
    }
LAB_025d1b44:
    _local_70 = CONCAT44(stack0xffffffffffffff94,uVar14);
    local_78._0_5_ = CONCAT14(1,(undefined4)local_78);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
    FUN_025d35b8(param_1,&local_80);
  }
  pcVar1 = (char *)(param_1 + 600);
  if ((*(char *)(param_1 + 600) == '\0') ||
     (iVar13 = *(int *)(param_1 + 0x280), iVar15 = iVar13 + -1, *(int *)(param_1 + 0x280) = iVar15,
     iVar15 != 0 && 0 < iVar13)) {
    lVar16 = *(long *)(param_1 + 0x1f0);
  }
  else {
    *pcVar1 = '\0';
    lVar16 = *(long *)(param_1 + 0x1f0);
  }
  if (lVar16 == 0) {
    return;
  }
  FUN_009cf990(&local_c8);
  if (local_c8 == (long *)0x0) {
    return;
  }
  pcVar2 = (char *)(param_1 + 0x288);
  if (*(char *)(param_1 + 0x288) != '\0') {
    *pcVar2 = '\0';
    if (*(char *)(param_1 + 0x2ac) == '\0') goto LAB_025d18a0;
LAB_025d230c:
    if ((*pcVar1 != '\0') && (*(int *)(param_1 + 0x268) == 3)) {
LAB_025d2320:
      if (*(int *)(param_1 + 0x268) == 3) goto LAB_025d1c44;
      goto LAB_025d1930;
    }
    local_78 = (char *)((ulong)local_78._5_3_ << 0x28);
    local_78 = (char *)CONCAT44(local_78._4_4_,3);
    local_a0 = (long *)0xdda9f413319d82e4;
    pcStack_98 = "player_face";
    local_70 = (uint5)(uint)local_70;
    local_90 = 0xb;
    local_88 = (long *)0x0;
    local_c0 = (long *)0xc4fcf2e24c4de1b6;
    pcStack_b8 = "face_buddy_talk";
    local_68._0_5_ = (uint5)(uint)local_68;
    local_b0 = 0xf;
    local_a8 = (long *)0x0;
    local_80 = (long *)FUN_00ea3260(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = (long *)0x841942aaaa1c110a;
    pcStack_98 = "buddy_talk_end_defalut_keep_frame";
    local_90 = 0x21;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar17 = *(ulong *)(lVar16 + 0x60);
    if (uVar17 == 0) {
LAB_025d2aa0:
      uVar14 = 0;
    }
    else {
      uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
      }
      else if (uVar17 < 0xdda9f413319d82e5) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = 0xdda9f413319d82e4 / uVar17;
        }
        uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
      }
      else {
        uVar21 = 0xdda9f413319d82e4;
      }
      plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
      if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
      goto LAB_025d2aa0;
      if (1 < uVar20) {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == 0xdda9f413319d82e4) {
            if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d2920;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar8 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        goto LAB_025d2aa0;
      }
      do {
        if (plVar22[1] == 0xdda9f413319d82e4) {
          if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d2920;
        }
        else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d2aa0;
        plVar22 = (long *)*plVar22;
        uVar14 = 0;
      } while (plVar22 != (long *)0x0);
    }
LAB_025d2960:
    _local_70 = CONCAT44(stack0xffffffffffffff94,uVar14);
    local_78._0_5_ = CONCAT14(1,(undefined4)local_78);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    FUN_025d35b8(param_1,&local_80);
    if (*(char *)(param_1 + 0x288) != '\0') goto LAB_025d1d04;
    if (*pcVar1 != '\0') goto LAB_025d2320;
    goto LAB_025d1938;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') goto LAB_025d230c;
LAB_025d18a0:
  if ((*(char *)(param_1 + 0x2ad) != '\0') &&
     ((*pcVar1 == '\0' || (*(int *)(param_1 + 0x268) != 1)))) {
    local_78 = (char *)((ulong)local_78._5_3_ << 0x28);
    local_78 = (char *)CONCAT44(local_78._4_4_,1);
    local_a0 = (long *)0xdda9f413319d82e4;
    pcStack_98 = "player_face";
    local_70 = (uint5)(uint)local_70;
    local_90 = 0xb;
    local_88 = (long *)0x0;
    local_c0 = (long *)0x374a30a23880600f;
    pcStack_b8 = "face_look_player_mode_buddy";
    local_68._0_5_ = (uint5)(uint)local_68;
    local_b0 = 0x1b;
    local_a8 = (long *)0x0;
    local_80 = (long *)FUN_00ea3260(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = (long *)0x82c7e4714d529a8f;
    pcStack_98 = "look_player_mode_buddy_keep_frame";
    local_90 = 0x21;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar17 = *(ulong *)(lVar16 + 0x60);
    if (uVar17 == 0) {
LAB_025d2a78:
      uVar14 = 0;
    }
    else {
      uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
      }
      else if (uVar17 < 0xdda9f413319d82e5) {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = 0xdda9f413319d82e4 / uVar17;
        }
        uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
      }
      else {
        uVar21 = 0xdda9f413319d82e4;
      }
      plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
      if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
      goto LAB_025d2a78;
      if (1 < uVar20) {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == 0xdda9f413319d82e4) {
            if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d26ec;
          }
          else {
            if (uVar17 <= uVar20) {
              uVar8 = 0;
              if (uVar17 != 0) {
                uVar8 = uVar20 / uVar17;
              }
              uVar20 = uVar20 - uVar8 * uVar17;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        goto LAB_025d2a78;
      }
      do {
        if (plVar22[1] == 0xdda9f413319d82e4) {
          if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d26ec;
        }
        else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d2a78;
        plVar22 = (long *)*plVar22;
        uVar14 = 0;
      } while (plVar22 != (long *)0x0);
    }
LAB_025d272c:
    _local_70 = CONCAT44(stack0xffffffffffffff94,uVar14);
    local_78._0_5_ = CONCAT14(1,(undefined4)local_78);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    FUN_025d35b8(param_1,&local_80);
    if (*(char *)(param_1 + 0x288) == '\0') goto LAB_025d18a8;
    goto LAB_025d1d04;
  }
LAB_025d18a8:
  if ((*pcVar1 != '\0') && (*(int *)(param_1 + 0x268) == 0)) goto LAB_025d1c44;
  if (*(long *)(param_1 + 0x200) == 0) {
    local_c0 = (long *)0x0;
    goto LAB_025d18bc;
  }
  FUN_0095dd00(&local_c0);
  if (local_c0 == (long *)0x0) goto LAB_025d18bc;
  uVar17 = FUN_025fe5e0();
  if ((uVar17 & 0xff) == 0) goto LAB_025d29c0;
  iVar13 = (int)(uVar17 >> 0x20);
  if (iVar13 == 2) {
    local_a0 = (long *)0x5c4ae4998e8794fd;
    pcStack_98 = "face_bad_status_confuse";
    local_90 = 0x17;
    goto LAB_025d2e5c;
  }
  puVar19 = &DAT_cbf29ce484222645;
  switch(iVar13) {
  case 0:
  case 1:
  case 8:
    local_a0 = (long *)0x15ba0c5e8949ea2a;
    pcStack_98 = "face_default";
    local_90 = 0xc;
    break;
  default:
    goto switchD_025d2fd8_caseD_2;
  case 3:
    local_a0 = (long *)0xd0a543161a801650;
    pcStack_98 = "face_bad_status_fire";
    local_90 = 0x14;
    break;
  case 4:
    local_a0 = (long *)0x52ecd09150eab7b3;
    pcStack_98 = "face_bad_status_ice";
    local_90 = 0x13;
    break;
  case 5:
    local_a0 = (long *)0x5d9ad8d13f7d08c2;
    pcStack_98 = "face_bad_status_paralysis";
    local_90 = 0x19;
    break;
  case 6:
    pcStack_98 = "face_bad_status_poison";
    local_a0 = (long *)0x5add1f74cafb6f0c;
    goto LAB_025d30a8;
  case 7:
    pcStack_98 = "face_bad_status_sleepy";
    local_a0 = (long *)0xdabde8ee8c61bfd2;
LAB_025d30a8:
    local_90 = 0x16;
  }
LAB_025d2e5c:
  local_68 = (long *)0x0;
  _local_70 = 0xb;
  local_78 = "player_face";
  local_80 = (long *)0xdda9f413319d82e4;
  local_88 = (long *)0x0;
  puVar19 = (undefined1 *)FUN_00ea3260(&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
switchD_025d2fd8_caseD_2:
  if (*pcVar2 == '\0') {
    *(undefined1 **)(param_1 + 0x290) = puVar19;
    *(undefined1 *)(param_1 + 0x288) = 1;
    if (*pcVar1 != '\0') goto LAB_025d2eb8;
LAB_025d29c0:
    if (local_c0 != (long *)0x0) goto LAB_025d29c8;
LAB_025d18bc:
    if (*pcVar2 != '\0') goto LAB_025d1d04;
LAB_025d18c4:
    puVar11 = PTR_DAT_04379e70;
    puVar10 = PTR_DAT_04379e68;
    puVar9 = PTR_DAT_043795e0;
    lVar16 = *(long *)(param_1 + 0x210);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
      piVar3 = (int *)(lVar16 + 0xc);
      iVar13 = *(int *)(lVar16 + 0xc);
      do {
        plVar22 = *(long **)(lVar16 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar22 == (long *)0x0) goto LAB_025d18cc;
          if (plVar22 == (long *)puVar11) break;
          plVar22 = (long *)*plVar22;
        }
        iVar15 = *piVar3;
        if (iVar15 == iVar13) {
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = iVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_025d3338;
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            plVar22 = (long *)(lVar16 + -0x50);
            iVar13 = FUN_025e91d0(plVar22);
            if (iVar13 == 1) {
              local_a0 = (long *)0x9d34f0ccc58a78f1;
              pcStack_98 = "face_pinch_hard";
              local_90 = 0xf;
LAB_025d342c:
              local_68 = (long *)0x0;
              _local_70 = 0xb;
              local_78 = "player_face";
              local_80 = (long *)0xdda9f413319d82e4;
              local_88 = (long *)0x0;
              uVar18 = FUN_00ea3260(&local_80,&local_a0);
              if (*pcVar2 == '\0') {
                *(undefined8 *)(param_1 + 0x290) = uVar18;
                *(undefined1 *)(param_1 + 0x288) = 1;
              }
              else {
                *(undefined8 *)(param_1 + 0x290) = uVar18;
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              if (*pcVar1 != '\0') {
                *pcVar1 = '\0';
              }
            }
            else {
              if (iVar13 == 2) {
                local_a0 = (long *)0xb8e846747e844904;
                pcStack_98 = "face_pinch_very_hard";
LAB_025d34d4:
                local_90 = 0x14;
                goto LAB_025d342c;
              }
              if (iVar13 == 3) {
                local_a0 = (long *)0xe7825986b7b75039;
                pcStack_98 = "face_pinch_game_over";
                goto LAB_025d34d4;
              }
            }
            lVar16 = *(long *)(lVar16 + 8);
            piVar3 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar3;
              cVar6 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar23) {
                *piVar3 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 != 0) break;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
            if (*pcVar2 == '\0') goto LAB_025d18d4;
            goto LAB_025d1d04;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_025d3338:
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
LAB_025d18cc:
    if (*pcVar2 != '\0') goto LAB_025d1d04;
LAB_025d18d4:
    if ((*pcVar1 != '\0') &&
       ((((iVar13 = *(int *)(param_1 + 0x268), iVar13 == 1 || (iVar13 == 4)) || (iVar13 == 2)) ||
        (iVar13 == 3)))) {
LAB_025d1c44:
      bVar23 = true;
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x288) = 1;
      goto LAB_025d1d08;
    }
    if (*(long *)(param_1 + 0x220) == 0) {
      local_c0 = (long *)0x0;
LAB_025d18e8:
      cVar6 = *pcVar2;
    }
    else {
      FUN_0095dafc(&local_c0);
      if (local_c0 == (long *)0x0) goto LAB_025d18e8;
      uVar17 = FUN_01b0f5ac();
      if ((uVar17 & 1) != 0) {
        local_80 = (long *)0xdda9f413319d82e4;
        local_78 = "player_face";
        _local_70 = 0xb;
        local_68 = (long *)0x0;
        local_a0 = (long *)0x4b6e03018ab6b151;
        pcStack_98 = "face_hide";
        local_90 = 9;
        local_88 = (long *)0x0;
        uVar18 = FUN_00ea3260(&local_80,&local_a0);
        if (*pcVar2 == '\0') {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
          *(undefined1 *)(param_1 + 0x288) = 1;
        }
        else {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (*pcVar1 != '\0') {
          *pcVar1 = '\0';
        }
      }
      if (local_c0 == (long *)0x0) goto LAB_025d18e8;
      lVar16 = local_c0[0xb];
      piVar3 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 != 0) goto LAB_025d18e8;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
      cVar6 = *pcVar2;
    }
    if (cVar6 != '\0') goto LAB_025d1d04;
    if (*(long *)(param_1 + 0x220) == 0) {
      local_c0 = (long *)0x0;
LAB_025d18fc:
      cVar6 = *pcVar2;
    }
    else {
      FUN_0095dafc(&local_c0);
      if (local_c0 == (long *)0x0) goto LAB_025d18fc;
      iVar13 = FUN_01a9af88();
      if ((iVar13 == 1) && (iVar13 = FUN_01a81e54(local_c0), iVar13 - 1U < 3)) {
        local_80 = (long *)0xdda9f413319d82e4;
        local_78 = "player_face";
        _local_70 = 0xb;
        local_68 = (long *)0x0;
        local_a0 = (long *)0x5486116978751dd4;
        pcStack_98 = "face_move_dirt_hard";
        local_90 = 0x13;
        local_88 = (long *)0x0;
        uVar18 = FUN_00ea3260(&local_80,&local_a0);
        if (*pcVar2 == '\0') {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
          *(undefined1 *)(param_1 + 0x288) = 1;
        }
        else {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (*pcVar1 != '\0') {
          *pcVar1 = '\0';
        }
      }
      if (local_c0 == (long *)0x0) goto LAB_025d18fc;
      lVar16 = local_c0[0xb];
      piVar3 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 != 0) goto LAB_025d18fc;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
      cVar6 = *pcVar2;
    }
    if (cVar6 != '\0') goto LAB_025d1d04;
    if (*(long *)(param_1 + 0x240) == 0) {
      local_c0 = (long *)0x0;
LAB_025d1910:
      cVar6 = *pcVar2;
    }
    else {
      FUN_0131ff2c(&local_c0);
      if (local_c0 == (long *)0x0) goto LAB_025d1910;
      uVar17 = FUN_01e80e78();
      if ((uVar17 & 1) != 0) {
        local_80 = (long *)0xdda9f413319d82e4;
        local_78 = "player_face";
        _local_70 = 0xb;
        local_68 = (long *)0x0;
        local_a0 = (long *)0xaf94576f7b1dd5a7;
        pcStack_98 = "face_vigilance";
        local_90 = 0xe;
        local_88 = (long *)0x0;
        uVar18 = FUN_00ea3260(&local_80,&local_a0);
        if (*pcVar2 == '\0') {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
          *(undefined1 *)(param_1 + 0x288) = 1;
        }
        else {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (*pcVar1 != '\0') {
          *pcVar1 = '\0';
        }
      }
      if (local_c0 == (long *)0x0) goto LAB_025d1910;
      lVar16 = local_c0[0xb];
      piVar3 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 != 0) goto LAB_025d1910;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
      cVar6 = *pcVar2;
    }
    if (cVar6 != '\0') goto LAB_025d1d04;
    uVar17 = FUN_01bed59c(local_c8);
    if (((uVar17 & 1) == 0) || (uVar17 = FUN_01bed5a8(local_c8), (uVar17 & 1) == 0)) {
LAB_025d1930:
      cVar6 = *pcVar2;
    }
    else {
      local_80 = (long *)0xdda9f413319d82e4;
      local_78 = "player_face";
      _local_70 = 0xb;
      local_68 = (long *)0x0;
      local_a0 = (long *)0xdde31cdf788e100;
      pcStack_98 = "face_town_relax";
      local_90 = 0xf;
      local_88 = (long *)0x0;
      uVar18 = FUN_00ea3260(&local_80,&local_a0);
      if (*pcVar2 == '\0') {
        *(undefined8 *)(param_1 + 0x290) = uVar18;
        *(undefined1 *)(param_1 + 0x288) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x290) = uVar18;
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (*pcVar1 == '\0') goto LAB_025d1930;
      *pcVar1 = '\0';
      cVar6 = *pcVar2;
    }
    if (cVar6 != '\0') goto LAB_025d1d04;
LAB_025d1938:
    bVar23 = false;
    *(undefined4 *)(param_1 + 0x298) = 0;
    if (*pcVar2 == '\0') goto LAB_025d1948;
LAB_025d1d4c:
    piVar3 = (int *)(param_1 + 0x29c);
    if ((*(long *)(param_1 + 0x290) == -0x710ca7e75517e6ca) ||
       (*(long *)(param_1 + 0x290) == -0xd1e2a024814d502)) {
      *piVar3 = *piVar3 + 1;
      local_80 = (long *)0xf4dc2ca971fa2924;
      local_78 = "rejoice_keep_frame";
      _local_70 = 0x12;
      local_68 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar16 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar16;
      uVar17 = *(ulong *)(lVar16 + 0x60);
      if (uVar17 == 0) {
LAB_025d2264:
        iVar13 = 0;
      }
      else {
        uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar21 = 0xdda9f413319d82e4;
          if (uVar17 < 0xdda9f413319d82e5) {
            uVar21 = 0;
            if (uVar17 != 0) {
              uVar21 = 0xdda9f413319d82e4 / uVar17;
            }
            uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
        if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
        goto LAB_025d2264;
        if (1 < uVar20) {
          do {
            uVar20 = plVar22[1];
            if (uVar20 == 0xdda9f413319d82e4) {
              if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d1ef0;
            }
            else {
              if (uVar17 <= uVar20) {
                uVar8 = 0;
                if (uVar17 != 0) {
                  uVar8 = uVar20 / uVar17;
                }
                uVar20 = uVar20 - uVar8 * uVar17;
              }
              if (uVar20 != uVar21) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
          goto LAB_025d2264;
        }
        do {
          if (plVar22[1] == 0xdda9f413319d82e4) {
            if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d1ef0;
          }
          else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d2264;
          plVar22 = (long *)*plVar22;
          iVar13 = 0;
        } while (plVar22 != (long *)0x0);
      }
joined_r0x025d2354:
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (iVar13 <= *piVar3) {
        *(int *)(param_1 + 0x29c) = iVar13;
        if (*(long *)(param_1 + 0x290) == -0x710ca7e75517e6ca) {
          local_a0 = (long *)0x3666aa2162289508;
          pcStack_98 = "rejoice_end_to_face";
          local_90 = 0x13;
        }
        else {
          local_a0 = (long *)0xf78959e1adac09e0;
          pcStack_98 = "laugh_end_to_face";
          local_90 = 0x11;
        }
        local_68 = (long *)0x0;
        _local_70 = 0xb;
        local_78 = "player_face";
        local_80 = (long *)0xdda9f413319d82e4;
        local_88 = (long *)0x0;
        uVar18 = FUN_00ea3260(&local_80,&local_a0);
        if (*pcVar2 == '\0') {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
          *(undefined1 *)(param_1 + 0x288) = 1;
        }
        else {
          *(undefined8 *)(param_1 + 0x290) = uVar18;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    else {
      *piVar3 = 0;
    }
    if (*pcVar2 == '\0') goto LAB_025d1950;
    local_80 = *(long **)(param_1 + 0x290);
    if ((local_80 == (long *)0xbd03ab58925661be) || (local_80 == (long *)0xeaaa3234ef9be65)) {
      local_80 = (long *)0xa81ab4533b22e8fa;
    }
    FUN_01baf6e4(local_c8,&local_80);
    if ((bVar23) && (*pcVar1 != '\0')) {
      if ((*(char *)(param_1 + 0x274) == '\0') || (*(int *)(param_1 + 0x278) < 1)) {
        bVar23 = false;
        cVar6 = *(char *)(param_1 + 0x27c);
      }
      else {
        if (*(char *)(param_1 + 0x284) != '\0') {
          FUN_01baf9d4(local_c8);
        }
        bVar23 = true;
        cVar6 = *(char *)(param_1 + 0x27c);
      }
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x284) != '\0')) {
        if (*(long *)(param_1 + 0x220) == 0) {
          local_80 = (long *)0x0;
        }
        else {
          FUN_0095dafc(&local_80);
          if ((local_80 != (long *)0x0) && (FUN_01b1fb5c(), local_80 != (long *)0x0)) {
            lVar16 = local_80[0xb];
            piVar3 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x284) = 0;
      if (bVar23) goto LAB_025d195c;
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x290) = puVar19;
    if (*pcVar1 == '\0') goto LAB_025d29c0;
LAB_025d2eb8:
    *pcVar1 = '\0';
    if (local_c0 == (long *)0x0) goto LAB_025d18bc;
LAB_025d29c8:
    lVar16 = local_c0[0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar23) {
        *piVar3 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 != 0) goto LAB_025d18bc;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_c0 + 0x20))();
    if (*pcVar2 == '\0') goto LAB_025d18c4;
LAB_025d1d04:
    bVar23 = false;
LAB_025d1d08:
    piVar3 = (int *)(param_1 + 0x298);
    if ((*(long *)(param_1 + 0x290) == 0xeaaa3234ef9be65) ||
       (*(long *)(param_1 + 0x290) == -0x42fc54a76da99e42)) {
      *piVar3 = *piVar3 + 1;
      local_80 = (long *)0x63df7881fbe790f8;
      local_78 = "surprise_keep_frame";
      _local_70 = 0x13;
      local_68 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar16 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar16;
      uVar17 = *(ulong *)(lVar16 + 0x60);
      if (uVar17 == 0) {
LAB_025d22f0:
        iVar13 = 0;
      }
      else {
        uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar21 = uVar17 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar21 = 0xdda9f413319d82e4;
          if (uVar17 < 0xdda9f413319d82e5) {
            uVar21 = 0;
            if (uVar17 != 0) {
              uVar21 = 0xdda9f413319d82e4 / uVar17;
            }
            uVar21 = 0xdda9f413319d82e4 - uVar21 * uVar17;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
        if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
        goto LAB_025d22f0;
        if (1 < uVar20) {
          do {
            uVar20 = plVar22[1];
            if (uVar20 == 0xdda9f413319d82e4) {
              if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d2108;
            }
            else {
              if (uVar17 <= uVar20) {
                uVar8 = 0;
                if (uVar17 != 0) {
                  uVar8 = uVar20 / uVar17;
                }
                uVar20 = uVar20 - uVar8 * uVar17;
              }
              if (uVar20 != uVar21) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
          goto LAB_025d22f0;
        }
        do {
          if (plVar22[1] == 0xdda9f413319d82e4) {
            if (plVar22[2] == -0x22560becce627d1c) goto LAB_025d2108;
          }
          else if ((plVar22[1] & uVar17 - 1) != uVar21) goto LAB_025d22f0;
          plVar22 = (long *)*plVar22;
          iVar13 = 0;
        } while (plVar22 != (long *)0x0);
      }
joined_r0x025d2370:
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (*piVar3 < iVar13) goto LAB_025d1d44;
      *(int *)(param_1 + 0x298) = iVar13;
      if (*(long *)(param_1 + 0x290) == 0xeaaa3234ef9be65) {
        local_a0 = (long *)0x625b9f9e5801db67;
        pcStack_98 = "happy_surprise_end_to_face";
        local_90 = 0x1a;
      }
      else {
        local_a0 = (long *)0x98b437c0fe262fa0;
        pcStack_98 = "unhappy_surprise_end_to_face";
        local_90 = 0x1c;
      }
      local_68 = (long *)0x0;
      _local_70 = 0xb;
      local_78 = "player_face";
      local_80 = (long *)0xdda9f413319d82e4;
      local_88 = (long *)0x0;
      uVar18 = FUN_00ea3260(&local_80,&local_a0);
      if (*pcVar2 == '\0') {
        *(undefined8 *)(param_1 + 0x290) = uVar18;
        *(undefined1 *)(param_1 + 0x288) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x290) = uVar18;
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_68 == (long *)0x0) goto LAB_025d1d44;
      (**(code **)(*local_68 + 0x20))();
      cVar6 = *pcVar2;
    }
    else {
      *piVar3 = 0;
LAB_025d1d44:
      cVar6 = *pcVar2;
    }
    if (cVar6 != '\0') goto LAB_025d1d4c;
LAB_025d1948:
    *(undefined4 *)(param_1 + 0x29c) = 0;
LAB_025d1950:
    FUN_01bae7c0(local_c8);
  }
  FUN_01bafab4(local_c8);
LAB_025d195c:
  if (local_c8 != (long *)0x0) {
    lVar16 = local_c8[0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar23) {
        *piVar3 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  return;
LAB_025d24c0:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) {
LAB_025d2564:
    uVar14 = 0;
  }
  else {
    plVar4 = plVar22 + 10;
    do {
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar23) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar14 = FUN_00d78f50(plVar22,&local_80);
    do {
      iVar13 = (int)*plVar4 + -1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar23) {
        *(int *)plVar4 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
LAB_025d2500:
  *(undefined4 *)(param_1 + 0x2a4) = uVar14;
  if (local_68 == (long *)0x0) {
LAB_025d1be0:
    *(byte *)(param_1 + 0x2a0) = bVar5;
  }
  else {
    (**(code **)(*local_68 + 0x20))();
    *(byte *)(param_1 + 0x2a0) = bVar5;
  }
  if (bVar5 != 0) {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  if (local_a0 != (long *)0x0) {
    lVar16 = local_a0[0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar3;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar23) {
        *piVar3 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  goto LAB_025d1818;
LAB_025d1b04:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025d1b9c;
  plVar4 = plVar22 + 10;
  do {
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar14 = FUN_00d78f50(plVar22,&local_a0);
  do {
    iVar13 = (int)*plVar4 + -1;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = iVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  goto LAB_025d1b44;
LAB_025d2920:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025d2aa0;
  plVar4 = plVar22 + 10;
  do {
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar14 = FUN_00d78f50(plVar22,&local_a0);
  do {
    iVar13 = (int)*plVar4 + -1;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = iVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  goto LAB_025d2960;
LAB_025d26ec:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025d2a78;
  plVar4 = plVar22 + 10;
  do {
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar14 = FUN_00d78f50(plVar22,&local_a0);
  do {
    iVar13 = (int)*plVar4 + -1;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar23) {
      *(int *)plVar4 = iVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  goto LAB_025d272c;
LAB_025d2108:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025d22f0;
  plVar4 = plVar22 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  iVar13 = FUN_00d78f50(plVar22,&local_80);
  do {
    iVar15 = (int)*plVar4 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *(int *)plVar4 = iVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  goto joined_r0x025d2370;
LAB_025d1ef0:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025d2264;
  plVar4 = plVar22 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  iVar13 = FUN_00d78f50(plVar22,&local_80);
  do {
    iVar15 = (int)*plVar4 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *(int *)plVar4 = iVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  goto joined_r0x025d2354;
}


