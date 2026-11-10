/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e01c38; name: FUN_02e01c38
 */


void FUN_02e01c38(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x75) == *(char *)(param_1 + 0x49)) {
    cVar3 = *(char *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x74) == cVar3) {
      return;
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x48);
  }
  uVar5 = *(uint *)(param_2 + 8);
  if (cVar3 == '\0') {
    uVar1 = uVar5 >> 0xc & 0xffffb;
    if ((uVar5 & 0x7000) == 0x7000) {
      uVar5 = uVar1 << 0xc | uVar5 & 0xf00 | uVar5 - ((uVar5 >> 0xc) - uVar1 >> 2) & 0xff;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar5 >> 0xc & 0xfffffff7;
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar5 = uVar5 & 0xf00 | uVar1 << 0xc | uVar5 - ((uVar5 >> 0xc) - uVar1 >> 3) & 0xff;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  FUN_02e01800(param_1 + 0x80,uVar2,uVar4,uVar5,*(undefined4 *)(param_1 + 0x78),param_1 + 0x24);
  return;
}


