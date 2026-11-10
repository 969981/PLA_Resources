/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ebb74; name: FUN_001ebb74
 */


undefined8 FUN_001ebb74(long *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_b0;
  undefined1 local_ac;
  long local_a8;
  undefined1 auStack_a0 [128];
  
  FUN_001dee08(param_1,0);
  uVar2 = FUN_001e96b8(param_1,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(char *)((long)param_1 + 0x3fe) < '\0') {
    return 0;
  }
  if (((int)param_1[0x2f] == 2) && ((char)param_1[0x7f] == '\0')) {
    return 0;
  }
  uVar3 = FUN_001ea2d4(param_1);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0xf46) >> 5 & 1) == 0) goto LAB_001ebc84;
  if ((*(byte *)((long)param_1 + 0x3fd) >> 2 & 1) == 0) {
    local_b0 = 0x34504354;
  }
  else {
    local_b0 = 0x36504354;
  }
  local_ac = 0;
  FUN_001e64cc(auStack_a0,0x80,"PROXY %s %s %s %li %li\r\n",&local_b0,lVar4 + 0x1680,lVar4 + 0x1648,
               *(undefined8 *)(lVar4 + 0x16b0),*(undefined8 *)(lVar4 + 0x1678));
  local_a8 = FUN_00204504(1,0x18);
  if (local_a8 == 0) {
    uVar2 = 0x1b;
LAB_001ebc80:
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = FUN_001ecb14(&local_a8,auStack_a0);
    if ((int)uVar2 != 0) goto LAB_001ebc80;
    uVar2 = FUN_001ec864(&local_a8,param_1,*param_1 + 0x1618,0,0);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_001ebc84:
  if ((*(byte *)(param_1[0x85] + 0x80) >> 1 & 1) == 0) {
    *param_2 = 1;
  }
  else {
    uVar2 = FUN_001ebcd0(param_1,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}


