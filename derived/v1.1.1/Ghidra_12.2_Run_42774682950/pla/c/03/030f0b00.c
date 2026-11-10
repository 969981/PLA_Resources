/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f0b00; name: FUN_030f0b00
 */


void FUN_030f0b00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                (float)((ulong)param_2[1] >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x98) + (float)param_2[1]);
  *(ulong *)(param_1 + 0x90) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                (float)((ulong)uVar4 >> 0x20),(float)*(undefined8 *)(param_1 + 0x90) + (float)uVar4)
  ;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      uVar6 = *param_2;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar2);
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar2);
      puVar1[1] = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                           (float)uVar5 + (float)param_2[1]);
      *puVar1 = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                         (float)uVar4 + (float)uVar6);
      lVar2 = lVar2 + 0x40;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}


