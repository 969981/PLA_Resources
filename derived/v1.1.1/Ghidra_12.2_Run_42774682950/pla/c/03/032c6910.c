/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c6910; name: FUN_032c6910
 */


undefined4 FUN_032c6910(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_200 [128];
  long local_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [256];
  
  local_140 = (long)(int)*param_3;
  if (0x1f < (int)*param_3) {
    local_140 = 0x20;
  }
  puStack_138 = param_3;
  FUN_03341140(auStack_130,local_140,auStack_200 + 0x80);
  uVar1 = FUN_032c69c4(param_1,param_2,&local_140);
  return uVar1;
}


