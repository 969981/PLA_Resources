/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1be30; name: FUN_00e1be30
 */


void FUN_00e1be30(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  string *psVar16;
  long *plVar17;
  string *psVar18;
  byte *pbVar19;
  string *psVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  size_t sVar25;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_0437c0c0;
  if (((*PTR_DAT_0437c0b8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c0b8), iVar11 != 0)) {
    *(undefined8 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *puVar7 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(puVar7 + 8) = 0x7d73756f;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    puVar7[0xc] = 0;
    *(undefined8 *)(puVar7 + 1) = uVar3;
    puVar7[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(puVar7 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(puVar7 + 0x19) = uVar3;
    puVar7[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437c0b8);
  }
  plVar8 = DAT_043f1798;
  lVar15 = tpidr_el0;
  plVar17 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar17 = plVar8;
  }
  pcVar12 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
  *(undefined8 *)param_1 = 0x61;
  *(undefined8 *)(param_1 + 8) = 0x5a;
  *(char **)(param_1 + 0x10) = pcVar12;
  pcVar12[0x58] = 't';
  uVar6 = s_std__string_sol__detail__ctti_ge_0393191d._80_8_;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393191d._72_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393191d._64_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393191d._56_8_;
  pcVar12[0x59] = ']';
  *(undefined8 *)(pcVar12 + 0x30) = s_std__string_sol__detail__ctti_ge_0393191d._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar3;
  *(undefined8 *)(pcVar12 + 0x50) = uVar6;
  *(undefined8 *)(pcVar12 + 0x40) = uVar4;
  *(undefined8 *)(pcVar12 + 0x48) = uVar5;
  uVar5 = s_std__string_sol__detail__ctti_ge_0393191d._40_8_;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393191d._32_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393191d._24_8_;
  *(undefined8 *)(pcVar12 + 0x10) = s_std__string_sol__detail__ctti_ge_0393191d._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar3;
  *(undefined8 *)(pcVar12 + 0x20) = uVar4;
  *(undefined8 *)(pcVar12 + 0x28) = uVar5;
  uVar4 = s_std__string_sol__detail__ctti_ge_0393191d._8_8_;
  uVar3 = s_std__string_sol__detail__ctti_ge_0393191d._0_8_;
  pcVar12[0x5a] = '\0';
  *(undefined8 *)pcVar12 = uVar3;
  *(undefined8 *)(pcVar12 + 8) = uVar4;
  cVar10 = (char)param_1;
  std::string::find(cVar10,0x5b);
  uVar13 = std::string::find(cVar10,0x3d);
  uVar14 = std::string::rfind(cVar10,0x5d);
  sVar1 = *param_1;
  if (uVar14 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    uVar23 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar23 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar23 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar23 = uVar13;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar23 < uVar13 - 1) {
    uVar23 = uVar23 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar23,uVar14 - uVar23,(allocator *)param_1);
  FUN_00e0f920(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar15 = FUN_00e0f8c4(param_1);
  if (lVar15 != -1) {
    std::string::erase((ulong)param_1,lVar15 - 2);
  }
  sVar1 = *param_1;
  uVar21 = (uint)(byte)sVar1;
  uVar14 = (ulong)((byte)sVar1 >> 1);
  uVar23 = *(ulong *)(param_1 + 8);
  uVar24 = (byte)sVar1 & 1;
  uVar13 = uVar14;
  if (((byte)sVar1 & 1) != 0) {
    uVar13 = uVar23;
  }
  if (uVar13 != 0) {
    psVar18 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar18 = param_1 + 1;
    }
    iVar11 = isblank((uint)(byte)*psVar18);
    if (iVar11 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar21 = (uint)(byte)sVar1;
        uVar14 = (ulong)((byte)sVar1 >> 1);
        uVar23 = *(ulong *)(param_1 + 8);
        uVar24 = (byte)sVar1 & 1;
        uVar13 = uVar14;
        if (((byte)sVar1 & 1) != 0) {
          uVar13 = uVar23;
        }
        if (uVar13 == 0) break;
        psVar18 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar18 = *(string **)(param_1 + 0x10);
        }
        iVar11 = isblank((uint)(byte)*psVar18);
      } while (iVar11 != 0);
    }
  }
  pbVar19 = PTR_DAT_0437c0c0;
  bVar9 = uVar24 == 0;
  uVar13 = uVar14;
  if (!bVar9) {
    uVar13 = uVar23;
  }
  while (uVar13 != 0) {
    psVar18 = *(string **)(param_1 + 0x10);
    uVar14 = (ulong)(uVar21 >> 1);
    if (bVar9) {
      psVar18 = param_1 + 1;
      uVar13 = uVar14;
    }
    else {
      uVar13 = uVar23;
    }
    iVar11 = isblank((uint)(byte)psVar18[uVar13 - 1]);
    if (iVar11 == 0) {
      uVar24 = uVar21 & 1;
      break;
    }
    FUN_00e0f8e0(param_1);
    sVar1 = *param_1;
    uVar21 = (uint)(byte)sVar1;
    bVar9 = ((byte)sVar1 & 1) == 0;
    uVar23 = *(ulong *)(param_1 + 8);
    uVar24 = (byte)sVar1 & 1;
    uVar14 = (ulong)((byte)sVar1 >> 1);
    uVar13 = uVar14;
    if (!bVar9) {
      uVar13 = uVar23;
    }
  }
  psVar18 = *(string **)(param_1 + 0x10);
  if (uVar24 != 0) {
    uVar14 = uVar23;
  }
  if (uVar24 == 0) {
    psVar18 = param_1 + 1;
  }
  sVar25 = *(size_t *)(pbVar19 + 8);
  if ((*pbVar19 & 1) == 0) {
    pbVar22 = pbVar19 + 1;
    sVar25 = (size_t)(*pbVar19 >> 1);
  }
  else {
    pbVar22 = *(byte **)(pbVar19 + 0x10);
  }
  if (sVar25 == 0) {
    uVar13 = 0;
LAB_00e1c1ac:
    do {
      std::string::erase((ulong)param_1,uVar13);
      sVar25 = *(size_t *)(pbVar19 + 8);
      pbVar22 = *(byte **)(pbVar19 + 0x10);
      uVar14 = (ulong)((byte)*param_1 >> 1);
      psVar18 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        uVar14 = *(ulong *)(param_1 + 8);
        psVar18 = *(string **)(param_1 + 0x10);
      }
      if ((*pbVar19 & 1) == 0) {
        pbVar22 = pbVar19 + 1;
        sVar25 = (ulong)(*pbVar19 >> 1);
      }
      if (sVar25 == 0) {
        uVar13 = 0;
      }
      else {
        if ((long)uVar14 < (long)sVar25) break;
        bVar2 = *pbVar22;
        psVar16 = psVar18;
        uVar13 = uVar14;
        while( true ) {
          if ((0xfffffffffffffffe < uVar13 - sVar25) ||
             (psVar16 = memchr(psVar16,(uint)bVar2,(uVar13 - sVar25) + 1), psVar16 == (string *)0x0)
             ) goto LAB_00e1c0e4;
          iVar11 = memcmp(psVar16,pbVar22,sVar25);
          if (iVar11 == 0) break;
          psVar16 = psVar16 + 1;
          uVar13 = (long)(psVar18 + uVar14) - (long)psVar16;
          if ((long)uVar13 < (long)sVar25) goto LAB_00e1c0e4;
        }
        if (psVar16 == psVar18 + uVar14) goto LAB_00e1c0e4;
        uVar13 = (long)psVar16 - (long)psVar18;
      }
      pbVar19 = PTR_DAT_0437c0c0;
    } while (uVar13 != 0xffffffffffffffff);
  }
  else if ((long)sVar25 <= (long)uVar14) {
    bVar2 = *pbVar22;
    psVar16 = psVar18;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar25) ||
         (psVar16 = memchr(psVar16,(uint)bVar2,(uVar13 - sVar25) + 1), psVar16 == (string *)0x0))
      break;
      iVar11 = memcmp(psVar16,pbVar22,sVar25);
      if (iVar11 == 0) {
        if (psVar16 != psVar18 + uVar14) {
          uVar13 = (long)psVar16 - (long)psVar18;
          pbVar19 = PTR_DAT_0437c0c0;
          if (uVar13 != 0xffffffffffffffff) goto LAB_00e1c1ac;
          goto LAB_00e1c0ec;
        }
        break;
      }
      psVar16 = psVar16 + 1;
      uVar13 = (long)(psVar18 + uVar14) - (long)psVar16;
    } while ((long)sVar25 <= (long)uVar13);
