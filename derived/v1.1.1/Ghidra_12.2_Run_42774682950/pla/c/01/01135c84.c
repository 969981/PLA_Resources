/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01135c84; name: FUN_01135c84
 */


void FUN_01135c84(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  FUN_011322b0();
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar2 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0xffffffff00000000;
    FUN_01090b20(&local_58,param_2);
    uVar1 = FUN_02c6d5b0(*(undefined8 *)(param_2 + 0x98));
    uVar3 = FUN_02c77594(*(undefined8 *)(param_2 + 0x98));
    uVar4 = FUN_02c778d4(*(undefined8 *)(param_2 + 0x98));
    FUN_01136edc(uVar3,uVar4,param_1,&local_58,uVar1 & 1,param_3 & 1);
  }
  return;
}


