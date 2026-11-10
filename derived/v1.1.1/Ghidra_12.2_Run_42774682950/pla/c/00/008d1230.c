/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d1230; name: FUN_008d1230
 */


void FUN_008d1230(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  string *psVar16;
  string *psVar17;
  string *psVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_043798d0 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_043798d0);
    puVar8 = PTR_DAT_043798d8;
    if (iVar11 != 0) {
      *(undefined8 *)PTR_DAT_043798d8 = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *puVar8 = 0x16;
      uVar5 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar8 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 1) = uVar5;
      puVar8[0x18] = 0x2a;
      uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x26) = uVar5;
      uVar6 = s__anonymous_namespace__039071f8._0_8_;
      uVar5 = CONCAT35(s__anonymous_namespace__039071f8._13_3_,
                       s__anonymous_namespace__039071f8._8_5_);
      puVar8[0xc] = 0;
      puVar8[0x2e] = 0;
      *(undefined8 *)(puVar8 + 0x21) = uVar5;
      *(undefined8 *)(puVar8 + 0x19) = uVar6;
      FUN_00100250(FUN_008ca31c,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043798d0);
    }
  }
  pcVar12 = operator_new(0x80);
  *(undefined8 *)param_1 = 0x81;
  uVar6 = CONCAT62(s_std__string_sol__detail__ctti_ge_038ca796._120_6_,
                   s_std__string_sol__detail__ctti_ge_038ca796._118_2_);
  *(undefined8 *)(param_1 + 8) = 0x7e;
  *(char **)(param_1 + 0x10) = pcVar12;
  uVar5 = CONCAT26(s_std__string_sol__detail__ctti_ge_038ca796._118_2_,
                   s_std__string_sol__detail__ctti_ge_038ca796._112_6_);
  pcVar12[0x7e] = '\0';
  *(undefined8 *)(pcVar12 + 0x76) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_038ca796._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = s_std__string_sol__detail__ctti_ge_038ca796._104_8_;
  *(undefined8 *)(pcVar12 + 0x70) = uVar5;
  uVar6 = s_std__string_sol__detail__ctti_ge_038ca796._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = s_std__string_sol__detail__ctti_ge_038ca796._88_8_;
  *(undefined8 *)(pcVar12 + 0x60) = uVar7;
  uVar5 = s_std__string_sol__detail__ctti_ge_038ca796._72_8_;
  *(undefined8 *)(pcVar12 + 0x40) = s_std__string_sol__detail__ctti_ge_038ca796._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar5;
  *(undefined8 *)(pcVar12 + 0x50) = uVar6;
  uVar5 = s_std__string_sol__detail__ctti_ge_038ca796._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_038ca796._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_038ca796._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_std__string_sol__detail__ctti_ge_038ca796._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_038ca796._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_038ca796._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_038ca796._8_8_;
  *(undefined8 *)pcVar12 = s_std__string_sol__detail__ctti_ge_038ca796._0_8_;
  *(undefined8 *)(pcVar12 + 8) = uVar5;
  cVar10 = (char)param_1;
  std::string::find(cVar10,0x5b);
  uVar13 = std::string::find(cVar10,0x3d);
  uVar14 = std::string::rfind(cVar10,0x5d);
  sVar3 = *param_1;
  if (uVar14 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    uVar19 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar19 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar19 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar19 = uVar13;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar19 < uVar13 - 1) {
    uVar19 = uVar19 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar19,uVar14 - uVar19,(allocator *)param_1);
  FUN_008ca5fc(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar15 = FUN_008ca5a0(param_1);
  if (lVar15 != -1) {
    std::string::erase((ulong)param_1,lVar15 - 2);
  }
  sVar3 = *param_1;
  uVar20 = (uint)(byte)sVar3;
  uVar14 = (ulong)((byte)sVar3 >> 1);
  uVar19 = *(ulong *)(param_1 + 8);
  uVar21 = (byte)sVar3 & 1;
  uVar13 = uVar14;
  if (((byte)sVar3 & 1) != 0) {
    uVar13 = uVar19;
  }
  if (uVar13 != 0) {
    psVar17 = *(string **)(param_1 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      psVar17 = param_1 + 1;
    }
    iVar11 = isblank((uint)(byte)*psVar17);
    if (iVar11 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar3 = *param_1;
        uVar20 = (uint)(byte)sVar3;
        uVar14 = (ulong)((byte)sVar3 >> 1);
        uVar19 = *(ulong *)(param_1 + 8);
        uVar21 = (byte)sVar3 & 1;
        uVar13 = uVar14;
        if (((byte)sVar3 & 1) != 0) {
          uVar13 = uVar19;
        }
        if (uVar13 == 0) break;
        psVar17 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar17 = *(string **)(param_1 + 0x10);
        }
        iVar11 = isblank((uint)(byte)*psVar17);
      } while (iVar11 != 0);
    }
  }
  bVar9 = uVar21 == 0;
  uVar13 = uVar14;
  if (!bVar9) {
    uVar13 = uVar19;
  }
  while (uVar13 != 0) {
    psVar17 = *(string **)(param_1 + 0x10);
    uVar14 = (ulong)(uVar20 >> 1);
    if (bVar9) {
      psVar17 = param_1 + 1;
      uVar13 = uVar14;
    }
    else {
      uVar13 = uVar19;
    }
    iVar11 = isblank((uint)(byte)psVar17[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar21 = uVar20 & 1;
      break;
    }
    FUN_008ca5bc(param_1);
    sVar3 = *param_1;
    uVar20 = (uint)(byte)sVar3;
    bVar9 = ((byte)sVar3 & 1) == 0;
    uVar19 = *(ulong *)(param_1 + 8);
    uVar21 = (byte)sVar3 & 1;
    uVar14 = (ulong)((byte)sVar3 >> 1);
    uVar13 = uVar14;
    if (!bVar9) {
      uVar13 = uVar19;
    }
  }
  psVar17 = *(string **)(param_1 + 0x10);
  if (uVar21 == 0) {
    psVar17 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_043798d8 + 8);
  pbVar2 = *(byte **)(PTR_DAT_043798d8 + 0x10);
  if (uVar21 != 0) {
    uVar14 = uVar19;
  }
  if ((*PTR_DAT_043798d8 & 1) == 0) {
    pbVar2 = PTR_DAT_043798d8 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_043798d8 >> 1);
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_008d157c;
  }
  if ((long)sVar1 <= (long)uVar14) {
    bVar4 = *pbVar2;
    psVar18 = psVar17 + uVar14;
    psVar16 = psVar17;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar1) ||
         (psVar16 = memchr(psVar16,(uint)bVar4,(uVar13 - sVar1) + 1), psVar16 == (string *)0x0))
      break;
      iVar11 = memcmp(psVar16,pbVar2,sVar1);
      if (iVar11 == 0) goto LAB_008d1730;
      psVar16 = psVar16 + 1;
      uVar13 = (long)psVar18 - (long)psVar16;
    } while ((long)sVar1 <= (long)uVar13);
  }
