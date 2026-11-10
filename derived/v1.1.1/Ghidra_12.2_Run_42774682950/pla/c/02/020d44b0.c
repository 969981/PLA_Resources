/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020d44b0; name: FUN_020d44b0
 */


void FUN_020d44b0(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *plVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  string *psVar20;
  long *plVar21;
  string *psVar22;
  string *psVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_04384978 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04384978);
    puVar11 = PTR_DAT_04384980;
    if (iVar15 != 0) {
      *(undefined8 *)PTR_DAT_04384980 = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      *puVar11 = 0x16;
      uVar5 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar11 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      *(undefined8 *)(puVar11 + 1) = uVar5;
      puVar11[0x18] = 0x2a;
      uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar11[0xc] = 0;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      *(undefined8 *)(puVar11 + 0x28) = 0;
      *(undefined8 *)(puVar11 + 0x26) = uVar5;
      uVar5 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar11 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar11 + 0x19) = uVar5;
      puVar11[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar11,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384978);
    }
  }
  plVar12 = DAT_043f1798;
  lVar19 = tpidr_el0;
  plVar21 = *(long **)(lVar19 + 0x20);
  if (*(long **)(lVar19 + 0x20) == (long *)0x0) {
    *(long **)(lVar19 + 0x20) = DAT_043f1798;
    plVar21 = plVar12;
  }
  pcVar16 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x80,8);
  uVar6 = s_std__string_sol__detail__ctti_ge_03890c87._88_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890c87._80_8_;
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x70;
  *(char **)(param_1 + 0x10) = pcVar16;
  uVar10 = s_std__string_sol__detail__ctti_ge_03890c87._104_8_;
  uVar9 = s_std__string_sol__detail__ctti_ge_03890c87._96_8_;
  *(undefined8 *)(pcVar16 + 0x50) = uVar5;
  *(undefined8 *)(pcVar16 + 0x58) = uVar6;
  uVar8 = s_std__string_sol__detail__ctti_ge_03890c87._72_8_;
  uVar7 = s_std__string_sol__detail__ctti_ge_03890c87._64_8_;
  *(undefined8 *)(pcVar16 + 0x60) = uVar9;
  *(undefined8 *)(pcVar16 + 0x68) = uVar10;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890c87._56_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890c87._48_8_;
  *(undefined8 *)(pcVar16 + 0x40) = uVar7;
  *(undefined8 *)(pcVar16 + 0x48) = uVar8;
  *(undefined8 *)(pcVar16 + 0x30) = uVar5;
  *(undefined8 *)(pcVar16 + 0x38) = uVar6;
  uVar7 = s_std__string_sol__detail__ctti_ge_03890c87._40_8_;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890c87._32_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890c87._24_8_;
  *(undefined8 *)(pcVar16 + 0x10) = s_std__string_sol__detail__ctti_ge_03890c87._16_8_;
  *(undefined8 *)(pcVar16 + 0x18) = uVar5;
  *(undefined8 *)(pcVar16 + 0x20) = uVar6;
  *(undefined8 *)(pcVar16 + 0x28) = uVar7;
  uVar6 = s_std__string_sol__detail__ctti_ge_03890c87._8_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_03890c87._0_8_;
  pcVar16[0x70] = '\0';
  *(undefined8 *)pcVar16 = uVar5;
  *(undefined8 *)(pcVar16 + 8) = uVar6;
  cVar14 = (char)param_1;
  std::string::find(cVar14,0x5b);
  uVar17 = std::string::find(cVar14,0x3d);
  uVar18 = std::string::rfind(cVar14,0x5d);
  sVar3 = *param_1;
  if (uVar18 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar18 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    uVar24 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar24 = uVar17;
    }
    uVar17 = uVar18;
  }
  else {
    uVar24 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar24 = uVar17;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar17 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar24 < uVar17 - 1) {
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar24,uVar18 - uVar24,(allocator *)param_1);
  FUN_020d0664(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar19 = FUN_020d0608(param_1);
  if (lVar19 != -1) {
    std::string::erase((ulong)param_1,lVar19 - 2);
  }
  sVar3 = *param_1;
  uVar25 = (uint)(byte)sVar3;
  uVar18 = (ulong)((byte)sVar3 >> 1);
  uVar24 = *(ulong *)(param_1 + 8);
  uVar26 = (byte)sVar3 & 1;
  uVar17 = uVar18;
  if (((byte)sVar3 & 1) != 0) {
    uVar17 = uVar24;
  }
  if (uVar17 != 0) {
    psVar22 = *(string **)(param_1 + 0x10);
    if (((byte)sVar3 & 1) == 0) {
      psVar22 = param_1 + 1;
    }
    iVar15 = isblank((uint)(byte)*psVar22);
    if (iVar15 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar3 = *param_1;
        uVar25 = (uint)(byte)sVar3;
        uVar18 = (ulong)((byte)sVar3 >> 1);
        uVar24 = *(ulong *)(param_1 + 8);
        uVar26 = (byte)sVar3 & 1;
        uVar17 = uVar18;
        if (((byte)sVar3 & 1) != 0) {
          uVar17 = uVar24;
        }
        if (uVar17 == 0) break;
        psVar22 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar22 = *(string **)(param_1 + 0x10);
        }
        iVar15 = isblank((uint)(byte)*psVar22);
      } while (iVar15 != 0);
    }
  }
  bVar13 = uVar26 == 0;
  uVar17 = uVar18;
  if (!bVar13) {
    uVar17 = uVar24;
  }
  while (uVar17 != 0) {
    psVar22 = *(string **)(param_1 + 0x10);
    uVar18 = (ulong)(uVar25 >> 1);
    if (bVar13) {
      psVar22 = param_1 + 1;
      uVar17 = uVar18;
    }
    else {
      uVar17 = uVar24;
    }
    iVar15 = isblank((uint)(byte)psVar22[uVar17 - 1]);
    if (iVar15 == 0) {
      uVar26 = uVar25 & 1;
      break;
    }
    FUN_020d0624(param_1);
    sVar3 = *param_1;
    uVar25 = (uint)(byte)sVar3;
    bVar13 = ((byte)sVar3 & 1) == 0;
    uVar24 = *(ulong *)(param_1 + 8);
    uVar26 = (byte)sVar3 & 1;
    uVar18 = (ulong)((byte)sVar3 >> 1);
    uVar17 = uVar18;
    if (!bVar13) {
      uVar17 = uVar24;
    }
  }
  psVar22 = *(string **)(param_1 + 0x10);
  if (uVar26 == 0) {
    psVar22 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_04384980 + 8);
  pbVar2 = *(byte **)(PTR_DAT_04384980 + 0x10);
  if (uVar26 != 0) {
    uVar18 = uVar24;
  }
  if ((*PTR_DAT_04384980 & 1) == 0) {
    pbVar2 = PTR_DAT_04384980 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_04384980 >> 1);
  }
  if (sVar1 == 0) {
    uVar17 = 0;
    goto LAB_020d482c;
  }
  if ((long)sVar1 <= (long)uVar18) {
    bVar4 = *pbVar2;
    psVar23 = psVar22 + uVar18;
    psVar20 = psVar22;
    uVar17 = uVar18;
    do {
      if ((0xfffffffffffffffe < uVar17 - sVar1) ||
         (psVar20 = memchr(psVar20,(uint)bVar4,(uVar17 - sVar1) + 1), psVar20 == (string *)0x0))
      break;
      iVar15 = memcmp(psVar20,pbVar2,sVar1);
      if (iVar15 == 0) goto LAB_020d49e8;
      psVar20 = psVar20 + 1;
      uVar17 = (long)psVar23 - (long)psVar20;
    } while ((long)sVar1 <= (long)uVar17);
  }
