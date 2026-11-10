/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6e4b8; name: FUN_02e6e4b8
 */


void FUN_02e6e4b8(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*DAT_0442d138)(7,0x28);
  *param_3 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar1 = 0;
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined2 *)((long)puVar1 + 0x24) = 0;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  }
  return;
}


