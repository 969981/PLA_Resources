/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d61b8; name: FUN_025d61b8
 */


undefined8 FUN_025d61b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  int local_70;
  undefined1 local_6c;
  undefined1 local_64;
  
  uVar10 = FUN_018e0fb4(param_2);
  puVar6 = PTR_DAT_04379678;
  switch(uVar10) {
  case 3:
  case 4:
  case 5:
  case 8:
  case 0xd:
    local_80 = 0;
    local_78 = 4;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar8 = PTR_DAT_04379688;
    puVar7 = PTR_DAT_04379680;
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar11 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar17 = (int)uVar16 + iVar11 & 3;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (uVar17 == 3);
    *puVar15 = uVar16;
    puVar15[1] = uVar19;
    if (uVar17 == 0) {
      local_80 = 0x85ae4a84360dfb4f;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d74f4;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d74f4;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d67bc;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d67bc;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar17 == 1) {
      local_80 = 0x8ef35818aae81936;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d73e0;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d73e0;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6384;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6384;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else {
      local_80 = 0xf2e1d5fdb7eb2afe;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7608;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7608;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d68ec;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8774;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7648;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d68ec;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    break;
  case 6:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
    local_80 = 0;
    local_78 = 4;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar8 = PTR_DAT_04379688;
    puVar7 = PTR_DAT_04379680;
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar11 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar17 = (int)uVar16 + iVar11 & 0xf;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (8 < uVar17);
    *puVar15 = uVar16;
    puVar15[1] = uVar19;
    if (uVar17 == 0) {
      local_80 = 0x85ae4a84360dfb4f;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7b90;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7b90;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6b4c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6b4c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar17 == 1) {
      local_80 = 0x8ef35818aae81936;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7a7c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7a7c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6a1c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6a1c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar17 == 2) {
      local_80 = 0xf2e1d5fdb7eb2afe;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7ca4;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7ca4;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6544;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6544;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else {
      local_80 = 0xeaaa3234ef9be65;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xb3c8f79dcc6024c3;
        pcStack_98 = "buddy_surprise_keep_time";
        local_90 = 0x18;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7db8;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7db8;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xcd8f164141e1b048;
        pcStack_98 = "buddy_talk_surprise_keep_time";
        local_90 = 0x1d;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6c7c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8830;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d7df8;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6c7c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    goto LAB_025d8830;
  case 7:
    local_80 = 0;
    local_78 = 4;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar8 = PTR_DAT_04379688;
    puVar7 = PTR_DAT_04379680;
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar16 = *puVar15;
    uVar19 = puVar15[1] ^ uVar16;
    uVar17 = (int)puVar15[1] + (int)uVar16 & 3;
    *puVar15 = uVar19 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar19 << 0x10;
    puVar15[1] = uVar19 >> 0x1b | uVar19 << 0x25;
    if (uVar17 == 0) {
      local_80 = 0x85ae4a84360dfb4f;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8a6c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8a6c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d854c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d854c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar17 == 1) {
      local_80 = 0x8ef35818aae81936;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8958;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8958;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d841c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d841c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else if (uVar17 == 2) {
      local_80 = 0xf2e1d5fdb7eb2afe;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xf2faf42947126c24;
        pcStack_98 = "buddy_smile_keep_time";
        local_90 = 0x15;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8b80;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8b80;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xe29eff61cf576781;
        pcStack_98 = "buddy_talk_smile_keep_time";
        local_90 = 0x1a;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6e3c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6e3c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    else {
      local_80 = 0xeaaa3234ef9be65;
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        local_a0 = 0xb3c8f79dcc6024c3;
        pcStack_98 = "buddy_surprise_keep_time";
        local_90 = 0x18;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8c94;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8c94;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_a0 = 0xcd8f164141e1b048;
        pcStack_98 = "buddy_talk_surprise_keep_time";
        local_90 = 0x1d;
        local_88 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar16 = *(ulong *)(lVar14 + 0x60);
        if (uVar16 != 0) {
          uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
          }
          else {
            uVar22 = 0xdda9f413319d82e4;
            if (uVar16 < 0xdda9f413319d82e5) {
              uVar22 = 0;
              if (uVar16 != 0) {
                uVar22 = 0xdda9f413319d82e4 / uVar16;
              }
              uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
            }
          }
          plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if (plVar20[1] == 0xdda9f413319d82e4) {
                  if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d867c;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d93cc;
                plVar20 = (long *)*plVar20;
                iVar11 = 0;
              } while (plVar20 != (long *)0x0);
              goto LAB_025d8cd4;
            }
            do {
              uVar19 = plVar20[1];
              if (uVar19 == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d867c;
              }
              else {
                if (uVar16 <= uVar19) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar19 / uVar16;
                  }
                  uVar19 = uVar19 - uVar5 * uVar16;
                }
                if (uVar19 != uVar22) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
    }
    goto LAB_025d93cc;
  case 9:
  case 10:
    local_78 = 4;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    local_80 = FUN_025d3d5c();
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    puVar6 = PTR_DAT_04379660;
    if (*(char *)(param_1 + 0x2ac) == '\0') {
      local_a0 = 0x60da8eaec8eef582;
      pcStack_98 = "buddy_attack_reaction_keep_time";
      local_90 = 0x1f;
      local_88 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      uVar16 = *(ulong *)(lVar14 + 0x60);
      if (uVar16 != 0) {
        uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar22 = 0xdda9f413319d82e4;
          if (uVar16 < 0xdda9f413319d82e5) {
            uVar22 = 0;
            if (uVar16 != 0) {
              uVar22 = 0xdda9f413319d82e4 / uVar16;
            }
            uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
          }
        }
        plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar19 < 2) {
            do {
              if (plVar20[1] == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6f38;
              }
              else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d86dc;
              plVar20 = (long *)*plVar20;
              iVar11 = 0;
            } while (plVar20 != (long *)0x0);
            goto LAB_025d6f78;
          }
          do {
            uVar19 = plVar20[1];
            if (uVar19 == 0xdda9f413319d82e4) {
              if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d6f38;
            }
            else {
              if (uVar16 <= uVar19) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar19 / uVar16;
                }
                uVar19 = uVar19 - uVar5 * uVar16;
              }
              if (uVar19 != uVar22) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    else {
      local_a0 = 0xa7be38d71392d00f;
      pcStack_98 = "buddy_talk_attack_reaction_keep_time";
      local_90 = 0x24;
      local_88 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      uVar16 = *(ulong *)(lVar14 + 0x60);
      if (uVar16 != 0) {
        uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
        }
        else {
          uVar22 = 0xdda9f413319d82e4;
          if (uVar16 < 0xdda9f413319d82e5) {
            uVar22 = 0;
            if (uVar16 != 0) {
              uVar22 = 0xdda9f413319d82e4 / uVar16;
            }
            uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
          }
        }
        plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar19 < 2) {
            do {
              if (plVar20[1] == 0xdda9f413319d82e4) {
                if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d668c;
              }
              else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d86dc;
              plVar20 = (long *)*plVar20;
              iVar11 = 0;
            } while (plVar20 != (long *)0x0);
            goto LAB_025d6f78;
          }
          do {
            uVar19 = plVar20[1];
            if (uVar19 == 0xdda9f413319d82e4) {
              if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d668c;
            }
            else {
              if (uVar16 <= uVar19) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar19 / uVar16;
                }
                uVar19 = uVar19 - uVar5 * uVar16;
              }
              if (uVar19 != uVar22) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_025d86dc;
  default:
    return 0;
  }
  goto LAB_025d8774;
LAB_025d6f38:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d6f74;
  }
LAB_025d86dc:
  iVar11 = 0;
  goto LAB_025d6f78;
LAB_025d668c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d86dc;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar11 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025d6f74:
  if (iVar12 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
LAB_025d6f78:
  local_74 = 1;
  local_70 = iVar11;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    local_a0 = 0x82d3b465ba39a2dd;
    pcStack_98 = "buddy_yuragi_time";
    local_90 = 0x11;
    local_88 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d887c:
      iVar12 = 0;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d887c;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7224;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d887c;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7224;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d887c;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
    }
LAB_025d7264:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    if (iVar12 == 0) {
      uVar17 = 0;
    }
    else {
      puVar15 = *(ulong **)(lVar14 + 0xd8);
      uVar21 = iVar12 + 1;
      if (uVar21 == 0) {
        uVar16 = *puVar15;
        uVar17 = (int)puVar15[1] + (int)uVar16;
        uVar19 = puVar15[1] ^ uVar16;
        *puVar15 = uVar19 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar19 << 0x10;
        puVar15[1] = uVar19 >> 0x1b | uVar19 << 0x25;
      }
      else {
        lVar14 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar21) & 0x1f) & uVar21) != 0) {
          lVar14 = 0x20;
        }
        uVar19 = lVar14 - LZCOUNT(uVar21);
        uVar16 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar16 = uVar16 + 1;
        }
        if (uVar19 < uVar16) {
          uVar18 = 0;
        }
        else {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar19 / uVar16;
          }
          uVar18 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
        }
        uVar16 = *puVar15;
        uVar19 = puVar15[1];
        do {
          uVar22 = uVar16 ^ uVar19;
          iVar12 = (int)uVar19;
          uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
          uVar17 = (int)uVar16 + iVar12 & uVar18;
          uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
        } while (uVar21 <= uVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar19;
      }
    }
  }
  else {
    local_a0 = 0x8b79a712271c631c;
    pcStack_98 = "buddy_talk_yuragi_time";
    local_90 = 0x16;
    local_88 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d8704:
      iVar12 = 0;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d8704;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d705c;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d8704;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d705c;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d8704;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
    }
