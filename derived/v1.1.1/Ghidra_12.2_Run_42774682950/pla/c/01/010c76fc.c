/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c76fc; name: FUN_010c76fc
 */


undefined8 FUN_010c76fc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80 [4];
  long *local_60;
  undefined1 auStack_50 [8];
  long local_48;
  
  if (((*PTR_DAT_0437b1a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437b1a8;
  local_90 = 0x15;
  local_88 = (long *)0x0;
  *(undefined8 *)PTR_DAT_0437b1b0 = uVar4;
  local_a0 = 0xb059dd7e20c2c317;
  pcStack_98 = "script/place_name.dat";
  FUN_010c4b50(local_80,&local_a0,10);
  FUN_010cabcc(auStack_50,uVar4,local_80);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_48 != 0) {
    plVar3 = *(long **)(local_48 + 0x270);
    if (plVar3 != *(long **)(local_48 + 0x278)) {
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar3 != 0) {
          plVar1 = (long *)(*plVar3 + 0x58);
        }
        if (*plVar1 == *param_2) {
          uVar4 = 1;
          goto LAB_010c7808;
        }
        plVar3 = plVar3 + 1;
      } while (*(long **)(local_48 + 0x278) != plVar3);
    }
  }
  uVar4 = 0;
LAB_010c7808:
  FUN_010a17b8(auStack_50);
  return uVar4;
}


