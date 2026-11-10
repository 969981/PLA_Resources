/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00572d28; name: FUN_00572d28
 */


void FUN_00572d28(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *__s;
  ulong uVar6;
  
  puVar3 = PTR_LAB_04373088;
  uVar5 = *(ulong *)(param_3 + 0x18);
  if ((uVar5 & 1) == 0) {
    __s = param_3 + 0x20;
joined_r0x00572d60:
    if (uVar5 >> 1 != 0) {
      uVar6 = uVar5 >> 1;
      pbVar2 = __s + uVar6 * 0x68;
      do {
        uVar6 = uVar6 - 1;
        FUN_003ee5f8(pbVar2 + -0x50);
        if ((pbVar2[-0x68] & 1) != 0) {
          FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar2 + -0x58));
        }
        pbVar2 = pbVar2 + -0x68;
      } while (uVar6 != 0);
    }
    memset(__s,0xab,(uVar5 >> 1) * 0x68);
    if ((param_3[0x18] & 1) == 0) {
      bVar1 = *param_3;
      goto joined_r0x00572e00;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x20);
  }
  else {
    __s = *(byte **)(param_3 + 0x20);
    if (__s != (byte *)0x0) goto joined_r0x00572d60;
    uVar4 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar4);
  bVar1 = *param_3;
joined_r0x00572e00:
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_3 + 0x10));
  return;
}


