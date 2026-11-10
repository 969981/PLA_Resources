/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f500; name: FUN_0021f500
 */


void FUN_0021f500(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = (**(code **)(*param_2 + 0xb8))();
  if (iVar2 == 3) {
    puVar3 = PTR_LAB_043728c0;
  }
  else {
    puVar1 = (undefined *)0x0;
    if (iVar2 == 1) {
      puVar1 = PTR_LAB_043728b8;
    }
    puVar3 = PTR_LAB_043728b0;
    if (iVar2 != 2) {
      puVar3 = puVar1;
    }
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = puVar3;
  return;
}


