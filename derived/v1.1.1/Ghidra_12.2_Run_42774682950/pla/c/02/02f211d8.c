/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f211d8; name: FUN_02f211d8
 */


undefined8 FUN_02f211d8(long *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = FUN_02f2017c();
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5);
  if (iVar3 == 1) {
    lVar5 = param_1[3];
    *(int *)(lVar5 + 0x29c) = iVar2 - (int)param_1[5];
    puVar1 = (uint *)(lVar5 + 0x2a3);
    *puVar1 = *puVar1 & 0xfe3fffff;
    if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
      (**(code **)(*(long *)param_1[0xb] + 0x90))();
    }
    else {
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
    }
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


