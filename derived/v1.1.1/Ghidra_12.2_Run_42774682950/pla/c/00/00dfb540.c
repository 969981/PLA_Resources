/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dfb540; name: FUN_00dfb540
 */


/* WARNING: Removing unreachable block (ram,0x00dfba50) */
/* WARNING: Removing unreachable block (ram,0x00dfbb24) */

void FUN_00dfb540(string *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  string sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  void *__dest;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  string *psVar14;
  long *plVar15;
  string *psVar16;
  string *psVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*PTR_DAT_0437be88 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437be88);
    puVar6 = PTR_DAT_0437be90;
    if (iVar10 != 0) {
      *(undefined8 *)PTR_DAT_0437be90 = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *puVar6 = 0x16;
      uVar5 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar6 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 1) = uVar5;
      puVar6[0x18] = 0x2a;
      uVar5 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar6[0xc] = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x26) = uVar5;
      uVar5 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar6 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar6 + 0x19) = uVar5;
      puVar6[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437be88);
    }
  }
  plVar7 = DAT_043f1798;
  lVar13 = tpidr_el0;
  plVar15 = *(long **)(lVar13 + 0x20);
  if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
    *(long **)(lVar13 + 0x20) = DAT_043f1798;
    plVar15 = plVar7;
  }
  __dest = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,0x90,8);
  *(undefined8 *)param_1 = 0x91;
  *(undefined8 *)(param_1 + 8) = 0x85;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<event_script::EventProgressTimeManager>, seperator_mark = int]"
         ,0x85);
  *(undefined1 *)((long)__dest + 0x85) = 0;
  cVar9 = (char)param_1;
  std::string::find(cVar9,0x5b);
  uVar11 = std::string::find(cVar9,0x3d);
  uVar12 = std::string::rfind(cVar9,0x5d);
  sVar3 = *param_1;
  if (uVar12 == 0xffffffffffffffff) {
    if (((byte)sVar3 & 1) == 0) {
      uVar12 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 8);
    }
    uVar18 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar18 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar18 = 0;
    if (uVar11 != 0xffffffffffffffff) {
      uVar18 = uVar11;
    }
    if (((byte)sVar3 & 1) == 0) {
      uVar11 = (ulong)((byte)sVar3 >> 1);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar18 < uVar11 - 1) {
    uVar18 = uVar18 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar18,uVar12 - uVar18,(allocator *)param_1);
  FUN_00df4e84(param_1);
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)param_1 = local_78;
  lVar13 = FUN_00df4e28(param_1);
  if (lVar13 != -1) {
    std::string::erase((ulong)param_1,lVar13 - 2);
  }
  sVar3 = *param_1;
  uVar19 = (uint)(byte)sVar3;
  uVar12 = (ulong)((byte)sVar3 >> 1);
  uVar18 = *(ulong *)(param_1 + 8);
  uVar20 = (byte)sVar3 & 1;
  uVar11 = uVar12;
  if (((byte)sVar3 & 1) != 0) {
    uVar11 = uVar18;
  }
  if (uVar11 != 0) {
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
        uVar12 = (ulong)((byte)sVar3 >> 1);
        uVar18 = *(ulong *)(param_1 + 8);
        uVar20 = (byte)sVar3 & 1;
        uVar11 = uVar12;
        if (((byte)sVar3 & 1) != 0) {
          uVar11 = uVar18;
        }
        if (uVar11 == 0) break;
        psVar16 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar16 = *(string **)(param_1 + 0x10);
        }
        iVar10 = isblank((uint)(byte)*psVar16);
      } while (iVar10 != 0);
    }
  }
  bVar8 = uVar20 == 0;
  uVar11 = uVar12;
  if (!bVar8) {
    uVar11 = uVar18;
  }
  if (uVar11 != 0) {
    do {
      psVar16 = *(string **)(param_1 + 0x10);
      uVar12 = (ulong)(uVar19 >> 1);
      if (bVar8) {
        psVar16 = param_1 + 1;
        uVar11 = uVar12;
      }
      else {
        uVar11 = uVar18;
      }
      iVar10 = isblank((uint)(byte)psVar16[uVar11 - 1]);
      if (iVar10 == 0) break;
      FUN_00df4e44(param_1);
      sVar3 = *param_1;
      uVar19 = (uint)(byte)sVar3;
      bVar8 = ((byte)sVar3 & 1) == 0;
      uVar18 = *(ulong *)(param_1 + 8);
      uVar12 = (ulong)((byte)sVar3 >> 1);
      uVar11 = uVar12;
      if (!bVar8) {
        uVar11 = uVar18;
      }
    } while (uVar11 != 0);
    uVar20 = uVar19 & 1;
  }
  psVar16 = *(string **)(param_1 + 0x10);
  if (uVar20 == 0) {
    psVar16 = param_1 + 1;
  }
  sVar1 = *(size_t *)(PTR_DAT_0437be90 + 8);
  pbVar2 = *(byte **)(PTR_DAT_0437be90 + 0x10);
  if (uVar20 != 0) {
    uVar12 = uVar18;
  }
  if ((*PTR_DAT_0437be90 & 1) == 0) {
    pbVar2 = PTR_DAT_0437be90 + 1;
    sVar1 = (ulong)((byte)*PTR_DAT_0437be90 >> 1);
  }
  if (sVar1 == 0) {
    uVar11 = 0;
    goto LAB_00dfb994;
  }
  if ((long)sVar1 <= (long)uVar12) {
    bVar4 = *pbVar2;
    psVar17 = psVar16 + uVar12;
    psVar14 = psVar16;
    uVar11 = uVar12;
    do {
      if ((0xfffffffffffffffe < uVar11 - sVar1) ||
         (psVar14 = memchr(psVar14,(uint)bVar4,(uVar11 - sVar1) + 1), psVar14 == (string *)0x0))
      break;
      iVar10 = memcmp(psVar14,pbVar2,sVar1);
      if (iVar10 == 0) goto LAB_00dfb980;
      psVar14 = psVar14 + 1;
      uVar11 = (long)psVar17 - (long)psVar14;
    } while ((long)sVar1 <= (long)uVar11);
  }
