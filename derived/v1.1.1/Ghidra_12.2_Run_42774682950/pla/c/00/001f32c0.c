/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f32c0; name: FUN_001f32c0
 */


undefined8 FUN_001f32c0(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w1;
  ulong uVar4;
  undefined1 *puVar5;
  uint local_64;
  
  if (param_3 == 0) {
    uVar3 = 0x2b;
  }
  else {
    do {
      uVar1 = param_3;
      if (3 < param_3) {
        uVar1 = 4;
      }
      uVar3 = thunk_FUN_00203fa4(param_1,&local_64,4);
      if ((int)uVar3 != 0) {
        if ((int)uVar3 != 4) {
          return uVar3;
        }
        if (DAT_0438eb04 != '\x01') {
          iVar2 = FUN_001f8fb4();
          FUN_001f3934(param_1,"WARNING: Using weak random seed\n");
          DAT_0438eb00 = (extraout_w1 + iVar2 + DAT_0438eb00) * -0x7f82434b + 0xa70427df;
          DAT_0438eb04 = '\x01';
        }
        DAT_0438eb00 = DAT_0438eb00 * 0x41c64e6d + 0x3039;
        local_64 = DAT_0438eb00 >> 0x10 | DAT_0438eb00 * 0x10000;
      }
      uVar4 = uVar1;
      puVar5 = param_2;
      do {
        param_2 = puVar5 + 1;
        *puVar5 = (char)local_64;
        local_64 = local_64 >> 8;
        uVar4 = uVar4 - 1;
        puVar5 = param_2;
      } while (uVar4 != 0);
      param_3 = param_3 - uVar1;
    } while (param_3 != 0);
    uVar3 = 0;
  }
  return uVar3;
}


