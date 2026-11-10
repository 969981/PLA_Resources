/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405e20; name: FUN_00405e20
 */


void FUN_00405e20(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (iVar2 = (int)param_1[3] + -1, -1 < iVar2)) {
    lVar4 = (long)iVar2;
    puVar3 = *(undefined8 **)(*param_1 + lVar4 * 8);
    while( true ) {
      while (puVar3 != (undefined8 *)0x0) {
        uVar1 = *puVar3;
        puVar3 = (undefined8 *)puVar3[1];
        (*param_2)(uVar1,param_3);
      }
      lVar4 = lVar4 + -1;
      if ((int)lVar4 < 0) break;
      puVar3 = *(undefined8 **)(*param_1 + lVar4 * 8);
    }
  }
  return;
}


