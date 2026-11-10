/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0498; name: FUN_031c0498
 */


void FUN_031c0498(long *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 local_38 [2];
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  *(short *)(*(long *)(*param_1 + 0x48) + 0xc) = (short)*(undefined4 *)(*param_1 + 0x40);
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x8a) >> 4 & 1) != 0)) {
    uVar1 = *param_3;
    local_28 = param_2;
    uVar2 = FUN_031c0114(param_1 + 2,PTR_PTR_0434a080,&local_28,auStack_24);
    uVar2 = -(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3;
    *(undefined4 *)(param_1[2] + uVar2) = param_2;
    *(undefined4 *)(param_1[2] + uVar2 + 4) = uVar1;
  }
  else {
    local_38[0] = param_2;
    FUN_031c0664(param_1 + 2,local_38);
  }
  return;
}


