/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012aa0; name: FUN_03012aa0
 */


void FUN_03012aa0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  char *__s;
  undefined *puVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    uVar1 = (int)sVar4 + 1;
    puVar5 = (undefined8 *)
             (**(code **)(*(long *)puVar2 + 0x10))
                       (puVar2,(long)((sVar4 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar5 = puVar2;
    *(uint *)(puVar5 + 1) = uVar1;
    memcpy(puVar5 + 2,__s,(ulong)uVar1);
    uVar3 = param_1[1];
    *param_1 = (ulong)(puVar5 + 2) | 1;
  }
  uVar6 = param_2[1];
  if (uVar3 != uVar6) {
    uVar7 = 0;
    if (uVar6 != 0) {
      FUN_032d645c(uVar6);
      uVar3 = param_1[1];
      uVar7 = param_2[1];
    }
    param_1[1] = uVar7;
    if (uVar3 != 0) {
      FUN_032d647c();
    }
  }
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[2] = uVar3;
  param_1[3] = uVar6;
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  param_1[6] = uVar3;
  param_1[7] = uVar6;
  return;
}


