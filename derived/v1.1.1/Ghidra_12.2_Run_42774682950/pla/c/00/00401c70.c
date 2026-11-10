/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00401c70; name: FUN_00401c70
 */


undefined8 FUN_00401c70(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_30 [2];
  
  iVar1 = FUN_004001b0(&DAT_0439de38,FUN_004013a0);
  uVar2 = 0;
  if ((iVar1 != 0) && (DAT_0439de3c != 0)) {
    local_30[0] = param_1 & 0xfffff000;
    FUN_00400120(DAT_0439de50);
    lVar3 = FUN_00405c90(DAT_0439de58,local_30);
    FUN_00400160(DAT_0439de50);
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
  }
  return uVar2;
}


