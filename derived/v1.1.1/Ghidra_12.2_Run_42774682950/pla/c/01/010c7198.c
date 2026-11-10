/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c7198; name: FUN_010c7198
 */


void FUN_010c7198(undefined8 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90 [4];
  long *local_70;
  undefined1 auStack_60 [8];
  long local_58;
  
  if (((*PTR_DAT_0437b1a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437b1a8;
  local_a0 = 0x15;
  local_98 = (long *)0x0;
  *(undefined8 *)PTR_DAT_0437b1b0 = uVar4;
  local_b0 = 0xb059dd7e20c2c317;
  pcStack_a8 = "script/place_name.dat";
  FUN_010c4b50(local_90,&local_b0,10);
  FUN_010cabcc(auStack_60,uVar4,local_90);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_58 != 0) {
    plVar3 = *(long **)(local_58 + 0x270);
    if (plVar3 != *(long **)(local_58 + 0x278)) {
      iVar2 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar3 != 0) {
          plVar1 = (long *)(*plVar3 + 0x58);
        }
        if (*plVar1 == param_3) {
          FUN_02c393b4(param_1,param_2,iVar2);
          break;
        }
        plVar3 = plVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (*(long **)(local_58 + 0x278) != plVar3);
    }
  }
  FUN_010a17b8(auStack_60);
  return;
}


