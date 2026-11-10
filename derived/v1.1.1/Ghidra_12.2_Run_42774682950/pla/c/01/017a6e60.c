/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017a6e60; name: FUN_017a6e60
 */


void FUN_017a6e60(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  string *psVar17;
  long *plVar18;
  string *psVar19;
  string *psVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_04381238 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_04381238);
    puVar8 = PTR_DAT_04381240;
    if (iVar12 != 0) {
      *(undefined8 *)PTR_DAT_04381240 = 0;
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
      puVar8[0xc] = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x26) = uVar5;
      uVar5 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar8 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar8 + 0x19) = uVar5;
      puVar8[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381238);
    }
  }
  plVar9 = DAT_043f1798;
  lVar16 = tpidr_el0;
  plVar18 = *(long **)(lVar16 + 0x20);
  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
    *(long **)(lVar16 + 0x20) = DAT_043f1798;
    plVar18 = plVar9;
  }
  pcVar13 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x80,8);
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x74;
  *(char **)(param_1 + 0x10) = pcVar13;
  pcVar13[0x70] = 'i';
  uVar7 = s_std__string_sol__detail__ctti_ge_0393bb28._104_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393bb28._88_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393bb28._80_8_;
  pcVar13[0x71] = 'n';
  pcVar13[0x72] = 't';
  pcVar13[0x73] = ']';
  *(undefined8 *)(pcVar13 + 0x60) = s_std__string_sol__detail__ctti_ge_0393bb28._96_8_;
  *(undefined8 *)(pcVar13 + 0x68) = uVar7;
  *(undefined8 *)(pcVar13 + 0x50) = uVar5;
  *(undefined8 *)(pcVar13 + 0x58) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0393bb28._72_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393bb28._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393bb28._48_8_;
  *(undefined8 *)(pcVar13 + 0x40) = s_std__string_sol__detail__ctti_ge_0393bb28._64_8_;
  *(undefined8 *)(pcVar13 + 0x48) = uVar7;
  *(undefined8 *)(pcVar13 + 0x30) = uVar5;
  *(undefined8 *)(pcVar13 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_0393bb28._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393bb28._24_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393bb28._16_8_;
  *(undefined8 *)(pcVar13 + 0x20) = s_std__string_sol__detail__ctti_ge_0393bb28._32_8_;
  *(undefined8 *)(pcVar13 + 0x28) = uVar7;
  *(undefined8 *)(pcVar13 + 0x10) = uVar5;
  *(undefined8 *)(pcVar13 + 0x18) = uVar6;
  uVar6 = s_std__string_sol__detail__ctti_ge_0393bb28._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393bb28._0_8_;
  pcVar13[0x74] = '\0';
  *(undefined8 *)pcVar13 = uVar5;
  *(undefined8 *)(pcVar13 + 8) = uVar6;
  cVar11 = (char)param_1;
  std::string::find(cVar11,0x5b);
  uVar14 = std::string::find(cVar11,0x3d);
  uVar15 = std::string::rfind(cVar11,0x5d);
  sVar3 = *param_1;
  if (uVar15 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar15 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    uVar21 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar21 = uVar14;
    }
    uVar14 = uVar15;
  }
  else {
    uVar21 = 0;
    if (uVar14 != 0xffffffffffffffff) {
      uVar21 = uVar14;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar21 < uVar14 - 1) {
    uVar21 = uVar21 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar21,uVar15 - uVar21,(allocator *)param_1);
  FUN_017a4304(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar16 = FUN_017a42a8(param_1);
  if (lVar16 != -1) {
    std::string::erase((ulong)param_1,lVar16 - 2);
  }
  sVar3 = *param_1;
  uVar22 = (uint)(byte)sVar3;
  uVar15 = (ulong)((byte)sVar3 >> 1);
  uVar21 = *(ulong *)(param_1 + 8);
  uVar23 = (byte)sVar3 & 1;
  uVar14 = uVar15;
  if (((byte)sVar3 & 1) != 0) {
    uVar14 = uVar21;
  }
  if (uVar14 != 0) {
    psVar19 = *(string **)(param_1 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      psVar19 = param_1 + 1;
    }
    iVar12 = isblank((uint)(byte)*psVar19);
    if (iVar12 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar3 = *param_1;
        uVar22 = (uint)(byte)sVar3;
        uVar15 = (ulong)((byte)sVar3 >> 1);
        uVar21 = *(ulong *)(param_1 + 8);
        uVar23 = (byte)sVar3 & 1;
        uVar14 = uVar15;
        if (((byte)sVar3 & 1) != 0) {
          uVar14 = uVar21;
        }
        if (uVar14 == 0) break;
        psVar19 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar19 = *(string **)(param_1 + 0x10);
        }
        iVar12 = isblank((uint)(byte)*psVar19);
      } while (iVar12 != 0);
    }
  }
  bVar10 = uVar23 == 0;
  uVar14 = uVar15;
  if (!bVar10) {
    uVar14 = uVar21;
  }
  while (uVar14 != 0) {
    psVar19 = *(string **)(param_1 + 0x10);
    uVar15 = (ulong)(uVar22 >> 1);
    if (bVar10) {
      psVar19 = param_1 + 1;
      uVar14 = uVar15;
    }
    else {
      uVar14 = uVar21;
    }
    iVar12 = isblank((uint)(byte)psVar19[uVar14 - 1]);
    if (iVar12 == 0) {
      uVar23 = uVar22 & 1;
      break;
    }
    FUN_017a42c4(param_1);
    sVar3 = *param_1;
    uVar22 = (uint)(byte)sVar3;
    bVar10 = ((byte)sVar3 & 1) == 0;
    uVar21 = *(ulong *)(param_1 + 8);
    uVar23 = (byte)sVar3 & 1;
    uVar15 = (ulong)((byte)sVar3 >> 1);
    uVar14 = uVar15;
    if (!bVar10) {
      uVar14 = uVar21;
    }
  }
  psVar19 = *(string **)(param_1 + 0x10);
  if (uVar23 == 0) {
    psVar19 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_04381240 + 8);
  pbVar2 = *(byte **)(PTR_DAT_04381240 + 0x10);
  if (uVar23 != 0) {
    uVar15 = uVar21;
  }
  if ((*PTR_DAT_04381240 & 1) == 0) {
    pbVar2 = PTR_DAT_04381240 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_04381240 >> 1);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_017a7238;
  }
  if ((long)sVar1 <= (long)uVar15) {
    bVar4 = *pbVar2;
    psVar20 = psVar19 + uVar15;
    psVar17 = psVar19;
    uVar14 = uVar15;
    do {
      if ((0xfffffffffffffffe < uVar14 - sVar1) ||
         (psVar17 = memchr(psVar17,(uint)bVar4,(uVar14 - sVar1) + 1), psVar17 == (string *)0x0))
      break;
      iVar12 = memcmp(psVar17,pbVar2,sVar1);
      if (iVar12 == 0) goto LAB_017a73a4;
      psVar17 = psVar17 + 1;
      uVar14 = (long)psVar20 - (long)psVar17;
    } while ((long)sVar1 <= (long)uVar14);
  }
