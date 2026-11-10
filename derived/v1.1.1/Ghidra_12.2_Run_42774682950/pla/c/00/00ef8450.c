/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ef8450; name: FUN_00ef8450
 */


void FUN_00ef8450(string *param_1)

{
  string sVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  void *__dest;
  ulong uVar10;
  ulong uVar11;
  string *psVar12;
  string *psVar13;
  long *plVar14;
  ulong uVar15;
  string *psVar16;
  long lVar17;
  size_t sVar18;
  long lVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar23 = PTR_DAT_0437d070;
  if (((*PTR_DAT_0437d068 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d068), iVar9 != 0))
  {
    *(undefined8 *)pbVar23 = 0;
    *(undefined8 *)(pbVar23 + 8) = 0;
    *pbVar23 = 0x16;
    uVar3 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar23 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar23 + 0x10) = 0;
    *(undefined8 *)(pbVar23 + 0x18) = 0;
    pbVar23[0xc] = 0;
    *(undefined8 *)(pbVar23 + 1) = uVar3;
    pbVar23[0x18] = 0x2a;
    uVar3 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar23 + 0x20) = 0;
    *(undefined8 *)(pbVar23 + 0x28) = 0;
    *(undefined8 *)(pbVar23 + 0x26) = uVar3;
    uVar3 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar23 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar23 + 0x19) = uVar3;
    pbVar23[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar23,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d068);
  }
  plVar6 = DAT_043f1798;
  lVar17 = tpidr_el0;
  plVar14 = *(long **)(lVar17 + 0x20);
  if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
    plVar14 = plVar6;
  }
  __dest = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,0x90,8);
  *(undefined8 *)param_1 = 0x91;
  *(undefined8 *)(param_1 + 8) = 0x8c;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::FieldCameraComponent>, seperator_mark = int]"
         ,0x8c);
  *(undefined1 *)((long)__dest + 0x8c) = 0;
  cVar8 = (char)param_1;
  std::string::find(cVar8,0x5b);
  uVar10 = std::string::find(cVar8,0x3d);
  uVar11 = std::string::rfind(cVar8,0x5d);
  sVar1 = *param_1;
  if (uVar11 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar11 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 8);
    }
    uVar15 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar15 = uVar10;
    }
    uVar10 = uVar11;
  }
  else {
    uVar15 = 0;
    if (uVar10 != 0xffffffffffffffff) {
      uVar15 = uVar10;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar10 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar10 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar15 < uVar10 - 1) {
    uVar15 = uVar15 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar15,uVar11 - uVar15,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar6 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar19 = *(long *)(param_1 + 0x10);
      if (lVar19 != 0) {
        plVar14 = *(long **)(lVar17 + 0x20);
        if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
          *(long **)(lVar17 + 0x20) = DAT_043f1798;
          plVar14 = plVar6;
        }
        uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar17 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar17 + 0x38d488) = 1;
            *(undefined8 *)(lVar17 + 0x38d478) = 0;
            *(undefined8 *)(lVar17 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar17 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar19,0,8);
            goto LAB_00ef8640;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar19,0,8);
      }
LAB_00ef8640:
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar21 = (uint)local_78 & 0xff;
  uVar22 = (uint)local_78 & 1;
  psVar13 = param_1 + 1;
  uVar10 = local_78 >> 1 & 0x7f;
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  *(ulong *)param_1 = local_78;
  uVar11 = uStack_70;
  if ((local_78 & 1) == 0) {
    uStack_70 = uVar10;
    local_68 = psVar13;
    if (0xd < uVar10) goto LAB_00ef8674;
  }
  else if (0xd < (long)uStack_70) {
LAB_00ef8674:
    psVar16 = local_68 + uStack_70;
    lVar17 = 1;
    while (uStack_70 != 0xd) {
      uStack_70 = uStack_70 - 1;
      if (local_68[uStack_70] == (string)0x6b) {
        lVar19 = 0;
        do {
          if (lVar19 == -0xd) {
            if ((lVar17 != -0xd) &&
               (psVar16 + (~(ulong)local_68 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar16 + (~(ulong)local_68 - 0xd) + -2));
              sVar1 = *param_1;
              uVar21 = (uint)(byte)sVar1;
              uVar22 = (byte)sVar1 & 1;
              uVar10 = (ulong)((byte)sVar1 >> 1);
              uVar11 = *(ulong *)(param_1 + 8);
            }
            goto LAB_00ef8718;
          }
          lVar4 = lVar19 + -2;
          lVar5 = lVar19 + 0xc;
          lVar19 = lVar19 + -1;
        } while (psVar16[lVar4] == *(string *)("seperator_mark" + lVar5));
      }
      psVar16 = psVar16 + -1;
      lVar17 = lVar17 + 1;
    }
  }
