/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fc3fc; name: FUN_027fc3fc
 */


void FUN_027fc3fc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_58 = 0x757527f9d900520e;
  pcStack_50 = "Global";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  lVar1 = FUN_02b1f8b0(DAT_043ef5b0,&local_58);
  local_38 = lVar1;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  uVar2 = FUN_02b21278(DAT_043ef5b0,&local_38);
  if ((uVar2 & 1) != 0) {
    local_58 = 0x9b50af8dab1112d5;
    pcStack_50 = "DofEnable";
    local_48 = 0x1f;
    local_40 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar4 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar5 = (uVar2 % 0x12) * 0xd8;
    lVar1 = (lVar1 >> 0x20) * 0x1b0;
    uVar6 = 0x3f800000;
    if ((param_1 & 1) == 0) {
      uVar6 = 0;
    }
    puVar3 = (undefined4 *)FUN_00aef474(*(long *)(lVar4 + lVar5) + lVar1 + 0x70,&local_58);
    *puVar3 = uVar6;
    *(undefined1 *)(*(long *)(lVar4 + lVar5) + lVar1 + 0x1a9) = 1;
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


