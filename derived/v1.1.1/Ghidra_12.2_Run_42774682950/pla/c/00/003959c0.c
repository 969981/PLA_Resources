/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003959c0; name: FUN_003959c0
 */


void FUN_003959c0(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar1 = PTR_LAB_04373088;
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar2 = (uint *)param_1[2];
  if ((puVar2 == (uint *)0x0) || (*param_1 != 0)) {
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  else {
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      puVar2 = puVar2 + 2;
      puVar4 = *(undefined8 **)puVar2;
      if (puVar4 != (undefined8 *)0x0) goto LAB_00395a54;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        while( true ) {
          puVar2 = puVar2 + 2;
          puVar4 = *(undefined8 **)puVar2;
          if (puVar4 == (undefined8 *)0x0) break;
LAB_00395a54:
          (**(code **)*puVar4)(puVar4);
          FUN_002e2ea0(puVar1,puVar4);
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_00395a7c;
        }
      }
LAB_00395a7c:
      puVar2 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar2);
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  if (lVar3 != 0) {
                    /* try { // try from 003959f0 to 003959f3 has its CatchHandler @ 00395a94 */
    FUN_0032ce8c();
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


