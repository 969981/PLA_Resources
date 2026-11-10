/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3d5c; name: FUN_001e3d5c
 */


int FUN_001e3d5c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_b0 [16];
  uint local_a0;
  undefined8 local_80;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_00205658(param_2,auStack_b0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 0x1a;
  }
  lVar3 = FUN_002044f4(param_2);
  *(long *)(param_1 + 0x20) = lVar3;
  iVar1 = 0x1b;
  if (lVar3 != 0) {
    iVar1 = iVar2;
  }
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  if ((iVar1 == 0) && ((local_a0 & 0xf000) == 0x8000)) {
    *(undefined8 *)(param_1 + 0x78) = local_80;
    *(undefined1 **)(param_1 + 0x30) = &LAB_001e42bc;
  }
  *(code **)(param_1 + 0x28) = FUN_001e4338;
  *(undefined1 **)(param_1 + 0x38) = &LAB_001e43ac;
  *(undefined4 *)(param_1 + 0x18) = 2;
  __s = (char *)FUN_002044f4(param_2);
  if (__s == (char *)0x0) {
    return 0x1b;
  }
  pcVar4 = strrchr(__s,0x2f);
  pcVar5 = strrchr(__s,0x5c);
  if ((pcVar4 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
    if (pcVar4 == (char *)0x0) {
      pcVar4 = __s;
      if (pcVar5 != (char *)0x0) {
        pcVar4 = pcVar5 + 1;
      }
      goto LAB_001e3e8c;
    }
  }
  else if (pcVar4 <= pcVar5) {
    pcVar4 = pcVar5;
  }
  pcVar4 = pcVar4 + 1;
LAB_001e3e8c:
  lVar3 = FUN_002044f4(pcVar4);
  FUN_002044d4(__s);
  if (lVar3 == 0) {
    return 0x1b;
  }
  iVar2 = FUN_001e419c(param_1,lVar3);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_002044d4(lVar3);
  return iVar1;
}


