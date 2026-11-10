/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1211c; name: FUN_02f1211c
 */


void FUN_02f1211c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    puVar5 = (undefined8 *)*param_2;
    puVar3 = puVar5;
    do {
      uVar2 = FUN_02f12f4c((long)puVar5 + 0xc,param_1);
      if ((uVar2 & 1) != 0) {
        puVar3 = (undefined8 *)(*param_3 + (ulong)*(uint *)((long)param_3 + 0xc) * 0x18);
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 1;
        uVar1 = *(undefined4 *)(puVar5 + 1);
        *puVar3 = *puVar5;
        *(undefined4 *)(puVar3 + 1) = uVar1;
        puVar3 = (undefined8 *)*param_2;
        uVar4 = *(uint *)(param_2 + 1);
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar3 + (ulong)uVar4 * 3);
  }
  return;
}


