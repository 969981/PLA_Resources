/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a7d8c; name: FUN_003a7d8c
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003a7d8c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    *param_2 = 8;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar4;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar3 = param_2;
          uVar5 = uVar4 >> 7;
          puVar3[-1] = (byte)uVar4 | 0x80;
          param_2 = puVar3 + 1;
          uVar6 = uVar4 >> 0xe;
          uVar4 = uVar5;
        } while (uVar6 != 0);
        *puVar3 = (char)uVar5;
      }
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    *param_2 = 0x10;
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      uVar4 = (ulong)(long)(int)uVar1 >> 7;
      if (((ulong)(long)(int)uVar1 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar4;
        param_2 = param_2 + 3;
        uVar4 = *(ulong *)(param_1 + 8);
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar3 = param_2;
          uVar5 = uVar4 >> 7;
          puVar3[-1] = (byte)uVar4 | 0x80;
          param_2 = puVar3 + 1;
          uVar6 = uVar4 >> 0xe;
          uVar4 = uVar5;
        } while (uVar6 != 0);
        *puVar3 = (char)uVar5;
        uVar4 = *(ulong *)(param_1 + 8);
      }
    }
  }
  if ((uVar4 & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)FUN_00311a94((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar3;
}


