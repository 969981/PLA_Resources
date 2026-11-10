/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086235c; name: FUN_0086235c
 */


void FUN_0086235c(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 != (byte *)0x0) {
    bVar1 = param_3[0x11];
    bVar2 = param_3[0x12];
    if ((uint)bVar1 + (uint)bVar2 + 0x1e <= param_4) {
      *(uint *)(param_2 + 8) = (uint)*param_3;
      uVar3 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x10) = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar3 = (*(ulong *)(param_3 + 9) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_3 + 9) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      param_3 = param_3 + 0x13;
      *(ulong *)(param_2 + 0x18) = uVar3 >> 0x20 | uVar3 << 0x20;
      FUN_007e4318(local_48,param_2 + 0x20,param_3,(uint)bVar1);
      param_3 = param_3 + bVar1;
      FUN_007e4318(local_48,param_2 + 0x40,param_3,(uint)bVar2);
      uVar3 = *(ulong *)(param_3 + bVar2);
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x60) = uVar3 >> 0x20 | uVar3 << 0x20;
      memcpy((void *)(param_2 + 0x68),(ulong *)((long)(param_3 + bVar2) + 8),3);
      local_48[0] = 0;
      goto LAB_00862418;
    }
  }
  local_48[0] = 0x10407;
LAB_00862418:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


