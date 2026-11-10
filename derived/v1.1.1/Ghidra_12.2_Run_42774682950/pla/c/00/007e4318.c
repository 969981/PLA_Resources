/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4318; name: FUN_007e4318
 */


void FUN_007e4318(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  void *__s;
  uint uVar1;
  uint *puVar2;
  uint local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (uint *)0x0) || (0x12 < param_4)) ||
     ((1 << (ulong)(param_4 & 0x1f) & 0x40044U) == 0)) {
    local_48[0] = 0x10407;
  }
  else {
    __s = (void *)(param_2 + 8);
    memset(__s,0,0x10);
    puVar2 = param_3;
    if (2 < param_4) {
      if (param_4 == 0x12) {
        memcpy(__s,param_3,0x10);
        puVar2 = param_3 + 4;
      }
      else {
        puVar2 = param_3 + 1;
        uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
        local_48[0] = uVar1 >> 0x10 | uVar1 << 0x10;
        memcpy(__s,local_48,4);
      }
    }
    *(ushort *)(param_2 + 0x18) = (ushort)*puVar2 >> 8 | (ushort)*puVar2 << 8;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


