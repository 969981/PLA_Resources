/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023c818; name: FUN_0023c818
 */


undefined8 FUN_0023c818(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char acStack_50 [8];
  char acStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0022cdf0(acStack_48);
  if ((*(code **)(param_3 + 0xb0) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_3 + 0xb0))
                        (acStack_48,*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 0xb8))
     , (uVar1 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00232654(0x10);
    *(undefined8 **)(param_1 + 0x38) = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    **(undefined4 **)(param_1 + 0x38) = local_40;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 4) = local_38;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 8) = local_3c;
    strcpy(acStack_50,acStack_48);
    uVar3 = FUN_00235834(*(undefined8 *)(param_4 + 0x38),param_2,acStack_50);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar3 = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
  }
  return uVar3;
}


