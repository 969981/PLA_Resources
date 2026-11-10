/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00676620; name: thunk_FUN_0064de20
 */


void thunk_FUN_0064de20(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (param_1[1] == lVar5) {
    lVar3 = lVar5;
  }
  else {
    do {
      pbVar6 = *(byte **)(lVar3 + -0x20);
      if (pbVar6 != (byte *)0x0) {
        pbVar4 = *(byte **)(lVar3 + -0x18);
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
          pbVar4 = *(byte **)(lVar3 + -0x20);
        }
        *(byte **)(lVar3 + -0x18) = pbVar6;
        (**(code **)(**(long **)(lVar3 + -8) + 0x18))
                  (*(long **)(lVar3 + -8),pbVar4,*(long *)(lVar3 + -0x10) - (long)pbVar4,8);
      }
      lVar7 = lVar3 + -0x48;
      if ((*(byte *)(lVar3 + -0x40) & 1) != 0) {
        (**(code **)(**(long **)(lVar3 + -0x28) + 0x18))
                  (*(long **)(lVar3 + -0x28),*(undefined8 *)(lVar3 + -0x30),
                   *(ulong *)(lVar3 + -0x40) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar7;
    } while (lVar7 != lVar5);
    lVar3 = *param_1;
  }
  param_1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x0064df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,8);
  return;
}


