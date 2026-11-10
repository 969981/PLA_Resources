/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5589c; name: FUN_02e5589c
 */


void FUN_02e5589c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [192];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_68;
  long lStack_60;
  int local_50;
  
  FUN_02e55964(auStack_170);
  uStack_178 = uStack_a8;
  local_180 = local_b0;
  uStack_188 = uStack_98;
  local_190 = local_a0;
  FUN_02e55a50(param_1 + 8,&local_180,&local_190,auStack_170);
  if (local_50 != 0) {
    FUN_02e55b14(auStack_170);
    local_50 = 0;
  }
  if ((local_68 != 0) && ((param_3 & 1) != 0)) {
    FUN_02e5523c(param_1,param_2,local_68,0);
  }
  if ((lStack_60 != 0) && ((param_4 & 1) != 0)) {
    FUN_02e5523c(param_1,param_2,lStack_60,1);
  }
  puVar1 = (undefined8 *)FUN_02e56068(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}


