/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00878160; name: FUN_00878160
 */


void FUN_00878160(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 local_1b0 [32];
  undefined4 local_130 [64];
  
  puVar2 = local_1b0;
  if (0 < (int)param_3) {
    puVar3 = local_130;
    uVar4 = (ulong)param_3;
    puVar5 = (undefined4 *)(param_4 + 0xc);
    do {
      *puVar3 = puVar5[-3];
      puVar3[1] = puVar5[-2];
      puVar3[2] = puVar5[-1];
      puVar3[3] = *puVar5;
      *puVar2 = puVar5[1];
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 0xc;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 4;
      puVar2[1] = *puVar1;
      puVar2 = puVar2 + 2;
    } while (uVar4 != 0);
  }
  (**(code **)PTR_DAT_04378598)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_130);
  (**(code **)PTR_DAT_043785a8)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_1b0);
  return;
}


