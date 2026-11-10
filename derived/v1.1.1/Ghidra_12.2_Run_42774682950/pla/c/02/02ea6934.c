/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6934; name: FUN_02ea6934
 */


undefined8 FUN_02ea6934(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_02ea6a04();
  uVar4 = FUN_02ea78d4(param_1,*(undefined4 *)(param_2 + 0x20));
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar6 = 0;
      uVar4 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar6);
        uVar5 = *puVar1;
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6);
        lVar6 = lVar6 + 0x18;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
        *puVar2 = uVar5;
        puVar2[1] = uVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 0x20));
    }
    uVar5 = 1;
  }
  return uVar5;
}


