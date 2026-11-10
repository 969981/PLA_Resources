/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0156bc30; name: FUN_0156bc30
 */


bool FUN_0156bc30(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  lVar3 = *param_1;
  if (plVar4 != plVar2) {
    do {
      if (*plVar4 != 0) {
        puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar4 + 8))();
        FUN_0156b028();
        for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1 == &DAT_043c9948) goto LAB_0156bca0;
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = plVar2;
  }
LAB_0156bca0:
  plVar2 = (long *)param_2[1];
  if (plVar4 != plVar2) {
    (**(code **)(*(long *)*plVar4 + 0x70))();
    *(undefined1 *)(lVar3 + 0x123) = 1;
  }
  return plVar4 != plVar2;
}


