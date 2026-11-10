/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3c0f8; name: FUN_02b3c0f8
 */


void FUN_02b3c0f8(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(param_1 + 0xe8);
  plVar3 = *(long **)(param_1 + 0xf0);
  if (plVar7 != plVar3) {
    do {
      plVar4 = *(long **)(*plVar7 + 0x98);
      for (plVar1 = *(long **)(*plVar7 + 0x90); plVar1 != plVar4; plVar1 = plVar1 + 1) {
        plVar5 = *(long **)(*plVar1 + 0x80);
        for (plVar2 = *(long **)(*plVar1 + 0x78); plVar2 != plVar5; plVar2 = plVar2 + 1) {
          plVar6 = *(long **)(*plVar2 + 0xe8);
          for (plVar8 = *(long **)(*plVar2 + 0xe0); plVar8 != plVar6; plVar8 = plVar8 + 1) {
            FUN_02bb6fe4(*(undefined8 *)(*plVar8 + 0x60),param_2 & 1,1);
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
  }
  return;
}


