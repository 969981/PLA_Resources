/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e22cc; name: FUN_007e22cc
 */


void FUN_007e22cc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong *puVar2;
  ulong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = param_3[2];
  uStack_40 = param_3[3];
  FUN_00847298(local_38,param_2,&local_58);
  if ((int)local_38[0] == 0) {
    bVar1 = FUN_008473d0(param_2);
    if (bVar1 < 0x18) {
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(undefined1 *)(param_2 + 0x61) = 0;
      local_68[0] = 0;
      FUN_007ecf14(local_68);
      *(undefined1 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(ulong *)(param_2 + 0x68) = local_68[0];
      local_68[0] = local_68[0] & 0xffffffff00000000;
    }
    else {
      local_68[0] = CONCAT44(local_68[0]._4_4_,0x10408);
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_28);
    puVar2 = local_68;
  }
  else {
    puVar2 = local_38;
  }
  FUN_007ee578(param_1,puVar2);
  return;
}


