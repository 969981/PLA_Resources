/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fac150; name: FUN_00fac150
 */


void FUN_00fac150(string *param_1)

{
  string *psVar1;
  size_t sVar2;
  byte *pbVar3;
  string sVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  void *__dest;
  ulong uVar13;
  ulong uVar14;
  string *psVar15;
  long *plVar16;
  string *psVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  string *psVar24;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar23 = PTR_DAT_0437da38;
  if (((*PTR_DAT_0437da30 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437da30), iVar12 != 0)) {
    *(undefined8 *)pbVar23 = 0;
    *(undefined8 *)(pbVar23 + 8) = 0;
    *pbVar23 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar23 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar23 + 0x10) = 0;
    *(undefined8 *)(pbVar23 + 0x18) = 0;
    pbVar23[0xc] = 0;
    *(undefined8 *)(pbVar23 + 1) = uVar6;
    pbVar23[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar23 + 0x20) = 0;
    *(undefined8 *)(pbVar23 + 0x28) = 0;
    *(undefined8 *)(pbVar23 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar23 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar23 + 0x19) = uVar6;
    pbVar23[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar23,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437da30);
  }
  plVar9 = DAT_043f1798;
  lVar18 = tpidr_el0;
  plVar16 = *(long **)(lVar18 + 0x20);
  if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
    *(long **)(lVar18 + 0x20) = DAT_043f1798;
    plVar16 = plVar9;
  }
  __dest = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,0x90,8);
  *(undefined8 *)param_1 = 0x91;
  *(undefined8 *)(param_1 + 8) = 0x84;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<gfl::engine::TransformObject>, seperator_mark = int]"
         ,0x84);
  *(undefined1 *)((long)__dest + 0x84) = 0;
  cVar11 = (char)param_1;
  std::string::find(cVar11,0x5b);
  uVar13 = std::string::find(cVar11,0x3d);
  uVar14 = std::string::rfind(cVar11,0x5d);
  sVar4 = *param_1;
  if (uVar14 == 0xffffffffffffffff) {
    if (((byte)sVar4 & 1) == 0) {
      uVar14 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    uVar20 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar20 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar20 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar20 = uVar13;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar20 < uVar13 - 1) {
    uVar20 = uVar20 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar20,uVar14 - uVar20,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_00fac344;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar9 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_00fac344;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    plVar16 = *(long **)(lVar18 + 0x20);
    if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
      *(long **)(lVar18 + 0x20) = DAT_043f1798;
      plVar16 = plVar9;
    }
    uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar19,0,8);
        goto LAB_00fac340;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar19,0,8);
  }
LAB_00fac340:
  *(undefined8 *)param_1 = 0;
LAB_00fac344:
  uVar14 = local_78 >> 1 & 0x7f;
  bVar10 = (local_78 & 1) != 0;
  uVar13 = uVar14;
  if (bVar10) {
    uVar13 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar21 = (uint)local_78 & 0xff;
  uVar22 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar10) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar20 = uStack_70;
  if (0xd < (long)uVar13) {
    psVar17 = psVar1 + uVar13;
    lVar18 = 1;
    while (uVar13 != 0xd) {
      uVar13 = uVar13 - 1;
      if (psVar1[uVar13] == (string)0x6b) {
        lVar19 = 0;
        do {
          if (lVar19 == -0xd) {
            if ((lVar18 != -0xd) &&
               (psVar17 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar17 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar21 = (uint)(byte)sVar4;
              uVar22 = (byte)sVar4 & 1;
              uVar20 = *(ulong *)(param_1 + 8);
              uVar14 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_00fac418;
          }
          lVar7 = lVar19 + -2;
          lVar8 = lVar19 + 0xc;
          lVar19 = lVar19 + -1;
        } while (psVar17[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar17 = psVar17 + -1;
      lVar18 = lVar18 + 1;
    }
  }
LAB_00fac418:
  psVar1 = param_1 + 1;
  uVar13 = uVar14;
  if (uVar22 != 0) {
    uVar13 = uVar20;
  }
  if (uVar13 != 0) {
    psVar17 = psVar1;
    if (uVar22 != 0) {
      psVar17 = *(string **)(param_1 + 0x10);
    }
    iVar12 = isblank((uint)(byte)*psVar17);
    if (iVar12 == 0) {
      uVar22 = uVar21 & 1;
      uVar14 = (ulong)(uVar21 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar21 = (uint)(byte)sVar4;
        uVar14 = (ulong)((byte)sVar4 >> 1);
        uVar20 = *(ulong *)(param_1 + 8);
        uVar22 = (byte)sVar4 & 1;
        uVar13 = uVar14;
        if (((byte)sVar4 & 1) != 0) {
          uVar13 = uVar20;
        }
        if (uVar13 == 0) break;
        psVar17 = psVar1;
        if (((byte)sVar4 & 1) != 0) {
          psVar17 = *(string **)(param_1 + 0x10);
        }
        iVar12 = isblank((uint)(byte)*psVar17);
      } while (iVar12 != 0);
    }
  }
  bVar10 = uVar22 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = uVar20;
  }
  while (uVar13 != 0) {
    psVar17 = *(string **)(param_1 + 0x10);
    uVar14 = (ulong)(uVar21 >> 1);
    if (bVar10) {
      psVar17 = param_1 + 1;
      uVar13 = uVar14;
    }
    else {
      uVar13 = uVar20;
    }
    iVar12 = isblank((uint)(byte)psVar17[uVar13 - 1]);
    if (iVar12 == 0) {
      uVar22 = uVar21 & 1;
      break;
    }
    FUN_00fa5904(param_1);
    sVar4 = *param_1;
    uVar21 = (uint)(byte)sVar4;
    bVar10 = ((byte)sVar4 & 1) == 0;
    uVar20 = *(ulong *)(param_1 + 8);
    uVar22 = (byte)sVar4 & 1;
    uVar14 = (ulong)((byte)sVar4 >> 1);
    uVar13 = uVar14;
    if (!bVar10) {
      uVar13 = uVar20;
    }
  }
  psVar17 = psVar1;
  if (uVar22 != 0) {
    uVar14 = uVar20;
    psVar17 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar23 + 8);
  pbVar3 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    pbVar3 = pbVar23 + 1;
    sVar2 = (ulong)(*pbVar23 >> 1);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_00fac658;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar5 = *pbVar3;
    psVar24 = psVar17 + uVar14;
    psVar15 = psVar17;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar2) ||
         (psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1), psVar15 == (string *)0x0))
      break;
      iVar12 = memcmp(psVar15,pbVar3,sVar2);
      if (iVar12 == 0) goto LAB_00fac804;
      psVar15 = psVar15 + 1;
      uVar13 = (long)psVar24 - (long)psVar15;
    } while ((long)sVar2 <= (long)uVar13);
