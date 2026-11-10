/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f0ac; name: FUN_0085f0ac
 */


void FUN_0085f0ac(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_008471b4();
  puVar2 = PTR_DAT_04378198;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_007e3400(param_1 + 0xc);
  FUN_007e3400(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x14] = -1;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0086184c(param_1 + 0x1b);
  uVar1 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) - 1;
  uVar5 = uVar1;
  if (0xe < uVar1) {
    uVar5 = 0xf;
  }
  uVar5 = uVar5 + uVar1;
  uVar7 = (ulong)uVar5;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar7 * 0x78,uVar3);
  if ((lVar4 != 0) && (uVar5 != 0)) {
    lVar6 = lVar4;
    do {
      FUN_00861790(lVar6);
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + 0x78;
    } while (uVar7 != 0);
  }
  param_1[0x17] = lVar4;
  *(uint *)(param_1 + 0x18) = uVar5;
  FUN_00821b80(&DAT_043a5840);
  return;
}


