/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01317a6c; name: FUN_01317a6c
 */


int FUN_01317a6c(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong local_58 [3];
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x198);
  iVar2 = FUN_01306838(uVar6,param_2,param_3,1,2);
  if (iVar2 == -1) {
    iVar2 = FUN_01306838(uVar6,param_2,param_3,1,1);
    if (iVar2 != -1) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x84);
      iVar3 = FUN_0131a338();
      if (iVar3 == 7) {
        iVar3 = 5;
      }
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      FUN_0131c8b8(uVar1,iVar3,local_58,1);
      uVar4 = local_58[0] & 0xffffffff;
      if ((int)local_58[0] != 0) {
        piVar5 = (int *)((ulong)local_58 | 4);
        do {
          if (*piVar5 == *(int *)(param_2 + 0x18)) {
            return iVar2;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 != 0);
      }
    }
    iVar2 = FUN_01306838(uVar6,param_2,param_3,0,0);
  }
  return iVar2;
}


