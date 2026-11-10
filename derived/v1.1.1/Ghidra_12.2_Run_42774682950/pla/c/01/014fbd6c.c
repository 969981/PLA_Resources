/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fbd6c; name: FUN_014fbd6c
 */


void FUN_014fbd6c(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x650) == '\0') {
    FUN_014ff688(param_1);
  }
  else {
    FUN_014ff79c(param_1);
  }
  if ((*(int *)(param_1 + 0x654) == -1) && (*(int *)(param_1 + 0x658) == -1)) {
    local_50 = 0xf4f2119844d295f9;
    pcStack_48 = "poke_waza_list";
    local_40 = 0xe;
    local_38 = (long *)0x0;
    lVar3 = FUN_00d2ee28(param_1 + 0x180,&local_50);
    if (**(long **)(lVar3 + 0x8d0) != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(**(long **)(lVar3 + 0x8d0) + 0x50))();
      if (((*PTR_DAT_0437f840 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar2 != 0)) {
        uVar5 = FUN_0281249c();
        *(undefined8 *)PTR_DAT_0437f848 = uVar5;
        __cxa_guard_release(PTR_DAT_0437f840);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)PTR_DAT_0437f848) {
          if (*(int *)(lVar3 + 0x970) == 0) {
            bVar1 = true;
            goto joined_r0x014fc00c;
          }
          break;
        }
      }
    }
    bVar1 = false;
joined_r0x014fc00c:
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (!bVar1) {
      local_50 = 0x326c85acaf096ae9;
      pcStack_48 = "button_decide_x";
      local_40 = 0xf;
      local_38 = (long *)0x0;
      plVar4 = (long *)FUN_00d2e944(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if ((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0xa2) != '\x01')) {
        *(undefined1 *)((long)plVar4 + 0xa2) = 1;
        (**(code **)(*plVar4 + 0x98))(plVar4,1);
      }
      uVar5 = 1;
      goto LAB_014fbecc;
    }
  }
  local_50 = 0x326c85acaf096ae9;
  pcStack_48 = "button_decide_x";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  plVar4 = (long *)FUN_00d2e944(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0xa2) != '\0')) {
    *(undefined1 *)((long)plVar4 + 0xa2) = 0;
    (**(code **)(*plVar4 + 0x98))(plVar4,0);
  }
  uVar5 = 0;
LAB_014fbecc:
  local_38 = (long *)0x0;
  local_40 = 0xb;
  pcStack_48 = "InputDecide";
  local_50 = 0xe591f7cd38c690c3;
  FUN_014f99d0(param_1,&local_50,uVar5);
  return;
}


