/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765444; name: FUN_02765444
 */


void FUN_02765444(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_30;
  
  local_30 = (long *)&local_50;
  uStack_48 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 400);
  local_50 = &PTR_LAB_0426ba18;
  local_40 = *param_3;
  FUN_00787bcc(param_1,param_2,&local_50);
  if (local_30 != (long *)0x0) {
    if ((undefined ***)local_30 == &local_50) {
      pcVar1 = *(code **)(*local_30 + 0x10);
    }
    else {
      pcVar1 = *(code **)(*local_30 + 0x18);
    }
    (*pcVar1)();
  }
  return;
}


