/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00835fb0; name: FUN_00835fb0
 */


void FUN_00835fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_50 [4];
  undefined4 local_38;
  
  uVar1 = FUN_00847424();
  local_50[0] = 0x98000000;
  local_38 = (uint)local_38._2_2_ << 0x10;
  lVar2 = FUN_008469d8(uVar1,local_50,param_3,param_5,&local_38,(ulong)(param_6 & 1) << 0x30,0);
  if (lVar2 == 0) {
    local_38 = 0;
    local_50[0] = 0x4c0d;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_38);
    FUN_007ee578(param_1,local_50);
  }
  else {
    uVar1 = FUN_00847424(param_2);
    FUN_0084695c(param_1,uVar1,param_4);
  }
  return;
}


