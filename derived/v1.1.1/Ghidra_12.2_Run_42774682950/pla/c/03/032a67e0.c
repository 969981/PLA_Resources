/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a67e0; name: FUN_032a67e0
 */


undefined4 FUN_032a67e0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [152];
  
  FUN_032c4d5c(auStack_c8);
  puVar3 = (undefined8 *)FUN_032c6730(auStack_c8);
  pcVar5 = (char *)*puVar3;
  if (pcVar5 == (char *)0x0) {
    plVar4 = (long *)FUN_032ae6b8(0);
  }
  else {
    pcVar1 = pcVar5 + 1;
    if (*pcVar5 != '.') {
      pcVar1 = pcVar5;
    }
    plVar4 = (long *)FUN_032ae6b8(pcVar1);
  }
  if (plVar4 == (long *)0x0) {
    uVar2 = 0x80040200;
  }
  else {
    local_e0 = (long *)FUN_033213d0(param_2);
    uStack_d8 = 0;
    local_d0 = 0;
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4,&local_e0,param_1);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 8))();
    }
  }
  FUN_032c4ce8(auStack_c8);
  return uVar2;
}


