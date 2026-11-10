/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b59350; name: FUN_02b59350
 */


void FUN_02b59350(long param_1,ulong param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 local_60 [16];
  
  param_4 = param_4 & 0xffffffff;
  FUN_02bb5928(*(undefined8 *)(param_1 + 0x60),param_2,param_3 != 0);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x60);
    if (((int)param_2 == 0) && (param_3 < 7)) {
      pcVar3 = (char *)(lVar2 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 8);
      if (*pcVar3 == '\0') {
        local_60 = FUN_02b5a9b8(lVar2,0,param_3,param_4);
        *(long *)pcVar3 = local_60._0_8_;
        *(long *)(lVar2 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 0x10) = local_60._8_8_;
      }
      else {
        local_60._8_8_ = *(undefined8 *)(lVar2 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 0x10);
        local_60._0_8_ = *(undefined8 *)pcVar3;
      }
    }
    else {
      local_60 = FUN_02b5a9b8(lVar2,param_2 & 0xffffffff,param_3,param_4);
    }
    FUN_02bb66c0(uVar1,param_2 & 0xffffffff,local_60);
  }
  return;
}


