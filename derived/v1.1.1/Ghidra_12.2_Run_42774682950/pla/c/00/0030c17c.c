/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030c17c; name: FUN_0030c17c
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0030c17c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == 0) {
LAB_0030c1b8:
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
      uVar3 = *(ulong *)(param_1 + 0x10);
      *param_2 = 8;
    }
    if (uVar3 < 0x80) {
      param_2[1] = (byte)uVar3;
      param_2 = param_2 + 2;
      goto LAB_0030c1b8;
    }
    param_2[1] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe == 0) {
      param_2[2] = (char)(uVar3 >> 7);
      param_2 = param_2 + 3;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    else {
      param_2 = param_2 + 3;
      uVar3 = uVar3 >> 7;
      do {
        puVar2 = param_2;
        uVar4 = uVar3 >> 7;
        puVar2[-1] = (byte)uVar3 | 0x80;
        param_2 = puVar2 + 1;
        uVar5 = uVar3 >> 0xe;
        uVar3 = uVar4;
      } while (uVar5 != 0);
      *puVar2 = (char)uVar4;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
  }
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
      uVar1 = *(uint *)(param_1 + 0x18);
      *param_2 = 0x10;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      uVar3 = *(ulong *)(param_1 + 8);
      goto joined_r0x0030c2ac;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
      param_2 = param_2 + 3;
      uVar3 = *(ulong *)(param_1 + 8);
      goto joined_r0x0030c2ac;
    }
    param_2 = param_2 + 3;
    uVar3 = (ulong)(long)(int)uVar1 >> 7;
    do {
      puVar2 = param_2;
      uVar4 = uVar3 >> 7;
      puVar2[-1] = (byte)uVar3 | 0x80;
      param_2 = puVar2 + 1;
      uVar5 = uVar3 >> 0xe;
      uVar3 = uVar4;
    } while (uVar5 != 0);
    *puVar2 = (char)uVar4;
  }
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x0030c2ac:
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)FUN_00311a94((uVar3 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar2;
}