LAB_025d709c:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    if (iVar12 == 0) {
      uVar17 = 0;
    }
    else {
      puVar15 = *(ulong **)(lVar14 + 0xd8);
      uVar21 = iVar12 + 1;
      if (uVar21 == 0) {
        uVar16 = *puVar15;
        uVar17 = (int)puVar15[1] + (int)uVar16;
        uVar19 = puVar15[1] ^ uVar16;
        *puVar15 = uVar19 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar19 << 0x10;
        puVar15[1] = uVar19 >> 0x1b | uVar19 << 0x25;
      }
      else {
        lVar14 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar21) & 0x1f) & uVar21) != 0) {
          lVar14 = 0x20;
        }
        uVar19 = lVar14 - LZCOUNT(uVar21);
        uVar16 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar16 = uVar16 + 1;
        }
        if (uVar19 < uVar16) {
          uVar18 = 0;
        }
        else {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar19 / uVar16;
          }
          uVar18 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
        }
        uVar16 = *puVar15;
        uVar19 = puVar15[1];
        do {
          uVar22 = uVar16 ^ uVar19;
          iVar12 = (int)uVar19;
          uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
          uVar17 = (int)uVar16 + iVar12 & uVar18;
          uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
        } while (uVar21 <= uVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar19;
      }
    }
  }
  local_70 = uVar17 + iVar11;
  local_74 = 1;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  goto LAB_025d7fec;
