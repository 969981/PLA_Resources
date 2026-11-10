/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043ff80; name: FUN_0043ff80
 */


ulong FUN_0043ff80(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      if ((uVar4 / 0xf) * 0xf == uVar4) {
        if ((uVar4 != 0) && (iVar2 = FUN_004044c0(param_1,&DAT_0396725e), iVar2 < 1)) {
          return 0;
        }
        uVar3 = FUN_004048a0(param_1,param_4,0x80);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      puVar1 = &DAT_03996322;
      if (param_3 - 1 != uVar4) {
        puVar1 = &DAT_039b07fe;
      }
      iVar2 = FUN_00402590(param_1,"%02x%s",*(undefined1 *)(param_2 + uVar4),puVar1);
      if (iVar2 < 1) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  iVar2 = FUN_004042b0(param_1,&DAT_0396725e,1);
  return (ulong)(0 < iVar2);
}


