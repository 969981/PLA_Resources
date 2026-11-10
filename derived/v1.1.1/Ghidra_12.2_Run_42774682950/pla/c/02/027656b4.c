/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027656b4; name: FUN_027656b4
 */


uint FUN_027656b4(byte *param_1,undefined8 *param_2)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  if ((*param_1 & 1) == 0) {
    uVar3 = (ulong)(*param_1 >> 1);
    param_1 = param_1 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    param_1 = *(byte **)(param_1 + 0x10);
  }
  __n = uVar2;
  if (uVar3 <= uVar2) {
    __n = uVar3;
  }
  if (((__n == 0) || (uVar1 = memcmp(param_1,(void *)*param_2,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(uVar2 < uVar3), uVar3 < uVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


