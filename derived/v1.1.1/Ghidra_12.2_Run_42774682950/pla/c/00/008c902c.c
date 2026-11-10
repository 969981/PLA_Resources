/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c902c; name: FUN_008c902c
 */


void FUN_008c902c(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  FUN_008c5a38();
  uVar5 = FUN_00923c00();
  uVar5 = FUN_00933eec(uVar5,*(undefined1 *)(param_3 + 1));
  uVar3 = FUN_009321a8();
  if (uVar3 != 0) {
    uVar4 = FUN_009321b4(uVar5,0);
    *param_2 = uVar4;
    if (1 < uVar3) {
      uVar4 = FUN_009321b4(uVar5,1);
      param_2[2] = uVar4;
      if (2 < uVar3) {
        uVar4 = FUN_009321b4(uVar5,2);
        param_2[4] = uVar4;
        if (3 < uVar3) {
          uVar4 = FUN_009321b4(uVar5,3);
          param_2[6] = uVar4;
          if (4 < uVar3) {
            uVar6 = 4;
            do {
              uVar4 = FUN_009321b4(uVar5,uVar6);
              param_2[uVar6 * 2] = uVar4;
              uVar1 = (int)uVar6 + 1U & 0xff;
              uVar6 = (ulong)uVar1;
            } while (uVar1 < uVar3);
          }
        }
      }
    }
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(param_3 + 1);
      uVar4 = FUN_009321b4(uVar5,uVar6);
      local_5c = *(undefined4 *)(param_3 + 4);
      local_60 = (uint)bVar2;
      *(undefined4 *)(param_1 + 0x54) = 0;
      uStack_58 = uVar4;
      FUN_008c936c(param_1,&local_60);
      param_2[uVar6 * 2] = uVar4;
      (param_2 + uVar6 * 2)[1] = *(undefined4 *)(param_1 + 0x54);
      uVar1 = (int)uVar6 + 1U & 0xff;
      uVar6 = (ulong)uVar1;
    } while (uVar1 < uVar3);
  }
  *(char *)(param_2 + 8) = (char)uVar3;
  return;
}


