/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ff79c; name: FUN_014ff79c
 */


void FUN_014ff79c(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x654) != -1) {
    FUN_014ff138(param_1,&DAT_03a7c230,2);
    return;
  }
  local_40 = 0xf4f2119844d295f9;
  pcStack_38 = "poke_waza_list";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  lVar3 = FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (**(long **)(lVar3 + 0x8d0) != 0) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(**(long **)(lVar3 + 0x8d0) + 0x50))();
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar2 != 0)) {
      uVar6 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar6;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_0437f848) {
        if (*(int *)(lVar3 + 0x970) == 0) {
          bVar1 = true;
          goto joined_r0x014ff900;
        }
        break;
      }
    }
  }
  bVar1 = false;
joined_r0x014ff900:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (bVar1) {
    puVar5 = &DAT_03a7c250;
    uVar6 = 2;
  }
  else {
    puVar5 = &DAT_03a7c270;
    uVar6 = 3;
  }
  FUN_014ff138(param_1,puVar5,uVar6);
  return;
}


