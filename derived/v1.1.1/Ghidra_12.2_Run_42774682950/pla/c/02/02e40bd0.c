/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e40bd0; name: FUN_02e40bd0
 */


void FUN_02e40bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if (DAT_04409a48 != 0) {
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,1);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,2);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,3);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,4);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,5);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,6);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,7);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,8);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,9);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,10);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0xb);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0xc);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0xd);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0xe);
    FUN_02e43c7c(DAT_0440a128 + 0xa8,0xf);
    FUN_02e784a0(&LAB_02e3f550,8);
    FUN_02e784a0(&LAB_02e40bc0,0x10);
    FUN_02e784a0(FUN_02e40bd0,0x80);
    puVar2 = PTR_DAT_043885f8;
    lVar3 = *(long *)(PTR_DAT_043885f8 + 0x10);
    puVar1 = PTR_DAT_043885f0;
    while (PTR_DAT_043885f0 = puVar1, lVar3 != 0) {
      if ((6 < *(uint *)(*(long *)(lVar3 + 8) + 0x40)) &&
         (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 0x38) + 0x30) != 0)) {
        FUN_02eb1f30();
        lVar3 = *(long *)(puVar2 + 0x10);
        puVar1 = PTR_DAT_043885f0;
      }
    }
    lVar3 = *(long *)(puVar1 + 0x10);
    while (lVar3 != 0) {
      if ((7 < *(uint *)(*(long *)(lVar3 + 8) + 0x40)) &&
         (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 0x38) + 0x38) != 0)) {
        FUN_02eb1f30();
        lVar3 = *(long *)(puVar1 + 0x10);
      }
    }
    FUN_02e40dc0(DAT_04409a48);
    DAT_04409a48 = 0;
    FUN_02e40e64();
    DAT_0440aa78 = 0;
  }
  return;
}


