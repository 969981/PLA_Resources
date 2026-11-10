/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed77cc; name: FUN_02ed77cc
 */


undefined8
FUN_02ed77cc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 == (undefined8 *)0x0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000ffe;
    puVar1 = (undefined8 *)(*DAT_0442d138)(2,0x48);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x70);
    }
    else {
      puVar1[7] = 0;
      puVar1[8] = 0;
      *puVar1 = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x70) = puVar1;
    }
    if (puVar1 == (undefined8 *)0x0) {
      return 1;
    }
  }
  uVar2 = FUN_02eb2444(puVar1,param_2,param_3,param_4,param_5);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  uVar3 = FUN_02eb2610(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4,param_5);
  return uVar3;
}


