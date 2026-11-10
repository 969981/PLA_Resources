/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051e9cc; name: FUN_0051e9cc
 */


void FUN_0051e9cc(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar6 = PTR_LAB_04373088;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != lVar1) {
    pbVar8 = *(byte **)(lVar2 + -0x18);
    while( true ) {
      lVar5 = lVar2 + -0x78;
      if (pbVar8 != (byte *)0x0) {
        pbVar7 = *(byte **)(lVar2 + -0x10);
        if (pbVar7 == pbVar8) {
          pbVar7 = pbVar8;
        }
        else {
          bVar3 = pbVar7[-0x20];
          pbVar4 = pbVar7 + -0x20;
          while( true ) {
            if ((bVar3 & 1) != 0) {
              FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar7 + -0x10));
            }
            if (pbVar8 == pbVar4) break;
            bVar3 = pbVar4[-0x20];
            pbVar7 = pbVar4;
            pbVar4 = pbVar4 + -0x20;
          }
          pbVar7 = *(byte **)(lVar2 + -0x18);
        }
        *(byte **)(lVar2 + -0x10) = pbVar8;
        FUN_002e2ea0(puVar6,pbVar7);
      }
      if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
        FUN_002e2ea0(puVar6,*(undefined8 *)(lVar2 + -0x20));
      }
      FUN_0051e8b0(lVar5);
      if (lVar5 == lVar1) break;
      pbVar8 = *(byte **)(lVar2 + -0x90);
      lVar2 = lVar5;
    }
  }
  param_1[1] = lVar1;
  return;
}


