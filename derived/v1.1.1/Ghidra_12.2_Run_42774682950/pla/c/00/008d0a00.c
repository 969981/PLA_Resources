/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d0a00; name: FUN_008d0a00
 */


void FUN_008d0a00(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  string *psVar15;
  string *psVar16;
  string *psVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_043798a0 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_043798a0);
    puVar7 = PTR_DAT_043798a8;
    if (iVar10 != 0) {
      *(undefined8 *)PTR_DAT_043798a8 = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *puVar7 = 0x16;
      uVar5 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar7 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 1) = uVar5;
      puVar7[0x18] = 0x2a;
      uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + 0x26) = uVar5;
      uVar6 = s__anonymous_namespace__039071f8._0_8_;
      uVar5 = CONCAT35(s__anonymous_namespace__039071f8._13_3_,
                       s__anonymous_namespace__039071f8._8_5_);
      puVar7[0xc] = 0;
      puVar7[0x2e] = 0;
      *(undefined8 *)(puVar7 + 0x21) = uVar5;
      *(undefined8 *)(puVar7 + 0x19) = uVar6;
      FUN_00100250(FUN_008ca31c,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043798a0);
    }
  }
  pcVar11 = operator_new(0x70);
  pcVar11[0x60] = '\0';
  *(undefined8 *)param_1 = 0x71;
  *(undefined8 *)(param_1 + 8) = 0x60;
  *(char **)(param_1 + 0x10) = pcVar11;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._72_8_;
  *(undefined8 *)(pcVar11 + 0x40) = s_std__string_sol__detail__ctti_ge_03973725._64_8_;
  *(undefined8 *)(pcVar11 + 0x48) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._88_8_;
  *(undefined8 *)(pcVar11 + 0x50) = s_std__string_sol__detail__ctti_ge_03973725._80_8_;
  *(undefined8 *)(pcVar11 + 0x58) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._40_8_;
  *(undefined8 *)(pcVar11 + 0x20) = s_std__string_sol__detail__ctti_ge_03973725._32_8_;
  *(undefined8 *)(pcVar11 + 0x28) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._56_8_;
  *(undefined8 *)(pcVar11 + 0x30) = s_std__string_sol__detail__ctti_ge_03973725._48_8_;
  *(undefined8 *)(pcVar11 + 0x38) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._8_8_;
  *(undefined8 *)pcVar11 = s_std__string_sol__detail__ctti_ge_03973725._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_03973725._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_std__string_sol__detail__ctti_ge_03973725._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar5;
  cVar9 = (char)param_1;
  std::string::find(cVar9,0x5b);
  uVar12 = std::string::find(cVar9,0x3d);
  uVar13 = std::string::rfind(cVar9,0x5d);
  sVar3 = *param_1;
  if (uVar13 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
    uVar18 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar18 = uVar12;
    }
    uVar12 = uVar13;
  }
  else {
    uVar18 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar18 = uVar12;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar12 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar18 < uVar12 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar18,uVar13 - uVar18,(allocator *)param_1);
  FUN_008ca5fc(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar14 = FUN_008ca5a0(param_1);
  if (lVar14 != -1) {
    std::string::erase((ulong)param_1,lVar14 - 2);
  }
  sVar3 = *param_1;
  uVar19 = (uint)(byte)sVar3;
  uVar13 = (ulong)((byte)sVar3 >> 1);
  uVar18 = *(ulong *)(param_1 + 8);
  uVar20 = (byte)sVar3 & 1;
  uVar12 = uVar13;
  if (((byte)sVar3 & 1) != 0) {
    uVar12 = uVar18;
  }
  if (uVar12 != 0) {
    psVar16 = *(string **)(param_1 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      psVar16 = param_1 + 1;
    }
    iVar10 = isblank((uint)(byte)*psVar16);
    if (iVar10 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar3 = *param_1;
        uVar19 = (uint)(byte)sVar3;
        uVar13 = (ulong)((byte)sVar3 >> 1);
        uVar18 = *(ulong *)(param_1 + 8);
        uVar20 = (byte)sVar3 & 1;
        uVar12 = uVar13;
        if (((byte)sVar3 & 1) != 0) {
          uVar12 = uVar18;
        }
        if (uVar12 == 0) break;
        psVar16 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar16 = *(string **)(param_1 + 0x10);
        }
        iVar10 = isblank((uint)(byte)*psVar16);
      } while (iVar10 != 0);
    }
  }
  bVar8 = uVar20 == 0;
  uVar12 = uVar13;
  if (!bVar8) {
    uVar12 = uVar18;
  }
  while (uVar12 != 0) {
    psVar16 = *(string **)(param_1 + 0x10);
    uVar13 = (ulong)(uVar19 >> 1);
    if (bVar8) {
      psVar16 = param_1 + 1;
      uVar12 = uVar13;
    }
    else {
      uVar12 = uVar18;
    }
    iVar10 = isblank((uint)(byte)psVar16[uVar12 - 1]);
    if (iVar10 == 0) {
      uVar20 = uVar19 & 1;
      break;
    }
    FUN_008ca5bc(param_1);
    sVar3 = *param_1;
    uVar19 = (uint)(byte)sVar3;
    bVar8 = ((byte)sVar3 & 1) == 0;
    uVar18 = *(ulong *)(param_1 + 8);
    uVar20 = (byte)sVar3 & 1;
    uVar13 = (ulong)((byte)sVar3 >> 1);
    uVar12 = uVar13;
    if (!bVar8) {
      uVar12 = uVar18;
    }
  }
  psVar16 = *(string **)(param_1 + 0x10);
  if (uVar20 == 0) {
    psVar16 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_043798a8 + 8);
  pbVar2 = *(byte **)(PTR_DAT_043798a8 + 0x10);
  if (uVar20 != 0) {
    uVar13 = uVar18;
  }
  if ((*PTR_DAT_043798a8 & 1) == 0) {
    pbVar2 = PTR_DAT_043798a8 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_043798a8 >> 1);
  }
  if (sVar1 == 0) {
    uVar12 = 0;
    goto LAB_008d0d34;
  }
  if ((long)sVar1 <= (long)uVar13) {
    bVar4 = *pbVar2;
    psVar17 = psVar16 + uVar13;
    psVar15 = psVar16;
    uVar12 = uVar13;
    do {
      if ((0xfffffffffffffffe < uVar12 - sVar1) ||
         (psVar15 = memchr(psVar15,(uint)bVar4,(uVar12 - sVar1) + 1), psVar15 == (string *)0x0))
      break;
      iVar10 = memcmp(psVar15,pbVar2,sVar1);
      if (iVar10 == 0) goto LAB_008d0ee8;
      psVar15 = psVar15 + 1;
      uVar12 = (long)psVar17 - (long)psVar15;
    } while ((long)sVar1 <= (long)uVar12);
  }
