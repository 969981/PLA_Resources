/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010827a0; name: FUN_010827a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010827a0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong local_58;
  ulong uStack_50;
  byte *local_48;
  
  if (((DAT_043ba150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043ba150), iVar2 != 0)) {
    FUN_010816b0(&DAT_043ba120,"{anonymous}");
    FUN_010816b0(&DAT_043ba138,"(anonymous namespace)");
    FUN_00100250(PTR_FUN_04379930,&DAT_043ba120,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ba150);
  }
  FUN_010816b0(&DAT_043ba100,
               "std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<(lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/lua_pml_bind_functions.cpp:35:19)>, seperator_mark = int]"
              );
  std::string::find('\0',0x5b);
  uVar3 = std::string::find('\0',0x3d);
  uVar4 = std::string::rfind('\0',0x5d);
  if (uVar4 == 0xffffffffffffffff) {
    if ((_DAT_043ba100 & 1) == 0) {
      uVar4 = (ulong)(DAT_043ba100 >> 1);
    }
    else {
      uVar4 = DAT_043ba108;
    }
    uVar7 = 0;
    if (uVar3 != 0xffffffffffffffff) {
      uVar7 = uVar3;
    }
    uVar3 = uVar4;
  }
  else {
    uVar7 = 0;
    if (uVar3 != 0xffffffffffffffff) {
      uVar7 = uVar3;
    }
    uVar3 = DAT_043ba108;
    if ((_DAT_043ba100 & 1) == 0) {
      uVar3 = (ulong)(DAT_043ba100 >> 1);
    }
  }
  if (uVar7 < uVar3 - 1) {
    uVar7 = uVar7 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043ba100,uVar7,uVar4 - uVar7,
                      (allocator *)&DAT_043ba100);
  FUN_01081870(&DAT_043ba100);
  _DAT_043ba100 = local_58;
  DAT_043ba108 = uStack_50;
  DAT_043ba110 = local_48;
  lVar5 = FUN_01081748(&DAT_043ba100);
  if (lVar5 != -1) {
    std::string::erase(0x43ba100,lVar5 - 2);
  }
  uVar7 = _DAT_043ba100 & 0xff;
  uVar3 = (ulong)(DAT_043ba100 >> 1);
  bVar9 = DAT_043ba100 & 1;
  uVar4 = uVar3;
  if ((_DAT_043ba100 & 1) != 0) {
    uVar4 = DAT_043ba108;
  }
  uVar8 = DAT_043ba108;
  if (uVar4 != 0) {
    if ((_DAT_043ba100 & 1) == 0) {
      pbVar6 = &DAT_043ba101;
    }
    else {
      pbVar6 = DAT_043ba110;
    }
    while( true ) {
      uVar8 = DAT_043ba108;
      iVar2 = isblank((uint)*pbVar6);
      if (iVar2 == 0) break;
      std::string::erase(0x43ba100,0);
      uVar7 = _DAT_043ba100 & 0xff;
      uVar3 = (ulong)(DAT_043ba100 >> 1);
      bVar9 = DAT_043ba100 & 1;
      uVar4 = uVar3;
      if ((_DAT_043ba100 & 1) != 0) {
        uVar4 = DAT_043ba108;
      }
      uVar8 = DAT_043ba108;
      if (uVar4 == 0) break;
      pbVar6 = &DAT_043ba101;
      if ((_DAT_043ba100 & 1) != 0) {
        pbVar6 = DAT_043ba110;
      }
    }
  }
  bVar1 = bVar9 == 0;
  if (!bVar1) {
    uVar3 = uVar8;
  }
  while (uVar3 != 0) {
    uVar4 = uVar7 >> 1;
    pbVar6 = &DAT_043ba101;
    if (!bVar1) {
      uVar4 = uVar8;
      pbVar6 = DAT_043ba110;
    }
    iVar2 = isblank((uint)pbVar6[uVar4 - 1]);
    if (iVar2 == 0) break;
    FUN_01081764(&DAT_043ba100);
    uVar7 = _DAT_043ba100 & 0xff;
    bVar1 = (_DAT_043ba100 & 1) == 0;
    uVar8 = DAT_043ba108;
    uVar3 = _DAT_043ba100 >> 1 & 0x7f;
    if (!bVar1) {
      uVar3 = DAT_043ba108;
    }
  }
  uVar4 = FUN_010817a4(&DAT_043ba100,&DAT_043ba120);
  if (uVar4 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ba100,uVar4);
      uVar4 = FUN_010817a4(&DAT_043ba100,&DAT_043ba120);
    } while (uVar4 != 0xffffffffffffffff);
  }
  uVar4 = FUN_010817a4(&DAT_043ba100,&DAT_043ba138);
  if (uVar4 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ba100,uVar4);
      uVar4 = FUN_010817a4(&DAT_043ba100,&DAT_043ba138);
    } while (uVar4 != 0xffffffffffffffff);
  }
  return;
}


