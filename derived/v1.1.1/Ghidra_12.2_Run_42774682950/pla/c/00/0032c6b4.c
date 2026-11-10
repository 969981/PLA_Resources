/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c6b4; name: FUN_0032c6b4
 */


void FUN_0032c6b4(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = *(ulong **)(param_1 + 0x18);
  do {
    if (puVar1 == (ulong *)0x0) {
      uVar2 = 8;
    }
    else {
      uVar2 = *puVar1 << 1;
      if (0x3f < uVar2) {
        uVar2 = 0x40;
      }
    }
    puVar1 = (ulong *)FUN_0032c744(param_1,(int)(uVar2 * 0x10) + 0x17U & 0xff0);
    uVar3 = *(ulong *)(param_1 + 0x18);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(ulong **)(param_1 + 0x18) = puVar1;
    *(ulong **)(param_1 + 0x38) = puVar1 + 2;
    *(ulong **)(param_1 + 0x40) = puVar1 + 2 + uVar2 * 2;
  } while (uVar2 * 0x10 == 0);
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  *(ulong **)(param_1 + 0x38) = puVar1 + 4;
  return;
}


