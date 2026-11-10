/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d3668; name: FUN_005d3668
 */


void FUN_005d3668(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *__s;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005d3668(param_1,*param_2);
  FUN_005d3668(param_1,param_2[1]);
  if ((param_2[7] & 1) == 0) {
    __s = param_2 + 8;
LAB_005d36bc:
    uVar3 = (ulong)param_2[7] >> 1;
    puVar2 = __s + uVar3 * 0x12 + -1;
    lVar4 = uVar3 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + -0x12;
                    /* try { // try from 005d36e0 to 005d36e3 has its CatchHandler @ 005d3754 */
      FUN_002e4a10(uVar1);
    }
    memset(__s,0xab,uVar3 * 0x90);
    if ((*(byte *)(param_2 + 7) & 1) == 0) goto LAB_005d3720;
    uVar1 = param_2[8];
  }
  else {
    __s = (undefined8 *)param_2[8];
    if (__s != (undefined8 *)0x0) goto LAB_005d36bc;
    uVar1 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
LAB_005d3720:
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


