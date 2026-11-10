/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df660; name: FUN_001df660
 */


long * FUN_001df660(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_001f8fb4();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0x0;
    iVar4 = -1;
    do {
      plVar5 = (long *)*puVar3;
      if ((plVar5[0x98] + plVar5[0x9c] == 0) && (*plVar5 == 0)) {
        iVar1 = FUN_001f8fe0(auVar6._0_8_,auVar6._8_8_,plVar5[0x47],plVar5[0x48]);
        if (iVar1 <= iVar4) {
          iVar1 = iVar4;
          plVar5 = plVar2;
        }
        plVar2 = plVar5;
        iVar4 = iVar1;
      }
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
    if (plVar2 != (long *)0x0) {
      FUN_001df360(param_2,plVar2);
      *(long *)(*(long *)(param_1 + 0x1100) + 0x30) =
           *(long *)(*(long *)(param_1 + 0x1100) + 0x30) + -1;
      *plVar2 = param_1;
    }
  }
  return plVar2;
}


