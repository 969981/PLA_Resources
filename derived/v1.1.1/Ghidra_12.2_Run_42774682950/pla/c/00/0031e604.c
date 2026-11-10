/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e604; name: FUN_0031e604
 */


undefined8 FUN_0031e604(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *__src;
  byte *__dest;
  size_t __n;
  byte *local_a0;
  byte *local_98;
  byte *pbStack_90;
  undefined4 local_84;
  undefined8 local_80;
  byte abStack_78 [32];
  long lStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x28))();
  bVar1 = *param_2;
  __src = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    __src = param_2 + 1;
  }
  if ((bVar1 & 1) == 0) {
    __n = (size_t)(bVar1 >> 1);
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    if ((long)__n < 0) {
      FUN_0031f284(__n,"size_t to int conversion");
    }
  }
  local_48 = *(undefined4 *)PTR_DAT_04373a40;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  abStack_78[0] = 0;
  abStack_78[1] = 0;
  abStack_78[2] = 0;
  abStack_78[3] = 0;
  abStack_78[4] = 0;
  abStack_78[5] = 0;
  abStack_78[6] = 0;
  abStack_78[7] = 0;
  local_80 = 0;
  abStack_78[0x10] = 0;
  abStack_78[0x11] = 0;
  abStack_78[0x12] = 0;
  abStack_78[0x13] = 0;
  abStack_78[0x14] = 0;
  abStack_78[0x15] = 0;
  abStack_78[0x16] = 0;
  abStack_78[0x17] = 0;
  abStack_78[8] = 0;
  abStack_78[9] = 0;
  abStack_78[10] = 0;
  abStack_78[0xb] = 0;
  abStack_78[0xc] = 0;
  abStack_78[0xd] = 0;
  abStack_78[0xe] = 0;
  abStack_78[0xf] = 0;
  uStack_44 = 0x80000000;
  lStack_58 = 0;
  abStack_78[0x18] = 0;
  abStack_78[0x19] = 0;
  abStack_78[0x1a] = 0;
  abStack_78[0x1b] = 0;
  abStack_78[0x1c] = 0;
  abStack_78[0x1d] = 0;
  abStack_78[0x1e] = 0;
  abStack_78[0x1f] = 0;
  if ((long)__n < 0x11) {
    __dest = abStack_78;
    memcpy(__dest,__src,__n);
    local_98 = __dest + __n;
    pbStack_90 = (byte *)0x0;
    local_84 = 0;
    if (lStack_58 == 1) {
      lStack_58 = (long)__src - (long)__dest;
    }
  }
  else {
    local_84 = 0x10;
    pbStack_90 = abStack_78;
    local_98 = __src + (__n - 0x10);
    __dest = __src;
  }
  local_a0 = local_98;
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,__dest,&local_a0);
  uVar3 = 0;
  if ((lVar2 != 0) && ((int)local_50 == 0)) {
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_0031e2b4(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


