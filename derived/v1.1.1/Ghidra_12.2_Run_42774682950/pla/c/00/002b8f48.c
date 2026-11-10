/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b8f48; name: FUN_002b8f48
 */


void FUN_002b8f48(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar4 = (long *)param_1[1];
    lVar3 = *plVar4;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    puVar2 = PTR_LAB_04373088;
    while (plVar4 != param_1) {
      plVar4 = (long *)plVar4[1];
      FUN_002e2ea0(puVar2);
    }
  }
  return;
}


