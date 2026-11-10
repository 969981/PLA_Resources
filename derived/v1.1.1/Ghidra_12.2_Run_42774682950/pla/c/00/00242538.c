/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242538; name: FUN_00242538
 */


void FUN_00242538(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_48;
  undefined5 local_44;
  undefined3 uStack_3f;
  undefined5 uStack_3c;
  
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) {
    local_48 = 0x15;
    local_44 = 0xffffffffff;
    uStack_3f = 0xffffff;
    uStack_3c = 0xffffffffff;
    FUN_0024388c(param_1,0x15,&local_48,0x14,1);
  }
  FUN_0024388c(param_1,param_2,param_3,param_4,0);
  return;
}


