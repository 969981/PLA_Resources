/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e81e4; name: FUN_032e81e4
 */


undefined4 FUN_032e81e4(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 local_38 [2];
  
  puVar2 = (undefined8 *)FUN_032e21f4(param_2);
  if ((puVar2 != (undefined8 *)0x0) && (*(short *)(puVar2 + 1) != 0)) {
    uVar4 = 0;
    puVar1 = puVar2;
    do {
      puVar5 = puVar1 + 2;
      if (*(char *)puVar1[3] == 't') {
        uVar3 = FUN_032e8158(param_1,*puVar5);
        param_1 = FUN_032e81e4(uVar3,*puVar5);
      }
      else {
        local_38[0] = (undefined4)*puVar5;
        param_1 = FUN_032c8610(param_1,local_38,4);
      }
      uVar4 = uVar4 + 1;
      puVar1 = puVar5;
    } while (uVar4 < *(ushort *)(puVar2 + 1));
  }
  return param_1;
}


