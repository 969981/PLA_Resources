/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086f2e4; name: FUN_0086f2e4
 */


undefined8 FUN_0086f2e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0')) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      uVar1 = FUN_0086ee64(*(undefined8 *)(param_1 + 0x68));
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        local_40[0] = 0xc434;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
        FUN_007ee578(auStack_60,local_40);
        puVar3 = auStack_60;
      }
      else {
        lVar2 = FUN_0086faa0();
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        if (*(char *)(lVar2 + 2) == '\0') {
          local_40[0] = 0;
          local_18[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
          FUN_007ee578(auStack_80,local_40);
          FUN_007e5c40(uVar4,auStack_80);
          goto LAB_0086f3f8;
        }
        local_40[0] = 0xc434;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
        FUN_007ee578(auStack_70,local_40);
        puVar3 = auStack_70;
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      local_40[0] = 0xc434;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_007ee578(auStack_50,local_40);
      puVar3 = auStack_50;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    local_40[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    FUN_007ee578(auStack_30,local_40);
    puVar3 = auStack_30;
  }
  FUN_007e5cac(uVar4,puVar3);
LAB_0086f3f8:
  FUN_0086e2e4(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 1;
}


