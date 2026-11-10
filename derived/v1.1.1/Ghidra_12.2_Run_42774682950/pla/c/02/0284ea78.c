/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ea78; name: FUN_0284ea78
 */


void FUN_0284ea78(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 local_54;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined4 local_28;
  
  local_30 = (long *)0x0;
  local_28 = 0;
  local_54 = 0;
  local_40 = &DAT_03996322;
  uStack_38 = 0;
  local_50 = (long *)0x0;
  puStack_48 = &DAT_cbf29ce484222645;
  FUN_0284eb30(&local_50,&local_54,param_2);
  uVar1 = FUN_02c4d8d4(*(undefined8 *)(param_1 + 8),&local_50,local_54,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


