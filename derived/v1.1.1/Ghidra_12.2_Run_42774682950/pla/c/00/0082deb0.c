/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082deb0; name: FUN_0082deb0
 */


ulong FUN_0082deb0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_007f1150();
  uVar2 = FUN_007f1184(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_007f0fc8(auStack_40,param_1);
    uVar2 = FUN_007e362c(auStack_40);
    FUN_007e34a4(auStack_40);
    if ((uVar2 & 1) == 0) {
      local_60[0] = 0;
      FUN_007f0fc8(auStack_40,param_1);
      FUN_007e3524(&local_50,auStack_40,local_60);
      FUN_007e34a4(auStack_40);
      uVar2 = (ulong)(uint)(local_60[0] << 0x10);
    }
    else {
      local_50 = 0;
      uStack_48 = 0;
      FUN_007f0fc8(auStack_40,param_1);
      FUN_007e3670(local_60,auStack_40,&local_50);
      FUN_007e34a4(auStack_40);
      lVar3 = FUN_0082568c(&local_50,0x10);
      uVar2 = lVar3 << 0x10;
    }
  }
  else {
    lVar3 = FUN_007f10e8(param_1);
    uVar2 = lVar3 << 0x10;
  }
  return uVar2 | uVar1 & 0xffff;
}


