/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050bdc4; name: FUN_0050bdc4
 */


void FUN_0050bdc4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_LAB_04373088;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      lVar5 = *(long *)(lVar4 + -0x18);
      while( true ) {
        if (lVar5 != 0) {
          lVar2 = *(long *)(lVar4 + -0x10);
          if (lVar2 == lVar5) {
            lVar2 = lVar5;
          }
          else {
            do {
              lVar2 = lVar2 + -0x50;
              FUN_0050beac(lVar2);
            } while (lVar5 != lVar2);
            lVar2 = *(long *)(lVar4 + -0x18);
          }
          *(long *)(lVar4 + -0x10) = lVar5;
          FUN_002e2ea0(puVar1,lVar2);
        }
        FUN_003e9f80(lVar4 + -0x30,*(undefined8 *)(lVar4 + -0x28));
        if ((*(byte *)(lVar4 + -0x48) & 1) != 0) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(lVar4 + -0x38));
        }
        if (lVar4 + -0x50 == lVar3) break;
        lVar5 = *(long *)(lVar4 + -0x68);
        lVar4 = lVar4 + -0x50;
      }
      lVar4 = *param_1;
    }
    param_1[1] = lVar3;
    FUN_002e2ea0(PTR_LAB_04373088,lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


