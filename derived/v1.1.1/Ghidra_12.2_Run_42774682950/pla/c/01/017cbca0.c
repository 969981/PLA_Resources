/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017cbca0; name: FUN_017cbca0
 */


/* WARNING: Removing unreachable block (ram,0x017cc394) */

void FUN_017cbca0(string *param_1)

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
  byte *pbVar19;
  string *psVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong local_78;
  ulong uStack_70;
  string *local_68;
  
  pbVar19 = PTR_DAT_043818a8;
  if (((*PTR_DAT_043818a0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_043818a0), iVar12 != 0)) {
    *(undefined8 *)pbVar19 = 0;
    *(undefined8 *)(pbVar19 + 8) = 0;
    *pbVar19 = 0x16;
    uVar6 = s__anonymous__0388d6f5._0_8_;
    *(undefined4 *)(pbVar19 + 8) = 0x7d73756f;
    *(undefined8 *)(pbVar19 + 0x10) = 0;
    *(undefined8 *)(pbVar19 + 0x18) = 0;
    pbVar19[0xc] = 0;
    *(undefined8 *)(pbVar19 + 1) = uVar6;
    pbVar19[0x18] = 0x2a;
    uVar6 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,s__anonymous_namespace__039071f8._13_3_
                    );
    *(undefined8 *)(pbVar19 + 0x20) = 0;
    *(undefined8 *)(pbVar19 + 0x28) = 0;
    *(undefined8 *)(pbVar19 + 0x26) = uVar6;
    uVar6 = s__anonymous_namespace__039071f8._0_8_;
    *(ulong *)(pbVar19 + 0x21) =
         CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
    *(undefined8 *)(pbVar19 + 0x19) = uVar6;
    pbVar19[0x2e] = 0;
    FUN_00100250(PTR_FUN_04379930,pbVar19,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043818a0);
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
  *(undefined8 *)(param_1 + 8) = 0x89;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<field::content::PokemonControllerComponent>, seperator_mark = int]"
         ,0x89);
  *(undefined1 *)((long)__dest + 0x89) = 0;
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
    uVar22 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar22 = uVar13;
    }
    uVar13 = uVar14;
  }
  else {
    uVar22 = 0;
    if (uVar13 != 0xffffffffffffffff) {
      uVar22 = uVar13;
    }
    if (((byte)sVar4 & 1) == 0) {
      uVar13 = (ulong)((byte)sVar4 >> 1);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar22 < uVar13 - 1) {
    uVar22 = uVar22 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar22,uVar14 - uVar22,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
    goto LAB_017cbea4;
  }
  **(undefined1 **)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar9 = DAT_043f1798;
  if (((byte)*param_1 & 1) == 0) goto LAB_017cbea4;
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 != 0) {
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
        FUN_02bcc824(plVar16,lVar21,0,8);
        goto LAB_017cbea0;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar21,0,8);
  }
LAB_017cbea0:
  *(undefined8 *)param_1 = 0;
LAB_017cbea4:
  uVar14 = local_78 >> 1 & 0x7f;
  bVar10 = (local_78 & 1) != 0;
  uVar13 = uVar14;
  if (bVar10) {
    uVar13 = uStack_70;
  }
  *(ulong *)param_1 = local_78;
  uVar23 = (uint)local_78 & 0xff;
  uVar24 = (uint)local_78 & 1;
  psVar1 = local_68;
  if (!bVar10) {
    psVar1 = param_1 + 1;
  }
  *(ulong *)(param_1 + 8) = uStack_70;
  *(string **)(param_1 + 0x10) = local_68;
  uVar22 = uStack_70;
  if (0xd < (long)uVar13) {
    psVar17 = psVar1 + uVar13;
    lVar18 = 1;
    while (uVar13 != 0xd) {
      uVar13 = uVar13 - 1;
      if (psVar1[uVar13] == (string)0x6b) {
        lVar21 = 0;
        do {
          if (lVar21 == -0xd) {
            if ((lVar18 != -0xd) &&
               (psVar17 + (~(ulong)psVar1 - 0xd) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,(ulong)(psVar17 + (~(ulong)psVar1 - 0xd) + -2));
              sVar4 = *param_1;
              uVar23 = (uint)(byte)sVar4;
              uVar24 = (byte)sVar4 & 1;
              uVar22 = *(ulong *)(param_1 + 8);
              uVar14 = (ulong)((byte)sVar4 >> 1);
            }
            goto LAB_017cbf78;
          }
          lVar7 = lVar21 + -2;
          lVar8 = lVar21 + 0xc;
          lVar21 = lVar21 + -1;
        } while (psVar17[lVar7] == *(string *)("seperator_mark" + lVar8));
      }
      psVar17 = psVar17 + -1;
      lVar18 = lVar18 + 1;
    }
  }
