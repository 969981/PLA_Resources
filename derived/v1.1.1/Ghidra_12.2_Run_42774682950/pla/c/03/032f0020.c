/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f0020; name: _INIT_1614
 */


void _INIT_1614(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR_DAT_04389230;
  puVar2 = PTR_DAT_04389228;
  puVar1 = PTR_DAT_04389210;
  if ((*PTR_DAT_04389228 & 1) == 0) {
    uVar4 = (ulong)DAT_0444ac08 & 0xfffffffffffffffc;
    *(undefined8 *)(PTR_DAT_04389230 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    DAT_0444ac08 = puVar3;
    *(ulong *)puVar3 = uVar4;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


