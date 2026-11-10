/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0271bd40; name: FUN_0271bd40
 */


void FUN_0271bd40(string *param_1)

{
  string sVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  string *psVar9;
  uint uVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_04387c68 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04387c68);
    puVar2 = PTR_DAT_04387c70;
    if (iVar5 != 0) {
      FUN_02719c1c(PTR_DAT_04387c70,"{anonymous}");
      FUN_02719c1c(puVar2 + 0x18,"(anonymous namespace)");
      FUN_00100250(PTR_FUN_04379930,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387c68);
    }
  }
  FUN_02719c1c(param_1,
               "std::string sol::detail::ctti_get_type_name() [T = const field::ride::RideOdosisiStateContext *, seperator_mark = int]"
              );
  cVar4 = (char)param_1;
  std::string::find(cVar4,0x5b);
  uVar6 = std::string::find(cVar4,0x3d);
  uVar7 = std::string::rfind(cVar4,0x5d);
  sVar1 = *param_1;
  if (uVar7 == 0xffffffffffffffff) {
    if (((byte)sVar1 & 1) == 0) {
      uVar7 = (ulong)((byte)sVar1 >> 1);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 8);
    }
  }
  uVar11 = 0;
  if (uVar6 != 0xffffffffffffffff) {
    uVar11 = uVar6;
  }
  uVar6 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if (uVar11 < uVar6 - 1) {
    uVar11 = uVar11 + 1;
  }
  std::string::string((string *)&local_58,param_1,uVar11,uVar7 - uVar11,(allocator *)param_1);
  FUN_0271b4b0(param_1);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)param_1 = local_58;
  lVar8 = FUN_0271b38c(param_1);
  if (lVar8 != -1) {
    std::string::erase((ulong)param_1,lVar8 - 2);
  }
  sVar1 = *param_1;
  uVar10 = (uint)(byte)sVar1;
  uVar7 = (ulong)((byte)sVar1 >> 1);
  uVar11 = *(ulong *)(param_1 + 8);
  bVar12 = (byte)sVar1 & 1;
  uVar6 = uVar7;
  if (((byte)sVar1 & 1) != 0) {
    uVar6 = uVar11;
  }
  if (uVar6 != 0) {
    psVar9 = *(string **)(param_1 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      psVar9 = param_1 + 1;
    }
    iVar5 = isblank((uint)(byte)*psVar9);
    if (iVar5 != 0) {
      do {
        std::string::erase((ulong)param_1,0);
        sVar1 = *param_1;
        uVar10 = (uint)(byte)sVar1;
        uVar7 = (ulong)((byte)sVar1 >> 1);
        uVar11 = *(ulong *)(param_1 + 8);
        bVar12 = (byte)sVar1 & 1;
        uVar6 = uVar7;
        if (((byte)sVar1 & 1) != 0) {
          uVar6 = uVar11;
        }
        if (uVar6 == 0) break;
        psVar9 = param_1 + 1;
        if (((byte)sVar1 & 1) != 0) {
          psVar9 = *(string **)(param_1 + 0x10);
        }
        iVar5 = isblank((uint)(byte)*psVar9);
      } while (iVar5 != 0);
    }
  }
  bVar3 = bVar12 == 0;
  if (!bVar3) {
    uVar7 = uVar11;
  }
  if (uVar7 != 0) {
    do {
      uVar6 = (ulong)(uVar10 >> 1);
      psVar9 = param_1 + 1;
      if (!bVar3) {
        uVar6 = uVar11;
        psVar9 = *(string **)(param_1 + 0x10);
      }
      iVar5 = isblank((uint)(byte)psVar9[uVar6 - 1]);
      if (iVar5 == 0) break;
      FUN_0271b3a8(param_1);
      sVar1 = *param_1;
      uVar10 = (uint)(byte)sVar1;
      bVar3 = ((byte)sVar1 & 1) == 0;
      uVar11 = *(ulong *)(param_1 + 8);
      uVar6 = (ulong)((byte)sVar1 >> 1);
      if (!bVar3) {
        uVar6 = uVar11;
      }
    } while (uVar6 != 0);
  }
  puVar2 = PTR_DAT_04387c70;
  uVar6 = FUN_0271b3e8(param_1,PTR_DAT_04387c70);
  if (uVar6 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar6);
      uVar6 = FUN_0271b3e8(param_1,puVar2);
    } while (uVar6 != 0xffffffffffffffff);
  }
  uVar6 = FUN_0271b3e8(param_1,puVar2 + 0x18);
  if (uVar6 != 0xffffffffffffffff) {
    do {
      std::string::erase((ulong)param_1,uVar6);
      uVar6 = FUN_0271b3e8(param_1,puVar2 + 0x18);
    } while (uVar6 != 0xffffffffffffffff);
  }
  return;
}


