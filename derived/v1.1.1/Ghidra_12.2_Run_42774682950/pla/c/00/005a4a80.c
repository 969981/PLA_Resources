/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4a80; name: FUN_005a4a80
 */


undefined8 FUN_005a4a80(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_1[2];
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + (uVar4 - uVar5 >> 1);
      uVar3 = *(uint *)(*param_1 + uVar1 * 4);
      if (uVar3 < param_2) {
        uVar5 = uVar1 + 1;
      }
      else {
        uVar4 = uVar1;
        if (uVar3 <= param_2) {
          puVar2 = (undefined8 *)(param_1[1] + uVar1 * 8);
          if (puVar2 == (undefined8 *)0x0) {
            return 0;
          }
          return *puVar2;
        }
      }
    } while (uVar5 < uVar4);
  }
  return 0;
}