LAB_00e1c0e4:
    pbVar19 = PTR_DAT_0437c0c0;
  }
LAB_00e1c0ec:
  sVar25 = (ulong)(pbVar19[0x18] >> 1);
  pbVar22 = pbVar19 + 0x19;
  if ((pbVar19[0x18] & 1) != 0) {
    sVar25 = *(size_t *)(pbVar19 + 0x20);
    pbVar22 = *(byte **)(pbVar19 + 0x28);
  }
  if (sVar25 == 0) {
    uVar13 = 0;
    goto LAB_00e1c2b0;
  }
  if ((long)sVar25 <= (long)uVar14) {
    bVar2 = *pbVar22;
    psVar20 = psVar18 + uVar14;
    psVar16 = psVar18;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar25) {
        return;
      }
      psVar16 = memchr(psVar16,(uint)bVar2,(uVar14 - sVar25) + 1);
      if (psVar16 == (string *)0x0) {
        return;
      }
      iVar11 = memcmp(psVar16,pbVar22,sVar25);
      if (iVar11 == 0) {
        do {
          if (psVar16 == psVar20) {
            return;
          }
          uVar13 = (long)psVar16 - (long)psVar18;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00e1c2b0:
          while( true ) {
            std::string::erase((ulong)param_1,uVar13);
            bVar9 = ((byte)*param_1 & 1) != 0;
            psVar18 = *(string **)(param_1 + 0x10);
            uVar13 = (ulong)((byte)*param_1 >> 1);
            if (bVar9) {
              uVar13 = *(ulong *)(param_1 + 8);
            }
            if (!bVar9) {
              psVar18 = param_1 + 1;
            }
            sVar25 = (ulong)((byte)PTR_DAT_0437c0c0[0x18] >> 1);
            pbVar19 = PTR_DAT_0437c0c0 + 0x19;
            if ((PTR_DAT_0437c0c0[0x18] & 1) != 0) {
              sVar25 = *(size_t *)(PTR_DAT_0437c0c0 + 0x20);
              pbVar19 = *(byte **)(PTR_DAT_0437c0c0 + 0x28);
            }
            if (sVar25 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar25) {
            return;
          }
          bVar2 = *pbVar19;
          psVar20 = psVar18 + uVar13;
          psVar16 = psVar18;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar25) {
              return;
            }
            psVar16 = memchr(psVar16,(uint)bVar2,(uVar13 - sVar25) + 1);
            if (psVar16 == (string *)0x0) {
              return;
            }
            iVar11 = memcmp(psVar16,pbVar19,sVar25);
            if (iVar11 == 0) break;
            psVar16 = psVar16 + 1;
            uVar13 = (long)psVar20 - (long)psVar16;
            if ((long)uVar13 < (long)sVar25) {
              return;
            }
          }
        } while( true );
      }
      psVar16 = psVar16 + 1;
      uVar14 = (long)psVar20 - (long)psVar16;
    } while ((long)sVar25 <= (long)uVar14);
  }
  return;
}


