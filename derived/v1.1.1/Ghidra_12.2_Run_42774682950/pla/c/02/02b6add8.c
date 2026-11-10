/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6add8; name: FUN_02b6add8
 */


bool FUN_02b6add8(long param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x450) != '\0') {
    plVar5 = *(long **)(param_1 + 0x58);
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar5 != plVar4) {
      do {
        sVar1 = *(short *)((long)plVar5 + 10);
        sVar2 = (**(code **)(*(long *)(*(long *)(*plVar5 + 0x58) + 0x58) + 0x10))();
        if ((int)(short)param_2 < (int)sVar1 + (int)sVar2) {
          plVar4 = (long *)(*(long *)(*plVar5 + 0x58) + 0x58);
          uVar3 = (**(code **)(*plVar4 + 0x58))
                            (plVar4,param_2 - (uint)*(ushort *)((long)plVar5 + 10));
          return uVar3 <= *(uint *)(param_1 + 0x454);
        }
        plVar5 = plVar5 + 2;
      } while (plVar4 != plVar5);
    }
  }
  return true;
}


