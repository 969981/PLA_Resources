/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6714; name: FUN_02ef6714
 */


void FUN_02ef6714(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_02f59e30(0,0x20);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0xffffffff00000000;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
    *(ushort *)((long)puVar4 + 0xc) = *(ushort *)((long)puVar4 + 0xc) & 0xf800;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[3];
    puVar4[2] = param_1[2];
    puVar4[3] = uVar3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
  }
  return;
}


