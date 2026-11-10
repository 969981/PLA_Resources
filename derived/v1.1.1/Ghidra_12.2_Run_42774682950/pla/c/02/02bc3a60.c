/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc3a60; name: FUN_02bc3a60
 */


void FUN_02bc3a60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x20) == 0) {
    *(undefined8 *)(lVar2 + 0x20) = DAT_043f1798;
  }
  local_40 = *(undefined8 *)(lVar2 + 0x20);
  local_38 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined2 *)(lVar2 + 0x28) = 1;
  local_50 = 0;
  local_48 = 0xfffffffe;
  FUN_008ea1e4(param_1 + 0x30,&local_50);
  if ((local_50 != 0) && ((int)local_48 != -2)) {
    FUN_00155150(local_50,0xfff0b9d8);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_02bc51ac(param_1 + 0x18);
  }
  *(undefined8 *)(lVar2 + 0x20) = local_40;
  *(undefined2 *)(lVar2 + 0x28) = (undefined2)local_38;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x44));
  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x38) != -2)) {
    FUN_00155150(*(long *)(param_1 + 0x30),0xfff0b9d8);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 != 0) {
    FUN_02bc51ac(param_1 + 0x18);
  }
  return;
}