LAB_017cbf78:
  psVar1 = param_1 + 1;
  uVar13 = uVar14;
  if (uVar24 != 0) {
    uVar13 = uVar22;
  }
  if (uVar13 != 0) {
    psVar17 = psVar1;
    if (uVar24 != 0) {
      psVar17 = *(string **)(param_1 + 0x10);
    }
    iVar12 = isblank((uint)(byte)*psVar17);
    if (iVar12 == 0) {
      uVar24 = uVar23 & 1;
      uVar14 = (ulong)(uVar23 >> 1);
    }
    else {
      do {
        std::string::erase((ulong)param_1,0);
        sVar4 = *param_1;
        uVar23 = (uint)(byte)sVar4;
        uVar14 = (ulong)((byte)sVar4 >> 1);
        uVar22 = *(ulong *)(param_1 + 8);
        uVar24 = (byte)sVar4 & 1;
        uVar13 = uVar14;
        if (((byte)sVar4 & 1) != 0) {
          uVar13 = uVar22;
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
  bVar10 = uVar24 == 0;
  uVar13 = uVar14;
  if (!bVar10) {
    uVar13 = uVar22;
  }
  if (uVar13 != 0) {
    do {
      psVar17 = *(string **)(param_1 + 0x10);
      uVar14 = (ulong)(uVar23 >> 1);
      if (bVar10) {
        psVar17 = param_1 + 1;
        uVar13 = uVar14;
      }
      else {
        uVar13 = uVar22;
      }
      iVar12 = isblank((uint)(byte)psVar17[uVar13 - 1]);
      if (iVar12 == 0) break;
      FUN_017c0e44(param_1);
      sVar4 = *param_1;
      uVar23 = (uint)(byte)sVar4;
      bVar10 = ((byte)sVar4 & 1) == 0;
      uVar22 = *(ulong *)(param_1 + 8);
      uVar14 = (ulong)((byte)sVar4 >> 1);
      uVar13 = uVar14;
      if (!bVar10) {
        uVar13 = uVar22;
      }
    } while (uVar13 != 0);
    uVar24 = uVar23 & 1;
  }
  if (uVar24 != 0) {
    uVar14 = uVar22;
  }
  psVar17 = psVar1;
  if (uVar24 != 0) {
    psVar17 = *(string **)(param_1 + 0x10);
  }
  sVar2 = *(size_t *)(pbVar19 + 8);
  pbVar3 = *(byte **)(pbVar19 + 0x10);
  if ((*pbVar19 & 1) == 0) {
    pbVar3 = pbVar19 + 1;
    sVar2 = (ulong)(*pbVar19 >> 1);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_017cc1a4;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar5 = *pbVar3;
    psVar15 = psVar17;
    uVar13 = uVar14;
    do {
      if ((0xfffffffffffffffe < uVar13 - sVar2) ||
         (psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1), psVar15 == (string *)0x0))
      break;
      iVar12 = memcmp(psVar15,pbVar3,sVar2);
      if (iVar12 == 0) {
        if (psVar15 != psVar17 + uVar14) {
          pbVar19 = PTR_DAT_043818a8;
          goto LAB_017cc36c;
        }
        break;
      }
      psVar15 = psVar15 + 1;
      uVar13 = (long)(psVar17 + uVar14) - (long)psVar15;
    } while ((long)sVar2 <= (long)uVar13);
    pbVar19 = PTR_DAT_043818a8;
  }
LAB_017cc0b8:
  sVar2 = (ulong)(pbVar19[0x18] >> 1);
  pbVar3 = pbVar19 + 0x19;
  if ((pbVar19[0x18] & 1) != 0) {
    sVar2 = *(size_t *)(pbVar19 + 0x20);
    pbVar3 = *(byte **)(pbVar19 + 0x28);
  }
  if (sVar2 == 0) {
    uVar13 = 0;
    goto LAB_017cc254;
  }
  if ((long)sVar2 <= (long)uVar14) {
    bVar5 = *pbVar3;
    psVar20 = psVar17 + uVar14;
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
          if (psVar15 == psVar20) {
            return;
          }
          uVar13 = (long)psVar15 - (long)psVar17;
          if (uVar13 == 0xffffffffffffffff) {
            return;
          }
LAB_017cc254:
          while( true ) {
            std::string::erase((ulong)param_1,uVar13);
            bVar10 = ((byte)*param_1 & 1) != 0;
            uVar13 = (ulong)((byte)*param_1 >> 1);
            if (bVar10) {
              uVar13 = *(ulong *)(param_1 + 8);
            }
            psVar17 = psVar1;
            if (bVar10) {
              psVar17 = *(string **)(param_1 + 0x10);
            }
            sVar2 = (ulong)((byte)PTR_DAT_043818a8[0x18] >> 1);
            pbVar19 = PTR_DAT_043818a8 + 0x19;
            if ((PTR_DAT_043818a8[0x18] & 1) != 0) {
              sVar2 = *(size_t *)(PTR_DAT_043818a8 + 0x20);
              pbVar19 = *(byte **)(PTR_DAT_043818a8 + 0x28);
            }
            if (sVar2 != 0) break;
            uVar13 = 0;
          }
          if ((long)uVar13 < (long)sVar2) {
            return;
          }
          bVar5 = *pbVar19;
          psVar20 = psVar17 + uVar13;
          psVar15 = psVar17;
          while( true ) {
            if (0xfffffffffffffffe < uVar13 - sVar2) {
              return;
            }
            psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1);
            if (psVar15 == (string *)0x0) {
              return;
            }
            iVar12 = memcmp(psVar15,pbVar19,sVar2);
            if (iVar12 == 0) break;
            psVar15 = psVar15 + 1;
            uVar13 = (long)psVar20 - (long)psVar15;
            if ((long)uVar13 < (long)sVar2) {
              return;
            }
          }
        } while( true );
      }
      psVar15 = psVar15 + 1;
      uVar14 = (long)psVar20 - (long)psVar15;
    } while ((long)sVar2 <= (long)uVar14);
  }
  return;
