/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024864; name: FUN_03024864
 */


void FUN_03024864(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  uVar1 = FUN_0332448c(param_3,"hknpContactImpulseEvent ");
  uVar1 = FUN_0332448c(uVar1,(&PTR_DAT_042b1620)[*(byte *)(param_1 + 0x20)]);
  uVar1 = FUN_0332448c(uVar1," bodyIds=");
  uVar1 = FUN_03324694(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0332448c(uVar1,&DAT_038ee629);
  FUN_03324694(uVar1,*(undefined8 *)(param_1 + 0x10));
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    FUN_0332448c(param_3," (manifold destroyed)");
  }
  else {
    FUN_03025120(param_2 + 0x530,lVar2,
                 *(long *)(param_2 + 0x150) +
                 (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                  ((ulong)*(uint *)(lVar2 + 8) & 0xffffff) * 0xc0 + 0x80) * 0x80,1,
                 auStack_b0);
    uVar1 = FUN_0332448c(param_3," normal=");
    uVar1 = FUN_0332470c(uVar1,auStack_a0);
    uVar1 = FUN_0332448c(uVar1," pos0=");
    uVar1 = FUN_0332470c(uVar1,auStack_70);
    uVar1 = FUN_0332448c(uVar1," pos1=");
    uVar1 = FUN_0332470c(uVar1,auStack_60);
    uVar1 = FUN_0332448c(uVar1," pos2=");
    uVar1 = FUN_0332470c(uVar1,auStack_50);
    uVar1 = FUN_0332448c(uVar1," pos3=");
    uVar1 = FUN_0332470c(uVar1,auStack_40);
    uVar1 = FUN_0332448c(uVar1," impulses=");
    FUN_0332470c(uVar1,param_1 + 0x30);
  }
  return;
}


