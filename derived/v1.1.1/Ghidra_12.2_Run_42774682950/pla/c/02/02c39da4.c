/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c39da4; name: FUN_02c39da4
 */


void FUN_02c39da4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x10;
  FUN_02c39e68(lVar1);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar3 = DAT_03a8485c;
  uVar2 = DAT_03a84854;
  *(undefined4 *)(param_1 + 0x58) = DAT_03a8486c;
  uVar4 = DAT_03a84864;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  FUN_02c3a000(lVar1);
  FUN_02c3a2c4(lVar1,&DAT_03a848b0);
  return;
}


