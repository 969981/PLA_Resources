/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbc5fc; name: FUN_02cbc5fc
 */


void FUN_02cbc5fc(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  ulong __n;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((param_3 != (byte *)0x0) && (4 < param_4)) {
    __n = (ulong)*param_3 << 0x18 | (ulong)param_3[1] << 0x10 | (ulong)param_3[2] << 8 |
          (ulong)param_3[3];
    uVar1 = (uint)__n;
    if ((uVar1 < 0x51) && (uVar1 + 5 <= param_4)) {
      *(uint *)(param_2 + 0x14) = uVar1;
      *(uint *)(param_2 + 0x18) = (uint)param_3[4];
      memcpy((void *)(param_2 + 0x28),param_3 + 5,__n);
      *(undefined1 *)(param_2 + 0x28 + __n) = 0;
      local_40[0] = 0;
      goto LAB_02cbc664;
    }
  }
  local_40[0] = 0x10407;
LAB_02cbc664:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


