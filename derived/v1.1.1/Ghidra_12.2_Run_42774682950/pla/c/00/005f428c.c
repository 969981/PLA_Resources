/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f428c; name: FUN_005f428c
 */


void FUN_005f428c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *__s;
  undefined8 *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_0418f118;
  uVar2 = param_1[3];
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 4;
  }
  else {
    __s = (undefined8 *)param_1[4];
    if (__s == (undefined8 *)0x0) {
      uVar1 = 0;
      goto LAB_005f4324;
    }
  }
  if (uVar2 >> 1 != 0) {
    uVar4 = uVar2 >> 1;
    puVar3 = __s + uVar4;
    do {
      puVar3 = puVar3 + -1;
      uVar4 = uVar4 - 1;
      FUN_0052f160(puVar3);
    } while (uVar4 != 0);
  }
  memset(__s,0xab,(uVar2 >> 1) << 3);
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  uVar1 = param_1[4];
LAB_005f4324:
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
  return;
}