LAB_017a7128:
  sVar1 = (ulong)((byte)PTR_DAT_04381240[0x18] >> 1);
  pbVar2 = PTR_DAT_04381240 + 0x19;
  if ((PTR_DAT_04381240[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_04381240 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_04381240 + 0x28);
  }
  if (sVar1 == 0) {
    uVar14 = 0;
    goto LAB_017a72ec;
  }
  if ((long)sVar1 <= (long)uVar15) {
    bVar4 = *pbVar2;
    psVar20 = psVar19 + uVar15;
    psVar17 = psVar19;
    do {
      if (0xfffffffffffffffe < uVar15 - sVar1) {
        return;
      }
      psVar17 = memchr(psVar17,(uint)bVar4,(uVar15 - sVar1) + 1);
      if (psVar17 == (string *)0x0) {
        return;
      }
      iVar12 = memcmp(psVar17,pbVar2,sVar1);
      if (iVar12 == 0) {
        do {
          if (psVar17 == psVar20) {
            return;
          }
          uVar14 = (long)psVar17 - (long)psVar19;
          if (uVar14 == 0xffffffffffffffff) {
            return;
          }
LAB_017a72ec:
          while( true ) {
            std::string::erase((ulong)param_1,uVar14);
            uVar14 = (ulong)((byte)*param_1 >> 1);
            psVar19 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar14 = *(ulong *)(param_1 + 8);
              psVar19 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_04381240[0x18] >> 1);
            pbVar2 = PTR_DAT_04381240 + 0x19;
            if ((PTR_DAT_04381240[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_04381240 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_04381240 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar14 = 0;
          }
          if ((long)uVar14 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar20 = psVar19 + uVar14;
          psVar17 = psVar19;
          while( true ) {
            if (0xfffffffffffffffe < uVar14 - sVar1) {
              return;
            }
            psVar17 = memchr(psVar17,(uint)bVar4,(uVar14 - sVar1) + 1);
            if (psVar17 == (string *)0x0) {
              return;
            }
            iVar12 = memcmp(psVar17,pbVar2,sVar1);
            if (iVar12 == 0) break;
            psVar17 = psVar17 + 1;
            uVar14 = (long)psVar20 - (long)psVar17;
            if ((long)uVar14 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar17 = psVar17 + 1;
      uVar15 = (long)psVar20 - (long)psVar17;
    } while ((long)sVar1 <= (long)uVar15);
  }
  return;
LAB_017a73a4:
  if ((psVar17 == psVar20) || (uVar14 = (long)psVar17 - (long)psVar19, uVar14 == 0xffffffffffffffff)
     ) goto LAB_017a7128;
LAB_017a7238:
  while( true ) {
    std::string::erase((ulong)param_1,uVar14);
    psVar19 = param_1 + 1;
    uVar15 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar19 = *(string **)(param_1 + 0x10);
      uVar15 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_04381240 + 8);
    pbVar2 = *(byte **)(PTR_DAT_04381240 + 0x10);
    if ((*PTR_DAT_04381240 & 1) == 0) {
      pbVar2 = PTR_DAT_04381240 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_04381240 >> 1);
    }
    if (sVar1 != 0) break;
    uVar14 = 0;
  }
  if ((long)uVar15 < (long)sVar1) goto LAB_017a7128;
  bVar4 = *pbVar2;
  psVar20 = psVar19 + uVar15;
  psVar17 = psVar19;
  uVar14 = uVar15;
  while( true ) {
    if ((0xfffffffffffffffe < uVar14 - sVar1) ||
       (psVar17 = memchr(psVar17,(uint)bVar4,(uVar14 - sVar1) + 1), psVar17 == (string *)0x0))
    goto LAB_017a7128;
    iVar12 = memcmp(psVar17,pbVar2,sVar1);
    if (iVar12 == 0) break;
    psVar17 = psVar17 + 1;
    uVar14 = (long)psVar20 - (long)psVar17;
    if ((long)uVar14 < (long)sVar1) goto LAB_017a7128;
  }
  goto LAB_017a73a4;
}