LAB_025d7224:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d887c;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_025d7264;
LAB_025d705c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d8704;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_025d709c;
LAB_025d8a6c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d854c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d8958:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d841c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d8b80:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d6e3c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
  goto LAB_025d93cc;
LAB_025d8c94:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d8cd0;
  }
LAB_025d93cc:
  iVar11 = 0;
LAB_025d8cd4:
  local_74 = 1;
  local_70 = iVar11;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    local_a0 = 0x82d3b465ba39a2dd;
    pcStack_98 = "buddy_yuragi_time";
    local_90 = 0x11;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d9244:
      iVar12 = 0;
      bVar2 = *puVar6;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d9244;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8f78;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d9244;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8f78;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d9244;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
LAB_025d8fb8:
      bVar2 = *puVar6;
    }
joined_r0x025d924c:
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    if (iVar12 == 0) goto LAB_025d9040;
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar17 = iVar12 + 1;
    if (uVar17 == 0) goto LAB_025d95c0;
    lVar14 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
      lVar14 = 0x20;
    }
    uVar19 = lVar14 - LZCOUNT(uVar17);
    uVar16 = uVar19 >> 6;
    if ((uVar19 & 0x3f) != 0) {
      uVar16 = uVar16 + 1;
    }
    if (uVar19 < uVar16) {
      uVar21 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar16 != 0) {
        uVar22 = uVar19 / uVar16;
      }
      uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar12 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar18 = (int)uVar16 + iVar12 & uVar21;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (uVar17 <= uVar18);
    goto LAB_025d8260;
  }
  local_a0 = 0x8b79a712271c631c;
  pcStack_98 = "buddy_talk_yuragi_time";
  local_90 = 0x16;
  local_88 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 == 0) {
LAB_025d90b0:
    iVar12 = 0;
    bVar2 = *puVar6;
  }
  else {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar22 = 0xdda9f413319d82e4;
      if (uVar16 < 0xdda9f413319d82e5) {
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = 0xdda9f413319d82e4 / uVar16;
        }
        uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_025d90b0;
    if (1 < uVar19) {
      do {
        uVar19 = plVar20[1];
        if (uVar19 == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8dd0;
        }
        else {
          if (uVar16 <= uVar19) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar19 / uVar16;
            }
            uVar19 = uVar19 - uVar5 * uVar16;
          }
          if (uVar19 != uVar22) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_025d90b0;
    }
    do {
      if (plVar20[1] == 0xdda9f413319d82e4) {
        if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d8dd0;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d90b0;
      plVar20 = (long *)*plVar20;
      iVar12 = 0;
    } while (plVar20 != (long *)0x0);
LAB_025d8e10:
    bVar2 = *puVar6;
  }
joined_r0x025d90b8:
  if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  if (iVar12 != 0) {
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar17 = iVar12 + 1;
    if (uVar17 == 0) goto LAB_025d9520;
    lVar14 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
      lVar14 = 0x20;
    }
    uVar19 = lVar14 - LZCOUNT(uVar17);
    uVar16 = uVar19 >> 6;
    if ((uVar19 & 0x3f) != 0) {
      uVar16 = uVar16 + 1;
    }
    if (uVar19 < uVar16) {
      uVar21 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar16 != 0) {
        uVar22 = uVar19 / uVar16;
      }
      uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar12 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar18 = (int)uVar16 + iVar12 & uVar21;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (uVar17 <= uVar18);
    goto LAB_025d7fb8;
  }
  goto LAB_025d7fc0;
