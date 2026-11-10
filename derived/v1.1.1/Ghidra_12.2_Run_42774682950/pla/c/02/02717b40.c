/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02717b40; name: FUN_02717b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02717b40(void)

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
  
  if (((DAT_043ea209._7_1_ & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x43ea210), iVar6 != 0)) {
    FUN_02716e04(&DAT_043ea1e0,"{anonymous}");
    FUN_02716e04(&DAT_043ea1f8,"(anonymous namespace)");
    FUN_00100250(PTR_FUN_04379930,&DAT_043ea1e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(0x43ea210);
  }
  FUN_02716e04(&DAT_043ea1c0,
               "std::string sol::detail::ctti_get_type_name() [T = const field::ride::RideNyuuraStateContext *, seperator_mark = int]"
              );
  std::string::find(-0x40,0x5b);
  uVar7 = std::string::find(-0x40,0x3d);
  uVar8 = std::string::rfind(-0x40,0x5d);
  if (uVar8 == 0xffffffffffffffff) {
    if ((_DAT_043ea1c0 & 1) == 0) {
      uVar8 = (ulong)(DAT_043ea1c0 >> 1);
    }
    else {
      uVar8 = DAT_043ea1c8;
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
    uVar7 = DAT_043ea1c8;
    if ((_DAT_043ea1c0 & 1) == 0) {
      uVar7 = (ulong)(DAT_043ea1c0 >> 1);
    }
  }
  if (uVar10 < uVar7 - 1) {
    uVar10 = uVar10 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ea1c0,uVar10,uVar8 - uVar10,
                      (allocator *)&DAT_043ea1c0);
  FUN_02717780(&DAT_043ea1c0);
  _DAT_043ea1c0 = local_78;
  DAT_043ea1c8 = uStack_70;
  DAT_043ea1d0 = local_68;
  lVar9 = FUN_0271765c(&DAT_043ea1c0);
  if (lVar9 != -1) {
    std::string::erase(0x43ea1c0,lVar9 - 2);
  }
  bVar5 = (_DAT_043ea1c0 & 1) == 0;
  uVar7 = (ulong)(DAT_043ea1c0 >> 1);
  uVar10 = _DAT_043ea1c0;
  uVar4 = DAT_043ea1c8;
  pbVar2 = DAT_043ea1d0;
  uVar8 = uVar7;
  if (!bVar5) {
    uVar8 = DAT_043ea1c8;
  }
  while( true ) {
    bVar3 = DAT_043ea1c0 & 1;
    _DAT_043ea1c0 = uVar10;
    DAT_043ea1c8 = uVar4;
    DAT_043ea1d0 = pbVar2;
    if (uVar8 == 0) break;
    pbVar1 = &DAT_043ea1c1;
    if (bVar3 != 0) {
      pbVar1 = pbVar2;
    }
    iVar6 = isblank((uint)*pbVar1);
    if (iVar6 == 0) break;
    if (bVar5) {
      pbVar2 = &DAT_043ea1c1;
    }
    std::string::erase(0x43ea1c0,(long)pbVar2 - (long)pbVar1);
    bVar5 = (_DAT_043ea1c0 & 1) == 0;
    uVar7 = (ulong)(DAT_043ea1c0 >> 1);
    uVar10 = _DAT_043ea1c0;
    uVar4 = DAT_043ea1c8;
    pbVar2 = DAT_043ea1d0;
    uVar8 = uVar7;
    if (!bVar5) {
      uVar8 = DAT_043ea1c8;
    }
  }
  bVar5 = bVar3 == 0;
  if (!bVar5) {
    uVar7 = uVar4;
  }
  while (uVar7 != 0) {
    uVar8 = (uVar10 & 0xff) >> 1;
    pbVar2 = &DAT_043ea1c1;
    if (!bVar5) {
      uVar8 = uVar4;
      pbVar2 = DAT_043ea1d0;
    }
    iVar6 = isblank((uint)pbVar2[uVar8 - 1]);
    if (iVar6 == 0) break;
    FUN_02717678(&DAT_043ea1c0);
    bVar5 = (_DAT_043ea1c0 & 1) == 0;
    uVar4 = DAT_043ea1c8;
    uVar7 = _DAT_043ea1c0 >> 1 & 0x7f;
    uVar10 = _DAT_043ea1c0;
    if (!bVar5) {
      uVar7 = DAT_043ea1c8;
    }
  }
  uVar8 = FUN_027176b8(&DAT_043ea1c0,&DAT_043ea1e0);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea1c0,uVar8);
      uVar8 = FUN_027176b8(&DAT_043ea1c0,&DAT_043ea1e0);
    } while (uVar8 != 0xffffffffffffffff);
  }
  uVar8 = FUN_027176b8(&DAT_043ea1c0,&DAT_043ea1f8);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea1c0,uVar8);
      uVar8 = FUN_027176b8(&DAT_043ea1c0,&DAT_043ea1f8);
    } while (uVar8 != 0xffffffffffffffff);
  }
  return;
}


