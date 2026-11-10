/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b73b88; name: FUN_02b73b88
 */


void FUN_02b73b88(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar5 != plVar1) {
    if ((param_2 >> 2 & 1) == 0) {
      do {
        uVar3 = *(uint *)(param_1 + 0x124);
        if (uVar3 < 2) {
          uVar2 = *(undefined8 *)(*plVar5 + 0x60);
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x128);
          uVar2 = *(undefined8 *)(*plVar5 + 0x60);
        }
        FUN_02ba9aa4(uVar2,*(undefined4 *)(param_1 + 0x118),uVar3,*(undefined4 *)(param_1 + 0x120),
                     *(undefined4 *)(param_1 + 0x11c),uVar4);
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
    }
    else {
      do {
        uVar3 = *(uint *)(param_1 + 0x124);
        if (uVar3 < 2) {
          uVar4 = *(undefined4 *)(param_1 + 0x11c);
          uVar3 = 0;
          uVar2 = *(undefined8 *)(*plVar5 + 0x60);
        }
        else {
          uVar2 = *(undefined8 *)(*plVar5 + 0x60);
          uVar4 = 0;
        }
        FUN_02ba9aa4(uVar2,*(undefined4 *)(param_1 + 0x118),uVar3,0,uVar4,0);
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
    }
  }
  return;
}


