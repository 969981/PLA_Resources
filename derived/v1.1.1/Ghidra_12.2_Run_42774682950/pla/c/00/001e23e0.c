/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e23e0; name: FUN_001e23e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_001e23e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 local_338;
  int local_334;
  int local_330;
  undefined4 local_32c;
  int local_150;
  undefined8 auStack_140 [11];
  undefined1 auStack_e8 [10];
  char acStack_de [126];
  
  lVar16 = *param_1;
  *param_2 = 0;
  if ((*(long *)(lVar16 + 0x1f8) == 0) && (*(long *)(lVar16 + 0x420) == 0)) {
    FUN_001f3ae0(lVar16,"Could not DOH-resolve: %s",param_1[0xa2]);
    uVar11 = 5;
    if ((*(byte *)((long)param_1 + 0x3fc) & 0x10) == 0) {
      uVar11 = 6;
    }
    return uVar11;
  }
  if (*(int *)(lVar16 + 0x648) != 0) {
    return 0;
  }
  FUN_001e6dbc(*(undefined8 *)(lVar16 + 0xd8));
  FUN_001fc8b8(*(undefined8 *)(lVar16 + 0x1f8));
  FUN_001e6dbc(*(undefined8 *)(lVar16 + 0xd8),*(undefined8 *)(lVar16 + 0x420));
  FUN_001fc8b8(*(undefined8 *)(lVar16 + 0x420));
  memset(&local_338,0,0x250);
  local_338 = 0x7fffffff;
  uVar4 = FUN_001e2900(*(undefined8 *)(lVar16 + 0x410),*(undefined8 *)(lVar16 + 0x418),
                       *(undefined4 *)(lVar16 + 0x200),&local_338);
  FUN_002044d4(*(undefined8 *)(lVar16 + 0x410));
  if (uVar4 != 0) {
    if (uVar4 < 0xd) {
      pcVar10 = (&PTR_DAT_0411cba8)[uVar4];
    }
    else {
      pcVar10 = "bad error code";
    }
    puVar1 = &DAT_03949011;
    if (*(int *)(lVar16 + 0x200) != 1) {
      puVar1 = &DAT_038da4d2;
    }
    FUN_001f3934(lVar16,"DOH: %s type %s for %s\n",pcVar10,puVar1,*(undefined8 *)(lVar16 + 0x650));
  }
  uVar5 = FUN_001e2900(*(undefined8 *)(lVar16 + 0x638),*(undefined8 *)(lVar16 + 0x640),
                       *(undefined4 *)(lVar16 + 0x428),&local_338);
  FUN_002044d4(*(undefined8 *)(lVar16 + 0x638));
  if (uVar5 == 0) {
LAB_001e25a8:
    FUN_001f3934(lVar16,"DOH Host name: %s\n",*(undefined8 *)(lVar16 + 0x650));
    FUN_001f3934(lVar16,"TTL: %u seconds\n",local_338);
    if (0 < local_334) {
      lVar14 = 0;
      puVar13 = &local_338;
      do {
        if ((&local_330)[lVar14 * 5] == 0x1c) {
          FUN_001e64cc(auStack_e8,0x80,"DOH AAAA: ");
          uVar19 = 0;
          lVar12 = 0x76;
          pcVar10 = acStack_de;
          do {
            puVar2 = &DAT_03996322;
            if (uVar19 != 0) {
              puVar2 = &DAT_039b07fe;
            }
            FUN_001e64cc(pcVar10,lVar12,"%s%02x%02x",puVar2,
                         *(undefined1 *)((long)puVar13 + uVar19 + 0xc),
                         *(undefined1 *)((long)puVar13 + uVar19 + 0xd));
            sVar6 = strlen(pcVar10);
            uVar19 = uVar19 + 2;
            lVar12 = lVar12 - sVar6;
            pcVar10 = pcVar10 + sVar6;
          } while (uVar19 < 0x10);
          FUN_001f3934(lVar16,&DAT_039b05f7,auStack_e8);
        }
        else if ((&local_330)[lVar14 * 5] == 1) {
          lVar12 = lVar14 * 0x14;
          FUN_001f3934(lVar16,"DOH A: %u.%u.%u.%u\n",
                       *(undefined1 *)((long)&local_32c + lVar14 * 0x14),
                       *(undefined1 *)((long)&local_32c + lVar12 + 1U),
                       *(undefined1 *)((long)&local_32c + lVar12 + 2U),
                       *(undefined1 *)((long)&local_32c + lVar12 + 3U));
        }
        lVar14 = lVar14 + 1;
        puVar13 = puVar13 + 5;
      } while (lVar14 < local_334);
    }
    lVar14 = (long)local_150;
    if (0 < local_150) {
      lVar12 = 0;
      puVar15 = auStack_140;
      do {
        FUN_001f3934(lVar16,"CNAME: %s\n",*puVar15);
        lVar12 = lVar12 + 1;
        puVar15 = puVar15 + 3;
      } while (lVar12 < lVar14);
    }
    if (0 < local_334) {
      uVar18 = *(undefined8 *)(lVar16 + 0x650);
      uVar11 = *(undefined4 *)(lVar16 + 0x658);
      lVar12 = 0;
      puVar13 = &local_32c;
      lVar17 = 0;
      lVar20 = 0;
      do {
        lVar8 = lVar17;
        lVar7 = lVar20;
        if (puVar13[-1] != 0x1c) {
          lVar7 = FUN_00204504(1,0x30);
          if (lVar7 != 0) {
            lVar8 = FUN_002044f4(uVar18);
            *(long *)(lVar7 + 0x18) = lVar8;
            if (lVar8 != 0) {
              lVar9 = FUN_00204504(1,0x10);
              *(long *)(lVar7 + 0x20) = lVar9;
              if (lVar9 != 0) {
                lVar8 = lVar7;
                if (lVar17 != 0) {
                  lVar8 = lVar17;
                }
                if (lVar20 != 0) {
                  *(long *)(lVar20 + 0x28) = lVar7;
                  lVar9 = *(long *)(lVar7 + 0x20);
                }
                *(undefined8 *)(lVar7 + 4) = 0x100000002;
                *(undefined4 *)(lVar7 + 0x10) = 0x10;
                *(undefined4 *)(lVar9 + 4) = *puVar13;
                *(undefined1 *)(lVar9 + 1) = 2;
                uVar3 = nnsocketInetHtons(uVar11);
                *(undefined2 *)(lVar9 + 2) = uVar3;
                goto LAB_001e27e4;
              }
              FUN_002044d4(*(undefined8 *)(lVar7 + 0x18));
            }
            FUN_002044d4(lVar7);
          }
          FUN_001dffa4(lVar17);
          goto LAB_001e289c;
        }
LAB_001e27e4:
        lVar12 = lVar12 + 1;
        puVar13 = puVar13 + 5;
        lVar17 = lVar8;
        lVar20 = lVar7;
      } while (lVar12 < local_334);
      if (lVar8 != 0) {
        if (*(long *)(lVar16 + 0xe8) != 0) {
          FUN_001f43b0(lVar16,3,2);
        }
        lVar12 = FUN_001e13b4(lVar16,lVar8,*(undefined8 *)(lVar16 + 0x650),
                              *(undefined4 *)(lVar16 + 0x658));
        if (*(long *)(lVar16 + 0xe8) != 0) {
          FUN_001f43f8(lVar16,3);
        }
        if (0 < local_150) {
          lVar16 = 0;
          puVar15 = auStack_140;
          do {
            FUN_002044d4(*puVar15);
            lVar16 = lVar16 + 1;
            puVar15 = puVar15 + 3;
          } while (lVar16 < lVar14);
        }
        if (lVar12 != 0) {
          param_1[0xa4] = lVar12;
          *param_2 = lVar12;
          return 0;
        }
        FUN_001dffa4(lVar8);
        goto LAB_001e2574;
      }
    }
LAB_001e289c:
    if (local_150 < 1) {
      uVar11 = 0x1b;
    }
    else {
      lVar16 = 0;
      uVar11 = 0x1b;
      puVar15 = auStack_140;
      do {
        FUN_002044d4(*puVar15);
        lVar16 = lVar16 + 1;
        puVar15 = puVar15 + 3;
      } while (lVar16 < lVar14);
    }
  }
  else {
    if (uVar5 < 0xd) {
      pcVar10 = (&PTR_DAT_0411cba8)[uVar5];
    }
    else {
      pcVar10 = "bad error code";
    }
    puVar1 = &DAT_03949011;
    if (*(int *)(lVar16 + 0x428) != 1) {
      puVar1 = &DAT_038da4d2;
    }
    FUN_001f3934(lVar16,"DOH: %s type %s for %s\n",pcVar10,puVar1,*(undefined8 *)(lVar16 + 0x650));
    if (uVar4 == 0) goto LAB_001e25a8;
LAB_001e2574:
    if (0 < local_150) {
      lVar16 = 0;
      puVar15 = auStack_140;
      do {
        FUN_002044d4(*puVar15);
        lVar16 = lVar16 + 1;
        puVar15 = puVar15 + 3;
      } while (lVar16 < local_150);
    }
    uVar11 = 6;
  }
  return uVar11;
}


