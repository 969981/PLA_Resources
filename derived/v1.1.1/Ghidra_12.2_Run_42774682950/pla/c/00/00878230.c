/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00878230; name: FUN_00878230
 */


void FUN_00878230(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 local_120 [64];
  
  puVar1 = local_120;
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    puVar3 = (undefined4 *)(param_4 + 8);
    do {
      *puVar1 = puVar3[-2];
      puVar1[1] = puVar3[-1];
      puVar1[2] = *puVar3;
      puVar1[3] = puVar3[1];
      puVar3 = puVar3 + 8;
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 != 0);
  }
  (**(code **)PTR_DAT_043785a0)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_120);
  return;
}