LAB_017cc36c:
  uVar13 = (long)psVar15 - (long)psVar17;
  while( true ) {
    if (uVar13 == 0xffffffffffffffff) goto LAB_017cc0b8;
LAB_017cc1a4:
    std::string::erase((ulong)param_1,uVar13);
    bVar10 = ((byte)*param_1 & 1) != 0;
    psVar17 = psVar1;
    if (bVar10) {
      psVar17 = *(string **)(param_1 + 0x10);
    }
    sVar2 = *(size_t *)(pbVar19 + 8);
    pbVar3 = *(byte **)(pbVar19 + 0x10);
    uVar14 = (ulong)((byte)*param_1 >> 1);
    if (bVar10) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    if ((*pbVar19 & 1) == 0) {
      pbVar3 = pbVar19 + 1;
      sVar2 = (ulong)(*pbVar19 >> 1);
    }
    if (sVar2 != 0) break;
    uVar13 = 0;
  }
  if ((long)uVar14 < (long)sVar2) goto LAB_017cc0b8;
  bVar5 = *pbVar3;
  psVar15 = psVar17;
  uVar13 = uVar14;
  while( true ) {
    if ((0xfffffffffffffffe < uVar13 - sVar2) ||
       (psVar15 = memchr(psVar15,(uint)bVar5,(uVar13 - sVar2) + 1), psVar15 == (string *)0x0))
    goto LAB_017cc0b8;
    iVar12 = memcmp(psVar15,pbVar3,sVar2);
    if (iVar12 == 0) break;
    psVar15 = psVar15 + 1;
    uVar13 = (long)(psVar17 + uVar14) - (long)psVar15;
    if ((long)uVar13 < (long)sVar2) goto LAB_017cc0b8;
  }
  if (psVar15 == psVar17 + uVar14) goto LAB_017cc0b8;
  goto LAB_017cc36c;
}


