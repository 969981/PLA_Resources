/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3330; name: FUN_004e3330
 */


void FUN_004e3330(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar5 = *param_1;
    if (uVar1 < 4) {
      uVar2 = 0;
      lVar3 = lVar5;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffc;
      lVar3 = lVar5 + uVar2 * 0x38;
      puVar4 = (undefined4 *)(lVar5 + 0x7c);
      uVar6 = uVar2;
      do {
        puVar4[-0x1c] = 0;
        uVar6 = uVar6 - 4;
        puVar4[-0xe] = 0;
        *puVar4 = 0;
        puVar4[0xe] = 0;
        puVar4 = puVar4 + 0x38;
      } while (uVar6 != 0);
      if (uVar1 == uVar2) {
        return;
      }
    }
    puVar4 = (undefined4 *)(lVar3 + 0xc);
    do {
      uVar2 = uVar2 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 0xe;
    } while (uVar2 < uVar1);
  }
  return;
}


