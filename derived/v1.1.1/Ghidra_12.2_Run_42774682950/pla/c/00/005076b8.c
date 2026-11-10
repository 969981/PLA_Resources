/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005076b8; name: FUN_005076b8
 */


void FUN_005076b8(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *__s;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar1 = PTR_LAB_04373088;
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar3 = 0;
    if (__s == (ulong *)0x0) goto LAB_00507770;
  }
  if (uVar2 >> 1 != 0) {
    uVar3 = uVar2 >> 1;
    do {
      uVar5 = uVar3 - 1;
      puVar4 = (undefined8 *)__s[uVar3 - 1];
      __s[uVar3 - 1] = 0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_002e2ea0(puVar1,puVar4);
      }
      uVar3 = uVar5;
    } while (uVar5 != 0);
  }
  memset(__s,0xab,(uVar2 >> 1) << 3);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar3 = param_1[1];
LAB_00507770:
  FUN_002e2ea0(PTR_LAB_04373088,uVar3);
  return;
}


