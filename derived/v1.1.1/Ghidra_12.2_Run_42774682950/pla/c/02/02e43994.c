/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43994; name: FUN_02e43994
 */


long FUN_02e43994(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_24 = 0x3f800000;
  lVar5 = *(long *)(param_2 + 0x98);
  if ((((lVar5 == -1) || (lVar6 = FUN_02e45f34(param_1,lVar5), lVar6 == 0)) ||
      (*(char *)(lVar6 + 0x690) == '\0')) ||
     (uVar3 = FUN_02e5499c(lVar6,param_3,&local_18,&local_20,&local_24), (uVar3 & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 != 0) {
      uVar2 = 0;
      uVar4 = (uint)*(long *)(param_2 + 0x90);
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      for (local_18 = *(long *)(*param_1 + (ulong)(uVar4 - uVar2 * uVar1) * 8); local_18 != 0;
          local_18 = *(long *)(local_18 + 0x48)) {
        if (*(long *)(local_18 + 0x40) == *(long *)(param_2 + 0x90)) {
          lVar5 = FUN_02e505b0(local_18,param_3,&local_18,&local_20,&local_24);
          goto LAB_02e43afc;
        }
      }
    }
    lVar6 = *(long *)(param_2 + 0xa8);
    lVar5 = *(long *)(param_2 + 0x98);
    *(undefined8 *)(param_2 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xb4) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x98) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0xb0) = 0;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xcc) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xd4) = 0x3f80000000000000;
    if (lVar6 != -1) {
      *(undefined2 *)(param_2 + 0xf8) = 0x101;
    }
    if (lVar5 == -1) {
      local_18 = 0;
    }
    else {
      local_18 = 0;
      *(undefined1 *)(param_2 + 0xf8) = 1;
    }
  }
  else {
LAB_02e43afc:
    FUN_02e43b10(local_24,param_2,local_18,local_20,lVar5);
  }
  return local_18;
}


