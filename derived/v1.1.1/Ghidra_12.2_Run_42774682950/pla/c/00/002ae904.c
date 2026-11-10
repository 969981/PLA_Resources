/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ae904; name: FUN_002ae904
 */


void FUN_002ae904(long *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_043733e8;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar3 = FUN_0033aecc(param_1 + 1);
    uVar1 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    lVar6 = uVar5 + 9;
    if ((*(byte *)(uVar5 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar5 + 0x10);
      lVar6 = *(long *)(uVar5 + 0x18);
    }
    FUN_002e4094(uVar3,lVar6,uVar1);
  }
  if (param_2 == PTR_DAT_043733e0) {
    param_1[2] = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 == 0) {
      param_1[2] = 0;
      lVar6 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (lVar4 != 0) {
        FUN_002a8974(lVar4,lVar6);
      }
      param_1[2] = lVar4;
      lVar6 = *(long *)(param_2 + 0x18);
    }
    if (lVar6 != 0) {
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x38);
      if (lVar4 != 0) {
        FUN_002b1e98(lVar4,lVar6);
      }
      param_1[3] = lVar4;
      return;
    }
  }
  param_1[3] = 0;
  return;
}


