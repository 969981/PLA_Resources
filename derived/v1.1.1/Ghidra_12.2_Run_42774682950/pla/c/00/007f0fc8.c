/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0fc8; name: FUN_007f0fc8
 */


void FUN_007f0fc8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_007e3400(param_1);
  iVar2 = memcmp((void *)(param_2 + 0xc),&DAT_03a72091,0xc);
  if (iVar2 == 0) {
    memcpy(&local_30,(void *)(param_2 + 8),4);
    uVar1 = ((uint)local_30 & 0xff00ff00) >> 8 | ((uint)local_30 & 0xff00ff) << 8;
    FUN_007e34ac(param_1,uVar1 >> 0x10 | uVar1 << 0x10);
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    memcpy(&local_30,(void *)(param_2 + 8),0x10);
    FUN_007e34e8(param_1,local_30,uStack_28);
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return;
}


