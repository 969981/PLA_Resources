/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e19720; name: FUN_01e19720
 */


void FUN_01e19720(string *param_1)

{
  string sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  string *psVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_04382b08 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04382b08);
    puVar3 = PTR_DAT_04382b10;
    if (iVar6 != 0) {
      *(undefined8 *)PTR_DAT_04382b10 = 0;
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
      __cxa_guard_release(PTR_DAT_04382b08);
    }
  }
  __dest = operator_new(0x90);
  *(undefined8 *)param_1 = 0x91;
  *(undefined8 *)(param_1 + 8) = 0x89;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::player::PlayerStateContext>, seperator_mark = int]"
         ,0x89);
  *(undefined1 *)((long)__dest + 0x89) = 0;
  cVar5 = (char)param_1;
  std::string::find(cVar5,0x5b);
  uVar7 = std::string::find(cVar5,0x3d);
  uVar8 = std::string::rfind(cVar5,0x5d);
  sVar1 = *param_1;
  if (uVar8 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar8 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 8);
    }
    uVar12 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar12 = uVar7;
    }
    uVar7 = uVar8;
  }
  else {
    uVar12 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar12 = uVar7;
    }
    if (((byte)sVar1 & 1) == 0) {
      uVar7 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 8);
    }
  }
  if (uVar12 < uVar7 - 1) {
    uVar12 = uVar12 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar12,uVar8 - uVar12,(allocator *)param_1);
  FUN_01e1854c(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar9 = FUN_01e18424(param_1);
  if (lVar9 != -1) {
    std::string::erase((ulong)param_1,lVar9 - 2);
  }
  sVar1 = *param_1;
  uVar11 = (uint)(byte)sVar1;
  uVar8 = (ulong)((byte)sVar1 >> 1);
  uVar12 = *(ulong *)(param_1 + 8);
  bVar13 = (byte)sVar1 & 1;
  uVar7 = uVar8;
  if (((byte)sVar1 & 1) != 0) {
    uVar7 = uVar12;
  }
  if (uVar7 != 0) {
    psVar10 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar10 = param_1 + 1;
    }
    iVar6 = isblank((uint)(byte)*psVar10);
    if (iVar6 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar11 = (uint)(byte)sVar1;
        uVar8 = (ulong)((byte)sVar1 >> 1);
        uVar12 = *(ulong *)(param_1 + 8);
        bVar13 = (byte)sVar1 & 1;
        uVar7 = uVar8;
        if (((byte)sVar1 & 1) != 0) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) break;
        psVar10 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar10 = *(string **)(param_1 + 0x10);
        }
        iVar6 = isblank((uint)(byte)*psVar10);
      } while (iVar6 != 0);
    }
  }
  bVar4 = bVar13 == 0;
  if (!bVar4) {
    uVar8 = uVar12;
  }
  while (uVar8 != 0) {
    psVar10 = *(string **)(param_1 + 0x10);
    if (bVar4) {
      psVar10 = param_1 + 1;
      uVar12 = (ulong)(uVar11 >> 1);
    }
    iVar6 = isblank((uint)(byte)psVar10[uVar12 - 1]);
    if (iVar6 == 0) break;
    FUN_01e18440(param_1);
    sVar1 = *param_1;
    uVar11 = (uint)(byte)sVar1;
    bVar4 = ((byte)sVar1 & 1) == 0;
    uVar12 = *(ulong *)(param_1 + 8);
    uVar8 = (ulong)((byte)sVar1 >> 1);
    if (!bVar4) {
      uVar8 = uVar12;
    }
  }
  puVar3 = PTR_DAT_04382b10;
  uVar7 = FUN_01e18480(param_1,PTR_DAT_04382b10);
  if (uVar7 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar7);
      uVar7 = FUN_01e18480(param_1,puVar3);
    } while (uVar7 != 0xffffffffffffffff);
  }
  uVar7 = FUN_01e18480(param_1,puVar3 + 0x18);
  if (uVar7 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar7);
      uVar7 = FUN_01e18480(param_1,puVar3 + 0x18);
    } while (uVar7 != 0xffffffffffffffff);
  }
  return;
}


