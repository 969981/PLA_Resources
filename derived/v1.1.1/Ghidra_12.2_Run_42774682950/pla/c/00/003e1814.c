/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e1814; name: FUN_003e1814
 */


void FUN_003e1814(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar6 = *plVar2;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar6;
    param_1[2] = 0;
    puVar5 = PTR_LAB_04373088;
    if (plVar2 != param_1) {
      puVar3 = (undefined8 *)plVar2[2];
      plVar2[2] = 0;
      plVar4 = (long *)plVar2[1];
      while( true ) {
        if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 003e1890 to 003e1893 has its CatchHandler @ 003e18a8 */
          (**(code **)*puVar3)();
        }
        FUN_002e2ea0(puVar5,plVar2);
        if (plVar4 == param_1) break;
        puVar3 = (undefined8 *)plVar4[2];
        plVar4[2] = 0;
        plVar2 = plVar4;
        plVar4 = (long *)plVar4[1];
      }
    }
  }
  return;
}


