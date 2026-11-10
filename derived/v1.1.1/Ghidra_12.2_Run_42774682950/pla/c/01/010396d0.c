/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010396d0; name: FUN_010396d0
 */


void FUN_010396d0(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  string *psVar12;
  uint uVar13;
  byte bVar14;
  ulong uVar15;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_0437e1f8 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_0437e1f8);
    puVar3 = PTR_DAT_0437e200;
    if (iVar7 != 0) {
      *(undefined8 *)PTR_DAT_0437e200 = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *puVar3 = 0x16;
      uVar2 = s__anonymous__0388d6f5._0_8_;
      *(undefined4 *)(puVar3 + 8) = 0x7d73756f;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined8 *)(puVar3 + 1) = uVar2;
      puVar3[0x18] = 0x2a;
      uVar2 = CONCAT53(s__anonymous_namespace__039071f8._16_5_,
                       s__anonymous_namespace__039071f8._13_3_);
      puVar3[0xc] = 0;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      *(undefined8 *)(puVar3 + 0x28) = 0;
      *(undefined8 *)(puVar3 + 0x26) = uVar2;
      uVar2 = s__anonymous_namespace__039071f8._0_8_;
      *(ulong *)(puVar3 + 0x21) =
           CONCAT35(s__anonymous_namespace__039071f8._13_3_,s__anonymous_namespace__039071f8._8_5_);
      *(undefined8 *)(puVar3 + 0x19) = uVar2;
      puVar3[0x2e] = 0;
      FUN_00100250(PTR_FUN_04379930,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e1f8);
    }
  }
  plVar4 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar11 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar11 = plVar4;
  }
  __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x90,8);
  *(undefined8 *)param_1 = 0x91;
  *(undefined8 *)(param_1 + 8) = 0x82;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<gfl::audio::AudioComponent>, seperator_mark = int]"
         ,0x82);
  *(undefined1 *)((long)__dest + 0x82) = 0;
  cVar6 = (char)param_1;
  std::string::find(cVar6,0x5b);
  uVar8 = std::string::find(cVar6,0x3d);
  uVar9 = std::string::rfind(cVar6,0x5d);
  sVar1 = *param_1;
  if (uVar9 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar9 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar9 = *(ulong *)(param_1 + 8);
    }
    uVar15 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar15 = uVar8;
    }
    uVar8 = uVar9;
  }
  else {
    uVar15 = 0;
    if (uVar8 != 0xffffffffffffffff) {
      uVar15 = uVar8;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar8 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar15 < uVar8 - 1) {
    uVar15 = uVar15 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar15,uVar9 - uVar15,(allocator *)param_1);
  FUN_0103944c(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar10 = FUN_01039324(param_1);
  if (lVar10 != -1) {
    std::string::erase((ulong)param_1,lVar10 - 2);
  }
  sVar1 = *param_1;
  uVar13 = (uint)(byte)sVar1;
  uVar15 = (ulong)((byte)sVar1 >> 1);
  uVar8 = *(ulong *)(param_1 + 8);
  bVar14 = (byte)sVar1 & 1;
  uVar9 = uVar8;
  if (((byte)sVar1 & 1) == 0) {
    uVar9 = uVar15;
  }
  if (uVar9 != 0) {
    psVar12 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar12 = param_1 + 1;
    }
    iVar7 = isblank((uint)(byte)*psVar12);
    if (iVar7 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar13 = (uint)(byte)sVar1;
        uVar15 = (ulong)((byte)sVar1 >> 1);
        uVar8 = *(ulong *)(param_1 + 8);
        bVar14 = (byte)sVar1 & 1;
        uVar9 = uVar15;
        if (((byte)sVar1 & 1) != 0) {
          uVar9 = uVar8;
        }
        if (uVar9 == 0) break;
        psVar12 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar12 = *(string **)(param_1 + 0x10);
        }
        iVar7 = isblank((uint)(byte)*psVar12);
      } while (iVar7 != 0);
    }
  }
  bVar5 = bVar14 == 0;
  uVar9 = uVar8;
  if (bVar14 == 0) {
    uVar9 = uVar15;
  }
  while (uVar9 != 0) {
    while( true ) {
      psVar12 = *(string **)(param_1 + 0x10);
      if (bVar5) {
        psVar12 = param_1 + 1;
        uVar8 = (ulong)(uVar13 >> 1);
      }
      iVar7 = isblank((uint)(byte)psVar12[uVar8 - 1]);
      if (iVar7 == 0) goto LAB_010398d8;
      FUN_01039340(param_1);
      sVar1 = *param_1;
      uVar13 = (uint)(byte)sVar1;
      bVar5 = ((byte)sVar1 & 1) == 0;
      uVar8 = *(ulong *)(param_1 + 8);
      uVar9 = uVar8;
      if (((byte)sVar1 & 1) != 0) break;
      if ((byte)sVar1 >> 1 == 0) goto LAB_010398d8;
    }
  }
LAB_010398d8:
  puVar3 = PTR_DAT_0437e200;
  uVar8 = FUN_01039380(param_1,PTR_DAT_0437e200);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar8);
      uVar8 = FUN_01039380(param_1,puVar3);
    } while (uVar8 != 0xffffffffffffffff);
  }
  uVar8 = FUN_01039380(param_1,puVar3 + 0x18);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar8);
      uVar8 = FUN_01039380(param_1,puVar3 + 0x18);
    } while (uVar8 != 0xffffffffffffffff);
  }
  return;
}


