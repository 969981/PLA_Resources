/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ee08c; name: FUN_029ee08c
 */


undefined8 FUN_029ee08c(long param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char local_34 [4];
  
  *param_2 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar2 = *(byte *)(param_4 + 0x7d);
  uVar6 = 3;
  if (0x17 < bVar2) {
    uVar6 = (uint)(bVar2 < 0x1e) << 2;
  }
  uVar1 = 1;
  if (0x11 < bVar2) {
    uVar1 = uVar6;
  }
  uVar6 = 2;
  if (0xb < bVar2) {
    uVar6 = uVar1;
  }
  uVar1 = 0;
  if (5 < bVar2) {
    uVar1 = uVar6;
  }
  uVar6 = (uint)*(byte *)(lVar5 + (ulong)uVar1 * 0x38 + 0x38);
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar5 + (ulong)uVar1 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d)
          == bVar2) {
        cVar3 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if (cVar3 == '\x06') {
          return 1;
        }
        if (*(short *)(param_4 + 0x74) == 0) {
          return 1;
        }
        if ((*(byte *)(param_4 + 0x1b0) & 7) != 0) {
          return 1;
        }
        uVar6 = *(byte *)(param_4 + 0x390) + 0xff;
        if ((uVar6 >> 8 != 0) && ((uVar6 & 0xff) < 0x1e)) {
          return 1;
        }
        FUN_0298854c(*(undefined8 *)(param_1 + 0x38),local_34,param_2,param_3,param_4);
        if (local_34[0] != '\0') {
          return 1;
        }
        if ((*(byte *)(param_4 + 0x148) & 7) == 0) {
          return 0;
        }
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0xf3,
                     *(undefined1 *)(param_4 + 0x7d),0xffff0000);
        *param_2 = 1;
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  return 1;
}


