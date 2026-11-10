/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dc180; name: FUN_006dc180
 */


void FUN_006dc180(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x20);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    if (pbVar3 == pbVar4) {
      pbVar3 = pbVar4;
    }
    else {
      bVar1 = pbVar3[-0x20];
      pbVar2 = pbVar3 + -0x20;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(pbVar3 + -8) + 0x18))
                    (*(long **)(pbVar3 + -8),*(undefined8 *)(pbVar3 + -0x10),
                     *(ulong *)(pbVar3 + -0x20) & 0xfffffffffffffffe,1);
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x20];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x20;
      }
      pbVar3 = *(byte **)(param_1 + 0x20);
    }
    *(byte **)(param_1 + 0x28) = pbVar4;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),pbVar3,*(long *)(param_1 + 0x30) - (long)pbVar3,8);
  }
  FUN_02767254(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