LAB_008d14b4:
  sVar1 = (ulong)((byte)PTR_DAT_043798d8[0x18] >> 1);
  pbVar2 = PTR_DAT_043798d8 + 0x19;
  if ((PTR_DAT_043798d8[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_043798d8 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_043798d8 + 0x28);
  }
  if (sVar1 == 0) {
    uVar13 = 0;
    goto LAB_008d1630;
  }
  if ((long)sVar1 <= (long)uVar14) {
    bVar4 = *pbVar2;
    psVar18 = psVar17 + uVar14;
    psVar16 = psVar17;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar1) {
        return;
      }
      psVar16 = memchr(psVar16,(uint)bVar4,(uVar14 - sVar1) + 1);
      if (psVar16 == (string *)0x0) {
        return;
      }
      iVar11 = memcmp(psVar16,pbVar2,sVar1);
      if (iVar11 == 0) {
        do {
          if (psVar16 == psVar18) {
            return;
          }
          uVar13 = (long)psVar16 - (long)psVar17;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_008d1630:
          while( true ) {
            std::string::erase((ulong)param_1,uVar13);
            uVar13 = (ulong)((byte)*param_1 >> 1);
            psVar17 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar13 = *(ulong *)(param_1 + 8);
              psVar17 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_043798d8[0x18] >> 1);
            pbVar2 = PTR_DAT_043798d8 + 0x19;
            if ((PTR_DAT_043798d8[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_043798d8 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_043798d8 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar18 = psVar17 + uVar13;
          psVar16 = psVar17;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar1) {
              return;
            }
            psVar16 = memchr(psVar16,(uint)bVar4,(uVar13 - sVar1) + 1);
            if (psVar16 == (string *)0x0) {
              return;
            }
            iVar11 = memcmp(psVar16,pbVar2,sVar1);
            if (iVar11 == 0) break;
            psVar16 = psVar16 + 1;
            uVar13 = (long)psVar18 - (long)psVar16;
            if ((long)uVar13 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar16 = psVar16 + 1;
      uVar14 = (long)psVar18 - (long)psVar16;
    } while ((long)sVar1 <= (long)uVar14);
  }
  return;
LAB_008d1730:
  if ((psVar16 == psVar18) || (uVar13 = (long)psVar16 - (long)psVar17, uVar13 == 0xffffffffffffffff)
     ) goto LAB_008d14b4;
LAB_008d157c:
  while( true ) {
    std::string::erase((ulong)param_1,uVar13);
    psVar17 = param_1 + 1;
    uVar14 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar17 = *(string **)(param_1 + 0x10);
      uVar14 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_043798d8 + 8);
    pbVar2 = *(byte **)(PTR_DAT_043798d8 + 0x10);
    if ((*PTR_DAT_043798d8 & 1) == 0) {
      pbVar2 = PTR_DAT_043798d8 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_043798d8 >> 1);
    }
    if (sVar1 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar1) goto LAB_008d14b4;
  bVar4 = *pbVar2;
  psVar18 = psVar17 + uVar14;
  psVar16 = psVar17;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar1) ||
       (psVar16 = memchr(psVar16,(uint)bVar4,(uVar13 - sVar1) + 1), psVar16 == (string *)0x0))
    goto LAB_008d14b4;
    iVar11 = memcmp(psVar16,pbVar2,sVar1);
    if (iVar11 == 0) break;
    psVar16 = psVar16 + 1;
    uVar13 = (long)psVar18 - (long)psVar16;
    if ((long)uVar13 < (long)sVar1) goto LAB_008d14b4;
  }
  goto LAB_008d1730;
}


