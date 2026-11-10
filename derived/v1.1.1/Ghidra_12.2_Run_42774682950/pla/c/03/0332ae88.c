/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332ae88; name: FUN_0332ae88
 */


undefined4 FUN_0332ae88(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)DAT_0444b53c;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
    iVar2 = DAT_0444b538;
    lVar5 = *(long *)(lVar4 + lVar5 * 8 + 0x18);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
  }
  else {
    lVar5 = *(long *)(lVar4 + lVar5 * 8 + 0x18);
    iVar2 = DAT_0444b538;
  }
  if (lVar5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(lVar4 + (long)iVar2 * 8 + 0x18);
  }
  return uVar3;
}