LAB_025d867c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d93cc;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar11 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar9 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025d8cd0:
  if (bVar9) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_025d8cd4;
LAB_025d8f78:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d9244;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d8fb8;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d924c;
LAB_025d8dd0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d90b0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d8e10;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d90b8;
LAB_025d7b90:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d6b4c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d7a7c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d6a1c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d7ca4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d6544:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
  goto LAB_025d8830;
LAB_025d6c7c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d8830;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar11 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar9 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025d7df4:
  if (bVar9) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_025d7df8;
LAB_025d819c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d831c;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d81dc;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d8324;
LAB_025d7ef4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d82bc;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d7f34;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d82c4;
LAB_025d74f4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7644;
  }
  goto LAB_025d8774;
LAB_025d67bc:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7644;
  }
  goto LAB_025d8774;
LAB_025d73e0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7644;
  }
  goto LAB_025d8774;
LAB_025d6384:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7644;
  }
  goto LAB_025d8774;
LAB_025d7608:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7644;
  }
LAB_025d8774:
  iVar11 = 0;
LAB_025d7648:
  local_74 = 1;
  local_70 = iVar11;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    local_a0 = 0x82d3b465ba39a2dd;
    pcStack_98 = "buddy_yuragi_time";
    local_90 = 0x11;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d82ec:
      iVar12 = 0;
      bVar2 = *puVar6;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d82ec;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d78e0;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d82ec;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d78e0;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d82ec;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
LAB_025d7920:
      bVar2 = *puVar6;
    }
