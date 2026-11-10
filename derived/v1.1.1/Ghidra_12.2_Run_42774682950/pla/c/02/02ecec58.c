/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecec58; name: FUN_02ecec58
 */


void FUN_02ecec58(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_20;
  undefined1 local_18;
  
  uVar1 = *(uint *)(param_1 + 0x2a3);
  if ((uVar1 >> 0x10 & 1) == 0) {
    *(uint *)(param_1 + 0x2a3) =
         uVar1 & 0xfff00000 | uVar1 & 0xffff | (param_2 & 7) << 0x11 | 0x10000;
  }
  local_20 = 0x400000000;
  local_18 = 0;
  FUN_02ecc3d4(param_1,&local_20,1);
  return;
}


