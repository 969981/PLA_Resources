/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091db74; name: FUN_0091db74
 */


void FUN_0091db74(undefined8 param_1,ulong *param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 local_38;
  undefined2 local_34;
  
  *param_2 = 0;
  uVar5 = FUN_0091e4a4(param_1,param_3);
  bVar3 = *(byte *)(*(long *)(param_3 + 0x70) + 0x7d);
  if ((uVar5 & 1) != 0) {
    FUN_0293d150(param_2);
    return;
  }
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x68) + 0xd0) + 0x68) + 0x98)
                   + 0x110);
  lVar1 = 3;
  if (0x17 < bVar3) {
    lVar1 = (ulong)(bVar3 < 0x1e) << 2;
  }
  lVar2 = 1;
  if (0x11 < bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0xb < bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if (5 < bVar3) {
    lVar2 = lVar1;
  }
  if (((uVar4 < 3) && ((&PTR_DAT_041b7688)[(int)uVar4][lVar2] == '\0')) ||
     ((uVar5 = FUN_0091e984(param_1,param_3), (uVar5 & 1) == 0 &&
      (uVar5 = FUN_0091ebf8(param_1,param_3), (uVar5 & 1) == 0)))) {
    local_38 = *(undefined4 *)(param_3 + 0xa4);
    local_34 = *(undefined2 *)(param_3 + 0xa8);
    FUN_0091dcb0(param_1,param_2,param_3,param_4,&local_38);
  }
  else {
    *param_2 = *param_2 & 0xfffffffffffffe00 |
               ((ulong)*(byte *)(*(long *)(param_3 + 0x70) + 0x7d) & 0x1f) << 4 | 6;
  }
  return;
}


