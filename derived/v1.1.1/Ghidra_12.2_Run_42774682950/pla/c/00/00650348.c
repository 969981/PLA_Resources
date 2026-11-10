/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00650348; name: FUN_00650348
 */


void FUN_00650348(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x30);
    if (puVar6 == puVar5) {
      puVar6 = puVar5;
    }
    else {
      pbVar7 = (byte *)puVar6[-4];
      puVar3 = puVar6 + -4;
      while( true ) {
        if (pbVar7 != (byte *)0x0) {
          pbVar4 = (byte *)puVar6[-3];
          if (pbVar4 == pbVar7) {
            pbVar4 = pbVar7;
          }
          else {
            bVar1 = pbVar4[-0x20];
            pbVar2 = pbVar4 + -0x20;
            while( true ) {
              if ((bVar1 & 1) != 0) {
                (**(code **)(**(long **)(pbVar4 + -8) + 0x18))
                          (*(long **)(pbVar4 + -8),*(undefined8 *)(pbVar4 + -0x10),
                           *(ulong *)(pbVar4 + -0x20) & 0xfffffffffffffffe,1);
              }
              if (pbVar7 == pbVar2) break;
              bVar1 = pbVar2[-0x20];
              pbVar4 = pbVar2;
              pbVar2 = pbVar2 + -0x20;
            }
            pbVar4 = (byte *)*puVar3;
          }
          puVar6[-3] = pbVar7;
          (**(code **)(*(long *)puVar6[-1] + 0x18))
                    ((long *)puVar6[-1],pbVar4,puVar6[-2] - (long)pbVar4,8);
        }
        if (puVar3 == puVar5) break;
        pbVar7 = (byte *)puVar3[-4];
        puVar6 = puVar3;
        puVar3 = puVar3 + -4;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),puVar6,*(long *)(param_1 + 0x38) - (long)puVar6,8);
  }
  pbVar7 = *(byte **)(param_1 + 8);
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == pbVar7) {
    pbVar4 = pbVar7;
  }
  else {
    bVar1 = pbVar4[-0x20];
    pbVar2 = pbVar4 + -0x20;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        (**(code **)(**(long **)(pbVar4 + -8) + 0x18))
                  (*(long **)(pbVar4 + -8),*(undefined8 *)(pbVar4 + -0x10),
                   *(ulong *)(pbVar4 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (pbVar7 == pbVar2) break;
      bVar1 = pbVar2[-0x20];
      pbVar4 = pbVar2;
      pbVar2 = pbVar2 + -0x20;
    }
    pbVar4 = *(byte **)(param_1 + 8);
  }
  *(byte **)(param_1 + 0x10) = pbVar7;
                    /* WARNING: Could not recover jumptable at 0x006504e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),pbVar4,*(long *)(param_1 + 0x18) - (long)pbVar4,8);
  return;
}