LAB_00ef8718:
  uVar15 = uVar10;
  if (uVar22 != 0) {
    uVar15 = uVar11;
  }
  if (uVar15 != 0) {
    psVar16 = psVar13;
    if (uVar22 != 0) {
      psVar16 = *(string **)(param_1 + 0x10);
    }
    iVar9 = isblank((uint)(byte)*psVar16);
    if (iVar9 == 0) {
      uVar22 = uVar21 & 1;
      uVar10 = (ulong)(uVar21 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar21 = (uint)(byte)sVar1;
        uVar10 = (ulong)((byte)sVar1 >> 1);
        uVar11 = *(ulong *)(param_1 + 8);
        uVar22 = (byte)sVar1 & 1;
        uVar15 = uVar10;
        if (((byte)sVar1 & 1) != 0) {
          uVar15 = uVar11;
        }
        if (uVar15 == 0) break;
        psVar16 = psVar13;
        if (((byte)sVar1 & 1) != 0) {
          psVar16 = *(string **)(param_1 + 0x10);
        }
        iVar9 = isblank((uint)(byte)*psVar16);
      } while (iVar9 != 0);
    }
  }
  bVar7 = uVar22 == 0;
  uVar15 = uVar10;
  if (!bVar7) {
    uVar15 = uVar11;
  }
  while (uVar15 != 0) {
    psVar16 = *(string **)(param_1 + 0x10);
    uVar10 = (ulong)(uVar21 >> 1);
    if (bVar7) {
      psVar16 = param_1 + 1;
      uVar15 = uVar10;
    }
    else {
      uVar15 = uVar11;
    }
    iVar9 = isblank((uint)(byte)psVar16[uVar15 - 1]);
    if (iVar9 == 0) {
      uVar22 = uVar21 & 1;
      break;
    }
    FUN_00ee01e0(param_1);
    sVar1 = *param_1;
    uVar21 = (uint)(byte)sVar1;
    bVar7 = ((byte)sVar1 & 1) == 0;
    uVar11 = *(ulong *)(param_1 + 8);
    uVar22 = (byte)sVar1 & 1;
    uVar10 = (ulong)((byte)sVar1 >> 1);
    uVar15 = uVar10;
    if (!bVar7) {
      uVar15 = uVar11;
    }
  }
  if (uVar22 != 0) {
    uVar10 = uVar11;
  }
  psVar16 = psVar13;
  if (uVar22 != 0) {
    psVar16 = *(string **)(param_1 + 0x10);
  }
  sVar18 = *(size_t *)(pbVar23 + 8);
  if ((*pbVar23 & 1) == 0) {
    pbVar20 = pbVar23 + 1;
    sVar18 = (size_t)(*pbVar23 >> 1);
  }
  else {
    pbVar20 = *(byte **)(pbVar23 + 0x10);
  }
  if (sVar18 == 0) {
    uVar11 = 0;
    goto LAB_00ef8970;
  }
  if ((long)sVar18 <= (long)uVar10) {
    bVar2 = *pbVar20;
    psVar12 = psVar16;
    uVar11 = uVar10;
    do {
      if ((0xfffffffffffffffe < uVar11 - sVar18) ||
         (psVar12 = memchr(psVar12,(uint)bVar2,(uVar11 - sVar18) + 1), psVar12 == (string *)0x0))
      break;
      iVar9 = memcmp(psVar12,pbVar20,sVar18);
      if (iVar9 == 0) {
        if (psVar12 != psVar16 + uVar10) {
          uVar11 = (long)psVar12 - (long)psVar16;
          pbVar23 = PTR_DAT_0437d070;
          goto LAB_00ef8b34;
        }
        break;
      }
      psVar12 = psVar12 + 1;
      uVar11 = (long)(psVar16 + uVar10) - (long)psVar12;
    } while ((long)sVar18 <= (long)uVar11);
    pbVar23 = PTR_DAT_0437d070;
  }
