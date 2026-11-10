/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00200538; name: FUN_00200538
 */


undefined8 FUN_00200538(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_1[0x98] + param_1[0x9c] == 0) && (*param_1 == 0)) {
    if (*(long *)(param_1[0x84] + 0x70) == 0) {
      uVar1 = FUN_001f3550((int)param_1[0x4b],0xffffffff,0xffffffff,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else {
      *param_1 = param_2;
      uVar2 = (**(code **)(param_1[0x84] + 0x70))(param_1,1);
      *param_1 = 0;
      if ((uVar2 & 1) == 0) goto LAB_00200560;
    }
    FUN_001f3934(param_2,"Connection %ld seems to be dead!\n",param_1[0xc]);
    FUN_001df280(param_2,param_1,0);
    uVar1 = 1;
  }
  else {
LAB_00200560:
    uVar1 = 0;
  }
  return uVar1;
}


