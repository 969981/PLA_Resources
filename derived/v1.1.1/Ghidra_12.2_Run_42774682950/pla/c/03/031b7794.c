/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b7794; name: FUN_031b7794
 */


int FUN_031b7794(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0xf) == 0) {
    iVar2 = 2;
  }
  else {
    uVar3 = *param_1;
    puVar1 = param_1 + 2;
    iVar2 = FUN_031b7830(uVar3,uVar3,param_1 + 0xe,puVar1,puVar1,param_1 + 0x10,puVar1,uVar3);
    if (*(int *)(param_1 + 0x11) == iVar2) {
      iVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) {
      iVar2 = 3;
      if (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5)) {
        iVar2 = (uint)(*(int *)(param_1 + 0xf) == 0) << 1;
      }
    }
    else {
      iVar2 = 3;
    }
  }
  return iVar2;
}


