/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2ffb8; name: FUN_02c2ffb8
 */


undefined8 FUN_02c2ffb8(long param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    puVar1 = *(ushort **)(param_1 + 0x58);
    puVar2 = *(ushort **)(param_2 + 0x58);
    uVar3 = *puVar1;
    if (uVar3 == *puVar2) {
      do {
        if (uVar3 == 0x10) {
          puVar4 = puVar1 + 1;
          uVar5 = (ulong)*puVar4;
          lVar6 = uVar5 * 2 + 4;
          puVar1 = puVar1 + uVar5 + 2;
          while (lVar6 != 0) {
            puVar2 = puVar2 + 1;
            lVar6 = lVar6 + -2;
            uVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            if (uVar3 != *puVar2) {
              return 0;
            }
          }
          uVar3 = *puVar1;
        }
        if (uVar3 == 0) {
          return 1;
        }
        puVar1 = puVar1 + 1;
        uVar3 = *puVar1;
        puVar2 = puVar2 + 1;
      } while (uVar3 == *puVar2);
    }
  }
  return 0;
}