LAB_00fac524:
    pbVar23 = PTR_DAT_0437da38;
  }
LAB_00fac52c:
  sVar2 = (ulong)(pbVar23[0x18] >> 1);
  pbVar3 = pbVar23 + 0x19;
  if ((pbVar23[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar23 + 0x20);
    pbVar3 = *(byte **)(pbVar23 + 0x28);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_00fac700;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar5 = *pbVar3;
    psVar24 = psVar17 + uVar14;
    psVar15 = psVar17;
    do {
      if (0xfffffffffffffffe < uVar14 - sVar2) {
        return;
      }
      psVar15 = memchr(psVar15,(uint)bVar5,(uVar14 - sVar2) + 1);
      if (psVar15 == (string *)0x0) {
        return;
      }
      iVar12 = memcmp(psVar15,pbVar3,sVar2);
      if (iVar12 == 0) {
        do {
          if (psVar15 == psVar24) {
            return;
          }
          uVar13 = (long)psVar15 - (long)psVar17;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_00fac700:
          while( true ) {
            std::string::erase((ulong)param_1,uVar13);
            uVar13 = (ulong)((byte)*param_1 >> 1);
            psVar17 = psVar1;
            if (((byte)*param_1 & 1) != 0) {
              uVar13 = *(ulong *)(param_1 + 8);
              psVar17 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_0437da38[0x18] >> 1);
            pbVar23 = PTR_DAT_0437da38 + 0x19;
            if ((PTR_DAT_0437da38[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_0437da38 + 0x20);
              pbVar23 = *(byte **)(PTR_DAT_0437da38 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar23;
          psVar24 = psVar17 + uVar13;
          psVar15 = psVar17;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar2) {
              return;
            }
            psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1);
            if (psVar15 == (string *)0x0) {
              return;
            }
            iVar12 = memcmp(psVar15,pbVar23,sVar2);
            if (iVar12 == 0) break;
            psVar15 = psVar15 + 1;
            uVar13 = (long)psVar24 - (long)psVar15;
            if ((long)uVar13 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar15 = psVar15 + 1;
      uVar14 = (long)psVar24 - (long)psVar15;
    } while ((long)sVar2 <= (long)uVar14);
  }
  return;
LAB_00fac804:
  if (psVar15 == psVar24) goto LAB_00fac524;
  uVar13 = (long)psVar15 - (long)psVar17;
  while( true ) {
    pbVar23 = PTR_DAT_0437da38;
    if (uVar13 == 0xffffffffffffffff) goto LAB_00fac52c;
LAB_00fac658:
    std::string::erase((ulong)param_1,uVar13);
    bVar10 = ((byte)*param_1 & 1) != 0;
    uVar14 = (ulong)((byte)*param_1 >> 1);
    if (bVar10) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    psVar17 = psVar1;
    if (bVar10) {
      psVar17 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar23 + 8);
    pbVar3 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      pbVar3 = pbVar23 + 1;
      sVar2 = (ulong)(*pbVar23 >> 1);
    }
    if (sVar2 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar2) goto LAB_00fac524;
  bVar5 = *pbVar3;
  psVar24 = psVar17 + uVar14;
  psVar15 = psVar17;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar2) ||
       (psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1), psVar15 == (string *)0x0))
    goto LAB_00fac524;
    iVar12 = memcmp(psVar15,pbVar3,sVar2);
    if (iVar12 == 0) break;
    psVar15 = psVar15 + 1;
    uVar13 = (long)psVar24 - (long)psVar15;
    if ((long)uVar13 < (long)sVar2) goto LAB_00fac524;
  }
  goto LAB_00fac804;
}