LAB_00ef8824:
  sVar18 = (ulong)(pbVar23[0x18] >> 1);
  pbVar20 = pbVar23 + 0x19;
  if ((pbVar23[0x18] & 1) != 0) {
    sVar18 = *(size_t *)(pbVar23 + 0x20);
    pbVar20 = *(byte **)(pbVar23 + 0x28);
  }
  if (sVar18 == 0) {
    uVar10 = 0;
    goto LAB_00ef8a74;
  }
  if ((long)sVar18 <= (long)uVar10) {
    bVar2 = *pbVar20;
    psVar12 = psVar16 + uVar10;
    psVar13 = psVar16;
    do {
      if (0xfffffffffffffffe < uVar10 - sVar18) {
        return;
      }
      psVar13 = memchr(psVar13,(uint)bVar2,(uVar10 - sVar18) + 1);
      if (psVar13 == (string *)0x0) {
        return;
      }
      iVar9 = memcmp(psVar13,pbVar20,sVar18);
      if (iVar9 == 0) {
        if (psVar13 == psVar12) {
          return;
        }
        do {
          uVar10 = (long)psVar13 - (long)psVar16;
          if (uVar10 == 0xffffffffffffffff) {
            return;
          }
LAB_00ef8a74:
          while( true ) {
            std::string::erase((ulong)param_1,uVar10);
            bVar7 = ((byte)*param_1 & 1) != 0;
            psVar16 = *(string **)(param_1 + 0x10);
            uVar10 = (ulong)((byte)*param_1 >> 1);
            if (bVar7) {
              uVar10 = *(ulong *)(param_1 + 8);
            }
            if (!bVar7) {
              psVar16 = param_1 + 1;
            }
            sVar18 = (ulong)((byte)PTR_DAT_0437d070[0x18] >> 1);
            pbVar23 = PTR_DAT_0437d070 + 0x19;
            if ((PTR_DAT_0437d070[0x18] & 1) != 0) {
              sVar18 = *(size_t *)(PTR_DAT_0437d070 + 0x20);
              pbVar23 = *(byte **)(PTR_DAT_0437d070 + 0x28);
            }
            if (sVar18 != 0) break;
            uVar10 = 0;
          }
          if ((long)uVar10 < (long)sVar18) {
            return;
          }
          bVar2 = *pbVar23;
          psVar12 = psVar16 + uVar10;
          psVar13 = psVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar10 - sVar18) {
              return;
            }
            psVar13 = memchr(psVar13,(uint)bVar2,(uVar10 - sVar18) + 1);
            if (psVar13 == (string *)0x0) {
              return;
            }
            iVar9 = memcmp(psVar13,pbVar23,sVar18);
            if (iVar9 == 0) break;
            psVar13 = psVar13 + 1;
            uVar10 = (long)psVar12 - (long)psVar13;
            if ((long)uVar10 < (long)sVar18) {
              return;
            }
          }
          if (psVar13 == psVar12) {
            return;
          }
        } while( true );
      }
      psVar13 = psVar13 + 1;
      uVar10 = (long)psVar12 - (long)psVar13;
    } while ((long)sVar18 <= (long)uVar10);
  }
  return;
LAB_00ef8b34:
  if (uVar11 != 0xffffffffffffffff) {
LAB_00ef8970:
    std::string::erase((ulong)param_1,uVar11);
    bVar7 = ((byte)*param_1 & 1) != 0;
    psVar16 = psVar13;
    if (bVar7) {
      psVar16 = *(string **)(param_1 + 0x10);
    }
    uVar10 = (ulong)((byte)*param_1 >> 1);
    if (bVar7) {
      uVar10 = *(ulong *)(param_1 + 8);
    }
    sVar18 = *(size_t *)(pbVar23 + 8);
    pbVar20 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      pbVar20 = pbVar23 + 1;
      sVar18 = (ulong)(*pbVar23 >> 1);
    }
    if (sVar18 == 0) {
      uVar11 = 0;
    }
    else {
      if ((long)uVar10 < (long)sVar18) goto LAB_00ef8824;
      bVar2 = *pbVar20;
      psVar12 = psVar16;
      uVar11 = uVar10;
      while( true ) {
        if ((0xfffffffffffffffe < uVar11 - sVar18) ||
           (psVar12 = memchr(psVar12,(uint)bVar2,(uVar11 - sVar18) + 1), psVar12 == (string *)0x0))
        goto LAB_00ef8824;
        iVar9 = memcmp(psVar12,pbVar20,sVar18);
        if (iVar9 == 0) break;
        psVar12 = psVar12 + 1;
        uVar11 = (long)(psVar16 + uVar10) - (long)psVar12;
        if ((long)uVar11 < (long)sVar18) goto LAB_00ef8824;
      }
      if (psVar12 == psVar16 + uVar10) goto LAB_00ef8824;
      uVar11 = (long)psVar12 - (long)psVar16;
    }
    goto LAB_00ef8b34;
  }
  goto LAB_00ef8824;
}


