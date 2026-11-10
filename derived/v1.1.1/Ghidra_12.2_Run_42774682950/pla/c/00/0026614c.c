/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026614c; name: FUN_0026614c
 */


ulong FUN_0026614c(long param_1,long param_2,undefined4 param_3,uint param_4,code *param_5)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long local_38;
  
  if (*(float *)(param_1 + 0x4c) <= 0.0) {
    uVar2 = FUN_0026e514(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_00269b30(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00269a30(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_0026b4c4(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x4c),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_002669ec(param_1 + 0x178,param_2);
    uVar3 = 1;
    goto LAB_002662f4;
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x35);
  if (param_5 != (code *)0x0) {
    local_38 = param_2;
    uVar2 = (*param_5)(&local_38);
    if ((int)uVar2 == 1) {
      return uVar2;
    }
    if (((int)uVar2 == 2) && (*(char *)(param_2 + 0x5fc) == '\0')) {
      *(undefined1 *)(param_2 + 0x5fc) = 1;
    }
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    uVar2 = FUN_0026a058(*(undefined4 *)(param_1 + 0x4c),*(undefined8 *)(param_2 + 0x98),param_2,
                         param_3,*(char *)(param_1 + 9) != '\0',*(char *)(param_1 + 0xe) == '\0',
                         param_4 & 1);
    if ((uVar2 & 1) != 0) {
      if (((cVar1 != '\0') && (*(char *)(*(long *)(param_2 + 0xa0) + 0x752) == '\x02')) &&
         ((0 < *(int *)(param_2 + 0x28) || (*(long *)(*(long *)(param_2 + 0x238) + 0x338) != 0)))) {
        FUN_00284324(*(undefined8 *)(param_1 + 0x20),param_2);
      }
      FUN_002669ec(param_1 + 0x178,param_2);
      goto LAB_002662e4;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    uVar2 = FUN_0026e514(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_00269b30(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00269a30(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_0026b4c4(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x4c),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_002669ec(param_1 + 0x178,param_2);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
LAB_002662e4:
    uVar3 = 1;
  }
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
LAB_002662f4:
  *(uint *)(param_1 + 0x230) =
       *(uint *)(param_1 + 0x230) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  uVar2 = FUN_0026e584(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x3c) =
         *(uint *)(param_1 + 0x3c) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  }
  uVar2 = FUN_0026e610(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x40) =
         *(uint *)(param_1 + 0x40) | 1 << (ulong)(*(uint *)(param_2 + 0x400) & 0x1f);
  }
  return (ulong)(uVar3 ^ 1);
}


