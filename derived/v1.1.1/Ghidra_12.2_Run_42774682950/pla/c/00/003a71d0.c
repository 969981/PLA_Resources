/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a71d0; name: FUN_003a71d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003a71d0(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    *param_2 = 8;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar6 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar6;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar7 = uVar6 >> 7;
          puVar5[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar5 + 1;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar8 != 0);
        *puVar5 = (char)uVar7;
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x24);
    *param_2 = 0x10;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar6 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar6;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar7 = uVar6 >> 7;
          puVar5[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar5 + 1;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar8 != 0);
        *puVar5 = (char)uVar7;
      }
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar4 + 0x40);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_003ab000(lVar4,param_2,param_3);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_00311a94((uVar6 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


