/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805d00; name: FUN_00805d00
 */


void FUN_00805d00(undefined8 param_1,long param_2,long param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint local_4c;
  ulong local_48 [2];
  undefined4 local_38 [2];
  
  if (param_5 == 0) {
    local_48[0] = CONCAT44(local_48[0]._4_4_,0x10407);
  }
  else {
    FUN_007f0d58(param_2 + 0x60);
    uVar1 = FUN_007f7550(*(undefined8 *)(param_2 + 0xa8));
    *(uint *)(param_2 + 0x80) = uVar1 & param_5;
    *(undefined4 *)(param_2 + 0x84) = 0;
    FUN_007ff094(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_3 + 8),
                 *(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x14)
                );
    *(undefined4 *)(param_2 + 0x58) = param_4;
    local_4c = 0;
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x148))
              (*(long **)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x98),
               *(uint *)(param_2 + 0x80) & (*(uint *)(param_2 + 0x84) ^ 0xffffffff),&local_4c);
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | local_4c;
    local_48[0] = 0;
    FUN_007ecf14(local_48);
    *(ulong *)(param_2 + 0x88) = local_48[0];
    local_48[0] = local_48[0] & 0xffffffff00000000;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


