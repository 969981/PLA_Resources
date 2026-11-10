/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02721b50; name: FUN_02721b50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02721b50(void)

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
  
  if (((DAT_043ea3c9._7_1_ & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x43ea3d0), iVar6 != 0)) {
    FUN_02720e1c(&DAT_043ea3a0,"{anonymous}");
    FUN_02720e1c(&DAT_043ea3b8,"(anonymous namespace)");
    FUN_00100250(PTR_FUN_04379930,&DAT_043ea3a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(0x43ea3d0);
  }
  FUN_02720e1c(&DAT_043ea380,
               "std::string sol::detail::ctti_get_type_name() [T = const field::ride::RideRingumaStateContext *, seperator_mark = int]"
              );
  std::string::find(-0x80,0x5b);
  uVar7 = std::string::find(-0x80,0x3d);
  uVar8 = std::string::rfind(-0x80,0x5d);
  if (uVar8 == 0xffffffffffffffff) {
    if ((_DAT_043ea380 & 1) == 0) {
      uVar8 = (ulong)(DAT_043ea380 >> 1);
    }
    else {
      uVar8 = DAT_043ea388;
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
    uVar7 = DAT_043ea388;
    if ((_DAT_043ea380 & 1) == 0) {
      uVar7 = (ulong)(DAT_043ea380 >> 1);
    }
  }
  if (uVar10 < uVar7 - 1) {
    uVar10 = uVar10 + 1;
  }
  std::string::string((string *)&local_78,(string *)&DAT_043ea380,uVar10,uVar8 - uVar10,
                      (allocator *)&DAT_043ea380);
  FUN_02721790(&DAT_043ea380);
  _DAT_043ea380 = local_78;
  DAT_043ea388 = uStack_70;
  DAT_043ea390 = local_68;
  lVar9 = FUN_0272166c(&DAT_043ea380);
  if (lVar9 != -1) {
    std::string::erase(0x43ea380,lVar9 - 2);
  }
  bVar5 = (_DAT_043ea380 & 1) == 0;
  uVar7 = (ulong)(DAT_043ea380 >> 1);
  uVar10 = _DAT_043ea380;
  uVar4 = DAT_043ea388;
  pbVar2 = DAT_043ea390;
  uVar8 = uVar7;
  if (!bVar5) {
    uVar8 = DAT_043ea388;
  }
  while( true ) {
    bVar3 = DAT_043ea380 & 1;
    _DAT_043ea380 = uVar10;
    DAT_043ea388 = uVar4;
    DAT_043ea390 = pbVar2;
    if (uVar8 == 0) break;
    pbVar1 = &DAT_043ea381;
    if (bVar3 != 0) {
      pbVar1 = pbVar2;
    }
    iVar6 = isblank((uint)*pbVar1);
    if (iVar6 == 0) break;
    if (bVar5) {
      pbVar2 = &DAT_043ea381;
    }
    std::string::erase(0x43ea380,(long)pbVar2 - (long)pbVar1);
    bVar5 = (_DAT_043ea380 & 1) == 0;
    uVar7 = (ulong)(DAT_043ea380 >> 1);
    uVar10 = _DAT_043ea380;
    uVar4 = DAT_043ea388;
    pbVar2 = DAT_043ea390;
    uVar8 = uVar7;
    if (!bVar5) {
      uVar8 = DAT_043ea388;
    }
  }
  bVar5 = bVar3 == 0;
  if (!bVar5) {
    uVar7 = uVar4;
  }
  while (uVar7 != 0) {
    uVar8 = (uVar10 & 0xff) >> 1;
    pbVar2 = &DAT_043ea381;
    if (!bVar5) {
      uVar8 = uVar4;
      pbVar2 = DAT_043ea390;
    }
    iVar6 = isblank((uint)pbVar2[uVar8 - 1]);
    if (iVar6 == 0) break;
    FUN_02721688(&DAT_043ea380);
    bVar5 = (_DAT_043ea380 & 1) == 0;
    uVar4 = DAT_043ea388;
    uVar7 = _DAT_043ea380 >> 1 & 0x7f;
    uVar10 = _DAT_043ea380;
    if (!bVar5) {
      uVar7 = DAT_043ea388;
    }
  }
  uVar8 = FUN_027216c8(&DAT_043ea380,&DAT_043ea3a0);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea380,uVar8);
      uVar8 = FUN_027216c8(&DAT_043ea380,&DAT_043ea3a0);
    } while (uVar8 != 0xffffffffffffffff);
  }
  uVar8 = FUN_027216c8(&DAT_043ea380,&DAT_043ea3b8);
  if (uVar8 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ea380,uVar8);
      uVar8 = FUN_027216c8(&DAT_043ea380,&DAT_043ea3b8);
    } while (uVar8 != 0xffffffffffffffff);
  }
  return;
}


