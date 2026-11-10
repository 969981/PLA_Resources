/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031492d8; name: FUN_031492d8
 */


void FUN_031492d8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x58);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_2 + 0x50) + uVar4 * 8);
      if ((*(byte *)(plVar2 + 3) & 1) == 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x60);
        *(float *)(plVar2 + 5) = *(float *)(plVar2 + 5) + (float)param_1;
        (**(code **)(*plVar2 + 0x30))(param_1,plVar2,uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}