joined_r0x025d82f4:
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    if (iVar12 == 0) goto LAB_025d9040;
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar17 = iVar12 + 1;
    if (uVar17 == 0) goto LAB_025d95c0;
    lVar14 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
      lVar14 = 0x20;
    }
    uVar19 = lVar14 - LZCOUNT(uVar17);
    uVar16 = uVar19 >> 6;
    if ((uVar19 & 0x3f) != 0) {
      uVar16 = uVar16 + 1;
    }
    if (uVar19 < uVar16) {
      uVar21 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar16 != 0) {
        uVar22 = uVar19 / uVar16;
      }
      uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar12 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar18 = (int)uVar16 + iVar12 & uVar21;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (uVar17 <= uVar18);
    goto LAB_025d8260;
  }
  local_a0 = 0x8b79a712271c631c;
  pcStack_98 = "buddy_talk_yuragi_time";
  local_90 = 0x16;
  local_88 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 == 0) {
LAB_025d828c:
    iVar12 = 0;
    bVar2 = *puVar6;
  }
  else {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar22 = 0xdda9f413319d82e4;
      if (uVar16 < 0xdda9f413319d82e5) {
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = 0xdda9f413319d82e4 / uVar16;
        }
        uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_025d828c;
    if (1 < uVar19) {
      do {
        uVar19 = plVar20[1];
        if (uVar19 == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7744;
        }
        else {
          if (uVar16 <= uVar19) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar19 / uVar16;
            }
            uVar19 = uVar19 - uVar5 * uVar16;
          }
          if (uVar19 != uVar22) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_025d828c;
    }
    do {
      if (plVar20[1] == 0xdda9f413319d82e4) {
        if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7744;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d828c;
      plVar20 = (long *)*plVar20;
      iVar12 = 0;
    } while (plVar20 != (long *)0x0);
LAB_025d7784:
    bVar2 = *puVar6;
  }
joined_r0x025d8294:
  if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  if (iVar12 != 0) {
    puVar15 = *(ulong **)(lVar14 + 0xd8);
    uVar17 = iVar12 + 1;
    if (uVar17 == 0) goto LAB_025d9520;
    lVar14 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
      lVar14 = 0x20;
    }
    uVar19 = lVar14 - LZCOUNT(uVar17);
    uVar16 = uVar19 >> 6;
    if ((uVar19 & 0x3f) != 0) {
      uVar16 = uVar16 + 1;
    }
    if (uVar19 < uVar16) {
      uVar21 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar16 != 0) {
        uVar22 = uVar19 / uVar16;
      }
      uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar16 = *puVar15;
    uVar19 = puVar15[1];
    do {
      uVar22 = uVar16 ^ uVar19;
      iVar12 = (int)uVar19;
      uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar18 = (int)uVar16 + iVar12 & uVar21;
      uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
    } while (uVar17 <= uVar18);
    goto LAB_025d7fb8;
  }
  goto LAB_025d7fc0;
LAB_025d68ec:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d8774;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar11 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar12 = (int)*plVar1 + -1;
    bVar9 = iVar12 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025d7644:
  if (bVar9) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_025d7648;
LAB_025d78e0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d82ec;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d7920;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d82f4;
LAB_025d7744:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_025d828c;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_025d7784;
  (**(code **)(*plVar20 + 0x10))(plVar20);
  bVar2 = *puVar6;
  goto joined_r0x025d8294;
LAB_025d7db8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar11 = FUN_00d78f50(plVar20,&local_a0);
    do {
      iVar12 = (int)*plVar1 + -1;
      bVar9 = iVar12 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_025d7df4;
  }
LAB_025d8830:
  iVar11 = 0;
LAB_025d7df8:
  local_74 = 1;
  local_70 = iVar11;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    local_a0 = 0x82d3b465ba39a2dd;
    pcStack_98 = "buddy_yuragi_time";
    local_90 = 0x11;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d831c:
      iVar12 = 0;
      bVar2 = *puVar6;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d831c;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d819c;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d831c;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d819c;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d831c;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
LAB_025d81dc:
      bVar2 = *puVar6;
    }
joined_r0x025d8324:
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    if (iVar12 == 0) {
LAB_025d9040:
      uVar18 = 0;
    }
    else {
      puVar15 = *(ulong **)(lVar14 + 0xd8);
      uVar17 = iVar12 + 1;
      if (uVar17 == 0) {
LAB_025d95c0:
        uVar16 = *puVar15;
        uVar18 = (int)puVar15[1] + (int)uVar16;
        uVar19 = puVar15[1] ^ uVar16;
        *puVar15 = uVar19 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar19 << 0x10;
        puVar15[1] = uVar19 >> 0x1b | uVar19 << 0x25;
      }
      else {
        lVar14 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
          lVar14 = 0x20;
        }
        uVar19 = lVar14 - LZCOUNT(uVar17);
        uVar16 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar16 = uVar16 + 1;
        }
        if (uVar19 < uVar16) {
          uVar21 = 0;
        }
        else {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar19 / uVar16;
          }
          uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
        }
        uVar16 = *puVar15;
        uVar19 = puVar15[1];
        do {
          uVar22 = uVar16 ^ uVar19;
          iVar12 = (int)uVar19;
          uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
          uVar18 = (int)uVar16 + iVar12 & uVar21;
          uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
        } while (uVar17 <= uVar18);
