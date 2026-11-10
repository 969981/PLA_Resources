/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00676634; name: FUN_00676634
 */


void FUN_00676634(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar3) {
    param_1[2] = lVar5 + -0x48;
    pbVar6 = *(byte **)(lVar5 + -0x20);
    if (pbVar6 != (byte *)0x0) {
      pbVar4 = *(byte **)(lVar5 + -0x18);
      if (pbVar4 == pbVar6) {
        pbVar4 = pbVar6;
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
          if (pbVar6 == pbVar2) break;
          bVar1 = pbVar2[-0x20];
          pbVar4 = pbVar2;
          pbVar2 = pbVar2 + -0x20;
        }
        pbVar4 = *(byte **)(lVar5 + -0x20);
      }
      *(byte **)(lVar5 + -0x18) = pbVar6;
      (**(code **)(**(long **)(lVar5 + -8) + 0x18))
                (*(long **)(lVar5 + -8),pbVar4,*(long *)(lVar5 + -0x10) - (long)pbVar4,8);
    }
    if ((*(byte *)(lVar5 + -0x40) & 1) != 0) {
      (**(code **)(**(long **)(lVar5 + -0x28) + 0x18))
                (*(long **)(lVar5 + -0x28),*(undefined8 *)(lVar5 + -0x30),
                 *(ulong *)(lVar5 + -0x40) & 0xfffffffffffffffe,1);
    }
    lVar5 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00676740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar3,param_1[3] - lVar3,8);
  return;
}


