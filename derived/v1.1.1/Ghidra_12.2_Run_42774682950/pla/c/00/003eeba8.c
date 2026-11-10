/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eeba8; name: FUN_003eeba8
 */


void FUN_003eeba8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_LAB_04373088;
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != lVar1) {
    param_1[2] = lVar5 + -0x50;
    lVar6 = *(long *)(lVar5 + -0x18);
    while( true ) {
      if (lVar6 != 0) {
        lVar3 = *(long *)(lVar5 + -0x10);
        if (*(long *)(lVar5 + -0x10) == lVar6) {
          lVar3 = lVar6;
        }
        else {
          do {
            if (*(long *)(lVar3 + -0x18) != 0) {
              FUN_003eea08((long *)(lVar3 + -0x18));
              FUN_002e2ea0(puVar2,*(undefined8 *)(lVar3 + -0x18));
            }
            lVar4 = lVar3 + -0x50;
            FUN_003e9f80(lVar3 + -0x30,*(undefined8 *)(lVar3 + -0x28));
            if ((*(byte *)(lVar3 + -0x48) & 1) != 0) {
              FUN_002e2ea0(puVar2,*(undefined8 *)(lVar3 + -0x38));
            }
            lVar3 = lVar4;
          } while (lVar6 != lVar4);
          lVar3 = *(long *)(lVar5 + -0x18);
        }
        *(long *)(lVar5 + -0x10) = lVar6;
        FUN_002e2ea0(puVar2,lVar3);
      }
      FUN_003e9f80(lVar5 + -0x30,*(undefined8 *)(lVar5 + -0x28));
      if ((*(byte *)(lVar5 + -0x48) & 1) != 0) {
        FUN_002e2ea0(puVar2,*(undefined8 *)(lVar5 + -0x38));
      }
      lVar5 = param_1[2];
      if (lVar5 == lVar1) break;
      param_1[2] = lVar5 + -0x50;
      lVar6 = *(long *)(lVar5 + -0x18);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


