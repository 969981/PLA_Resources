/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bad0; name: FUN_0020bad0
 */


int FUN_0020bad0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(int *)(param_1 + 0x930) == 1) goto LAB_0020bb20;
  }
  else if (*(int *)(param_1 + 0x938) < 1) {
LAB_0020bb20:
    if (0x2aaaaaaaaaaaaaaa <
        ((ulong)(param_3 * -0x5555555555555555) >> 1 | param_3 * -0x5555555555555555 << 0x3f)) {
      return -0x1f5;
    }
    iVar1 = FUN_0020cee4(&local_38,&local_88,param_2,param_3,param_1 + 0x890);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      iVar1 = FUN_002123e4(param_1,0,local_38,local_88);
    }
    else {
      FUN_0020c844(auStack_80,param_3,4,0,0);
      local_70 = local_88;
      uStack_68 = local_38;
      iVar1 = FUN_002086f0(param_1,auStack_80,1);
    }
    FUN_0020c748(param_1 + 0x890,local_38);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00205bfc(auStack_98);
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      param_4 = 0;
    }
    lVar2 = FUN_002066d8(param_1,1,0,auStack_98,1,param_4);
    if (lVar2 == 0) {
      return -0x385;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      FUN_00211820(lVar2,2);
      *(undefined4 *)(param_1 + 0x934) = 1;
      *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 2;
      return 0;
    }
    FUN_00211820(lVar2,1);
    *(undefined8 *)(param_1 + 0x938) = 0x100000001;
    return 0;
  }
  return -0x1f9;
}