LAB_025d8260:
        *puVar15 = uVar16;
        puVar15[1] = uVar19;
      }
    }
    iVar11 = uVar18 + iVar11;
  }
  else {
    local_a0 = 0x8b79a712271c631c;
    pcStack_98 = "buddy_talk_yuragi_time";
    local_90 = 0x16;
    local_88 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    if (uVar16 == 0) {
LAB_025d82bc:
      iVar12 = 0;
      bVar2 = *puVar6;
    }
    else {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar16 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar22 = 0xdda9f413319d82e4;
        if (uVar16 < 0xdda9f413319d82e5) {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = 0xdda9f413319d82e4 / uVar16;
          }
          uVar22 = 0xdda9f413319d82e4 - uVar22 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar14 + 0x58) + uVar22 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_025d82bc;
      if (1 < uVar19) {
        do {
          uVar19 = plVar20[1];
          if (uVar19 == 0xdda9f413319d82e4) {
            if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7ef4;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar5 * uVar16;
            }
            if (uVar19 != uVar22) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_025d82bc;
      }
      do {
        if (plVar20[1] == 0xdda9f413319d82e4) {
          if (plVar20[2] == -0x22560becce627d1c) goto LAB_025d7ef4;
        }
        else if ((plVar20[1] & uVar16 - 1) != uVar22) goto LAB_025d82bc;
        plVar20 = (long *)*plVar20;
        iVar12 = 0;
      } while (plVar20 != (long *)0x0);
LAB_025d7f34:
      bVar2 = *puVar6;
    }
joined_r0x025d82c4:
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    if (iVar12 != 0) {
      puVar15 = *(ulong **)(lVar14 + 0xd8);
      uVar17 = iVar12 + 1;
      if (uVar17 == 0) {
LAB_025d9520:
        uVar16 = *puVar15;
        uVar19 = puVar15[1];
        uVar22 = uVar19 ^ uVar16;
        *puVar15 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
        puVar15[1] = uVar22 >> 0x1b | uVar22 << 0x25;
        iVar11 = (int)uVar19 + (int)uVar16 + iVar11;
      }
      else {
        lVar14 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & uVar17) != 0) {
          lVar14 = 0x20;
        }
        uVar19 = lVar14 - LZCOUNT(uVar17);
        uVar16 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar16 = uVar16 + 1;
        }
        if (uVar19 < uVar16) {
          uVar21 = 0;
        }
        else {
          uVar22 = 0;
          if (uVar16 != 0) {
            uVar22 = uVar19 / uVar16;
          }
          uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
        }
        uVar16 = *puVar15;
        uVar19 = puVar15[1];
        do {
          uVar22 = uVar16 ^ uVar19;
          iVar12 = (int)uVar19;
          uVar19 = uVar22 >> 0x1b | uVar22 << 0x25;
          uVar18 = (int)uVar16 + iVar12 & uVar21;
          uVar16 = uVar22 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar22 << 0x10;
        } while (uVar17 <= uVar18);
LAB_025d7fb8:
        *puVar15 = uVar16;
        puVar15[1] = uVar19;
        iVar11 = uVar18 + iVar11;
      }
    }
  }
LAB_025d7fc0:
  local_74 = 1;
  local_70 = iVar11;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_64 = 1;
LAB_025d7fec:
  local_78 = 3;
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    local_78 = 1;
  }
  FUN_025d35b8(param_1);
  FUN_018e0f74(param_2,3);
  FUN_018e0f74(param_2,4);
  FUN_018e0f74(param_2,5);
  FUN_018e0f74(param_2,6);
  FUN_018e0f74(param_2,7);
  FUN_018e0f74(param_2,9);
  FUN_018e0f74(param_2,10);
  FUN_018e0f74(param_2,0xc);
  FUN_018e0f74(param_2,0xb);
  FUN_018e0f74(param_2,8);
  FUN_018e0f74(param_2,0xd);
  FUN_018e0f74(param_2,0xe);
  FUN_018e0f74(param_2,0xf);
  return 1;
}


