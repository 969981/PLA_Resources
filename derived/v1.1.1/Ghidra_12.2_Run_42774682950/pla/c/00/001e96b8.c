/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e96b8; name: FUN_001e96b8
 */


undefined8 FUN_001e96b8(long *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_2e0 [672];
  
  if (((int)param_1[0x2f] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x3f8);
    uVar4 = FUN_00203c60(param_1,param_2,pcVar1);
    if ((int)uVar4 != 0) {
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 1;
      return uVar4;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) ^ 0xffffffff) & 0x4020) != 0) {
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = *(undefined8 *)(lVar5 + 0x1e8);
  memset(auStack_2e0,0,0x2a0);
  *(undefined1 **)(lVar5 + 0x1e8) = auStack_2e0;
  FUN_001dee08(param_1,0);
  if ((*(uint *)((long)param_1 + 0x3fc) >> 2 & 1) == 0) {
    if (param_2 == 1) {
      lVar5 = param_1[0x1d];
LAB_001e9750:
      uVar3 = (uint)*(ushort *)(param_1 + 0x34);
      goto LAB_001e9794;
    }
    lVar5 = param_1[0x1a];
  }
  else {
    lVar5 = param_1[0x20];
    if (param_2 == 1) goto LAB_001e9750;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) >> 3 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x33);
  }
  else {
    uVar3 = *(uint *)((long)param_1 + 0x19c);
  }
LAB_001e9794:
  uVar2 = FUN_001e97e4(param_1,param_2,lVar5,uVar3);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar4;
  if ((int)uVar2 == 0) {
    FUN_002044d4(param_1[0x8b]);
    param_1[0x8b] = 0;
    return 0;
  }
  return uVar2;
}


