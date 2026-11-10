/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dee0; name: _INIT_551
 */


void _INIT_551(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR_DAT_043889d0;
  puVar2 = PTR_DAT_043889c8;
  puVar1 = PTR_DAT_043889c0;
  if ((*PTR_DAT_043889c0 & 1) == 0) {
    uVar4 = (ulong)DAT_0444ac08 & 0xfffffffffffffffc;
    *(undefined8 *)(PTR_DAT_043889c8 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    DAT_0444ac08 = puVar2;
    *(ulong *)puVar2 = uVar4;
    *(undefined **)(puVar2 + 8) = puVar3;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