LAB_008d0c6c:
  sVar1 = (ulong)((byte)PTR_DAT_043798a8[0x18] >> 1);
  pbVar2 = PTR_DAT_043798a8 + 0x19;
  if ((PTR_DAT_043798a8[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_043798a8 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_043798a8 + 0x28);
  }
  if (sVar1 == 0) {
    uVar12 = 0;
    goto LAB_008d0de8;
  }
  if ((long)sVar1 <= (long)uVar13) {
    bVar4 = *pbVar2;
    psVar17 = psVar16 + uVar13;
    psVar15 = psVar16;
    do {
      if (0xfffffffffffffffe < uVar13 - sVar1) {
        return;
      }
      psVar15 = memchr(psVar15,(uint)bVar4,(uVar13 - sVar1) + 1);
      if (psVar15 == (string *)0x0) {
        return;
      }
      iVar10 = memcmp(psVar15,pbVar2,sVar1);
      if (iVar10 == 0) {
        do {
          if (psVar15 == psVar17) {
            return;
          }
          uVar12 = (long)psVar15 - (long)psVar16;
          if (uVar12 == 0xffffffffffffffff) {
            return;
          }
LAB_008d0de8:
          while( true ) {
            std::string::erase((ulong)param_1,uVar12);
            uVar12 = (ulong)((byte)*param_1 >> 1);
            psVar16 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar12 = *(ulong *)(param_1 + 8);
              psVar16 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_043798a8[0x18] >> 1);
            pbVar2 = PTR_DAT_043798a8 + 0x19;
            if ((PTR_DAT_043798a8[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_043798a8 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_043798a8 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar12 = 0;
          }
          if ((long)uVar12 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar17 = psVar16 + uVar12;
          psVar15 = psVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar12 - sVar1) {
              return;
            }
            psVar15 = memchr(psVar15,(uint)bVar4,(uVar12 - sVar1) + 1);
            if (psVar15 == (string *)0x0) {
              return;
            }
            iVar10 = memcmp(psVar15,pbVar2,sVar1);
            if (iVar10 == 0) break;
            psVar15 = psVar15 + 1;
            uVar12 = (long)psVar17 - (long)psVar15;
            if ((long)uVar12 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar15 = psVar15 + 1;
      uVar13 = (long)psVar17 - (long)psVar15;
    } while ((long)sVar1 <= (long)uVar13);
  }
  return;
LAB_008d0ee8:
  if ((psVar15 == psVar17) || (uVar12 = (long)psVar15 - (long)psVar16, uVar12 == 0xffffffffffffffff)
     ) goto LAB_008d0c6c;
LAB_008d0d34:
  while( true ) {
    std::string::erase((ulong)param_1,uVar12);
    psVar16 = param_1 + 1;
    uVar13 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar16 = *(string **)(param_1 + 0x10);
      uVar13 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_043798a8 + 8);
    pbVar2 = *(byte **)(PTR_DAT_043798a8 + 0x10);
    if ((*PTR_DAT_043798a8 & 1) == 0) {
      pbVar2 = PTR_DAT_043798a8 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_043798a8 >> 1);
    }
    if (sVar1 != 0) break;
    uVar12 = 0;
  }
  if ((long)uVar13 < (long)sVar1) goto LAB_008d0c6c;
  bVar4 = *pbVar2;
  psVar17 = psVar16 + uVar13;
  psVar15 = psVar16;
  uVar12 = uVar13;
  while( true ) {
    if ((0xfffffffffffffffe < uVar12 - sVar1) ||
       (psVar15 = memchr(psVar15,(uint)bVar4,(uVar12 - sVar1) + 1), psVar15 == (string *)0x0))
    goto LAB_008d0c6c;
    iVar10 = memcmp(psVar15,pbVar2,sVar1);
    if (iVar10 == 0) break;
    psVar15 = psVar15 + 1;
    uVar12 = (long)psVar17 - (long)psVar15;
    if ((long)uVar12 < (long)sVar1) goto LAB_008d0c6c;
  }
  goto LAB_008d0ee8;
}


