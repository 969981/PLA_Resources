/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e5c00; name: FUN_002e5c00
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_002e5c00(undefined8 param_1,code *param_2,char *param_3,long param_4,long param_5,
                 ulong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined8 local_4a0;
  code *pcStack_498;
  long local_490;
  undefined1 *local_488;
  undefined1 auStack_480 [1024];
  uint local_80;
  undefined8 local_7c;
  ushort local_74;
  byte local_72;
  int local_6c;
  uint local_68;
  uint local_64;
  
  puVar3 = PTR_DAT_043737f0;
  local_490 = 0;
  local_4a0 = param_1;
  pcStack_498 = param_2;
  local_488 = auStack_480;
  if (param_4 == -1) {
    pcVar11 = *(char **)(param_3 + 0x10);
    pcVar13 = *(char **)(param_3 + 0x18);
    if (pcVar11 != pcVar13) {
      pvVar12 = *(void **)(param_3 + 8);
      puVar10 = (undefined1 *)0x0;
      pvVar5 = pvVar12;
      do {
        pvVar5 = (void *)((long)pvVar5 + (long)puVar10);
        puVar10 = (undefined1 *)((long)pvVar12 + (*(long *)(pcVar11 + 8) - (long)pvVar5));
        if ((long)puVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        if (*pcVar11 == '\0') {
          if (puVar10 != (undefined1 *)0x0) {
            local_490 = local_490 + (long)puVar10;
            if (puVar10 < auStack_480 + (0x400 - (long)local_488)) {
              memcpy(local_488,pvVar5,(size_t)puVar10);
              local_488 = local_488 + (long)puVar10;
            }
            else {
              lVar6 = (long)local_488 - (long)auStack_480;
              if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("false && \"len <= kMaxSize\"",
                              "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                              "operator()");
              }
              (*pcStack_498)(local_4a0,auStack_480,lVar6);
              local_488 = auStack_480;
              (*pcStack_498)(local_4a0,pvVar5,puVar10);
            }
          }
        }
        else {
          iVar2 = *(int *)(pcVar11 + 0x10);
          if (param_6 <= (long)iVar2 - 1U) goto LAB_002e6100;
          uVar9 = (ulong)(byte)pcVar11[0x1c];
          if ((pcVar11[0x1c] & 1U) == 0) {
            local_80 = *(uint *)(pcVar11 + 0x14);
            if ((int)local_80 < -1) {
                    /* try { // try from 002e5fd4 to 002e60cb has its CatchHandler @ 002e6334 */
              if ((param_6 < (ulong)(long)(int)~local_80) ||
                 (puVar1 = (undefined8 *)(param_5 + (long)(int)(-2 - local_80) * 0x10),
                 uVar9 = (*(code *)puVar1[1])(*puVar1,0x14,0,&local_80), (uVar9 & 1) == 0))
              goto LAB_002e6100;
              if (-1 < (int)local_80) goto LAB_002e5ff0;
              uVar8 = 0x7fffffff;
              if (local_80 != 0x80000000) {
                uVar8 = -local_80;
              }
              bVar4 = true;
              local_64 = *(uint *)(pcVar11 + 0x18);
              local_80 = uVar8;
            }
            else {
LAB_002e5ff0:
              bVar4 = false;
              local_64 = *(uint *)(pcVar11 + 0x18);
            }
            if (((int)local_64 < -1) &&
               ((param_6 < (ulong)(long)(int)~local_64 ||
                (puVar1 = (undefined8 *)(param_5 + (long)(int)(-2 - local_64) * 0x10),
                uVar9 = (*(code *)puVar1[1])(*puVar1,0x14,0,&local_64), (uVar9 & 1) == 0))))
            goto LAB_002e6100;
            uVar7 = (ulong)local_80;
            uVar8 = (byte)pcVar11[0x1c] | 2;
            if (!bVar4) {
              uVar8 = (uint)(byte)pcVar11[0x1c];
            }
            uVar9 = (ulong)uVar8;
            uVar8 = local_64;
          }
          else {
            uVar7 = 0xffffffff;
            uVar8 = 0xffffffff;
          }
          puVar1 = (undefined8 *)(param_5 + ((long)iVar2 - 1U) * 0x10);
          uVar9 = (*(code *)puVar1[1])
                            (*puVar1,uVar9 << 8 | uVar7 << 0x20 | (ulong)(byte)pcVar11[0x1e],uVar8,
                             &local_4a0);
          if ((uVar9 & 1) == 0) goto LAB_002e6100;
        }
        pcVar11 = pcVar11 + 0x20;
      } while (pcVar13 != pcVar11);
    }
    bVar4 = *param_3 == '\0';
    lVar6 = (long)local_488 - (long)auStack_480;
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    local_6c = 0;
    if (param_4 != 0) {
      pcVar11 = param_3 + param_4;
      do {
        pcVar13 = pcVar11 + -(long)param_3;
        pvVar5 = memchr(param_3,0x25,(size_t)pcVar13);
        if (pvVar5 == (void *)0x0) {
          if ((long)pcVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          if (pcVar13 != (char *)0x0) {
            local_490 = local_490 + (long)pcVar13;
            if (pcVar13 < auStack_480 + (0x400 - (long)local_488)) {
              memcpy(local_488,param_3,(size_t)pcVar13);
              local_488 = local_488 + (long)pcVar13;
              bVar4 = true;
              lVar6 = (long)local_488 - (long)auStack_480;
              goto joined_r0x002e618c;
            }
            lVar6 = (long)local_488 - (long)auStack_480;
            if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
                    /* try { // try from 002e61a0 to 002e61bb has its CatchHandler @ 002e631c */
            (*pcStack_498)(local_4a0,auStack_480,lVar6);
            local_488 = auStack_480;
            (*pcStack_498)(local_4a0,param_3,pcVar13);
          }
          break;
        }
        puVar10 = (undefined1 *)((long)pvVar5 - (long)param_3);
        if ((long)puVar10 < 0) {
                    /* try { // try from 002e61fc to 002e631b has its CatchHandler @ 002e631c */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        if (puVar10 != (undefined1 *)0x0) {
          local_490 = local_490 + (long)puVar10;
          if (puVar10 < auStack_480 + (0x400 - (long)local_488)) {
            memcpy(local_488,param_3,(size_t)puVar10);
            local_488 = local_488 + (long)puVar10;
          }
          else {
            lVar6 = (long)local_488 - (long)auStack_480;
            if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            (*pcStack_498)(local_4a0,auStack_480,lVar6);
            local_488 = auStack_480;
            (*pcStack_498)(local_4a0,param_3,puVar10);
          }
        }
        if (pcVar11 <= (char *)((long)pvVar5 + 1U)) goto LAB_002e6100;
        pbVar14 = (byte *)((long)pvVar5 + 1);
        if ((char)puVar3[*pbVar14] < '\0') {
          if (*pbVar14 == 0x25) {
            local_490 = local_490 + 1;
            if (auStack_480 + (0x400 - (long)local_488) < (undefined1 *)0x2) {
              lVar6 = (long)local_488 - (long)auStack_480;
              if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("false && \"len <= kMaxSize\"",
                              "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                              "operator()");
              }
              (*pcStack_498)(local_4a0,auStack_480,lVar6);
              local_488 = auStack_480;
              (*pcStack_498)(local_4a0,&DAT_039b957d,1);
            }
            else {
              *local_488 = 0x25;
              local_488 = local_488 + 1;
            }
            goto LAB_002e5d18;
          }
          local_7c = 0xffffffffffffffff;
          local_72 = 0x14;
          local_74 = 0x901;
          param_3 = (char *)FUN_002eb1c0(pbVar14,pcVar11,&local_80,&local_6c);
          if (param_3 == (char *)0x0) goto LAB_002e6100;
          if ((long)param_3 - (long)pbVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          lVar6 = (long)(int)local_80;
          if (param_6 <= lVar6 - 1U) goto LAB_002e6100;
          uVar9 = (ulong)(byte)local_74;
          if ((local_74 & 1) == 0) {
            local_64 = (uint)local_7c;
            if ((int)(uint)local_7c < -1) {
              if ((param_6 < (ulong)(long)(int)~(uint)local_7c) ||
                 (puVar1 = (undefined8 *)(param_5 + (long)(int)(-2 - (uint)local_7c) * 0x10),
                 uVar9 = (*(code *)puVar1[1])(*puVar1,0x14,0,&local_64), (uVar9 & 1) == 0))
              goto LAB_002e6100;
              if (-1 < (int)local_64) goto LAB_002e5e34;
              uVar8 = 0x7fffffff;
              if (local_64 != 0x80000000) {
                uVar8 = -local_64;
              }
              bVar4 = true;
              local_68 = local_7c._4_4_;
              local_64 = uVar8;
            }
            else {
LAB_002e5e34:
              bVar4 = false;
              local_68 = local_7c._4_4_;
            }
            if (((int)local_68 < -1) &&
               ((param_6 < (ulong)(long)(int)~local_68 ||
                (puVar1 = (undefined8 *)(param_5 + (long)(int)(-2 - local_68) * 0x10),
                uVar9 = (*(code *)puVar1[1])(*puVar1,0x14,0,&local_68), (uVar9 & 1) == 0))))
            goto LAB_002e6100;
            uVar7 = (ulong)local_64;
            uVar8 = (byte)local_74 | 2;
            if (!bVar4) {
              uVar8 = (uint)(byte)local_74;
            }
            uVar9 = (ulong)uVar8;
            uVar8 = local_68;
          }
          else {
            uVar8 = 0xffffffff;
            uVar7 = 0xffffffff;
          }
          puVar1 = (undefined8 *)(param_5 + (lVar6 - 1U) * 0x10);
          uVar9 = (*(code *)puVar1[1])
                            (*puVar1,uVar9 << 8 | uVar7 << 0x20 | (ulong)local_72,uVar8,&local_4a0);
          if ((uVar9 & 1) == 0) goto LAB_002e6100;
        }
        else {
          uVar9 = (ulong)local_6c;
                    /* try { // try from 002e5d08 to 002e5ef3 has its CatchHandler @ 002e6364 */
          if (((local_6c < 0) || (local_6c = local_6c + 1, param_6 <= uVar9)) ||
             (puVar1 = (undefined8 *)(param_5 + uVar9 * 0x10),
             uVar9 = (*(code *)puVar1[1])
                               (*puVar1,(ulong)(byte)puVar3[*pbVar14] | 0xffffffff00000100,
                                0xffffffff,&local_4a0), (uVar9 & 1) == 0)) goto LAB_002e6100;
LAB_002e5d18:
          param_3 = (char *)((long)pvVar5 + 2);
        }
      } while (param_3 != pcVar11);
    }
    bVar4 = true;
    lVar6 = (long)local_488 - (long)auStack_480;
  }
joined_r0x002e618c:
  if (lVar6 < 0) {
                    /* try { // try from 002e6110 to 002e612f has its CatchHandler @ 002e6330 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
                    /* try { // try from 002e61d0 to 002e61d7 has its CatchHandler @ 002e6330 */
  (*pcStack_498)(local_4a0,auStack_480,lVar6);
  return bVar4;
LAB_002e6100:
  bVar4 = false;
  lVar6 = (long)local_488 - (long)auStack_480;
  goto joined_r0x002e618c;
}


