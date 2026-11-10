/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f9bf4; name: FUN_014f9bf4
 */


void FUN_014f9bf4(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar4 = param_1 + 0x180;
  if (*(char *)(param_1 + 0x650) == '\0') {
    local_50 = 0x3e15d4fcf512bfb7;
    pcStack_48 = "waza_custom_list";
    local_40 = 0x10;
    local_38 = (long *)0x0;
    plVar3 = (long *)FUN_00d2ee28(lVar4,&local_50);
    (**(code **)(*plVar3 + 0x58))();
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x97490c5fdbbdb8fe;
    pcStack_48 = "custom_list_cursor";
    local_40 = 0x12;
  }
  else {
    local_50 = 0xf4f2119844d295f9;
    pcStack_48 = "poke_waza_list";
    local_40 = 0xe;
    local_38 = (long *)0x0;
    plVar3 = (long *)FUN_00d2ee28(lVar4,&local_50);
    (**(code **)(*plVar3 + 0x58))();
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x33666ec2888983b7;
    pcStack_48 = "poke_waza_cursor";
    local_40 = 0x10;
  }
  local_38 = (long *)0x0;
  FUN_014f9eb0(param_1,&local_50,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_70 = 0xe591f7cd38c690c3;
  pcStack_68 = "InputDecide";
  local_60 = 0xb;
  uStack_58 = 0;
  local_50 = 0xf4f2119844d295f9;
  pcStack_48 = "poke_waza_list";
  local_40 = 0xe;
  local_38 = (long *)0x0;
  lVar4 = FUN_00d2ee28(lVar4,&local_50);
  if (**(long **)(lVar4 + 0x8d0) != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(**(long **)(lVar4 + 0x8d0) + 0x50))();
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar2 != 0)) {
      uVar5 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar5;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_0437f848) {
        if (*(int *)(lVar4 + 0x970) == 0) {
          bVar1 = true;
          goto joined_r0x014f9ea8;
        }
        break;
      }
    }
  }
  bVar1 = false;
joined_r0x014f9ea8:
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((bVar1) || (*(int *)(param_1 + 0x654) != -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x658) == -1;
  }
  FUN_014f99d0(param_1,&local_70,bVar1);
  local_50 = 0x9f583d657f2a540d;
  pcStack_48 = "InputWazaSwap";
  local_40 = 0xd;
  local_38 = (long *)0x0;
  FUN_014f99d0(param_1,&local_50,1);
  FUN_014f9b50(param_1,1);
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  return;
}


