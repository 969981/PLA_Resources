/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121fb5c; name: FUN_0121fb5c
 */


void FUN_0121fb5c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (**(int **)(param_1 + 0x1648) == 1) {
    puVar2 = &DAT_03a7a110;
  }
  else {
    if (**(int **)(param_1 + 0x1648) != 0) {
      puVar2 = &DAT_03a7a120;
      uVar3 = 2;
      goto LAB_0121fba8;
    }
    uVar1 = FUN_00d54910(param_1);
    if ((uVar1 & 1) == 0) {
      puVar2 = &DAT_03a7a0c0;
      uVar3 = 4;
      goto LAB_0121fba8;
    }
    puVar2 = &DAT_03a7a100;
  }
  uVar3 = 1;
LAB_0121fba8:
  FUN_012201cc(param_1,puVar2,uVar3);
  return;
}


