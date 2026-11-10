/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00340464; name: FUN_00340464
 */


void FUN_00340464(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  long local_50;
  byte *pbStack_48;
  long local_40;
  byte *pbStack_38;
  long lStack_28;
  
  if (*(char *)(param_2 + 0x43) == '\0') {
    lVar3 = *(long *)(param_2 + 0x50);
    pbStack_38 = *(byte **)(param_2 + 0x10);
    bVar1 = *pbStack_38;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x60);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_2 + 0x28);
      pbStack_38 = *(byte **)(param_2 + 0x10);
      bVar1 = *pbStack_38;
    }
    else {
      pbStack_38 = *(byte **)(param_2 + 0x10);
      bVar1 = *pbStack_38;
    }
  }
  if ((bVar1 & 1) == 0) {
    pbStack_38 = pbStack_38 + 1;
  }
  else {
    pbStack_38 = *(byte **)(pbStack_38 + 0x10);
  }
  local_40 = lVar3;
  lStack_28 = param_2;
  uVar2 = FUN_0033f990(*(undefined8 *)(param_1 + 0x50),&local_40,&lStack_28);
  if ((uVar2 & 1) == 0) {
    local_50 = FUN_00340580(*(undefined8 *)(param_1 + 0x50),&local_40);
    FUN_0033f990(param_1 + 0x28,&local_40,&local_50);
    pbStack_48 = *(byte **)(param_2 + 0x18);
    bVar1 = *pbStack_48;
  }
  else {
    pbStack_48 = *(byte **)(param_2 + 0x18);
    bVar1 = *pbStack_48;
  }
  if ((bVar1 & 1) == 0) {
    pbStack_48 = pbStack_48 + 1;
  }
  else {
    pbStack_48 = *(byte **)(pbStack_48 + 0x10);
  }
  local_50 = lVar3;
  uVar2 = FUN_0033f990(*(undefined8 *)(param_1 + 0x88),&local_50,&lStack_28);
  if ((uVar2 & 1) == 0) {
    local_58 = FUN_00340580(*(undefined8 *)(param_1 + 0x88),&local_50);
    FUN_0033f990(param_1 + 0x60,&local_50,&local_58);
  }
  return;
}


