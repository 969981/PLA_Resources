/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027647f0; name: FUN_027647f0
 */


void FUN_027647f0(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if (pbVar3 != param_2) {
    bVar1 = pbVar3[-0x20];
    pbVar2 = pbVar3 + -0x20;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        (**(code **)(**(long **)(pbVar3 + -8) + 0x18))
                  (*(long **)(pbVar3 + -8),*(undefined8 *)(pbVar3 + -0x10),
                   *(ulong *)(pbVar3 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (param_2 == pbVar2) break;
      bVar1 = pbVar2[-0x20];
      pbVar3 = pbVar2;
      pbVar2 = pbVar2 + -0x20;
    }
  }
  *(byte **)(param_1 + 8) = param_2;
  return;
}