LAB_020d476c:
  sVar1 = (ulong)((byte)PTR_DAT_04384980[0x18] >> 1);
  pbVar2 = PTR_DAT_04384980 + 0x19;
  if ((PTR_DAT_04384980[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_04384980 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_04384980 + 0x28);
  }
  if (sVar1 == 0) {
    uVar17 = 0;
    goto LAB_020d48e0;
  }
  if ((long)sVar1 <= (long)uVar18) {
    bVar4 = *pbVar2;
    psVar23 = psVar22 + uVar18;
    psVar20 = psVar22;
    do {
      if (0xfffffffffffffffe < uVar18 - sVar1) {
        return;
      }
      psVar20 = memchr(psVar20,(uint)bVar4,(uVar18 - sVar1) + 1);
      if (psVar20 == (string *)0x0) {
        return;
      }
      iVar15 = memcmp(psVar20,pbVar2,sVar1);
      if (iVar15 == 0) {
        do {
          if (psVar20 == psVar23) {
            return;
          }
          uVar17 = (long)psVar20 - (long)psVar22;
          if (uVar17 == 0xffffffffffffffff) {
            return;
          }
LAB_020d48e0:
          while( true ) {
            std::string::erase((ulong)param_1,uVar17);
            uVar17 = (ulong)((byte)*param_1 >> 1);
            psVar22 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar17 = *(ulong *)(param_1 + 8);
              psVar22 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_04384980[0x18] >> 1);
            pbVar2 = PTR_DAT_04384980 + 0x19;
            if ((PTR_DAT_04384980[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_04384980 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_04384980 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar17 = 0;
          }
          if ((long)uVar17 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar23 = psVar22 + uVar17;
          psVar20 = psVar22;
          while( true ) {
            if (0xfffffffffffffffe < uVar17 - sVar1) {
              return;
            }
            psVar20 = memchr(psVar20,(uint)bVar4,(uVar17 - sVar1) + 1);
            if (psVar20 == (string *)0x0) {
              return;
            }
            iVar15 = memcmp(psVar20,pbVar2,sVar1);
            if (iVar15 == 0) break;
            psVar20 = psVar20 + 1;
            uVar17 = (long)psVar23 - (long)psVar20;
            if ((long)uVar17 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar20 = psVar20 + 1;
      uVar18 = (long)psVar23 - (long)psVar20;
    } while ((long)sVar1 <= (long)uVar18);
  }
  return;
LAB_020d49e8:
  if ((psVar20 == psVar23) || (uVar17 = (long)psVar20 - (long)psVar22, uVar17 == 0xffffffffffffffff)
     ) goto LAB_020d476c;
LAB_020d482c:
  while( true ) {
    std::string::erase((ulong)param_1,uVar17);
    psVar22 = param_1 + 1;
    uVar18 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar22 = *(string **)(param_1 + 0x10);
      uVar18 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_04384980 + 8);
    pbVar2 = *(byte **)(PTR_DAT_04384980 + 0x10);
    if ((*PTR_DAT_04384980 & 1) == 0) {
      pbVar2 = PTR_DAT_04384980 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_04384980 >> 1);
    }
    if (sVar1 != 0) break;
    uVar17 = 0;
  }
  if ((long)uVar18 < (long)sVar1) goto LAB_020d476c;
  bVar4 = *pbVar2;
  psVar23 = psVar22 + uVar18;
  psVar20 = psVar22;
  uVar17 = uVar18;
  while( true ) {
    if ((0xfffffffffffffffe < uVar17 - sVar1) ||
       (psVar20 = memchr(psVar20,(uint)bVar4,(uVar17 - sVar1) + 1), psVar20 == (string *)0x0))
    goto LAB_020d476c;
    iVar15 = memcmp(psVar20,pbVar2,sVar1);
    if (iVar15 == 0) break;
    psVar20 = psVar20 + 1;
    uVar17 = (long)psVar23 - (long)psVar20;
    if ((long)uVar17 < (long)sVar1) goto LAB_020d476c;
  }
  goto LAB_020d49e8;
}


