/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f25b4; name: FUN_013f25b4
 */


void FUN_013f25b4(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  puVar4 = *(undefined8 **)(*(long *)(*param_1 + 0x68) + 0x18);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar1 != 0))
  {
    uVar3 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar3;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar2 != (long *)PTR_DAT_04379c98) {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)PTR_DAT_04379c98; plVar2 = (long *)*plVar2) {
    }
  }
  local_40 = &DAT_e2c06acab97c29c2;
  pcStack_38 = "CommonOptionBar";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  uVar3 = FUN_0118c80c(puVar4[0x8f],&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d6a73c(uVar3);
  return;
}


