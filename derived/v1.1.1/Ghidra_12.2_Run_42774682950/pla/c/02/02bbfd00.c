/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbfd00; name: FUN_02bbfd00
 */


void FUN_02bbfd00(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar5;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x58) ^ (int)*(uint *)(param_1 + 0x58) >> 0x1f;
  if (uVar1 < 0x14) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 0x58);
    switch(uVar1) {
    case 0:
      FUN_02b9580c(*(undefined8 *)(lVar5 + 0x6140),param_1 + 0x60);
      return;
    case 1:
      lVar3 = *(long *)(param_1 + 0x68);
      for (lVar2 = *(long *)(param_1 + 0x60); lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
        FUN_02b9580c(*(undefined8 *)(lVar5 + 0x6140),lVar2);
      }
      return;
    default:
      FUN_02bc0de0();
    }
  }
  puVar4 = (undefined8 *)FUN_02bc0df0();
  uStack_38 = 0x2bbfd94;
  puVar4[-9] = &PTR_LAB_042862d8;
  *puVar4 = &DAT_04286318;
  local_40 = auStack_48 + 0x38;
  FUN_02bbfd00();
  uVar1 = *(uint *)(puVar4 + 2);
  FUN_02bc06b0(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,auStack_48,puVar4 + 3,in_x4,in_x5,0,0);
  return;
}


