/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325240; name: FUN_03325240
 */


undefined8 FUN_03325240(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_b8 [19];
  
  iVar1 = FUN_03325150();
  if (iVar1 == -1) {
    uVar2 = 0x80040200;
  }
  else if (iVar1 == 5) {
    FUN_032c4e24(local_b8,param_1);
    uVar2 = FUN_032c4960(local_b8[0]);
    *param_2 = uVar2;
    FUN_032c4ce8(local_b8);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    *param_2 = *(undefined8 *)(&DAT_03aafb98 + (long)iVar1 * 8);
  }
  return uVar2;
}


