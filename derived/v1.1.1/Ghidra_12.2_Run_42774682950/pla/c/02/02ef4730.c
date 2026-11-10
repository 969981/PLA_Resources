/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4730; name: FUN_02ef4730
 */


void FUN_02ef4730(undefined8 param_1,undefined8 param_2,void **param_3,long param_4)

{
  uint uVar1;
  void *__s;
  ulong uVar2;
  long lVar3;
  long lVar4;
  void **ppvVar5;
  void *local_60 [2];
  ulong local_50;
  uint local_48;
  
  local_60[1] = (void *)0x0;
  local_50 = 0x2b00000000;
  local_48 = 0;
  if (((*(uint *)(param_4 + 8) & 0xf00) == 0x200) &&
     (__s = (void *)FUN_02f59e40(5,(ulong)*(ushort *)(param_3 + 2) * (ulong)*(byte *)(param_3 + 1) *
                                   4,0x10), __s != (void *)0x0)) {
    memset(__s,0,(ulong)*(ushort *)(param_3 + 2) * (ulong)*(byte *)(param_3 + 1) * 4);
    uVar2 = (ulong)*(uint *)(param_4 + 8) & 0xff;
    ppvVar5 = local_60 + uVar2 * (uVar2 + 3 >> 2) * -2;
    FUN_02e22440((ulong)*(uint *)(param_4 + 8),ppvVar5);
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_3 + 1));
    local_48 = (uint)*(ushort *)(param_3 + 2);
    local_60[0] = (void *)0x3f8000003f800000;
    local_60[1] = __s;
    thunk_FUN_02f1ba60(1.0 / (float)*(ushort *)(param_3 + 2),param_3,local_60 + 1,local_60,ppvVar5,
                       ppvVar5);
    param_3 = local_60 + 1;
  }
  uVar1 = *(uint *)(param_3 + 1) >> 0xc;
  if (uVar1 == 3) {
    lVar3 = 1;
  }
  else if (uVar1 == 4) {
    lVar3 = 0;
  }
  else if (uVar1 == 0x60f) {
    lVar3 = 2;
  }
  else {
    lVar3 = 3;
    if (uVar1 != 0x63f) {
      lVar3 = 4;
    }
  }
  uVar1 = *(uint *)(param_4 + 8) >> 0xc;
  if (uVar1 == 3) {
    lVar4 = 1;
  }
  else if (uVar1 == 4) {
    lVar4 = 0;
  }
  else if (uVar1 == 0x60f) {
    lVar4 = 2;
  }
  else if (uVar1 == 0x63f) {
    lVar4 = 3;
  }
  else {
    lVar4 = 4;
  }
  (*(code *)(&DAT_0440ae68)[lVar4 * 2 + lVar3 * 10])(param_1,param_2,param_3,param_4);
  if (local_60[1] != (void *)0x0) {
    local_48 = 0;
    local_50 = local_50 & 0xffffffff00000000;
    local_60[1] = (void *)0x0;
    FUN_02f59e70(5);
  }
  return;
}


