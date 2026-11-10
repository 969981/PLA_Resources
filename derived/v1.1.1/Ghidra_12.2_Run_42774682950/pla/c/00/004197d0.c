/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004197d0; name: FUN_004197d0
 */


ulong FUN_004197d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    uVar2 = FUN_0041b5e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb8),0,
                         (undefined8 *)(param_1 + 200),0,1);
    if ((int)uVar2 != 0) {
      iVar1 = FUN_00419a30(param_1,param_2,param_3,param_6,param_7,param_4,param_5);
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


