/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65360; name: FUN_02e65360
 */


uint FUN_02e65360(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  
  if (DAT_0440a0b0 != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(DAT_0440a0a8 + (ulong)uVar4 * 8) == 0) goto LAB_02e653ac;
      uVar4 = uVar4 + 1;
    } while (DAT_0440a0b0 != uVar4);
  }
  puVar2 = (undefined8 *)FUN_02e6726c();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    uVar4 = DAT_0440a0b0 - 1;
    *(undefined8 *)(DAT_0440a0a8 + (ulong)DAT_0440a0b0 * 8 + -8) = 0;
LAB_02e653ac:
    if ((*(uint *)(param_2 + 0x18) & 1) == 0) {
      if ((*(uint *)(param_2 + 0x18) >> 1 & 1) == 0) {
        return 0xffffffff;
      }
      plVar3 = (long *)(*DAT_0442d138)(7,0x650);
      if (plVar3 == (long *)0x0) {
        return 0xffffffff;
      }
      FUN_02e6ec18(plVar3,param_3);
    }
    else {
      plVar3 = (long *)(*DAT_0442d138)(7,0x648);
      if (plVar3 == (long *)0x0) {
        return 0xffffffff;
      }
      FUN_02e67438(plVar3,param_3);
    }
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,uVar4);
    if (iVar1 == 1) {
      *(long **)(DAT_0440a0a8 + (ulong)uVar4 * 8) = plVar3;
      return uVar4;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3);
  }
  return 0xffffffff;
}


