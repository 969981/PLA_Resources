/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc03b4; name: FUN_02bc03b4
 */


void FUN_02bc03b4(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong local_38;
  long local_30;
  ulong local_28;
  undefined8 local_18;
  
  lVar1 = *(long *)(param_2 + 0x88);
  lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x58);
  if (*(long *)(param_2 + 0x80) == 0) {
    if (lVar1 == 0) {
      uVar4 = 0;
      local_38 = 0;
      goto LAB_02bc0428;
    }
    local_18 = *(undefined8 *)(lVar1 + 8);
LAB_02bc03f4:
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  else {
    local_18 = *(undefined8 *)(*(long *)(param_2 + 0x80) + 8);
    if (lVar1 != 0) goto LAB_02bc03f4;
    uVar2 = 0;
  }
  local_38 = *(ulong *)(lVar3 + 8);
  local_30 = *(undefined8 *)(lVar3 + 0x6098);
  local_28 = lVar3 + 0x10;
  auVar5 = FUN_02b94dac(*(undefined8 *)(lVar3 + 0x6140),&local_38,&local_18,param_3,uVar2);
  param_2 = auVar5._8_8_;
  local_38 = auVar5._0_8_ & 0xffffffffffffff00;
  uVar4 = auVar5._0_8_ & 0xff;
LAB_02bc0428:
  local_38 = local_38 | uVar4;
  local_28 = local_28 & 0xffffffffffffff00;
  local_30 = param_2;
  FUN_02bc082c(param_1 + 0x58,&local_38);
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}


