/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c420; name: FUN_0020c420
 */


void FUN_0020c420(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      uVar3 = param_1[2];
      puVar1 = (undefined8 *)*puVar2;
      FUN_0020c748(uVar3,puVar2[1]);
      puVar2[1] = 0;
      FUN_0020c748(uVar3,puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


