/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01082240; name: FUN_01082240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01082240(void)

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
  
  if (((DAT_043ba0d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043ba0d8), iVar2 != 0)) {
    FUN_010816b0(&DAT_043ba0a8,"{anonymous}");
    FUN_010816b0(&DAT_043ba0c0,"(anonymous namespace)");
    FUN_00100250(PTR_FUN_04379930,&DAT_043ba0a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ba0d8);
  }
  FUN_010816b0(&DAT_043ba088,
               "std::string sol::detail::ctti_get_type_name() [T = (lambda at C:/jenkins/workspace/hayabusa/rom/localrombuild/program/prog/common/lua/source/lua_pml_bind_functions.cpp:35:19) *, seperator_mark = int]"
              );
  std::string::find(-0x78,0x5b);
  uVar3 = std::string::find(-0x78,0x3d);
  uVar4 = std::string::rfind(-0x78,0x5d);
  if (uVar4 == 0xffffffffffffffff) {
    if ((_DAT_043ba088 & 1) == 0) {
      uVar4 = (ulong)(DAT_043ba088 >> 1);
    }
    else {
      uVar4 = DAT_043ba090;
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
    uVar3 = DAT_043ba090;
    if ((_DAT_043ba088 & 1) == 0) {
      uVar3 = (ulong)(DAT_043ba088 >> 1);
    }
  }
  if (uVar7 < uVar3 - 1) {
    uVar7 = uVar7 + 1;
  }
  std::string::string((string *)&local_58,(string *)&DAT_043ba088,uVar7,uVar4 - uVar7,
                      (allocator *)&DAT_043ba088);
  FUN_01081870(&DAT_043ba088);
  _DAT_043ba088 = local_58;
  DAT_043ba090 = uStack_50;
  DAT_043ba098 = local_48;
  lVar5 = FUN_01081748(&DAT_043ba088);
  if (lVar5 != -1) {
    std::string::erase(0x43ba088,lVar5 - 2);
  }
  uVar7 = _DAT_043ba088 & 0xff;
  uVar3 = (ulong)(DAT_043ba088 >> 1);
  bVar9 = DAT_043ba088 & 1;
  uVar4 = uVar3;
  if ((_DAT_043ba088 & 1) != 0) {
    uVar4 = DAT_043ba090;
  }
  uVar8 = DAT_043ba090;
  if (uVar4 != 0) {
    if ((_DAT_043ba088 & 1) == 0) {
      pbVar6 = &DAT_043ba089;
    }
    else {
      pbVar6 = DAT_043ba098;
    }
    while( true ) {
      uVar8 = DAT_043ba090;
      iVar2 = isblank((uint)*pbVar6);
      if (iVar2 == 0) break;
      std::string::erase(0x43ba088,0);
      uVar7 = _DAT_043ba088 & 0xff;
      uVar3 = (ulong)(DAT_043ba088 >> 1);
      bVar9 = DAT_043ba088 & 1;
      uVar4 = uVar3;
      if ((_DAT_043ba088 & 1) != 0) {
        uVar4 = DAT_043ba090;
      }
      uVar8 = DAT_043ba090;
      if (uVar4 == 0) break;
      pbVar6 = &DAT_043ba089;
      if ((_DAT_043ba088 & 1) != 0) {
        pbVar6 = DAT_043ba098;
      }
    }
  }
  bVar1 = bVar9 == 0;
  if (!bVar1) {
    uVar3 = uVar8;
  }
  while (uVar3 != 0) {
    uVar4 = uVar7 >> 1;
    pbVar6 = &DAT_043ba089;
    if (!bVar1) {
      uVar4 = uVar8;
      pbVar6 = DAT_043ba098;
    }
    iVar2 = isblank((uint)pbVar6[uVar4 - 1]);
    if (iVar2 == 0) break;
    FUN_01081764(&DAT_043ba088);
    uVar7 = _DAT_043ba088 & 0xff;
    bVar1 = (_DAT_043ba088 & 1) == 0;
    uVar8 = DAT_043ba090;
    uVar3 = _DAT_043ba088 >> 1 & 0x7f;
    if (!bVar1) {
      uVar3 = DAT_043ba090;
    }
  }
  uVar4 = FUN_010817a4(&DAT_043ba088,&DAT_043ba0a8);
  if (uVar4 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ba088,uVar4);
      uVar4 = FUN_010817a4(&DAT_043ba088,&DAT_043ba0a8);
    } while (uVar4 != 0xffffffffffffffff);
  }
  uVar4 = FUN_010817a4(&DAT_043ba088,&DAT_043ba0c0);
  if (uVar4 != 0xffffffffffffffff) {
    do {
      std::string::erase(0x43ba088,uVar4);
      uVar4 = FUN_010817a4(&DAT_043ba088,&DAT_043ba0c0);
    } while (uVar4 != 0xffffffffffffffff);
  }
  return;
}