LAB_00dfb8d8:
  sVar1 = (ulong)((byte)PTR_DAT_0437be90[0x18] >> 1);
  pbVar2 = PTR_DAT_0437be90 + 0x19;
  if ((PTR_DAT_0437be90[0x18] & 1) != 0) {
    sVar1 = *(size_t *)(PTR_DAT_0437be90 + 0x20);
    pbVar2 = *(byte **)(PTR_DAT_0437be90 + 0x28);
  }
  if (sVar1 == 0) {
    uVar11 = 0;
    goto LAB_00dfba68;
  }
  if ((long)sVar1 <= (long)uVar12) {
    bVar4 = *pbVar2;
    psVar17 = psVar16 + uVar12;
    psVar14 = psVar16;
    do {
      if (0xfffffffffffffffe < uVar12 - sVar1) {
        return;
      }
      psVar14 = memchr(psVar14,(uint)bVar4,(uVar12 - sVar1) + 1);
      if (psVar14 == (string *)0x0) {
        return;
      }
      iVar10 = memcmp(psVar14,pbVar2,sVar1);
      if (iVar10 == 0) {
        do {
          if (psVar14 == psVar17) {
            return;
          }
          uVar11 = (long)psVar14 - (long)psVar16;
          if (uVar11 == 0xffffffffffffffff) {
            return;
          }
LAB_00dfba68:
          while( true ) {
            std::string::erase((ulong)param_1,uVar11);
            uVar11 = (ulong)((byte)*param_1 >> 1);
            psVar16 = param_1 + 1;
            if (((byte)*param_1 & 1) != 0) {
              uVar11 = *(ulong *)(param_1 + 8);
              psVar16 = *(string **)(param_1 + 0x10);
            }
            sVar1 = (ulong)((byte)PTR_DAT_0437be90[0x18] >> 1);
            pbVar2 = PTR_DAT_0437be90 + 0x19;
            if ((PTR_DAT_0437be90[0x18] & 1) != 0) {
              sVar1 = *(size_t *)(PTR_DAT_0437be90 + 0x20);
              pbVar2 = *(byte **)(PTR_DAT_0437be90 + 0x28);
            }
            if (sVar1 != 0) break;
            uVar11 = 0;
          }
          if ((long)uVar11 < (long)sVar1) {
            return;
          }
          bVar4 = *pbVar2;
          psVar17 = psVar16 + uVar11;
          psVar14 = psVar16;
          while( true ) {
            if (0xfffffffffffffffe < uVar11 - sVar1) {
              return;
            }
            psVar14 = memchr(psVar14,(uint)bVar4,(uVar11 - sVar1) + 1);
            if (psVar14 == (string *)0x0) {
              return;
            }
            iVar10 = memcmp(psVar14,pbVar2,sVar1);
            if (iVar10 == 0) break;
            psVar14 = psVar14 + 1;
            uVar11 = (long)psVar17 - (long)psVar14;
            if ((long)uVar11 < (long)sVar1) {
              return;
            }
          }
        } while( true );
      }
      psVar14 = psVar14 + 1;
      uVar12 = (long)psVar17 - (long)psVar14;
    } while ((long)sVar1 <= (long)uVar12);
  }
  return;
LAB_00dfb980:
  if ((psVar14 == psVar17) || (uVar11 = (long)psVar14 - (long)psVar16, uVar11 == 0xffffffffffffffff)
     ) goto LAB_00dfb8d8;
LAB_00dfb994:
  while( true ) {
    std::string::erase((ulong)param_1,uVar11);
    psVar16 = param_1 + 1;
    uVar12 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      psVar16 = *(string **)(param_1 + 0x10);
      uVar12 = *(ulong *)(param_1 + 8);
    }
    sVar1 = *(size_t *)(PTR_DAT_0437be90 + 8);
    pbVar2 = *(byte **)(PTR_DAT_0437be90 + 0x10);
    if ((*PTR_DAT_0437be90 & 1) == 0) {
      pbVar2 = PTR_DAT_0437be90 + 1;
      sVar1 = (ulong)((byte)*PTR_DAT_0437be90 >> 1);
    }
    if (sVar1 != 0) break;
    uVar11 = 0;
  }
  if ((long)uVar12 < (long)sVar1) goto LAB_00dfb8d8;
  bVar4 = *pbVar2;
  psVar17 = psVar16 + uVar12;
  psVar14 = psVar16;
  uVar11 = uVar12;
  while( true ) {
    if ((0xfffffffffffffffe < uVar11 - sVar1) ||
       (psVar14 = memchr(psVar14,(uint)bVar4,(uVar11 - sVar1) + 1), psVar14 == (string *)0x0))
    goto LAB_00dfb8d8;
    iVar10 = memcmp(psVar14,pbVar2,sVar1);
    if (iVar10 == 0) break;
    psVar14 = psVar14 + 1;
    uVar11 = (long)psVar17 - (long)psVar14;
    if ((long)uVar11 < (long)sVar1) goto LAB_00dfb8d8;
  }
  goto LAB_00dfb980;
}


