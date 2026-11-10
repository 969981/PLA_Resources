/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b1e98; name: FUN_002b1e98
 */


void FUN_002b1e98(long *param_1,undefined *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar8 = (ulong *)(param_1 + 1);
  *puVar8 = 0;
  puVar3 = PTR_DAT_04373488;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar4 = FUN_0033aecc(puVar8);
    uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    lVar7 = uVar9 + 9;
    if ((*(byte *)(uVar9 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar7 = *(long *)(uVar9 + 0x18);
    }
    FUN_002e4094(uVar4,lVar7,uVar1);
  }
  puVar3 = PTR_DAT_043730c0;
  param_1[2] = (long)PTR_DAT_043730c0;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_002b1f2c:
      puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
      if ((*puVar8 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_0029175c(param_1 + 2,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) != 0) goto LAB_002b1f2c;
  param_1[3] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x18);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_002b1f64:
      puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
      if ((*puVar8 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_0029175c(param_1 + 3,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) != 0) goto LAB_002b1f64;
  param_1[4] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x20);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto joined_r0x002b1f9c;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x20) + 8) == 0) goto joined_r0x002b1f9c;
  puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
  if ((*puVar8 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_0029175c(param_1 + 4,puVar6);
joined_r0x002b1f9c:
  if ((param_2 == PTR_DAT_04373190) || (lVar7 = *(long *)(param_2 + 0x28), lVar7 == 0)) {
    param_1[5] = 0;
    return;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar5 != 0) {
    FUN_0030bdf4(lVar5,lVar7);
  }
  param_1[5] = lVar5;
  return;
}


