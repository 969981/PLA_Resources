/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02713270; name: FUN_02713270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02713270(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_78;
  ulong uStack_70;
  byte *local_68;
  
  if (((DAT_043ea138 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ea138), iVar6 != 0)) {
    FUN_0271253c(&DAT_043ea108,"{anonymous}");
    FUN_0271253c(&DAT_043ea120,"(anonymous namespace)");
    FUN_00100250(PTR_FUN_04379930,&DAT_043ea108,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ea138);
  }
  FUN_0271253c(&DAT_043ea0e8,
               "std::string sol::detail::ctti_get_type_name() [T = const field::ride::RideBasuraoStateContext *, seperator_mark = int]"
              );
  std::string::find(-0x18,0x5b);
  uVar7 = std::string::find(-0x18,0x3d);
  uVar8 = std::string::rfind(-0x18,0x5d);
  if (uVar8 == 0xffffffffffffffff) {
    if ((_DAT_043ea0e8 & 1) == 0) {
      uVar8 = (ulong)(DAT_043ea0e8 >> 1);
    }
    else {
      uVar8 = ram0x043ea0f0;
    }
    uVar10 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar10 = uVar7;
    }
    uVar7 = uVar8;
  }
  else {
    uVar10 = 0;
    if (uVar7 != 0xffffffffffffffff) {
      uVar10 = uVar7;
    }
    uVar7 = ram0x043ea0f0;
    if ((_DAT_043ea0e8 & 1) == 0) {
      uVar7 = (ulong)(DAT_043ea0e8 >> 1);
    }
  }
  if (uVar10 < uVar7 - 1) {
    uVar10 = uVar10 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ea0e8,uVar10,uVar8 - uVar10,
                      (allocator *)&DAT_043ea0e8);
  FUN_02712eb0(&DAT_043ea0e8);
  _DAT_043ea0e8 = local_78;
  ram0x043ea0f0 = uStack_70;
  DAT_043ea0f8 = local_68;
  lVar9 = FUN_02712d8c(&DAT_043ea0e8);
  if (lVar9 != -1) {
    std::string::erase(0x43ea0e8,lVar9 - 2);
  }
  bVar5 = (_DAT_043ea0e8 & 1) == 0;
  uVar7 = (ulong)(DAT_043ea0e8 >> 1);
  uVar10 = _DAT_043ea0e8;
  uVar4 = ram0x043ea0f0;
  pbVar2 = DAT_043ea0f8;
  uVar8 = uVar7;
  if (!bVar5) {
    uVar8 = ram0x043ea0f0;
  }
  while( true ) {
    bVar3 = DAT_043ea0e8 & 1;
    _DAT_043ea0e8 = uVar10;
    unique0x100003c0 = uVar4;
    DAT_043ea0f8 = pbVar2;
    if (uVar8 == 0) break;
    pbVar1 = (byte *)&DAT_043ea0e9;
    if (bVar3 != 0) {
      pbVar1 = pbVar2;
    }
    iVar6 = isblank((uint)*pbVar1);
    if (iVar6 == 0) break;
    if (bVar5) {
      pbVar2 = (byte *)&DAT_043ea0e9;
    }
    std::string::erase(0x43ea0e8,(long)pbVar2 - (long)pbVar1);
    bVar5 = (_DAT_043ea0e8 & 1) == 0;
    uVar7 = (ulong)(DAT_043ea0e8 >> 1);
    uVar10 = _DAT_043ea0e8;
    uVar4 = ram0x043ea0f0;
    pbVar2 = DAT_043ea0f8;
    uVar8 = uVar7;
    if (!bVar5) {
      uVar8 = ram0x043ea0f0;
    }
  }
  bVar5 = bVar3 == 0;
  if (!bVar5) {
    uVar7 = uVar4;
  }
  while (uVar7 != 0) {
    uVar8 = (uVar10 & 0xff) >> 1;
    pbVar2 = (byte *)&DAT_043ea0e9;
    if (!bVar5) {
      uVar8 = uVar4;
      pbVar2 = DAT_043ea0f8;
    }
    iVar6 = isblank((uint)pbVar2[uVar8 - 1]);
    if (iVar6 == 0) break;
    FUN_02712da8(&DAT_043ea0e8);
    bVar5 = (_DAT_043ea0e8 & 1) == 0;
    uVar4 = ram0x043ea0f0;
    uVar7 = _DAT_043ea0e8 >> 1 & 0x7f;
    uVar10 = _DAT_043ea0e8;
    if (!bVar5) {
      uVar7 = ram0x043ea0f0;
    }
  }
  uVar8 = FUN_02712de8(&DAT_043ea0e8,&DAT_043ea108);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea0e8,uVar8);
      uVar8 = FUN_02712de8(&DAT_043ea0e8,&DAT_043ea108);
    } while (uVar8 != 0xffffffffffffffff);
  }
  uVar8 = FUN_02712de8(&DAT_043ea0e8,&DAT_043ea120);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea0e8,uVar8);
      uVar8 = FUN_02712de8(&DAT_043ea0e8,&DAT_043ea120);
    } while (uVar8 != 0xffffffffffffffff);
  }
  return;
}


