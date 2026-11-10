/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56e44; name: FUN_02e56e44
 */


void FUN_02e56e44(long param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar3 = ((ulong)param_2 + (ulong)param_2 * 8) * 8;
  *(undefined4 *)(*(long *)(param_1 + 8) + lVar3 + 0x10) = param_3;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  lVar7 = *(long *)(param_1 + 8) + lVar3;
  *(undefined2 *)(lVar7 + 0x2c) = *(undefined2 *)(param_4 + 3);
  *(undefined8 *)(lVar7 + 0x24) = uVar6;
  *(undefined8 *)(lVar7 + 0x1c) = uVar5;
  *(undefined8 *)(lVar7 + 0x14) = uVar4;
  uVar4 = *(undefined8 *)((long)param_4 + 0x1c);
  uVar5 = *(undefined8 *)((long)param_4 + 0x24);
  lVar7 = *(long *)(param_1 + 8) + lVar3;
  *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)((long)param_4 + 0x2c);
  *(undefined8 *)(lVar7 + 0x30) = uVar4;
  *(undefined8 *)(lVar7 + 0x38) = uVar5;
  lVar7 = *(long *)(param_1 + 8);
  __s = (char *)param_4[6];
  *(char **)(lVar7 + lVar3 + 0x50) = __s;
  uVar1 = 0;
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    uVar1 = (undefined4)sVar2;
  }
  *(undefined4 *)(lVar7 + (ulong)param_2 * 0x48 + 0x48) = uVar1;
  return;
}


