/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea00d4; name: FUN_02ea00d4
 */


void FUN_02ea00d4(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[0xd];
  if (((((lVar2 == 0) ||
        ((((*(int *)(lVar2 + 4) == 0 && (*(int *)(lVar2 + 0xc) == 0)) &&
          (*(int *)(lVar2 + 0x14) == 0)) && (*(int *)(lVar2 + 0x1c) == 0)))) &&
       ((((iVar1 = (**(code **)(*param_1 + 0x88))(param_1), iVar1 != 10 &&
          (*(char *)((long)param_1 + 0xec) == '\0')) &&
         ((*(uint *)((long)param_1 + 0xaa) & 0x780000) == 0)) &&
        ((param_1[0x11] != 0 && ((*(byte *)((long)param_1 + 0xa2) & 0xe) == 0)))))) &&
      ((param_1[0x19] == 0 &&
       (((*(uint *)((long)param_1 + 0xaa) >> 0x12 & 1) == 0 && (param_1[0x12] == 0)))))) &&
     (((ulong *)param_1[7] == (ulong *)0x0 || ((*(ulong *)param_1[7] & 0x380000000020) == 0)))) {
    *(undefined8 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x80) = 0x7000020;
    FUN_02ea01c4(param_1,param_2,param_3);
    return;
  }
  return;
}


