/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007feee0; name: FUN_007feee0
 */


void FUN_007feee0(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x20))(), param_5 < uVar1)) {
    local_48[0] = 0x10407;
  }
  else {
    *(undefined1 *)(param_3 + 0x26) = *(undefined1 *)((long)param_2 + 0x34);
    *(ushort *)(param_3 + 0x27) =
         *(ushort *)((long)param_2 + 0x36) >> 8 | *(ushort *)((long)param_2 + 0x36) << 8;
    *param_4 = 0x29;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


